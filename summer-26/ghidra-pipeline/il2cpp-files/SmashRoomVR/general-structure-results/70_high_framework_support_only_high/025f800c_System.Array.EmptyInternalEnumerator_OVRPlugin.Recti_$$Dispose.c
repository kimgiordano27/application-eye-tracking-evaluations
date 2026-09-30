/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Recti>$$Dispose
ENTRY_POINT: 025f800c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Recti>__Dispose
               (long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (param_3 < *(uint *)(lVar2 + 0x18)) {
    puVar1 = (undefined8 *)(lVar2 + param_1 * 8 + 0x20);
    *puVar1 = param_5;
    thunk_FUN_01b4f09c(puVar1,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


