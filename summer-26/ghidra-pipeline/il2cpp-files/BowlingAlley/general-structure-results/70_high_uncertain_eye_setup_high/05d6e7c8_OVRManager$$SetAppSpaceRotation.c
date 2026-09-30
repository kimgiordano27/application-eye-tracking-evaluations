/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 05d6e7c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__SetAppSpaceRotation(long param_1,uint param_2,byte param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x1d) == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = *(byte *)(lVar2 + 0x1c) == (param_3 & 1);
      }
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


