/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$limitEyeMovementForCollision
ENTRY_POINT: 01cb9170
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VRReady_Scripts_OVR_OVRManagerHelper__limitEyeMovementForCollision(void)

{
  undefined4 uVar1;
  long *unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  uVar1 = (**(code **)(*unaff_x24 + 0x48))();
  **(undefined4 **)(unaff_x29 + 0x68) = uVar1;
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


