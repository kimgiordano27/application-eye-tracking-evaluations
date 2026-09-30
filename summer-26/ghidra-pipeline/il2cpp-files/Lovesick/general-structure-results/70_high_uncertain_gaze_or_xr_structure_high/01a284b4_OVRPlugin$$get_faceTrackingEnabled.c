/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 01a284b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(unaff_x20 + 4);
                    /* try { // try from 01a284bc to 01b284bf has its CatchHandler @ 01a28630 */
  if ((unaff_w21 >> 2 & 1) == 0) {
                    /* try { // try from 01a284c0 to 01b284cf has its CatchHandler @ 01a2863c */
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 8);
  }
  *(undefined4 *)(unaff_x19 + 8) = uVar2;
  puVar1 = System_Runtime_Serialization_SerializationEventsCache_<>c_TypeInfo;
  if ((unaff_w21 >> 3 & 1) == 0) {
    uVar2 = 0;
                    /* try { // try from 01a284d8 to 01b284df has its CatchHandler @ 01a28634 */
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0xc);
  }
  *(undefined4 *)(unaff_x19 + 0xc) = uVar2;
  if ((unaff_w21 >> 4 & 1) == 0) {
    uVar2 = 0;
                    /* try { // try from 01a284f4 to 01b28513 has its CatchHandler @ 01a285ec */
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x14);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 01a28514 to 01b28593 has its CatchHandler @ 01a28098 */
  *(undefined4 *)(unaff_x19 + 0x14) = uVar2;
  return;
}


