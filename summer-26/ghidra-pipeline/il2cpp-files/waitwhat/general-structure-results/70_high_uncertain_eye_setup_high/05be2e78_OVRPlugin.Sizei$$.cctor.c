/*
FUNCTION_NAME: OVRPlugin.Sizei$$.cctor
ENTRY_POINT: 05be2e78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_Sizei___cctor(void)

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
  int unaff_w28;
  
code_r0x05be2e78:
  iVar6 = unaff_w28;
  if ((bool)in_ZR) goto LAB_05be2ea0;
LAB_05be2eb0:
  while( true ) {
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 5) goto LAB_05be2ecc;
    iVar4 = unaff_x20[4];
    iVar6 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    unaff_w25 = 1 << (ulong)(unaff_w22 & 0x1f) & unaff_w19;
    if (1 < (int)unaff_w22) break;
    if ((unaff_w22 != 0) && (iVar6 = iVar2, unaff_w22 != 1)) goto FUN_05be2dd8;
LAB_05be2dec:
    lVar5 = *unaff_x23;
    if (iVar6 != 2) goto LAB_05be2e40;
    iVar6 = unaff_x20[5];
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if ((iVar6 == 1) && (unaff_w25 == 0)) {
      unaff_w21 = 0;
      goto LAB_05be2ecc;
    }
    iVar6 = unaff_x20[5];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    unaff_w21 = unaff_w21 | unaff_w25 != 0;
    if ((unaff_w25 != 0) && (iVar6 == 0)) {
      unaff_w21 = 1;
LAB_05be2ecc:
      return unaff_w21 & 1;
    }
  }
  iVar6 = iVar1;
  if (((unaff_w22 == 2) || (iVar6 = iVar3, unaff_w22 == 3)) || (iVar6 = iVar4, unaff_w22 == 4))
  goto LAB_05be2dec;
FUN_05be2dd8:
  lVar5 = *unaff_x23;
LAB_05be2e40:
  iVar1 = *unaff_x20;
  iVar2 = unaff_x20[1];
  unaff_w28 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  iVar6 = unaff_x20[4];
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if ((int)unaff_w22 < 2) {
    iVar6 = iVar1;
    if ((unaff_w22 != 0) && (iVar6 = iVar2, unaff_w22 != 1)) goto LAB_05be2eb0;
  }
  else if ((unaff_w22 != 4) && (iVar6 = iVar3, unaff_w22 != 3)) goto code_r0x05be2e74;
LAB_05be2ea0:
  unaff_w21 = unaff_w21 | (iVar6 == 1 && unaff_w25 != 0);
  goto LAB_05be2eb0;
code_r0x05be2e74:
  in_ZR = unaff_w22 == 2;
  goto code_r0x05be2e78;
}


