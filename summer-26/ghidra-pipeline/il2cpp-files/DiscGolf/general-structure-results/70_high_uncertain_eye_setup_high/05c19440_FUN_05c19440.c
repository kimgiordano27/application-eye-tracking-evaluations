/*
FUNCTION_NAME: FUN_05c19440
ENTRY_POINT: 05c19440
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05c19440(long param_1)

{
  undefined *puVar1;
  
  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                    /* try { // try from 05c19450 to 05d19457 has its CatchHandler @ 05c195a0 */
  if ((DAT_06dc270b & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
                    /* try { // try from 05c1946c to 05d1947b has its CatchHandler @ 05c19568 */
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    DAT_06dc270b = 1;
  }
                    /* try { // try from 05c19484 to 05d19487 has its CatchHandler @ 05c19580 */
                    /* try { // try from 05c19488 to 05d1952b has its CatchHandler @ 05c19158 */
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)puVar1;
  LeanTween__value((undefined8 *)(param_1 + 0xa8));
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_05ced5b8(*(long *)(param_1 + 0x90),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,0);
    *(undefined1 *)(param_1 + 0xe0) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


