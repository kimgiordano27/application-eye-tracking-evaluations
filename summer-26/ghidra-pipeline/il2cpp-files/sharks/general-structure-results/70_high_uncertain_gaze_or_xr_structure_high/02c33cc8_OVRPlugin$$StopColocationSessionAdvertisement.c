/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 02c33cc8
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionAdvertisement(void)

{
  long lVar1;
  undefined4 in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined4 *)(unaff_x19 + 0x20) = in_w8;
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar1 = *unaff_x21;
  }
  uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x20);
  }
  FUN_02c30798(&stack0x00000018,uVar2);
                    /* try { // try from 02c33d14 to 02d33d23 has its CatchHandler @ 02c33d24 */
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000010;
                    /* catch() { ... } // from try @ 02c33c9c with catch @ 02c33d24
                       catch() { ... } // from try @ 02c33d14 with catch @ 02c33d24 */
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000000;
                    /* try { // try from 02c33d28 to 02d33d2b has its CatchHandler @ 02c33d34 */
                    /* try { // try from 02c33d2c to 02d33d37 has its CatchHandler @ 02c336f4 */
                    /* catch() { ... } // from try @ 02c33c58 with catch @ 02c33d34
                       catch() { ... } // from try @ 02c33d28 with catch @ 02c33d34 */
  thunk_FUN_0188fd20(unaff_x19 + 0x40,0);
  return;
}


