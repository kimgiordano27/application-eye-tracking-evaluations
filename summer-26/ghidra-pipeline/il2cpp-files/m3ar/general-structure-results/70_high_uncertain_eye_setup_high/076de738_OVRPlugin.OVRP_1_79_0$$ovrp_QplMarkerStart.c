/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplMarkerStart
ENTRY_POINT: 076de738
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerStart(void)

{
  ulong uVar1;
  ulong unaff_x19;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  uVar1 = FUN_076de930();
  if (((unaff_x19 & 1) == 0) || ((uVar1 & 1) == 0)) {
    if ((unaff_x19 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        return unaff_s10;
      }
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      fStack0000000000000020 = unaff_s11 - fStack0000000000000010;
      fStack0000000000000024 = unaff_s9 - fStack0000000000000014;
      in_stack_00000028 = unaff_s8 - in_stack_00000018;
    }
    else {
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      fStack0000000000000020 = fStack0000000000000020 - unaff_s11;
      fStack0000000000000024 = fStack0000000000000024 - unaff_s9;
      in_stack_00000028 = in_stack_00000028 - unaff_s8;
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar2 = SQRT(in_stack_00000028 * in_stack_00000028 +
                 fStack0000000000000020 * fStack0000000000000020 +
                 fStack0000000000000024 * fStack0000000000000024);
    if (DAT_01a2ef28 < fVar2) {
      return fStack0000000000000020 / fVar2;
    }
  }
  else {
                    /* try { // try from 076de75c to 077de75f has its CatchHandler @ 076de8dc */
    if (DAT_09539e18 == '\0') {
                    /* try { // try from 076de760 to 077de767 has its CatchHandler @ 076de8f8 */
      FUN_0403162c(PTR_DAT_08f65580);
                    /* try { // try from 076de770 to 077de77f has its CatchHandler @ 076de8f0 */
      DAT_09539e18 = '\x01';
    }
    fStack0000000000000020 = fStack0000000000000020 - fStack0000000000000010;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
                    /* try { // try from 076de790 to 077de79b has its CatchHandler @ 076dea74 */
      thunk_FUN_0408f364();
    }
                    /* try { // try from 076de7ac to 077de7b3 has its CatchHandler @ 076dea68 */
    fVar2 = SQRT((in_stack_00000028 - in_stack_00000018) * (in_stack_00000028 - in_stack_00000018) +
                 fStack0000000000000020 * fStack0000000000000020 +
                 (fStack0000000000000024 - fStack0000000000000014) *
                 (fStack0000000000000024 - fStack0000000000000014));
                    /* try { // try from 076de7bc to 077de7cf has its CatchHandler @ 076de914 */
    if (DAT_01a2ef28 < fVar2) {
      return fStack0000000000000020 / fVar2;
    }
  }
  if (DAT_09539c10 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539c10 = '\x01';
  }
  return **(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
}


