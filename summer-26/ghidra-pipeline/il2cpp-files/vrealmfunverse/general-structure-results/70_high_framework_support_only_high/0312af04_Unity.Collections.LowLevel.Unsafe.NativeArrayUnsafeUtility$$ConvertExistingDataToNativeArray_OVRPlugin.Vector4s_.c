/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 0312af04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_1 == 0) {
    FUN_02b3c81c(&DAT_06446ed8);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_02b76274(param_4);
    }
  }
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  FUN_04cac190(0);
  if (*(int *)(*(long *)PTR_DAT_0631e9f8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04de580c(&stack0x00000010,0);
  FUN_059d312c(param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
  FUN_04de4ad4(&stack0x00000010,0);
  return;
}


