/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 05353dc4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(undefined8 param_1)

{
  code *pcVar1;
  long in_x9;
  long unaff_x23;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0x530);
  uStack0000000000000018 = 0x21;
  uStack0000000000000028 = 0x20;
  uStack000000000000002c = 0;
  uStack0000000000000010 = param_1;
  pcVar1 = (code *)thunk_FUN_02f454a0();
  *(code **)(unaff_x23 + 0x6e0) = pcVar1;
  (*pcVar1)();
                    /* try { // try from 05353e0c to 05453ec3 has its CatchHandler @ 05353e0c
                       catch() { ... } // from try @ 05353e0c with catch @ 05353e0c
                       catch() { ... } // from try @ 05353f0c with catch @ 05353e0c
                       catch() { ... } // from try @ 05353f74 with catch @ 05353e0c
                       catch() { ... } // from try @ 05353fa0 with catch @ 05353e0c */
  return;
}


