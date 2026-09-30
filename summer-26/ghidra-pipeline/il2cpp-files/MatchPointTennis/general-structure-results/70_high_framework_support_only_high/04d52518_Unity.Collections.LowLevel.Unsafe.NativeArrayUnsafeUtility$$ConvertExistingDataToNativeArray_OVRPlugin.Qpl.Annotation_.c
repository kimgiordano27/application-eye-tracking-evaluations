/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 04d52518
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
               (long param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  int unaff_w21;
  
  plVar1 = (long *)*unaff_x19;
  if (plVar1 != (long *)0x0) {
    FUN_094b5338(param_1 + 0x20,(long)(int)plVar1[1] + *plVar1,(long)(unaff_w21 * 0x18),0);
    lVar2 = *unaff_x19;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + unaff_w21 * 0x18;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


