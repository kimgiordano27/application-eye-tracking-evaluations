/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 05d43548
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar2 = *(long *)(param_1 + (long)(int)uVar3 * 8 + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_068cd970(lVar2,0,0);
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}


