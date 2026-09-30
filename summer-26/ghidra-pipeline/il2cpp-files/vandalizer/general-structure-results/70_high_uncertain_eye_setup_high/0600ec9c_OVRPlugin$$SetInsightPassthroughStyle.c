/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 0600ec9c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__SetInsightPassthroughStyle
          (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  undefined *puVar1;
  uint in_w8;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_000000e8;
  ulong uVar5;
  
  fVar11 = 1.0 / (param_3 * param_3 + -1.0);
  fVar8 = ((param_5 + param_1) * param_3 - (in_s17 + param_2)) * fVar11;
  fVar11 = ((param_5 + param_1) - param_3 * (in_s17 + param_2)) * fVar11;
  fVar4 = (float)in_stack_00000030 + (float)in_stack_00000020 * fVar8;
  fVar7 = (float)((ulong)in_stack_00000030 >> 0x20) +
          (float)((ulong)in_stack_00000020 >> 0x20) * fVar8;
  uVar5 = CONCAT44(fVar7,fVar4);
  in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + fVar8 * in_stack_00000018._4_4_;
  fVar8 = (in_s18 + unaff_s8 * fVar11) - fVar4;
  fVar12 = (in_s19 + unaff_s9 * fVar11) - fVar7;
  fVar11 = (in_s20 + unaff_s10 * fVar11) - in_stack_00000028._4_4_;
  fVar11 = SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar12 * fVar12) - in_stack_000000e8._4_4_;
  *(float *)(unaff_x23 + 0x20) = fVar11;
  puVar1 = PTR_DAT_075d64f0;
  if (1 < (int)in_w8) {
    lVar2 = (ulong)in_w8 - 1;
    pfVar3 = (float *)(unaff_x23 + 0x24);
    do {
      fVar8 = *pfVar3;
      if (*pfVar3 <= fVar11) {
        fVar8 = fVar11;
      }
      fVar11 = fVar8;
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 1;
    } while (lVar2 != 0);
  }
  if (fVar11 < in_stack_000000e8._4_4_) {
    fVar11 = SQRT(in_stack_000000e8._4_4_ * in_stack_000000e8._4_4_ - fVar11 * fVar11);
    uVar5 = CONCAT44(fVar7 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0xc) >> 0x20) * fVar11,
                     fVar4 - (float)*(undefined8 *)(unaff_x22 + 0xc) * fVar11);
    in_stack_00000028._4_4_ = in_stack_00000028._4_4_ - fVar11 * *(float *)(unaff_x22 + 0x14);
  }
  uVar10 = (ulong)(uint)in_stack_00000028._4_4_;
  uVar9 = uVar5 >> 0x20;
  uVar6 = FUN_0600e60c(uVar5,uVar9,uVar10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e67e1c(uVar6,uVar9,uVar10,uStack0000000000000014,uStack0000000000000010,
               uStack000000000000000c,uStack0000000000000008,&stack0x00000080,0);
  FUN_0600ee70(&stack0x00000040);
  unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  *unaff_x19 = in_stack_00000040;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  return 1;
}


