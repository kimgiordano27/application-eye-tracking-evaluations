/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_InspectedDataAssets
ENTRY_POINT: 063531e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataAssets(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s14;
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
    unaff_w26 = unaff_w26 + 1;
    fVar14 = (float)unaff_d9;
    fVar15 = (float)((ulong)unaff_d9 >> 0x20);
    fVar9 = (float)((ulong)in_stack_00000030 >> 0x20);
    if (unaff_w25 == unaff_w26) break;
    puVar1 = (uint *)(*(long *)(unaff_x19 + 0x10) + (long)(unaff_w28 + unaff_w26) * 8);
    uVar3 = *puVar1;
    if ((uVar3 & 0xffff) != 0 || uVar3 >> 0x10 != 0) {
      fVar7 = (float)puVar1[1];
      iVar2 = (uVar3 >> 0x10) + unaff_w23;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar2 * (long)(int)unaff_x27);
      uVar13 = *puVar4;
      fVar8 = *(float *)(puVar4 + 1);
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar14 = (float)uVar13 - fVar14;
      fVar15 = (float)((ulong)uVar13 >> 0x20) - fVar15;
      fVar8 = fVar8 - unaff_s10;
      fVar12 = SQRT(fVar8 * fVar8 + fVar14 * fVar14 + fVar15 * fVar15);
      if (fStack000000000000002c <= fVar12) {
        lVar6 = (long)iVar2;
        fVar7 = unaff_s14 * fVar7;
        if ((uStack0000000000000028 >> 3 & 1) != 0) {
          pfVar5 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar6 * unaff_x27);
          fVar16 = *pfVar5;
          uVar13 = *(undefined8 *)(pfVar5 + 1);
          if (*(char *)(unaff_x29 + 0xcb) == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            *(undefined1 *)(unaff_x29 + 0xcb) = 1;
          }
          if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar16 = fVar16 - fStack0000000000000018;
          fVar10 = (float)uVar13 - (float)in_stack_00000010;
          fVar11 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)in_stack_00000010 >> 0x20);
          fVar7 = (fVar7 + SQRT(fVar11 * fVar11 + fVar16 * fVar16 + fVar10 * fVar10)) * 0.5;
          unaff_s10 = fStack000000000000001c;
        }
        fVar16 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x70) + lVar6 * 4));
        fVar16 = fVar16 + *(float *)(*(long *)(unaff_x19 + 0x80) + lVar6 * 4) * 5.0;
        fVar12 = ((fVar12 - fVar7) *
                 fStack0000000000000024 * (fVar16 / (fStack0000000000000020 + fVar16))) / fVar12;
        in_stack_00000030 =
             CONCAT44(fVar9 + fVar15 * fVar12,(float)in_stack_00000030 + fVar14 * fVar12);
        in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + fVar8 * fVar12;
      }
    }
  }
  fVar7 = (float)unaff_w25;
  fVar12 = unaff_s10 + in_stack_00000038._4_4_ / fVar7;
  fVar8 = fVar14 + (float)in_stack_00000030 / fVar7;
  fVar9 = fVar15 + fVar9 / fVar7;
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x22 * 0xc);
  *puVar4 = CONCAT44(fVar9,fVar8);
  *(float *)(puVar4 + 1) = fVar12;
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 0xc);
  in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
  *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + (fVar9 - fVar15) * in_stack_00000060._4_4_,
                     (float)*puVar4 + (fVar8 - fVar14) * in_stack_00000060._4_4_);
  *(float *)(puVar4 + 1) = (fVar12 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar4 + 1);
  return;
}


