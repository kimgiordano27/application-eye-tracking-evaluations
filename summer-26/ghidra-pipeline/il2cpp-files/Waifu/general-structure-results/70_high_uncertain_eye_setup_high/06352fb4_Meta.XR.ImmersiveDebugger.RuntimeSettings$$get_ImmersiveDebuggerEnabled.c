/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerEnabled
ENTRY_POINT: 06352fb4
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerEnabled
               (float param_1,undefined1 param_2 [16],float param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float in_w8;
  float *pfVar7;
  undefined8 *puVar8;
  float in_w9;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long lVar9;
  int unaff_w25;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 unaff_d9;
  float fVar18;
  float unaff_s10;
  float unaff_s11;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s14;
  float fVar23;
  float fVar24;
  float fStack000000000000001c;
  float fStack0000000000000024;
  uint in_stack_00000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000060;
  
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if ((uint)ABS(in_w9) <= (uint)in_w8) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(param_1)) {
      bVar4 = param_1 < 1.0;
      bVar5 = param_1 == 1.0;
      bVar6 = false;
    }
  }
  fVar11 = 1.0;
  if (bVar5 || bVar4 != bVar6) {
    fVar11 = param_1;
  }
  bVar4 = true;
  if (((uint)ABS(fVar11) <= (uint)in_w8) && (bVar4 = false, !NAN(fVar11) && !NAN(param_3))) {
    bVar4 = fVar11 < param_3;
  }
  fStack0000000000000024 = param_3;
  if (!bVar4) {
    fStack0000000000000024 = fVar11;
  }
  fStack000000000000003c = 0.0;
  fVar11 = (float)FUN_06358bac((ulong)&stack0x00000050 | 4);
  fStack0000000000000030 = 0.0;
  fStack0000000000000034 = 0.0;
  pfVar7 = (float *)(*(long *)(unaff_x19 + 0x90) + unaff_x22 * 0xc);
  fVar12 = *pfVar7;
  iVar10 = 0;
  uVar13 = *(undefined8 *)(pfVar7 + 1);
  fStack000000000000002c = DAT_012edb5c;
  fStack000000000000001c = unaff_s10;
  do {
    puVar1 = (uint *)(*(long *)(unaff_x19 + 0x10) + (long)(unaff_w21 + unaff_w24 + iVar10) * 8);
    uVar3 = *puVar1;
    fVar17 = (float)unaff_d9;
    fVar18 = (float)((ulong)unaff_d9 >> 0x20);
    if ((uVar3 & 0xffff) != 0 || uVar3 >> 0x10 != 0) {
      fVar21 = (float)puVar1[1];
      iVar2 = (uVar3 >> 0x10) + unaff_w23;
      puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar2 * 0xc);
      uVar16 = *puVar8;
      fVar22 = *(float *)(puVar8 + 1);
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = (float)uVar16 - fVar17;
      fVar20 = (float)((ulong)uVar16 >> 0x20) - fVar18;
      fVar22 = fVar22 - unaff_s10;
      fVar24 = SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar20 * fVar20);
      if (fStack000000000000002c <= fVar24) {
        lVar9 = (long)iVar2;
        fVar21 = unaff_s14 * fVar21;
        if ((in_stack_00000028 >> 3 & 1) != 0) {
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar9 * 0xc);
          fVar23 = *pfVar7;
          uVar16 = *(undefined8 *)(pfVar7 + 1);
          if (DAT_086d90cb == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d90cb = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar23 = fVar23 - fVar12;
          fVar14 = (float)uVar16 - (float)uVar13;
          fVar15 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
          fVar21 = (fVar21 + SQRT(fVar15 * fVar15 + fVar23 * fVar23 + fVar14 * fVar14)) * 0.5;
          unaff_s10 = fStack000000000000001c;
        }
        fVar23 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x70) + lVar9 * 4),
                                     (ulong)&stack0x00000050 | 4,0);
        fVar23 = fVar23 + *(float *)(*(long *)(unaff_x19 + 0x80) + lVar9 * 4) * 5.0;
        fVar24 = ((fVar24 - fVar21) *
                 fStack0000000000000024 * (fVar23 / (unaff_s11 * 5.0 + fVar11 + fVar23))) / fVar24;
        fStack0000000000000030 = fStack0000000000000030 + fVar19 * fVar24;
        fStack0000000000000034 = fStack0000000000000034 + fVar20 * fVar24;
        fStack000000000000003c = fStack000000000000003c + fVar22 * fVar24;
      }
    }
    iVar10 = iVar10 + 1;
  } while (unaff_w25 != iVar10);
  fVar11 = (float)unaff_w25;
  fVar21 = unaff_s10 + fStack000000000000003c / fVar11;
  fVar12 = fVar17 + fStack0000000000000030 / fVar11;
  fVar11 = fVar18 + fStack0000000000000034 / fVar11;
  puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x22 * 0xc);
  *puVar8 = CONCAT44(fVar11,fVar12);
  *(float *)(puVar8 + 1) = fVar21;
  puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 0xc);
  in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
  *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) + (fVar11 - fVar18) * in_stack_00000060._4_4_,
                     (float)*puVar8 + (fVar12 - fVar17) * in_stack_00000060._4_4_);
  *(float *)(puVar8 + 1) = (fVar21 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar8 + 1);
  return;
}


