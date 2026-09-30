/*
FUNCTION_NAME: FUN_06a0fb54
ENTRY_POINT: 06a0fb54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_06a0fb54(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 06a0fb58 to 06b0fb5b has its CatchHandler @ 06a0fb94 */
                    /* try { // try from 06a0fb5c to 06b0fb6b has its CatchHandler @ 06a0f93c */
                    /* try { // try from 06a0fb6c to 06b0fb7b has its CatchHandler @ 06a0fb84 */
  if (DAT_0897f4f0 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
                    /* catch() { ... } // from try @ 06a0fb4c with catch @ 06a0fb80 */
                    /* catch() { ... } // from try @ 06a0fafc with catch @ 06a0fb84
                       catch() { ... } // from try @ 06a0fb6c with catch @ 06a0fb84 */
                    /* try { // try from 06a0fb8c to 06b0fb8f has its CatchHandler @ 06a0fd20 */
                    /* try { // try from 06a0fb90 to 06b0fbbb has its CatchHandler @ 06a0f93c */
                    /* catch() { ... } // from try @ 06a0fb58 with catch @ 06a0fb94 */
    local_40 = "MetaGetEyeTrackedFoveationSupported";
    uStack_38 = 0x23;
    local_30 = DAT_015c48d8;
    local_28 = 8;
    local_24 = 0;
    DAT_0897f4f0 = (code *)thunk_FUN_03ac775c(&local_50);
  }
  local_50 = (char *)((ulong)local_50 & 0xffffffff00000000);
  (*DAT_0897f4f0)(&local_50);
  *(bool *)param_1 = (int)local_50 != 0;
  return;
}


