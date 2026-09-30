/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 05d6c854
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x23;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(code **)(unaff_x23 + 0x670) = pcVar1;
  memset(&stack0x00000000,0,0x2c0);
  if (unaff_x20 == 0) {
    register0x00000008 = (BADSPACEBASE *)0x0;
  }
  else {
    FUN_03207d80();
    pcVar1 = *(code **)(unaff_x23 + 0x670);
  }
  (*pcVar1)(unaff_w19,register0x00000008);
  return;
}


