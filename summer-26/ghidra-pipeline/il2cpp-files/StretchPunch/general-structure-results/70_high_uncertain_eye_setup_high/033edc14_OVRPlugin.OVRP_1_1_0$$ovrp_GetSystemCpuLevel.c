/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 033edc14
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(void)

{
  int iVar1;
  uint uVar2;
  uint in_w8;
  int iVar3;
  long lVar4;
  int in_w9;
  uint uVar5;
  int *unaff_x19;
  undefined4 unaff_w20;
  uint uVar6;
  ulong unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  uVar5 = 0;
  uVar6 = (uint)unaff_x21;
  if (uVar6 != 0) {
    uVar5 = in_w8 / uVar6;
  }
  iVar3 = in_w8 - uVar5 * uVar6;
  unaff_x19[1] = uVar5;
  if (in_w9 != 0 || iVar3 != 0) {
    iVar1 = 0;
    if (unaff_x21 != 0) {
      iVar1 = (int)(CONCAT44(iVar3,in_w9) / unaff_x21);
    }
    unaff_x19[3] = iVar1;
    iVar3 = in_w9 - uVar6 * iVar1;
  }
  uVar5 = unaff_x19[2];
  if (uVar5 != 0 || iVar3 != 0) {
                    /* try { // try from 033edc4c to 034edc4f has its CatchHandler @ 033edfb8 */
    uVar2 = 0;
    if (unaff_x21 != 0) {
      uVar2 = (uint)(CONCAT44(iVar3,uVar5) / unaff_x21);
    }
    iVar3 = uVar5 - uVar6 * uVar2;
    unaff_x19[2] = uVar2;
    uVar5 = uVar2;
  }
  switch(unaff_w20) {
  case 0:
    if (((uint)((uVar5 & 1) != 0 || unaff_w23 != 0) | iVar3 << 1) <= uVar6) {
      return;
    }
    break;
  case 1:
    if ((uint)(iVar3 * 2) < uVar6) {
      return;
    }
    break;
  case 2:
    goto switchD_033edcd8_caseD_2;
  case 3:
    if (iVar3 == 0 && unaff_w23 == 0) {
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
    if (iVar3 == 0 && unaff_w23 == 0) {
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
  lVar4 = *(long *)(unaff_x19 + 2);
  *(long *)(unaff_x19 + 2) = lVar4 + 1;
  if (lVar4 == -1) {
    unaff_x19[1] = unaff_x19[1] + 1;
  }
switchD_033edcd8_caseD_2:
  return;
}


