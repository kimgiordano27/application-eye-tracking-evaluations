/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 0366f530
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughSupported
               (undefined8 param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  float unaff_s9;
  float unaff_s10;
  undefined8 unaff_d11;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined4 uStack0000000000000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  ulong in_stack_00000040;
  
  in_stack_00000040 = in_stack_00000040 >> 0x20;
  uVar5 = _uStack0000000000000008 >> 0x20;
  param_4 = param_4 / (param_3 - unaff_s10);
  fVar6 = param_4;
  if (param_5 < param_4) {
    fVar6 = param_5;
  }
  uVar8 = (ulong)(uint)fVar6;
  if (param_4 < 0.0) {
    fVar6 = 0.0;
  }
  fStack0000000000000014 = unaff_s9 + (param_2 - unaff_s9) * fVar6;
  uVar2 = FUN_0366f774(in_stack_00000010);
  uVar9 = uVar8;
  uVar3 = FUN_0366f774(uStack0000000000000008,in_stack_00000040);
  FUN_04067050(uVar2,uVar5,unaff_d11,uVar8,uVar3,in_stack_00000040,unaff_d14,uVar9,0);
  uVar7 = (undefined4)unaff_d11;
  uVar4 = (undefined4)uVar5;
  uVar1 = FUN_0366f884();
  *unaff_x20 = CONCAT44((float)((ulong)unaff_d15 >> 0x20) + (float)((ulong)param_1 >> 0x20) * fVar6,
                        (float)unaff_d15 + (float)param_1 * fVar6);
  *(float *)(unaff_x20 + 1) = fStack0000000000000014;
  *unaff_x19 = uVar1;
  unaff_x19[1] = uVar4;
  unaff_x19[2] = uVar7;
  return;
}


