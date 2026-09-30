/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 05d83ea0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined1 unaff_w22;
  
                    /* try { // try from 05d83ea0 to 05e83ea3 has its CatchHandler @ 05d840a4 */
                    /* try { // try from 05d83ea4 to 05e83ea7 has its CatchHandler @ 05d8403c */
                    /* try { // try from 05d83ea8 to 05e83eab has its CatchHandler @ 05d84038 */
  FUN_059660a0(param_1,0);
                    /* try { // try from 05d83eac to 05e83eaf has its CatchHandler @ 05d83f28 */
  *(undefined1 *)(param_1 + 0x10) = unaff_w22;
                    /* try { // try from 05d83eb0 to 05e83eb3 has its CatchHandler @ 05d83f24 */
  *(long *)(unaff_x19 + 0x30) = param_1;
                    /* try { // try from 05d83eb4 to 05e83eb7 has its CatchHandler @ 05d83f1c */
                    /* try { // try from 05d83eb8 to 05e83ebb has its CatchHandler @ 05d83f18 */
                    /* try { // try from 05d83ebc to 05e83ebf has its CatchHandler @ 05d83f14 */
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x30),param_1);
  uVar1 = DAT_0139dd98;
                    /* try { // try from 05d83ec0 to 05e83ec3 has its CatchHandler @ 05d83f10 */
                    /* try { // try from 05d83ec4 to 05e83ec7 has its CatchHandler @ 05d83f0c */
                    /* try { // try from 05d83ec8 to 05e83ecb has its CatchHandler @ 05d83f00 */
                    /* try { // try from 05d83ecc to 05e83ecf has its CatchHandler @ 05d83ef8 */
  *(undefined1 *)(unaff_x19 + 0x20) = unaff_w22;
                    /* try { // try from 05d83ed0 to 05e83ed3 has its CatchHandler @ 05d83ef4 */
  *(undefined4 *)(unaff_x19 + 0x1c) = 0x3f800000;
                    /* try { // try from 05d83ed4 to 05e83ed7 has its CatchHandler @ 05d83ef0 */
  *(undefined8 *)(unaff_x19 + 0x14) = uVar1;
                    /* catch() { ... } // from try @ 05d83db4 with catch @ 05d83ed8
                       try { // try from 05d83ed8 to 05e83f4b has its CatchHandler @ 05d8384c */
                    /* catch() { ... } // from try @ 05d83d6c with catch @ 05d83edc */
                    /* catch() { ... } // from try @ 05d83cf0 with catch @ 05d83ee0 */
                    /* catch() { ... } // from try @ 05d83ca4 with catch @ 05d83ee4 */
  return;
}


