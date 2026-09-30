/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$RegisterMember
ENTRY_POINT: 063626bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__RegisterMember(long param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s5;
  undefined8 uVar11;
  float in_s7;
  float unaff_s8;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 unaff_d10;
  undefined8 uVar15;
  float unaff_s11;
  float unaff_s12;
  undefined8 unaff_d13;
  float unaff_s14;
  float fVar16;
  undefined8 unaff_d15;
  float fVar17;
  undefined8 in_d16;
  float in_s17;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float in_stack_00000020;
  undefined8 in_stack_00000038;
  float in_stack_00000040;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000c8;
  
  fStack0000000000000004 = in_s17;
  fStack0000000000000008 = in_s5;
  fStack000000000000000c = in_s7;
  FUN_0335b6c8(param_1 + 0x8b0,1);
  fVar9 = fStack0000000000000008;
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xcb) = 1;
  fVar16 = (float)unaff_d10 - (float)unaff_d15;
  fVar17 = (float)((ulong)unaff_d10 >> 0x20) - (float)((ulong)unaff_d15 >> 0x20);
  fVar14 = unaff_s14 - unaff_s11;
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar7 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17) / unaff_x19[1];
  if (in_stack_00000018 * in_stack_00000058._4_4_ <= fVar7) {
    fVar7 = (fVar7 - in_stack_00000018 * in_stack_00000058._4_4_) / DAT_012edda4;
    if (fVar7 <= DAT_012edbf8) {
      fVar7 = DAT_012edbf8;
    }
    fVar7 = unaff_s8 - fVar7 * *unaff_x19;
  }
  else {
                    /* try { // try from 06362764 to 0646276b has its CatchHandler @ 063627a8 */
    fVar7 = unaff_s8 + *unaff_x19 * DAT_012edc00;
  }
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if ((uint)ABS(fVar7) < 0x7f800001) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar7)) {
      bVar4 = fVar7 < 1.0;
      bVar5 = fVar7 == 1.0;
      bVar6 = false;
    }
  }
  fVar8 = 1.0;
  if (bVar5 || bVar4 != bVar6) {
    fVar8 = fVar7;
  }
  bVar4 = true;
  if (((uint)ABS(fVar8) < 0x7f800001) && (bVar4 = false, !NAN(fVar8))) {
    bVar4 = fVar8 < 0.0;
  }
  fVar7 = 0.0;
  if (!bVar4) {
    fVar7 = fVar8;
  }
  fVar12 = (float)in_stack_000000c8 - fVar16 * fVar7;
  fVar13 = (float)((ulong)in_stack_000000c8 >> 0x20) - fVar17 * fVar7;
  in_stack_000000c8 = CONCAT44(fVar13,fVar12);
  fStack0000000000000010 = fStack0000000000000010 - fVar14 * fVar7;
  *(float *)(*(long *)(unaff_x19 + 0x40) + unaff_x20 * 4) = fVar7;
  fVar8 = unaff_x19[1];
  fVar10 = *(float *)(unaff_x24 + 0xc5c);
  fVar16 = ((fVar12 - ((float)unaff_d13 - fVar16 * fVar7)) / fVar8) * in_stack_00000020;
  fVar17 = ((fVar13 - ((float)((ulong)unaff_d13 >> 0x20) - fVar17 * fVar7)) / fVar8) *
           in_stack_00000020;
  uVar11 = CONCAT44(fVar17,fVar16);
  in_stack_00000020 =
       in_stack_00000020 * ((fStack0000000000000010 - (unaff_s12 - fVar14 * fVar7)) / fVar8);
                    /* catch() { ... } // from try @ 063627b8 with catch @ 06362878 */
                    /* try { // try from 06362880 to 06462887 has its CatchHandler @ 06362888 */
  if (((fVar10 < fVar9) && (fVar10 < fStack0000000000000004)) &&
     (fVar14 = in_stack_00000020 * in_stack_00000020 + fVar16 * fVar16 + fVar17 * fVar17,
     fVar10 <= fVar14)) {
    if (*(char *)(unaff_x21 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x21 + 0xcb) = 1;
    }
    fVar7 = fStack000000000000000c;
    if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
      fStack0000000000000008 = fVar9;
      FUN_033b9870();
      fVar9 = fStack0000000000000008;
    }
    fVar8 = fStack0000000000000014 * fVar9 * 1.5;
    fVar9 = 1.0 / SQRT(fVar14);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((uint)ABS(fVar8) < 0x7f800001) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar8)) {
        bVar4 = fVar8 < 1.0;
        bVar5 = fVar8 == 1.0;
        bVar6 = false;
      }
    }
    fVar14 = 1.0;
    if (bVar5 || bVar4 != bVar6) {
      fVar14 = fVar8;
    }
    fVar9 = (fVar7 * in_stack_00000020 * fVar9 +
            (float)in_d16 * fVar16 * fVar9 + (float)((ulong)in_d16 >> 0x20) * fVar17 * fVar9) * 0.5
            + 0.5;
    bVar4 = true;
    if (((uint)ABS(fVar14) < 0x7f800001) && (bVar4 = false, !NAN(fVar14))) {
      bVar4 = fVar14 < 0.0;
    }
    fVar7 = 0.0;
    if (!bVar4) {
      fVar7 = fVar14;
    }
    fVar7 = fVar7 * (1.0 - fVar9 * fVar9);
    uVar11 = CONCAT44(fVar17 - fVar17 * fVar7,fVar16 - fVar16 * fVar7);
    in_stack_00000020 = in_stack_00000020 - in_stack_00000020 * fVar7;
  }
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 8) + unaff_x23 * 0x10);
  in_stack_00000078 = puVar2[1];
  in_stack_00000070 = *puVar2;
  fVar9 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x14) + unaff_x20 * 4),
                              &stack0x00000070);
  if (*(char *)(unaff_x21 + 0xcb) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xcb) = 1;
  }
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar16 = (float)uVar11;
  fVar17 = (float)((ulong)uVar11 >> 0x20);
  fVar14 = SQRT(in_stack_00000020 * in_stack_00000020 + fVar16 * fVar16 + fVar17 * fVar17);
  in_stack_00000058._4_4_ = in_stack_00000058._4_4_ * fVar9;
  if ((fVar10 < fVar14) && (in_stack_00000058._4_4_ < fVar14)) {
    fVar14 = in_stack_00000058._4_4_ / fVar14;
    uVar11 = CONCAT44(fVar17 * fVar14,fVar16 * fVar14);
    in_stack_00000020 = in_stack_00000020 * fVar14;
  }
  fVar9 = unaff_x19[1];
  fVar14 = (float)in_stack_000000c8;
  uVar3 = (ulong)in_stack_000000c8 >> 0x20;
  if (*(char *)(unaff_x21 + 0xcb) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xcb) = 1;
  }
  fVar17 = 1.0 / SQRT(fStack0000000000000068 * fStack0000000000000068 +
                      fStack000000000000006c * fStack000000000000006c +
                      fStack0000000000000060 * fStack0000000000000060 +
                      fStack0000000000000064 * fStack0000000000000064);
  fVar14 = (fVar14 - (float)in_stack_00000038) / fVar9;
  fVar16 = ((float)uVar3 - (float)((ulong)in_stack_00000038 >> 0x20)) / fVar9;
  uVar15 = CONCAT44(fVar16,fVar14);
  fVar9 = (fStack0000000000000010 - in_stack_00000040) / fVar9;
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar7 = SQRT(fVar9 * fVar9 + fVar14 * fVar14 + fVar16 * fVar16);
  if ((fVar10 < fVar7) && (in_stack_00000058._4_4_ < fVar7)) {
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ / fVar7;
    uVar15 = CONCAT44(fVar16 * in_stack_00000058._4_4_,fVar14 * in_stack_00000058._4_4_);
    fVar9 = fVar9 * in_stack_00000058._4_4_;
  }
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x20 * 0xc);
  *puVar2 = uVar15;
  *(float *)(puVar2 + 1) = fVar9;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x24) + unaff_x20 * 0xc);
  *puVar2 = uVar11;
  *(float *)(puVar2 + 1) = in_stack_00000020;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x2c) + unaff_x20 * 0xc);
  *puVar2 = in_stack_000000c8;
  *(float *)(puVar2 + 1) = fStack0000000000000010;
  pfVar1 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x20 * 0x10);
  *pfVar1 = fStack0000000000000060 * fVar17;
  pfVar1[1] = fStack0000000000000064 * fVar17;
  pfVar1[2] = fStack000000000000006c * fVar17;
  pfVar1[3] = fStack0000000000000068 * fVar17;
  return;
}


