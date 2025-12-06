void laiSuatVay() {
    long tien;
    printf("Nhap so tien muon vay: ");
    scanf("%ld", &tien);

    long conLai = tien;

    printf("Ky han | Lai phai tra | Goc phai tra | Tong tra | Con lai\n");

    for (int i = 1; i <= 12; i++) {
        long lai = conLai * 0.05;
        long goc = tien / 12;
        long tong = lai + goc;
        conLai -= goc;

        printf("%2d   | %10ld  | %10ld  | %10ld | %10ld\n", 
            i, lai, goc, tong, conLai);
    }
}