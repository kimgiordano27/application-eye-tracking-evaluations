/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 03f3b3f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__GetEnumerator(void)

{
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  memcpy((void *)(*(long *)(unaff_x19 + 0x38) + (long)unaff_w22 * (long)in_w8),&stack0x00000070,0x70
        );
  if (unaff_x20 != 0) {
    *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + (long)*(int *)(unaff_x19 + 0x58) * 4) =
         *(undefined4 *)(unaff_x20 + 0x38);
    *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


