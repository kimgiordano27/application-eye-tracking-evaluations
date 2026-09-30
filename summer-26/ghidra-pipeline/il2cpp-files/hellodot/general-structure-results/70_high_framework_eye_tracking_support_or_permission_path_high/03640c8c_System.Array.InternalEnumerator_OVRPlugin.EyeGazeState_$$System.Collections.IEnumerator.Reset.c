/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03640c8c
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined1
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
          (long param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) == *(long *)(lVar2 + 0x40)) {
      puVar1 = (undefined1 *)thunk_FUN_02cea9e8();
      return *puVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


