/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_InspectedDataEnabled
ENTRY_POINT: 0635319c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled(long param_1,float param_2)

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
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  undefined8 uVar11;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar12;
  undefined8 unaff_d11;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
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
  
  do {
    param_2 = param_2 + *(float *)(param_1 + unaff_x24 * 4) * 5.0;
    fVar6 = (unaff_s8 * fStack0000000000000024 * (param_2 / (fStack0000000000000020 + param_2))) /
            unaff_s15;
    fVar8 = (float)in_stack_00000030 + (float)unaff_d11 * fVar6;
    fVar10 = (float)((ulong)in_stack_00000030 >> 0x20) + (float)((ulong)unaff_d11 >> 0x20) * fVar6;
    in_stack_00000030 = CONCAT44(fVar10,fVar8);
    in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + unaff_s13 * fVar6;
    do {
      do {
        unaff_w26 = unaff_w26 + 1;
        fVar6 = (float)unaff_d9;
        fVar12 = (float)((ulong)unaff_d9 >> 0x20);
        if (unaff_w25 == unaff_w26) {
          fVar7 = (float)unaff_w25;
          fVar9 = unaff_s10 + in_stack_00000038._4_4_ / fVar7;
          fVar8 = fVar6 + fVar8 / fVar7;
          fVar10 = fVar12 + fVar10 / fVar7;
          puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x22 * 0xc);
          *puVar4 = CONCAT44(fVar10,fVar8);
          *(float *)(puVar4 + 1) = fVar9;
          puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 0xc);
          in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
          *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) +
                             (fVar10 - fVar12) * in_stack_00000060._4_4_,
                             (float)*puVar4 + (fVar8 - fVar6) * in_stack_00000060._4_4_);
          *(float *)(puVar4 + 1) =
               (fVar9 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar4 + 1);
          return;
        }
        puVar1 = (uint *)(*(long *)(unaff_x19 + 0x10) + (long)(unaff_w28 + unaff_w26) * 8);
        uVar3 = *puVar1;
      } while ((uVar3 & 0xffff) == 0 && uVar3 >> 0x10 == 0);
      fVar7 = (float)puVar1[1];
      iVar2 = (uVar3 >> 0x10) + unaff_w23;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar2 * (long)(int)unaff_x27);
      uVar11 = *puVar4;
      fVar9 = *(float *)(puVar4 + 1);
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar6 = (float)uVar11 - fVar6;
      fVar12 = (float)((ulong)uVar11 >> 0x20) - fVar12;
      unaff_d11 = CONCAT44(fVar12,fVar6);
      unaff_s13 = fVar9 - unaff_s10;
      unaff_s15 = SQRT(unaff_s13 * unaff_s13 + fVar6 * fVar6 + fVar12 * fVar12);
    } while (unaff_s15 < fStack000000000000002c);
    unaff_x24 = (long)iVar2;
    fVar7 = unaff_s14 * fVar7;
    if ((uStack0000000000000028 >> 3 & 1) != 0) {
      pfVar5 = (float *)(*(long *)(unaff_x19 + 0x90) + unaff_x24 * unaff_x27);
      fVar6 = *pfVar5;
      uVar11 = *(undefined8 *)(pfVar5 + 1);
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar6 = fVar6 - fStack0000000000000018;
      fVar8 = (float)uVar11 - (float)in_stack_00000010;
      fVar10 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)in_stack_00000010 >> 0x20);
      fVar7 = (fVar7 + SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8)) * 0.5;
      unaff_s10 = fStack000000000000001c;
    }
    unaff_s8 = unaff_s15 - fVar7;
    param_2 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x70) + unaff_x24 * 4));
    param_1 = *(long *)(unaff_x19 + 0x80);
  } while( true );
}


