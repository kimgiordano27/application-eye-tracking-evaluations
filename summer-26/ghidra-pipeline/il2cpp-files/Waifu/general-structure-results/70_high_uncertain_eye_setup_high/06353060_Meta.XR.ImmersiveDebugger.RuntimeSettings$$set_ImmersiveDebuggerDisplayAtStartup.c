/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ImmersiveDebuggerDisplayAtStartup
ENTRY_POINT: 06353060
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ImmersiveDebuggerDisplayAtStartup(void)

{
  int iVar1;
  uint in_w8;
  undefined8 *puVar2;
  float *pfVar3;
  uint *in_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long lVar4;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 unaff_d9;
  float fVar9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s14;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  
  while( true ) {
    fVar8 = (float)unaff_d9;
    fVar9 = (float)((ulong)unaff_d9 >> 0x20);
    if ((in_w8 & 0xffff) != 0 || in_w8 >> 0x10 != 0) {
      fVar12 = (float)in_x9[1];
      iVar1 = (in_w8 >> 0x10) + unaff_w23;
      puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar1 * (long)(int)unaff_x27);
      uVar7 = *puVar2;
      fVar13 = *(float *)(puVar2 + 1);
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar10 = (float)uVar7 - fVar8;
      fVar11 = (float)((ulong)uVar7 >> 0x20) - fVar9;
      fVar13 = fVar13 - unaff_s10;
      fVar15 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar11 * fVar11);
      if (fStack000000000000002c <= fVar15) {
        lVar4 = (long)iVar1;
        fVar12 = unaff_s14 * fVar12;
        if ((uStack0000000000000028 >> 3 & 1) != 0) {
          pfVar3 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar4 * unaff_x27);
          fVar14 = *pfVar3;
          uVar7 = *(undefined8 *)(pfVar3 + 1);
          if (*(char *)(unaff_x29 + 0xcb) == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            *(undefined1 *)(unaff_x29 + 0xcb) = 1;
          }
          if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar14 = fVar14 - fStack0000000000000018;
          fVar5 = (float)uVar7 - (float)in_stack_00000010;
          fVar6 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)in_stack_00000010 >> 0x20);
          fVar12 = (fVar12 + SQRT(fVar6 * fVar6 + fVar14 * fVar14 + fVar5 * fVar5)) * 0.5;
          unaff_s10 = fStack000000000000001c;
        }
        fVar14 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x70) + lVar4 * 4));
        fVar14 = fVar14 + *(float *)(*(long *)(unaff_x19 + 0x80) + lVar4 * 4) * 5.0;
        fVar15 = ((fVar15 - fVar12) *
                 fStack0000000000000024 * (fVar14 / (fStack0000000000000020 + fVar14))) / fVar15;
        in_stack_00000030 =
             CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) + fVar11 * fVar15,
                      (float)in_stack_00000030 + fVar10 * fVar15);
        in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + fVar13 * fVar15;
      }
    }
    unaff_w26 = unaff_w26 + 1;
    if (unaff_w25 == unaff_w26) break;
    in_x9 = (uint *)(*(long *)(unaff_x19 + 0x10) + (long)(unaff_w28 + unaff_w26) * 8);
    in_w8 = *in_x9;
  }
  fVar12 = (float)unaff_w25;
  fVar15 = unaff_s10 + in_stack_00000038._4_4_ / fVar12;
  fVar13 = fVar8 + (float)in_stack_00000030 / fVar12;
  fVar12 = fVar9 + (float)((ulong)in_stack_00000030 >> 0x20) / fVar12;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x22 * 0xc);
  *puVar2 = CONCAT44(fVar12,fVar13);
  *(float *)(puVar2 + 1) = fVar15;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 0xc);
  in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
  *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) + (fVar12 - fVar9) * in_stack_00000060._4_4_,
                     (float)*puVar2 + (fVar13 - fVar8) * in_stack_00000060._4_4_);
  *(float *)(puVar2 + 1) = (fVar15 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar2 + 1);
  return;
}


