/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerDisplayAtStartup
ENTRY_POINT: 06353058
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


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerDisplayAtStartup(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int in_w9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long lVar6;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 unaff_d9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float fVar16;
  float fVar17;
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
    puVar1 = (uint *)(param_1 + (long)in_w9 * 8);
    uVar3 = *puVar1;
    fVar10 = (float)unaff_d9;
    fVar11 = (float)((ulong)unaff_d9 >> 0x20);
    if ((uVar3 & 0xffff) != 0 || uVar3 >> 0x10 != 0) {
      fVar14 = (float)puVar1[1];
      iVar2 = (uVar3 >> 0x10) + unaff_w23;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar2 * (long)(int)unaff_x27);
      uVar9 = *puVar4;
      fVar15 = *(float *)(puVar4 + 1);
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar12 = (float)uVar9 - fVar10;
      fVar13 = (float)((ulong)uVar9 >> 0x20) - fVar11;
      fVar15 = fVar15 - unaff_s10;
      fVar17 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar13 * fVar13);
      if (fStack000000000000002c <= fVar17) {
        lVar6 = (long)iVar2;
        fVar14 = unaff_s14 * fVar14;
        if ((uStack0000000000000028 >> 3 & 1) != 0) {
          pfVar5 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar6 * unaff_x27);
          fVar16 = *pfVar5;
          uVar9 = *(undefined8 *)(pfVar5 + 1);
          if (*(char *)(unaff_x29 + 0xcb) == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            *(undefined1 *)(unaff_x29 + 0xcb) = 1;
          }
          if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar16 = fVar16 - fStack0000000000000018;
          fVar7 = (float)uVar9 - (float)in_stack_00000010;
          fVar8 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)in_stack_00000010 >> 0x20);
          fVar14 = (fVar14 + SQRT(fVar8 * fVar8 + fVar16 * fVar16 + fVar7 * fVar7)) * 0.5;
          unaff_s10 = fStack000000000000001c;
        }
        fVar16 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x70) + lVar6 * 4));
        fVar16 = fVar16 + *(float *)(*(long *)(unaff_x19 + 0x80) + lVar6 * 4) * 5.0;
        fVar17 = ((fVar17 - fVar14) *
                 fStack0000000000000024 * (fVar16 / (fStack0000000000000020 + fVar16))) / fVar17;
        in_stack_00000030 =
             CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) + fVar13 * fVar17,
                      (float)in_stack_00000030 + fVar12 * fVar17);
        in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + fVar15 * fVar17;
      }
    }
    unaff_w26 = unaff_w26 + 1;
    if (unaff_w25 == unaff_w26) break;
    param_1 = *(long *)(unaff_x19 + 0x10);
    in_w9 = unaff_w28 + unaff_w26;
  }
  fVar14 = (float)unaff_w25;
  fVar17 = unaff_s10 + in_stack_00000038._4_4_ / fVar14;
  fVar15 = fVar10 + (float)in_stack_00000030 / fVar14;
  fVar14 = fVar11 + (float)((ulong)in_stack_00000030 >> 0x20) / fVar14;
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x22 * 0xc);
  *puVar4 = CONCAT44(fVar14,fVar15);
  *(float *)(puVar4 + 1) = fVar17;
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 0xc);
  in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
  *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + (fVar14 - fVar11) * in_stack_00000060._4_4_,
                     (float)*puVar4 + (fVar15 - fVar10) * in_stack_00000060._4_4_);
  *(float *)(puVar4 + 1) = (fVar17 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar4 + 1);
  return;
}


