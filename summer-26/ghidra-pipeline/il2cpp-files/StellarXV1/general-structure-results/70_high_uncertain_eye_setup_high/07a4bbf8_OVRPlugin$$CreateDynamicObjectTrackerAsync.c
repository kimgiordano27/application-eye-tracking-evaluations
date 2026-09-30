/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 07a4bbf8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__CreateDynamicObjectTrackerAsync(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 in_ZR;
  long lVar5;
  uint unaff_w19;
  int *unaff_x20;
  byte unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w25;
  int iVar6;
  int unaff_w26;
  
code_r0x07a4bbf8:
  iVar6 = unaff_w26;
  if ((bool)in_ZR) goto LAB_07a4bc0c;
LAB_07a4bc1c:
  while( true ) {
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 5) goto LAB_07a4bc38;
    iVar4 = unaff_x20[4];
    iVar6 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    unaff_w25 = 1 << (ulong)(unaff_w22 & 0x1f) & unaff_w19;
    if (1 < (int)unaff_w22) break;
    if ((unaff_w22 != 0) && (iVar6 = iVar2, unaff_w22 != 1)) goto LAB_07a4bb44;
LAB_07a4bb58:
    lVar5 = *unaff_x23;
    if (iVar6 != 2) goto LAB_07a4bbac;
    iVar6 = unaff_x20[5];
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((iVar6 == 1) && (unaff_w25 == 0)) {
      unaff_w21 = 0;
      goto LAB_07a4bc38;
    }
    iVar6 = unaff_x20[5];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    unaff_w21 = unaff_w21 | unaff_w25 != 0;
    if ((unaff_w25 != 0) && (iVar6 == 0)) {
      unaff_w21 = 1;
LAB_07a4bc38:
      return unaff_w21 & 1;
    }
  }
  iVar6 = iVar1;
  if (((unaff_w22 == 2) || (iVar6 = iVar3, unaff_w22 == 3)) || (iVar6 = iVar4, unaff_w22 == 4))
  goto LAB_07a4bb58;
LAB_07a4bb44:
  lVar5 = *unaff_x23;
LAB_07a4bbac:
  iVar1 = *unaff_x20;
  unaff_w26 = unaff_x20[1];
  iVar2 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  iVar6 = unaff_x20[4];
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((int)unaff_w22 < 2) {
    iVar6 = iVar1;
    if (unaff_w22 != 0) goto code_r0x07a4bbf4;
  }
  else if (((unaff_w22 != 4) && (iVar6 = iVar3, unaff_w22 != 3)) && (iVar6 = iVar2, unaff_w22 != 2))
  goto LAB_07a4bc1c;
LAB_07a4bc0c:
  unaff_w21 = unaff_w21 | (iVar6 == 1 && unaff_w25 != 0);
  goto LAB_07a4bc1c;
code_r0x07a4bbf4:
  in_ZR = unaff_w22 == 1;
  goto code_r0x07a4bbf8;
}


