/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 0908092c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SpaceQueryComplete(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool in_NG;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int in_w8;
  float *pfVar7;
  float *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  float in_s6;
  float in_s7;
  float unaff_s8;
  float fVar14;
  float unaff_s10;
  float unaff_s11;
  float fVar15;
  float unaff_s13;
  float fVar16;
  undefined8 uVar17;
  float fStack0000000000000004;
  float fStack000000000000005c;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined8 in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  float in_stack_000002a0;
  
  if (!in_NG) {
    param_1 = unaff_s8;
  }
  if (in_w8 == 0) {
                    /* try { // try from 09080954 to 09180957 has its CatchHandler @ 090809dc */
                    /* try { // try from 09080958 to 0918095b has its CatchHandler @ 090809d4 */
                    /* try { // try from 0908095c to 0918097b has its CatchHandler @ 090801a8 */
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
                    /* try { // try from 0908097c to 0918098b has its CatchHandler @ 090809a4 */
  }
                    /* try { // try from 09080990 to 09180997 has its CatchHandler @ 090809a0 */
                    /* catch() { ... } // from try @ 09080830 with catch @ 09080998 */
                    /* catch() { ... } // from try @ 09080808 with catch @ 0908099c */
                    /* catch() { ... } // from try @ 09080990 with catch @ 090809a0 */
                    /* catch() { ... } // from try @ 0908097c with catch @ 090809a4 */
                    /* catch() { ... } // from try @ 090807fc with catch @ 090809a8 */
                    /* catch() { ... } // from try @ 090807f8 with catch @ 090809ac */
                    /* catch() { ... } // from try @ 090807c4 with catch @ 090809b8 */
                    /* try { // try from 090809c0 to 091809c3 has its CatchHandler @ 09080a18 */
                    /* try { // try from 090809c4 to 091809f7 has its CatchHandler @ 090801a8 */
  fStack0000000000000064 = unaff_s10 + param_1 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c);
  fStack000000000000005c =
       fStack0000000000000078 + param_1 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  fStack0000000000000004 = in_s6;
  fStack0000000000000074 = in_s7;
                    /* catch() { ... } // from try @ 090806b0 with catch @ 090809d0 */
                    /* catch() { ... } // from try @ 09080958 with catch @ 090809d4 */
                    /* catch() { ... } // from try @ 09080688 with catch @ 090809d8 */
                    /* catch() { ... } // from try @ 09080954 with catch @ 090809dc */
                    /* catch() { ... } // from try @ 09080654 with catch @ 090809e0 */
                    /* catch() { ... } // from try @ 090805f0 with catch @ 090809e4 */
  uVar4 = FUN_09081000();
  cVar3 = DAT_0b31f764;
                    /* try { // try from 090809f8 to 091809fb has its CatchHandler @ 09080a04 */
  fVar15 = fStack0000000000000074;
  fStack000000000000006c = unaff_s13;
  if ((uVar4 & 1) != 0) {
    fVar15 = fStack000000000000008c - fStack0000000000000078;
                    /* catch() { ... } // from try @ 090809f8 with catch @ 09080a04 */
    fVar14 = unaff_s13 - fStack000000000000007c;
                    /* try { // try from 09080a08 to 09180a0f has its CatchHandler @ 09080a18 */
                    /* try { // try from 09080a10 to 09180a1b has its CatchHandler @ 090801a8 */
                    /* catch() { ... } // from try @ 090809c0 with catch @ 09080a18
                       catch() { ... } // from try @ 09080a08 with catch @ 09080a18 */
                    /* try { // try from 09080a1c to 09180bf7 has its CatchHandler @ 09080a1c
                       catch() { ... } // from try @ 09080a1c with catch @ 09080a1c
                       catch() { ... } // from try @ 09080c4c with catch @ 09080a1c
                       catch() { ... } // from try @ 09080c98 with catch @ 09080a1c
                       catch() { ... } // from try @ 09080f30 with catch @ 09080a1c
                       catch() { ... } // from try @ 09080fdc with catch @ 09080a1c
                       catch() { ... } // from try @ 090810dc with catch @ 09080a1c
                       catch() { ... } // from try @ 09081110 with catch @ 09080a1c
                       catch() { ... } // from try @ 0908118c with catch @ 09080a1c */
    unaff_x21[1] = in_stack_00000268;
    *unaff_x21 = in_stack_00000260;
    unaff_x21[3] = in_stack_00000278;
    unaff_x21[2] = in_stack_00000270;
    fVar16 = fVar14 * fVar14 + fVar15 * fVar15 + unaff_s8 * unaff_s8;
    unaff_x21[5] = in_stack_00000288;
    unaff_x21[4] = in_stack_00000280;
    if (cVar3 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f764 = '\x01';
    }
    puVar1 = PTR_DAT_0ac0a830;
    fVar8 = ABS(fVar16);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar12 = **(float **)(*unaff_x27 + 0xb8) * 8.0;
    fVar9 = fVar8 * DAT_01df4f4c;
    if (fVar8 * DAT_01df4f4c <= fVar12) {
      fVar9 = fVar12;
    }
    if (ABS(0.0 - fVar16) < fVar9) {
LAB_09080bd0:
      puVar2 = PTR_DAT_0ac78710;
      FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar16 = (float)FUN_0a1f8a64(&stack0x00000200,0);
      fVar15 = (float)uVar6;
      FUN_06fc65c0((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar2);
      fVar9 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar14 = (float)FUN_0a1f8a4c(&stack0x00000200,0);
      FUN_06fc65c0(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar2);
      uVar17 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar17;
      fVar8 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar12 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + in_stack_000002a0 * in_stack_000002a0);
      if (fVar12 <= DAT_01df50c4) {
        if (*(char *)(unaff_x26 + 999) == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          *(undefined1 *)(unaff_x26 + 999) = 1;
        }
        uVar17 = **(undefined8 **)(*unaff_x22 + 0xb8);
        fVar12 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
      }
      else {
        uVar17 = CONCAT44(-in_stack_000002a0 / fVar12,-fVar16 / fVar12);
        fVar12 = -fVar15 / fVar12;
      }
      FUN_06fc65c0((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,
                   *(undefined8 *)puVar2);
      uVar13 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar13;
      lVar5 = FUN_0a1f89a0(&stack0x00000200,0);
      FUN_06fc65c0(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
      fVar10 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
      if (lVar5 == 0) goto LAB_09080ffc;
      fStack00000000000000d0 = (float)uVar6 + fVar15 * fVar8;
      fStack00000000000000cc = fVar9 + in_stack_000002a0 * fVar8;
      fStack00000000000000c8 = fVar14 + fVar16 * fVar8;
      uStack00000000000000d4 = uVar17;
      fStack00000000000000dc = fVar12;
      uVar4 = FUN_0a1ee23c(fVar10 + DAT_01df5128,lVar5,&stack0x000000c8,&stack0x000001d0,0);
      if ((uVar4 & 1) != 0) {
        uVar17 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar6 = *(undefined8 *)PTR_DAT_0ac78720;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar17;
        FUN_06fc6590(&stack0x00000260,&stack0x00000290,uVar6);
      }
    }
    else {
      FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar8 = in_stack_000002a0;
      fVar9 = (float)FUN_0a1f8a64(&stack0x00000200,0);
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar16 = SQRT(fVar16);
      if (fVar16 <= DAT_01df50c4) {
        if (*(char *)(unaff_x26 + 999) == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          *(undefined1 *)(unaff_x26 + 999) = 1;
        }
        pfVar7 = *(float **)(*unaff_x22 + 0xb8);
        fVar15 = *pfVar7;
        fVar12 = pfVar7[1];
        fVar14 = pfVar7[2];
      }
      else {
        fVar15 = fVar15 / fVar16;
        fVar12 = unaff_s8 / fVar16;
        fVar14 = fVar14 / fVar16;
      }
      if (DAT_01df5128 < ABS((float)uVar6 * fVar14 + fVar9 * fVar15 + fVar8 * fVar12))
      goto LAB_09080bd0;
    }
    FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
    FUN_090812c8((long)&stack0x00000160 + 4,fStack0000000000000074,in_s6,fStack0000000000000088);
    fStack0000000000000088 = fStack000000000000016c;
    in_s6 = fStack0000000000000168;
    fVar15 = in_stack_00000160._4_4_;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar14 = unaff_s11 + in_s6;
    fVar8 = fStack000000000000006c + fStack0000000000000088;
    fVar16 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_09081468(fStack000000000000008c + fVar15,fVar14,fVar8,fStack0000000000000084,
                         fVar16 - fStack0000000000000084);
    if ((uVar4 & 1) != 0) {
      uVar11 = FUN_0a1f8a4c(&stack0x00000230,0);
      if (*(char *)(unaff_x23 + 0x3e4) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
      }
      lVar5 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = fStack0000000000000064 + in_s6;
      uVar4 = FUN_090818ac(uVar11,fVar14,fVar8,*(undefined4 *)(lVar5 + 0x18),
                           *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar4 & 1) != 0) {
        FUN_0a1f8a4c(&stack0x00000230,0);
        fVar16 = *(float *)(unaff_x20 + 0x34);
        if (fVar14 - (fStack0000000000000080 - fStack0000000000000084) <= fVar16) {
          FUN_0a1f8a64(&stack0x00000230,0);
          uVar4 = FUN_0907f758();
          if ((uVar4 & 1) != 0) {
            if (in_s6 <= param_1 - in_stack_000001c8._4_4_) {
              in_s6 = param_1 - in_stack_000001c8._4_4_;
            }
            FUN_09081eac(0);
            fStack0000000000000004 = fVar16 * in_s6;
            uVar4 = FUN_09081000(fStack0000000000000078,fStack0000000000000080,
                                 fStack000000000000007c,fStack000000000000008c,unaff_s11,
                                 fStack000000000000006c,fStack0000000000000084);
            if ((uVar4 & 1) == 0) {
              *unaff_x19 = fVar15;
              unaff_x19[1] = in_s6;
              unaff_x19[2] = fStack0000000000000088;
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
LAB_09080ffc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


