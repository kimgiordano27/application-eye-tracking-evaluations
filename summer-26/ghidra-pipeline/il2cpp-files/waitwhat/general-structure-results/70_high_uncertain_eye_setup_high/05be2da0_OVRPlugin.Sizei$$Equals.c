/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 05be2da0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_Sizei__Equals(void)

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
  uint in_w8;
  uint unaff_w19;
  int *unaff_x20;
  byte unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w26;
  int iVar7;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  
  do {
                    /* catch() { ... } // from try @ 05be2d98 with catch @ 05be2da0 */
    uVar1 = in_w8 & unaff_w19;
                    /* try { // try from 05be2da4 to 05ce2dab has its CatchHandler @ 05be2db4 */
    if ((bool)in_ZR || in_NG != in_OV) {
      unaff_w29 = unaff_w28;
      if ((unaff_w22 != 0) && (unaff_w29 = unaff_w26, unaff_w22 != 1)) goto FUN_05be2dd8;
LAB_05be2dec:
      lVar6 = *unaff_x23;
      if (unaff_w29 != 2) goto LAB_05be2e40;
      iVar2 = unaff_x20[5];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if ((iVar2 == 1) && (uVar1 == 0)) {
        unaff_w21 = 0;
LAB_05be2ecc:
        return unaff_w21 & 1;
      }
      iVar2 = unaff_x20[5];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      unaff_w21 = unaff_w21 | uVar1 != 0;
      if ((uVar1 != 0) && (iVar2 == 0)) {
        unaff_w21 = 1;
        goto LAB_05be2ecc;
      }
    }
    else {
                    /* try { // try from 05be2dac to 05ce2db7 has its CatchHandler @ 05be2500 */
                    /* catch() { ... } // from try @ 05be2c48 with catch @ 05be2db4
                       catch() { ... } // from try @ 05be2c78 with catch @ 05be2db4
                       catch() { ... } // from try @ 05be2cc4 with catch @ 05be2db4
                       catch() { ... } // from try @ 05be2cf8 with catch @ 05be2db4
                       catch() { ... } // from try @ 05be2d44 with catch @ 05be2db4
                       catch() { ... } // from try @ 05be2d78 with catch @ 05be2db4
                       catch() { ... } // from try @ 05be2da4 with catch @ 05be2db4 */
      if ((unaff_w22 == 2) ||
         ((unaff_w29 = unaff_w24, unaff_w22 == 3 || (unaff_w29 = unaff_w27, unaff_w22 == 4))))
      goto LAB_05be2dec;
FUN_05be2dd8:
      lVar6 = *unaff_x23;
LAB_05be2e40:
      iVar2 = *unaff_x20;
      iVar4 = unaff_x20[1];
      iVar3 = unaff_x20[2];
      iVar5 = unaff_x20[3];
      iVar7 = unaff_x20[4];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if ((int)unaff_w22 < 2) {
        iVar7 = iVar2;
        if ((unaff_w22 == 0) || (iVar7 = iVar4, unaff_w22 == 1)) goto LAB_05be2ea0;
      }
      else if ((unaff_w22 == 4) ||
              ((iVar7 = iVar5, unaff_w22 == 3 || (iVar7 = iVar3, unaff_w22 == 2)))) {
LAB_05be2ea0:
        unaff_w21 = unaff_w21 | (iVar7 == 1 && uVar1 != 0);
      }
    }
    uVar1 = unaff_w22 + 1;
    if (uVar1 == 5) goto LAB_05be2ecc;
    unaff_w27 = unaff_x20[4];
    unaff_w28 = *unaff_x20;
    unaff_w26 = unaff_x20[1];
    unaff_w29 = unaff_x20[2];
    unaff_w24 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    in_OV = SBORROW4(uVar1,1);
    in_NG = (int)unaff_w22 < 0;
    in_ZR = uVar1 == 1;
    in_w8 = 1 << (ulong)(uVar1 & 0x1f);
    unaff_w22 = uVar1;
  } while( true );
}


