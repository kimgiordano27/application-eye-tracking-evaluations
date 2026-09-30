/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVSyncCount
ENTRY_POINT: 063b202c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVSyncCount(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
                    /* try { // try from 063b204c to 064b205f has its CatchHandler @ 063b2198 */
      plVar2 = (long *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      *plVar2 = unaff_x19;
      thunk_FUN_037aeb94(plVar2);
    }
    else {
                    /* try { // try from 063b2064 to 064b2067 has its CatchHandler @ 063b2194 */
      FUN_049ceef4();
    }
                    /* try { // try from 063b2074 to 064b2077 has its CatchHandler @ 063b218c */
    if (unaff_x19 != 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
                    /* try { // try from 063b207c to 064b207f has its CatchHandler @ 063b2184 */
      thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x10));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


