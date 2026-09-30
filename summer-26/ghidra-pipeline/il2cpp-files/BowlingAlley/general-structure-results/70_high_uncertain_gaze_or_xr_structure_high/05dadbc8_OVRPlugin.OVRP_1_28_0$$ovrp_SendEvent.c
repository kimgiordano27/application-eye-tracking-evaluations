/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 05dadbc8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x21;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_AvatarEditorOptions_SetSourceOverride";
  uStack0000000000000018 = 0x29;
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(code **)(unaff_x21 + 0x560) = pcVar1;
                    /* try { // try from 05dadc08 to 05eadc7f has its CatchHandler @ 05daddd4 */
  (*pcVar1)();
  return;
}


