/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Quatf>
ENTRY_POINT: 02421c3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Quatf>
               (long param_1,long *param_2,int param_3,ulong param_4,long param_5)

{
  if (param_1 == 0) {
    FUN_01ecafa0(param_5);
  }
  if ((param_4 & 1) != 0) {
    if (param_3 < 0x401) {
      param_3 = FUN_04068278(param_3,0);
    }
    else {
      param_3 = param_3 + 0x100;
    }
  }
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_3 != *(int *)(*param_2 + 0x18)) {
    FUN_0223cf60(param_2,param_3,*(undefined8 *)(*(long *)(param_5 + 0x38) + 8));
    return;
  }
  return;
}


