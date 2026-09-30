/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 060e358c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetSpaceComponentStatusInternal(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar6;
  uint unaff_w19;
  int *unaff_x20;
  byte unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  int iVar7;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      unaff_w29 = unaff_w28;
      if ((unaff_w22 != 0) && (unaff_w29 = unaff_w26, unaff_w22 != 1)) goto LAB_060e35c0;
LAB_060e35d4:
      lVar6 = *unaff_x23;
      if (unaff_w29 != 2) goto LAB_060e3628;
      iVar2 = unaff_x20[5];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((iVar2 == 1) && (unaff_w25 == 0)) {
        unaff_w21 = 0;
LAB_060e36b4:
        return unaff_w21 & 1;
      }
      iVar2 = unaff_x20[5];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      unaff_w21 = unaff_w21 | unaff_w25 != 0;
      if ((unaff_w25 != 0) && (iVar2 == 0)) {
        unaff_w21 = 1;
        goto LAB_060e36b4;
      }
    }
    else {
      if ((unaff_w22 == 2) ||
         ((unaff_w29 = unaff_w24, unaff_w22 == 3 || (unaff_w29 = unaff_w27, unaff_w22 == 4))))
      goto LAB_060e35d4;
LAB_060e35c0:
      lVar6 = *unaff_x23;
LAB_060e3628:
      iVar2 = *unaff_x20;
      iVar4 = unaff_x20[1];
      iVar3 = unaff_x20[2];
      iVar5 = unaff_x20[3];
      iVar7 = unaff_x20[4];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((int)unaff_w22 < 2) {
        iVar7 = iVar2;
        if ((unaff_w22 == 0) || (iVar7 = iVar4, unaff_w22 == 1)) goto LAB_060e3688;
      }
      else if ((unaff_w22 == 4) ||
              ((iVar7 = iVar5, unaff_w22 == 3 || (iVar7 = iVar3, unaff_w22 == 2)))) {
LAB_060e3688:
        unaff_w21 = unaff_w21 | (iVar7 == 1 && unaff_w25 != 0);
      }
    }
    uVar1 = unaff_w22 + 1;
    if (uVar1 == 5) goto LAB_060e36b4;
    unaff_w27 = unaff_x20[4];
    unaff_w28 = *unaff_x20;
    unaff_w26 = unaff_x20[1];
    unaff_w29 = unaff_x20[2];
    unaff_w24 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    in_OV = SBORROW4(uVar1,1);
    in_NG = (int)unaff_w22 < 0;
    in_ZR = uVar1 == 1;
    unaff_w25 = 1 << (ulong)(uVar1 & 0x1f) & unaff_w19;
    unaff_w22 = uVar1;
  } while( true );
}


