/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetSubArray
ENTRY_POINT: 041b8dc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetSubArray
               (long param_1,undefined8 *param_2)

{
  long lVar1;
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  uint in_w11;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (in_w10 < in_w11) {
    lVar1 = in_x9 + CONCAT44(in_register_00004054,in_w10) * 0x20;
    *(uint *)(param_1 + 0x18) = in_w10 + 1;
    uVar4 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    *(undefined8 *)(lVar1 + 0x28) = param_2[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    LeanTween__value(lVar1 + 0x30,0);
    return;
  }
  FUN_041b8e24();
  return;
}


