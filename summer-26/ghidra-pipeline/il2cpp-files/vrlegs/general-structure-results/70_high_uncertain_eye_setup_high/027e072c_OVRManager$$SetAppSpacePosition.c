/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 027e072c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__SetAppSpacePosition(void)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  
  lVar1 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_027b3d9c(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(lVar1 + 0x20) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar1 + 0x20),0);
    *(undefined8 *)(lVar1 + 0x38) = unaff_x21;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(lVar1 + 0x40) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 1;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


