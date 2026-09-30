/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 0234a870
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  undefined4 in_w9;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  *(undefined4 *)(param_2 + 0x1c) = in_w9;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    uVar3 = param_3[1];
    uVar2 = *param_3;
    uVar5 = param_3[3];
    uVar4 = param_3[2];
    param_1 = param_1 + (long)(int)uVar1 * 0x28;
    *(undefined8 *)(param_1 + 0x40) = param_3[4];
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_01e10808(param_1 + 0x20,0);
    return;
  }
  in_stack_00000050 = param_3[4];
  in_stack_00000038 = param_3[1];
  in_stack_00000030 = *param_3;
  in_stack_00000048 = param_3[3];
  in_stack_00000040 = param_3[2];
  FUN_0234a8f8(param_2,&stack0x00000030,
               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
  return;
}


