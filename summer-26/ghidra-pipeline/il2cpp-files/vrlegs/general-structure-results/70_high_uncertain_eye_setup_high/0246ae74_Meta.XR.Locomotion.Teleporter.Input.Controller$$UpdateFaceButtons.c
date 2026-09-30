/*
FUNCTION_NAME: Meta.XR.Locomotion.Teleporter.Input.Controller$$UpdateFaceButtons
ENTRY_POINT: 0246ae74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Locomotion_Teleporter_Input_Controller__UpdateFaceButtons(void)

{
  byte bVar1;
  long *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x23;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    FUN_024f656c();
    *(undefined8 *)(unaff_x19 + 0x140) = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0();
}


