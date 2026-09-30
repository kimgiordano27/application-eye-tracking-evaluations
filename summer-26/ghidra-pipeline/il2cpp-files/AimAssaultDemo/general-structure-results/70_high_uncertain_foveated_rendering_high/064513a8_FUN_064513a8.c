/*
FUNCTION_NAME: FUN_064513a8
ENTRY_POINT: 064513a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_064513a8(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 064513b0 to 065513b3 has its CatchHandler @ 064513d0 */
                    /* try { // try from 064513b8 to 065513bb has its CatchHandler @ 064513cc */
                    /* try { // try from 064513c0 to 065513c3 has its CatchHandler @ 064513c8 */
  if (DAT_0825eba0 == (code *)0x0) {
                    /* try { // try from 064513c4 to 065513fb has its CatchHandler @ 0644fee0 */
                    /* catch() { ... } // from try @ 064513c0 with catch @ 064513c8 */
                    /* catch() { ... } // from try @ 064513b8 with catch @ 064513cc */
                    /* catch() { ... } // from try @ 064513b0 with catch @ 064513d0 */
                    /* catch() { ... } // from try @ 06450f48 with catch @ 064513d4 */
                    /* catch() { ... } // from try @ 06450ee8 with catch @ 064513d8 */
                    /* catch() { ... } // from try @ 06450e84 with catch @ 064513dc */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaGetEyeTrackedFoveationSupported";
    uStack_38 = 0x23;
    local_28 = 8;
    local_30 = DAT_0158ade8;
                    /* try { // try from 064513fc to 065513ff has its CatchHandler @ 064517f0 */
    local_24 = 0;
                    /* try { // try from 06451400 to 0655142f has its CatchHandler @ 0644fee0 */
    DAT_0825eba0 = (code *)thunk_FUN_03778b88(&local_50);
  }
                    /* catch() { ... } // from try @ 06451270 with catch @ 0645140c */
                    /* catch() { ... } // from try @ 064512e0 with catch @ 06451410 */
  local_50 = (char *)((ulong)local_50 & 0xffffffff00000000);
                    /* catch() { ... } // from try @ 0645120c with catch @ 06451414 */
  (*DAT_0825eba0)(&local_50);
  *(bool *)param_1 = (int)local_50 != 0;
                    /* try { // try from 06451430 to 06551433 has its CatchHandler @ 064517fc */
                    /* try { // try from 06451434 to 06551487 has its CatchHandler @ 0644fee0 */
  return;
}


