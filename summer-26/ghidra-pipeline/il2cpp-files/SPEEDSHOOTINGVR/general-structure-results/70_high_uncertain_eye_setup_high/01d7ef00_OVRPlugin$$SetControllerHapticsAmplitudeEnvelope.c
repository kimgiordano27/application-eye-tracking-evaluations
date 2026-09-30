/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 01d7ef00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsAmplitudeEnvelope
               (ulong param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234ba30);
                    /* try { // try from 01d7ef20 to 01e7ef23 has its CatchHandler @ 01d7f08c */
    FUN_00fdc2e4(PTR_DAT_0234def8);
    *(undefined1 *)(unaff_x22 + 1999) = 1;
  }
  *param_3 = 0;
  thunk_FUN_0106e12c(param_3,0);
                    /* try { // try from 01d7ef44 to 01e7ef4b has its CatchHandler @ 01d7f074 */
  *param_4 = 0;
  thunk_FUN_0106e12c(param_4,0);
  if (param_2 == 0) {
    return;
  }
  iVar3 = FUN_01c55278(param_2,*(undefined8 *)PTR_DAT_0234def8,4,0);
  if (iVar3 == -1) {
                    /* try { // try from 01d7efe8 to 01e7efeb has its CatchHandler @ 01d7f05c */
    *param_3 = param_2;
                    /* try { // try from 01d7eff0 to 01e7eff7 has its CatchHandler @ 01d7f058 */
  }
  else {
                    /* try { // try from 01d7ef88 to 01e7ef8b has its CatchHandler @ 01d7f088 */
    lVar4 = FUN_01c52818(param_2,0,iVar3,0);
    *param_4 = lVar4;
    thunk_FUN_0106e12c(param_4,lVar4);
    puVar2 = PTR_DAT_0234ba30;
    if (*param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
                    /* try { // try from 01d7efb4 to 01e7efbb has its CatchHandler @ 01d7f06c */
    iVar1 = *(int *)(param_2 + 0x10) + ~*(uint *)(*param_4 + 0x10);
    if (iVar1 == 0) {
                    /* try { // try from 01d7eff8 to 01e7f027 has its CatchHandler @ 01d7eea0 */
      *param_3 = *(long *)PTR_DAT_0234ba30;
      param_2 = *(long *)puVar2;
    }
    else {
                    /* try { // try from 01d7efc4 to 01e7efcb has its CatchHandler @ 01d7f068 */
      param_2 = FUN_01c52818(param_2,iVar3 + 1,iVar1,0);
      *param_3 = param_2;
    }
  }
  thunk_FUN_0106e12c(param_3,param_2);
  return;
}


