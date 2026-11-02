import random
import time
from datetime import datetime

TEGANGAN = 220               # volt, asumsi tetap
FAKTOR_DAYA = 1.0            # asumsi beban resistif
INTERVAL_BACA = 1            # detik antar pembacaan
INTERVAL_LAPORAN = 15 * 60   # 15 menit dalam detik


def baca_arus():
    """Ganti isi fungsi ini dengan pembacaan sensor asli
    (misalnya SCT-013 + ADS1115). Sekarang masih data simulasi."""
    return random.uniform(0.5, 5.0)  # ampere


def main():
    energi_periode = 0.0   # kWh dalam 15 menit berjalan
    energi_total = 0.0     # kWh sejak program dijalankan
    arus_maks = 0.0
    awal_periode = time.time()
    terakhir = awal_periode

    print("Pemantauan dimulai. Tekan Ctrl+C untuk berhenti.")
    try:
        while True:
            time.sleep(INTERVAL_BACA)
            sekarang = time.time()
            selang = sekarang - terakhir
            terakhir = sekarang

            arus = baca_arus()
            arus_maks = max(arus_maks, arus)
            daya_watt = TEGANGAN * arus * FAKTOR_DAYA

            # watt x detik dibagi 3.600.000 menghasilkan kWh
            energi_periode += daya_watt * selang / 3_600_000

            if sekarang - awal_periode >= INTERVAL_LAPORAN:
                energi_total += energi_periode
                waktu = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
                print(f"[{waktu}] 15 menit: {energi_periode:.4f} kWh | "
                      f"arus maks: {arus_maks:.2f} A | "
                      f"total: {energi_total:.4f} kWh")
                energi_periode = 0.0
                arus_maks = 0.0
                awal_periode = sekarang
    except KeyboardInterrupt:
        print(f"\nBerhenti. Total energi tercatat: {energi_total:.4f} kWh")


if __name__ == "__main__":
    main()