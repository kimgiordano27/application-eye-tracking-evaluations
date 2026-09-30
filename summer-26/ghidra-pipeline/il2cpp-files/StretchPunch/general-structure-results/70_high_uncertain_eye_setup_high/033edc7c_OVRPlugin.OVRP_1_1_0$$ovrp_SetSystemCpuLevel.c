/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetSystemCpuLevel
ENTRY_POINT: 033edc7c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetSystemCpuLevel(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int *unaff_x19;
  undefined4 unaff_w20;
  uint uVar4;
  ulong unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  
  uVar2 = 0;
  if (unaff_x21 != 0) {
    uVar2 = unaff_x24 / unaff_x21;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(ulong *)(unaff_x19 + 2) = uVar2;
  uVar4 = (uint)unaff_x21;
  iVar1 = (int)unaff_x24 - (int)uVar2 * uVar4;
                    /* try { // try from 033edc98 to 034edc9f has its CatchHandler @ 033edfb4 */
                    /* try { // try from 033edcc0 to 034edcc7 has its CatchHandler @ 033edf80 */
                    /* try { // try from 033edcd0 to 034edcd7 has its CatchHandler @ 033edf78 */
  switch(unaff_w20) {
  case 0:
                    /* try { // try from 033edce4 to 034edceb has its CatchHandler @ 033edf6c */
    if (((uint)((uVar2 & 1) != 0 || unaff_w23 != 0) | iVar1 * 2) <= uVar4) {
      return;
    }
    break;
  case 1:
    if ((uint)(iVar1 * 2) < uVar4) {
      return;
    }
    break;
  case 2:
    goto switchD_033edcd8_caseD_2;
  case 3:
    if (iVar1 == 0 && unaff_w23 == 0) {
      return;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (-1 < *unaff_x19) {
      return;
    }
    break;
  default:
    if (iVar1 == 0 && unaff_w23 == 0) {
      return;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (*unaff_x19 < 0) {
      return;
    }
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar3 = *(long *)(unaff_x19 + 2);
  *(long *)(unaff_x19 + 2) = lVar3 + 1;
  if (lVar3 == -1) {
    unaff_x19[1] = unaff_x19[1] + 1;
  }
switchD_033edcd8_caseD_2:
  return;
}


