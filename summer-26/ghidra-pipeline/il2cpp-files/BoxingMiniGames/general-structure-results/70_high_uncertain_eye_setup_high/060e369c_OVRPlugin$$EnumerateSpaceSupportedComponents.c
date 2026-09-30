/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 060e369c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint unaff_w19;
  int *unaff_x20;
  byte unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  int iVar6;
  int iVar7;
  
  do {
    if (unaff_w22 == 5) {
LAB_060e36b4:
      return unaff_w21 & 1;
    }
    iVar7 = unaff_x20[4];
    iVar2 = *unaff_x20;
    iVar3 = unaff_x20[1];
    iVar6 = unaff_x20[2];
    iVar4 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = 1 << (ulong)(unaff_w22 & 0x1f) & unaff_w19;
    if ((int)unaff_w22 < 2) {
      iVar6 = iVar2;
      if ((unaff_w22 != 0) && (iVar6 = iVar3, unaff_w22 != 1)) goto LAB_060e35c0;
LAB_060e35d4:
      lVar5 = *unaff_x23;
      if (iVar6 != 2) goto LAB_060e3628;
      iVar2 = unaff_x20[5];
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((iVar2 == 1) && (uVar1 == 0)) {
        unaff_w21 = 0;
        goto LAB_060e36b4;
      }
      iVar2 = unaff_x20[5];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      unaff_w21 = unaff_w21 | uVar1 != 0;
      if ((uVar1 != 0) && (iVar2 == 0)) {
        unaff_w21 = 1;
        goto LAB_060e36b4;
      }
    }
    else {
      if ((unaff_w22 == 2) || ((iVar6 = iVar4, unaff_w22 == 3 || (iVar6 = iVar7, unaff_w22 == 4))))
      goto LAB_060e35d4;
LAB_060e35c0:
      lVar5 = *unaff_x23;
LAB_060e3628:
      iVar2 = *unaff_x20;
      iVar3 = unaff_x20[1];
      iVar6 = unaff_x20[2];
      iVar4 = unaff_x20[3];
      iVar7 = unaff_x20[4];
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((int)unaff_w22 < 2) {
        iVar7 = iVar2;
        if ((unaff_w22 == 0) || (iVar7 = iVar3, unaff_w22 == 1)) goto LAB_060e3688;
      }
      else if ((unaff_w22 == 4) ||
              ((iVar7 = iVar4, unaff_w22 == 3 || (iVar7 = iVar6, unaff_w22 == 2)))) {
LAB_060e3688:
        unaff_w21 = unaff_w21 | (iVar7 == 1 && uVar1 != 0);
      }
    }
    unaff_w22 = unaff_w22 + 1;
  } while( true );
}


