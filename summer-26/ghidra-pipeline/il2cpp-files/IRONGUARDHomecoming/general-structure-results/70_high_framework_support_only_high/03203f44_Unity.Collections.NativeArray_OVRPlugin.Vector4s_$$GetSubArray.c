/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 03203f44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_3._0_8_;
  uStack0000000000000000 = param_2._0_8_;
  if ((uint)unaff_x22 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + unaff_x22 * 0x20;
    *(long *)(param_1 + 0x28) = param_2._8_8_;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000000;
    *(long *)(param_1 + 0x38) = param_3._8_8_;
    *(undefined8 *)(param_1 + 0x30) = uStack0000000000000010;
    thunk_FUN_01f51358(param_1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


