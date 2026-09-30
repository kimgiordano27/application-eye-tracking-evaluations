/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 051cab10
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__StartColocationSessionAdvertisement
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  int in_w8;
  long unaff_x19;
  float unaff_s8;
  float fVar1;
  float unaff_s9;
  float fVar2;
  float unaff_s10;
  float fVar3;
  
                    /* try { // try from 051cab18 to 052cab37 has its CatchHandler @ 051cab94 */
  if (in_w8 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    *(undefined1 *)(unaff_x19 + 0x230) = 1;
  }
                    /* try { // try from 051cab38 to 052cab6b has its CatchHandler @ 051ca9bc */
  fVar3 = (param_4 + param_2) - unaff_s10;
  fVar2 = (param_5 + param_1) - unaff_s9;
  fVar1 = (param_6 + param_3) - unaff_s8;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
                    /* try { // try from 051cab6c to 052cab6f has its CatchHandler @ 051cabb0 */
                    /* try { // try from 051cab70 to 052cab7f has its CatchHandler @ 051ca9bc */
                    /* try { // try from 051cab80 to 052cab8f has its CatchHandler @ 051cab9c */
  return SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
}


