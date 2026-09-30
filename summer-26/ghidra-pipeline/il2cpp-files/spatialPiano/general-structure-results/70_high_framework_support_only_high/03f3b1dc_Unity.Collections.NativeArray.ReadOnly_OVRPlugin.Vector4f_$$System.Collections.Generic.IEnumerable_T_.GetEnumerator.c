/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03f3b1dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1)

{
  ulong uVar1;
  long unaff_x23;
  
  uVar1 = FUN_060f078c(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(char *)(unaff_x23 + 0x99) != '\0') {
      *(undefined1 *)(unaff_x23 + 0x99) = 0;
      Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length();
    }
  }
  return;
}


