/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_IsCreated
ENTRY_POINT: 03c78c08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_IsCreated(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x9;
  undefined8 *unaff_x19;
  long lVar4;
  
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(int *)(**(long **)(in_x9 + 0xa30) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05069828(0);
  if (lVar4 != 0) {
    FUN_05086820(lVar4,uVar1,uVar2,uVar3,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


