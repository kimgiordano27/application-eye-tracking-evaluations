/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedData$$ExtractTypesFromInspectedMembers
ENTRY_POINT: 063512c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedData__ExtractTypesFromInspectedMembers
               (ulong param_1,float param_2)

{
  uint uVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong in_x9;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  int iVar7;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int iVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float fVar21;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack0000000000000004;
  float fStack000000000000000c;
  ulong uStack0000000000000010;
  short sStack0000000000000020;
  short sStack0000000000000022;
  undefined8 in_stack_00000040;
  int iStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  
  fStack000000000000000c = param_2;
  uStack0000000000000010 = param_1;
  memcpy(&stack0x00000040,(void *)(in_x10 + (in_x9 & 0xffff) * 0x60),0x60);
  if (in_stack_00000040._4_4_ != 0) {
                    /* try { // try from 063512f4 to 064512ff has its CatchHandler @ 06351680 */
    iVar10 = unaff_w20 - unaff_w24;
    fVar20 = *(float *)(*(long *)(unaff_x19 + 0x98) + unaff_x21 * 4);
    fVar11 = (float)FUN_06358bac(fVar20,&stack0x00000050,0);
    fVar12 = (float)FUN_06358bac(fVar20,&stack0x00000060,0);
    fVar12 = unaff_s15 * fVar12;
    fVar11 = unaff_s15 * fVar11;
    fVar21 = (float)(uStack0000000000000010 >> 0x20);
    fStack0000000000000004 = fVar21;
    if (iStack0000000000000048 == 1) {
      iVar7 = *(int *)(*(long *)(unaff_x19 + 0x28) + (long)(in_stack_00000080._4_4_ + iVar10) * 8 +
                      4);
      if (0 < iVar7) {
                    /* try { // try from 06351534 to 06451537 has its CatchHandler @ 063516fc */
                    /* try { // try from 06351538 to 06451627 has its CatchHandler @ 06350f8c */
        lVar9 = *(long *)(unaff_x19 + 0x18);
        iVar8 = 0;
        fVar21 = 0.0;
        fVar12 = 0.0;
        iVar10 = in_stack_00000070._4_4_ +
                 *(int *)(*(long *)(unaff_x19 + 0x28) + (long)(in_stack_00000080._4_4_ + iVar10) * 8
                         );
        fVar20 = 0.0;
        do {
          uVar18 = *(undefined8 *)(lVar9 + (long)iVar10 * 0x20);
          sStack0000000000000020 = (short)uVar18;
          if ((-1 < sStack0000000000000020) &&
             (sStack0000000000000022 = (short)((ulong)uVar18 >> 0x10),
             (*(uint *)(unaff_x22 +
                       (long)*(int *)(*(long *)(unaff_x19 + 200) +
                                     (long)(unaff_w23 + sStack0000000000000022) * 4) * 4) & 1) != 0)
             ) {
            fVar14 = unaff_s13;
            fVar15 = fStack000000000000000c;
            fVar16 = (float)FUN_06351850();
            fVar21 = fVar21 + fVar16;
            fVar12 = fVar12 + fVar15;
            fVar20 = fVar20 + fVar14;
            iVar8 = iVar8 + 1;
          }
          fVar14 = fStack0000000000000004;
          iVar7 = iVar7 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar7 != 0);
        if (0 < iVar8) {
          fVar15 = (float)iVar8;
          fVar12 = fVar12 / fVar15;
          fVar20 = fVar20 / fVar15;
          fVar11 = (float)FUN_063519d8(fVar21 / fVar15,fVar12,fVar20,fVar11,uStack0000000000000010,
                                       fStack0000000000000004);
          uStack0000000000000010 =
               (ulong)(uint)((float)uStack0000000000000010 +
                            (fVar11 - (float)uStack0000000000000010));
          unaff_s8 = unaff_s8 + (fVar20 - unaff_s8);
          fStack0000000000000004 = fVar14 + (fVar12 - fVar14);
        }
      }
    }
    else if (iStack0000000000000048 == 0) {
                    /* try { // try from 0635134c to 06451357 has its CatchHandler @ 063516ac */
      if (0 < *(int *)(*(long *)(unaff_x19 + 0x28) + (long)(in_stack_00000080._4_4_ + iVar10) * 8 +
                      4)) {
                    /* try { // try from 06351368 to 06451373 has its CatchHandler @ 063516a4 */
        uVar1 = in_stack_00000070._4_4_ +
                *(int *)(*(long *)(unaff_x19 + 0x28) + (long)(in_stack_00000080._4_4_ + iVar10) * 8)
        ;
        if (-1 < *(short *)(*(long *)(unaff_x19 + 0x18) +
                           (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5))) {
                    /* try { // try from 06351388 to 06451393 has its CatchHandler @ 0635169c */
          lVar9 = *(long *)(unaff_x19 + 0x18) + (long)(int)uVar1 * 0x20;
                    /* try { // try from 063513a4 to 064513af has its CatchHandler @ 063516d8 */
          pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa8) + unaff_x21 * 0xc);
          pfVar2 = (float *)(*(long *)(unaff_x19 + 0xb8) + unaff_x21 * 0x10);
          fVar16 = *pfVar2;
          fVar25 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar19 = pfVar2[3];
          fVar15 = fStack000000000000000c * *(float *)(lVar9 + 0x10);
          fVar14 = unaff_s13 * *(float *)(lVar9 + 0x14);
          fVar20 = unaff_s14 * *(float *)(lVar9 + 0x18);
                    /* try { // try from 063513c4 to 06451413 has its CatchHandler @ 063516cc */
          fVar22 = fVar16 * fVar14 - fVar25 * fVar15;
          fVar23 = fVar25 * fVar20 - fVar17 * fVar14;
          fVar24 = fVar17 * fVar15 - fVar16 * fVar20;
          fVar23 = fVar23 + fVar23;
          fVar24 = fVar24 + fVar24;
          fVar22 = fVar22 + fVar22;
          fVar12 = fVar12 - fVar11;
          fVar15 = *pfVar4 + fVar12 * (fVar15 + fVar19 * fVar23 +
                                      (fVar25 * fVar22 - fVar17 * fVar24));
          fVar14 = pfVar4[1] +
                   fVar12 * (fVar14 + fVar19 * fVar24 + (fVar17 * fVar23 - fVar16 * fVar22));
          fVar12 = pfVar4[2] +
                   fVar12 * (fVar20 + fVar19 * fVar22 + (fVar16 * fVar24 - fVar25 * fVar23));
          if (DAT_086d90cb == '\0') {
                    /* try { // try from 0635147c to 06451483 has its CatchHandler @ 063516ec */
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d90cb = '\x01';
          }
          fVar21 = fVar21 - fVar14;
          fVar20 = unaff_s8 - fVar12;
          fVar16 = (float)uStack0000000000000010 - fVar15;
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar17 = SQRT(fVar20 * fVar20 + fVar16 * fVar16 + fVar21 * fVar21);
          if (fVar11 < fVar17) {
            fVar11 = fVar11 / fVar17;
            fStack0000000000000004 = fVar14 + fVar21 * fVar11;
            unaff_s8 = fVar12 + fVar20 * fVar11;
            uStack0000000000000010 = (ulong)(uint)(fVar15 + fVar16 * fVar11);
                    /* try { // try from 06351504 to 0645150b has its CatchHandler @ 063516f8 */
          }
        }
      }
    }
    else if ((iStack0000000000000048 == 2) && (fVar20 <= fStack000000000000004c)) {
      puVar5 = (undefined8 *)
               (*(long *)(unaff_x19 + 0x38) + (long)(in_stack_00000090._4_4_ + iVar10) * 0xc);
      uVar18 = *puVar5;
      fVar17 = *(float *)(puVar5 + 1);
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0xb8) + unaff_x21 * 0x10);
      fVar20 = *pfVar2;
      fVar24 = pfVar2[3];
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x21 * 0xc);
      fVar16 = (float)((ulong)uVar18 >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
      fVar21 = (float)*(undefined8 *)(pfVar2 + 1);
      fVar15 = (float)uVar18;
      fVar23 = fVar20 * fVar16 - fVar21 * fVar15;
      fVar19 = fVar17 * fVar21 - fVar14 * fVar16;
      fVar22 = fVar14 * fVar15 - fVar20 * fVar17;
      fVar23 = fVar23 + fVar23;
      fVar19 = fVar19 + fVar19;
      fVar22 = fVar22 + fVar22;
      uVar18 = *puVar5;
      bVar3 = true;
      if (((uint)ABS(fVar11) < 0x7f800001) && (bVar3 = false, !NAN(fVar12) && !NAN(fVar11))) {
        bVar3 = fVar12 < fVar11;
      }
      if (!bVar3) {
        fVar12 = fVar11;
      }
      fVar12 = fVar11 - fVar12;
      fVar15 = (float)uVar18 +
               (fVar15 + fVar19 * fVar24 + (fVar21 * fVar23 - fVar14 * fVar22)) * fVar12;
      fVar14 = (float)((ulong)uVar18 >> 0x20) +
               (fVar16 + fVar22 * fVar24 + (fVar14 * fVar19 - fVar20 * fVar23)) * fVar12;
      fVar12 = *(float *)(puVar5 + 1) +
               fVar12 * (fVar17 + fVar24 * fVar23 + (fVar20 * fVar22 - fVar21 * fVar19));
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      fVar20 = (float)uStack0000000000000010 - fVar15;
      fVar21 = (float)(uStack0000000000000010 >> 0x20) - fVar14;
      fVar16 = unaff_s8 - fVar12;
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar21 * fVar21);
      uVar13 = uStack0000000000000010;
      fVar17 = unaff_s8;
      if (fVar11 < fVar19) {
        fVar11 = fVar11 / fVar19;
        uVar13 = CONCAT44(fVar14 + fVar21 * fVar11,fVar15 + fVar20 * fVar11);
        fVar17 = fVar12 + fVar16 * fVar11;
      }
      fStack0000000000000004 = (float)(uVar13 >> 0x20);
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x138) + unaff_x21 * 0xc);
      fVar12 = (fVar17 - unaff_s8) * DAT_012edacc;
      *puVar5 = CONCAT44((float)((ulong)*puVar5 >> 0x20) +
                         (fStack0000000000000004 - (float)(uStack0000000000000010 >> 0x20)) * 0.7,
                         (float)*puVar5 + ((float)uVar13 - (float)uStack0000000000000010) * 0.7);
      *(float *)(puVar5 + 1) = fVar12 + *(float *)(puVar5 + 1);
      unaff_s8 = fVar17;
      uStack0000000000000010 = uVar13;
    }
    puVar6 = (undefined4 *)(*(long *)(unaff_x19 + 0x128) + unaff_x21 * 0xc);
    *puVar6 = (int)uStack0000000000000010;
    puVar6[1] = fStack0000000000000004;
    puVar6[2] = unaff_s8;
  }
  return;
}


