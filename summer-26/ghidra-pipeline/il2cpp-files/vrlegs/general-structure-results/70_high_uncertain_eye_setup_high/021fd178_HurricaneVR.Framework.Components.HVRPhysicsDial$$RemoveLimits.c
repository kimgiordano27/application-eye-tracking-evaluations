/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDial$$RemoveLimits
ENTRY_POINT: 021fd178
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1a0) */
/* WARNING: Removing unreachable block (ram,0x021fd1a4) */

bool HurricaneVR_Framework_Components_HVRPhysicsDial__RemoveLimits(void)

{
  long unaff_x28;
  long unaff_x29;
  
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x40),0);
  }
  if (unaff_x28 == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0 < **(int **)(unaff_x29 + -0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


