/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector4f>
ENTRY_POINT: 02dc2c00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


float System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector4f>
                (undefined1 param_1 [16],float param_2,ulong param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  
  if ((param_3 & 1) != 0) {
    return *(float *)(unaff_x19 + 0x30);
  }
  if (((*(long *)(unaff_x19 + 0x20) != 0) &&
      (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar1 != 0)) &&
     (lVar1 = FUN_05c89340(lVar1,0), lVar1 != 0)) {
    FUN_05c9bf94(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar2 = param_2;
      FUN_05c9bf94(*(long *)(unaff_x19 + 0x28),0);
      if (param_2 - fVar2 < 0.5) {
        return 0.5;
      }
      return param_2 - fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


