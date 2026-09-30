/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 06370c1c
PROGRAM: Waifu-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long unaff_x19;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float unaff_s9;
  float fVar21;
  float unaff_s10;
  float unaff_s11;
  float fVar22;
  float fVar23;
  float unaff_s13;
  float unaff_s14;
  float fVar24;
  float unaff_s15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint in_stack_000000b0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float in_stack_000000d0;
  float fStack00000000000000d4;
  float in_stack_000000d8;
  float fStack00000000000000dc;
  float in_stack_000000e0;
  float fStack00000000000000e4;
  float in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000128;
  float in_stack_00000130;
  
                    /* try { // try from 06370c20 to 06470c27 has its CatchHandler @ 06370c44 */
  FUN_0335b6c8(&DAT_083ce8b0,1);
                    /* try { // try from 06370c30 to 06470c37 has its CatchHandler @ 06370c40 */
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x25 + 0xcb) = 1;
                    /* try { // try from 06370c38 to 06470c53 has its CatchHandler @ 06370b78 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06370c30 with catch @ 06370c40
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06370c20 with catch @ 06370c44
                        */
  fStack000000000000000c = unaff_s14;
  if (*(int *)(*(long *)(unaff_x24 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
    bVar3 = *(char *)(unaff_x25 + 0xcb) == '\0';
  }
  else {
    bVar3 = false;
  }
  fVar16 = fStack00000000000000c8;
  if (bVar3) {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x25 + 0xcb) = 1;
  }
  if (*(int *)(*(long *)(unaff_x24 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  in_stack_000000d0 =
       SQRT(unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) /
       SQRT(fStack00000000000000cc * fStack00000000000000cc +
            unaff_s11 * unaff_s11 + fVar16 * fVar16);
  fStack00000000000000d4 = 1.0;
  if (unaff_s9 <= 0.0) {
    fStack00000000000000d4 = 0.0;
  }
  fVar16 = 1.0;
  if (0.0 <= unaff_s9) {
    fVar16 = 0.0;
  }
  uStack00000000000000ec = 0x3f800000;
  fStack00000000000000d4 = fStack00000000000000d4 - fVar16;
  in_stack_000000d8 = 1.0;
  if (unaff_s10 <= 0.0) {
    in_stack_000000d8 = 0.0;
  }
  fVar16 = 1.0;
  if (0.0 <= unaff_s10) {
    fVar16 = 0.0;
  }
  in_stack_000000d8 = in_stack_000000d8 - fVar16;
  fStack00000000000000dc = 1.0;
  if (unaff_s8 <= 0.0) {
    fStack00000000000000dc = 0.0;
  }
  fVar16 = 1.0;
  if (0.0 <= unaff_s8) {
    fVar16 = 0.0;
  }
  fStack00000000000000dc = fStack00000000000000dc - fVar16;
  in_stack_000000e0 = -fStack00000000000000d4;
  fStack00000000000000e4 = -in_stack_000000d8;
  in_stack_000000e8 = -fStack00000000000000dc;
  if ((0.0 <= unaff_s9 && 0.0 <= unaff_s10) && 0.0 <= unaff_s8) {
    in_stack_000000e0 = 1.0;
    fStack00000000000000e4 = 1.0;
    in_stack_000000e8 = 1.0;
  }
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x22 * 0x9c);
  uVar14 = puVar6[1];
  uVar13 = *puVar6;
  uVar11 = puVar6[3];
  uVar9 = puVar6[2];
  fStack0000000000000050 = *(float *)(puVar6 + 0xc);
  fStack0000000000000054 = *(float *)((long)puVar6 + 100);
  fVar16 = *(float *)(puVar6 + 4);
  fVar17 = *(float *)((long)puVar6 + 0x24);
  fStack0000000000000030 = *(float *)((long)puVar6 + 0x34);
  fVar21 = *(float *)(puVar6 + 7);
  fStack0000000000000058 = *(float *)(puVar6 + 0xd);
  fStack000000000000005c = *(float *)((long)puVar6 + 0x6c);
  fStack0000000000000038 = *(float *)((long)puVar6 + 0x3c);
  iVar1 = *(int *)((long)puVar6 + 0x84);
  iVar2 = *(int *)(puVar6 + 0x12);
  fStack0000000000000024 = *(float *)(puVar6 + 0x11);
  fStack000000000000002c = *(float *)((long)puVar6 + 0x8c);
  fStack000000000000001c = *(float *)((long)puVar6 + 0x94);
  fVar22 = *(float *)(puVar6 + 0x13);
  if (*(char *)(unaff_x25 + 0xcb) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x25 + 0xcb) = 1;
  }
  fVar8 = fStack0000000000000048 - fStack0000000000000030;
  fVar24 = fStack000000000000000c - fVar21;
  fVar20 = unaff_s13 - fStack0000000000000038;
  fStack0000000000000034 = fVar21;
  if (*(int *)(*(long *)(unaff_x24 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar21 = fStack0000000000000044 * fStack000000000000005c +
           fStack0000000000000040 * fStack0000000000000058 +
           fStack000000000000004c * fStack0000000000000050 +
           fStack000000000000003c * fStack0000000000000054;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if ((uint)ABS(fVar21) < 0x7f800001) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar21)) {
      bVar3 = fVar21 < 1.0;
      bVar4 = fVar21 == 1.0;
      bVar5 = false;
    }
  }
  fVar23 = 1.0;
  if (bVar4 || bVar3 != bVar5) {
    fVar23 = fVar21;
  }
  fStack0000000000000014 = fVar24;
  if (DAT_086de4d6 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086de4d6 = '\x01';
  }
  if (*(int *)(*(long *)(unaff_x24 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  bVar3 = true;
  if (((uint)ABS(fVar23) < 0x7f800001) && (bVar3 = false, !NAN(fVar23))) {
    bVar3 = fVar23 < -1.0;
  }
  dVar10 = -1.0;
  if (!bVar3) {
    dVar10 = (double)fVar23;
  }
  fVar23 = SQRT(fVar20 * fVar20 + fVar8 * fVar8 + fVar24 * fVar24);
  dVar10 = acos(dVar10);
  fVar24 = (float)dVar10 + (float)dVar10;
  fVar21 = DAT_012eda34 - fVar24;
  if (fVar24 <= DAT_012ed918) {
    fVar21 = fVar24;
  }
  fVar21 = fVar21 * DAT_012edea0;
  if ((iVar1 == 1) &&
     ((fStack000000000000002c <= fVar21 || (fStack0000000000000024 * in_stack_000000d0 <= fVar23))))
  {
    if (iVar2 == 1) {
      in_stack_000000b0 = in_stack_000000b0 | 0x80000;
    }
    else if (iVar2 == 0) {
      in_stack_000000b0 = in_stack_000000b0 | 0x30000;
    }
  }
  fVar28 = 0.0;
  fVar24 = fVar8;
  fVar12 = fVar20;
  fVar15 = fStack0000000000000014;
  if ((in_stack_000000b0 >> 0x13 & 1) == 0) {
    fVar28 = 0.0;
    if (unaff_s15 <= DAT_012edc5c) {
      fVar24 = 0.0;
      fVar12 = 0.0;
      fVar15 = 0.0;
    }
    else {
      fVar24 = 0.0;
      fVar12 = 0.0;
      fVar15 = 0.0;
      if (DAT_012edc5c < fVar23) {
        fVar28 = (fVar23 / unaff_s15 - fVar16 * fVar22) / (fVar23 / unaff_s15);
        fVar24 = fVar8;
        fVar12 = fVar20;
        fVar15 = fStack0000000000000014;
      }
    }
  }
  if ((unaff_s15 <= DAT_012edc5c) || (fVar21 <= DAT_012edc5c)) {
    fVar8 = 0.0;
    pfVar7 = *(float **)(DAT_083d4540 + 0xb8);
    fVar18 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar25 = pfVar7[2];
    fVar20 = pfVar7[3];
  }
  else {
    fVar20 = 1.0 / (fStack000000000000005c * fStack000000000000005c +
                   fStack0000000000000058 * fStack0000000000000058 +
                   fStack0000000000000050 * fStack0000000000000050 +
                   fStack0000000000000054 * fStack0000000000000054);
    fVar8 = fVar21 / unaff_s15 - fVar17 * (fVar22 * 0.5 + 0.5);
    fVar23 = fStack000000000000005c * fVar20;
    fVar26 = fVar20 * -fStack0000000000000050;
    fVar27 = fVar20 * -fStack0000000000000054;
    fVar20 = fVar20 * -fStack0000000000000058;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar18 = (fStack0000000000000044 * fVar26 +
             fStack000000000000004c * fVar23 + fStack000000000000003c * fVar20) -
             fStack0000000000000040 * fVar27;
    fVar19 = (fStack0000000000000044 * fVar27 +
             fStack000000000000003c * fVar23 + fStack0000000000000040 * fVar26) -
             fStack000000000000004c * fVar20;
    fVar25 = (fStack0000000000000044 * fVar20 +
             fStack0000000000000040 * fVar23 + fStack000000000000004c * fVar27) -
             fStack000000000000003c * fVar26;
    fVar20 = (fStack0000000000000044 * fVar23 -
             (fStack000000000000004c * fVar26 + fStack000000000000003c * fVar27)) -
             fStack0000000000000040 * fVar20;
    fVar8 = fVar8 / (fVar21 / unaff_s15);
  }
  if (in_stack_00000128._4_4_ < 1.0) {
    fVar21 = unaff_s15 / in_stack_00000130;
    if (in_stack_00000130 <= DAT_012edc5c) {
      fVar21 = 1.0;
    }
    in_stack_00000128._4_4_ = in_stack_00000128._4_4_ + fVar21;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((uint)ABS(in_stack_00000128._4_4_) < 0x7f800001) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(in_stack_00000128._4_4_)) {
        bVar3 = in_stack_00000128._4_4_ < 1.0;
        bVar4 = in_stack_00000128._4_4_ == 1.0;
        bVar5 = false;
      }
    }
    fVar21 = 1.0;
    if (bVar4 || bVar3 != bVar5) {
      fVar21 = in_stack_00000128._4_4_;
    }
    bVar3 = true;
    if (((uint)ABS(fVar21) < 0x7f800001) && (bVar3 = false, !NAN(fVar21))) {
      bVar3 = fVar21 < 0.0;
    }
    in_stack_00000128._4_4_ = 0.0;
    if (!bVar3) {
      in_stack_00000128._4_4_ = fVar21;
    }
  }
  if ((in_stack_000000b0 & 0x30000) != 0) {
    in_stack_00000100 = *(undefined4 *)(unaff_x19 + 8);
    pfVar7 = *(float **)(DAT_083d4540 + 0xb8);
    fVar8 = 0.0;
    in_stack_00000128._4_4_ = 0.0;
    if (fStack000000000000001c <= DAT_012edc5c) {
      in_stack_00000128._4_4_ = 1.0;
    }
    fVar28 = 0.0;
    fVar18 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar25 = pfVar7[2];
    fVar20 = pfVar7[3];
    fVar12 = 0.0;
    fVar15 = 0.0;
    fVar24 = 0.0;
    fStack0000000000000058 = fStack0000000000000040;
    fStack000000000000005c = fStack0000000000000044;
    fStack0000000000000050 = fStack000000000000004c;
    fStack0000000000000054 = fStack000000000000003c;
    in_stack_00000130 = fStack000000000000001c;
    fStack0000000000000034 = fStack000000000000000c;
    fStack0000000000000030 = fStack0000000000000048;
    fStack0000000000000038 = unaff_s13;
  }
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x22 * 0x9c);
  *(float *)((long)puVar6 + 0x44) = fVar15;
  *(float *)(puVar6 + 9) = fVar12;
  puVar6[1] = uVar14;
  *puVar6 = uVar13;
  puVar6[3] = uVar11;
  puVar6[2] = uVar9;
  *(float *)((long)puVar6 + 0x5c) = fStack0000000000000044;
  *(float *)(puVar6 + 0xc) = fStack0000000000000050;
  *(float *)(puVar6 + 4) = fVar16;
  *(float *)((long)puVar6 + 100) = fStack0000000000000054;
  *(float *)((long)puVar6 + 0x24) = fVar17;
  *(float *)(puVar6 + 5) = fStack0000000000000048;
  *(float *)((long)puVar6 + 0x2c) = fStack000000000000000c;
  *(float *)(puVar6 + 6) = unaff_s13;
  *(float *)(puVar6 + 0xd) = fStack0000000000000058;
  *(float *)((long)puVar6 + 0x34) = fStack0000000000000030;
  *(float *)((long)puVar6 + 0x4c) = fVar28;
  *(float *)(puVar6 + 10) = fStack000000000000004c;
  *(float *)((long)puVar6 + 0x6c) = fStack000000000000005c;
  *(float *)(puVar6 + 0xe) = fVar18;
  *(float *)(puVar6 + 7) = fStack0000000000000034;
  *(float *)((long)puVar6 + 0x54) = fStack000000000000003c;
  *(float *)(puVar6 + 0xb) = fStack0000000000000040;
  *(float *)(puVar6 + 0x11) = fStack0000000000000024;
  *(float *)((long)puVar6 + 0x3c) = fStack0000000000000038;
  *(float *)(puVar6 + 8) = fVar24;
  *(float *)((long)puVar6 + 0x74) = fVar19;
  *(float *)(puVar6 + 0xf) = fVar25;
  *(float *)((long)puVar6 + 0x7c) = fVar20;
  *(float *)(puVar6 + 0x10) = fVar8;
  *(int *)((long)puVar6 + 0x84) = iVar1;
  *(float *)((long)puVar6 + 0x8c) = fStack000000000000002c;
  *(int *)(puVar6 + 0x12) = iVar2;
  *(float *)((long)puVar6 + 0x94) = fStack000000000000001c;
  *(float *)(puVar6 + 0x13) = fVar22;
  FUN_063712d4();
  in_stack_000000b0 = in_stack_000000b0 & 0xfffeffff;
  FUN_063713a0(fStack0000000000000048,fStack000000000000000c,unaff_s13);
  memmove((void *)(*(long *)(unaff_x19 + 0x20) + unaff_x22 * 0xfc),&stack0x00000080,0xfc);
  return;
}


