/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 051cabe4
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionAdvertisement(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 051cabe4 to 052cac07 has its CatchHandler @ 051cac08 */
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xfb8));
  *(undefined1 *)(unaff_x21 + 0x3f2) = 1;
  uVar1 = thunk_FUN_02cea798(*(undefined8 *)(unaff_x19 + 0x28),*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051caba0 with catch @ 051cac08
                       catch(type#2 @ 00000000) { ... } // from try @ 051cabe4 with catch @ 051cac08
                        */
  return;
}


