/*
FUNCTION_NAME: Meta.XR.Locomotion.Teleporter.Input$$get_ActiveJoystickPosition
ENTRY_POINT: 0246a8c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Locomotion_Teleporter_Input__get_ActiveJoystickPosition(void)

{
  byte bVar1;
  long *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x23;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    FUN_024f65bc();
    *(undefined8 *)(unaff_x19 + 0x140) = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0();
}


