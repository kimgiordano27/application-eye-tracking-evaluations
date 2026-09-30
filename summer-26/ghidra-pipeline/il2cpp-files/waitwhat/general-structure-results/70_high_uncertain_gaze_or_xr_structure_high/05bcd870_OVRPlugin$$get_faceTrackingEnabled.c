/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 05bcd870
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 05bcd870 to 05ccd88f has its CatchHandler @ 05bcd198 */
                    /* catch() { ... } // from try @ 05bcd408 with catch @ 05bcd874 */
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = FUN_069d3a80(param_2,0);
                    /* try { // try from 05bcd890 to 05ccd893 has its CatchHandler @ 05bcd8ac */
                    /* try { // try from 05bcd894 to 05ccd8af has its CatchHandler @ 05bcd198 */
  FUN_05b75368(&stack0x00000000 + 4,uVar2,uVar1,0);
  param_1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *param_1 = in_stack_00000000._4_8_;
  *(undefined8 *)((long)param_1 + 0x14) = in_stack_00000018;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
                    /* catch() { ... } // from try @ 05bcd890 with catch @ 05bcd8ac */
                    /* try { // try from 05bcd8b0 to 05ccd8b7 has its CatchHandler @ 05bcd8c0 */
  return;
}


