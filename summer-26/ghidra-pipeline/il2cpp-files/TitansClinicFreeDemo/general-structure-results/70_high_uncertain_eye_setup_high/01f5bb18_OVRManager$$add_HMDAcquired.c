/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 01f5bb18
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_HMDAcquired(ushort param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 in_ZR;
  short sVar3;
  undefined4 uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int iVar5;
  int iVar6;
  
code_r0x01f5bb18:
  if ((bool)in_ZR) goto LAB_01f5bbac;
LAB_01f5bb1c:
  iVar5 = unaff_w25;
  if ((unaff_x22 & 1) != 0) goto LAB_01f5bbb8;
  do {
    if (param_1 == 0x4d) {
      iVar6 = unaff_w21;
      do {
        unaff_w21 = iVar6;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + 1) break;
        sVar3 = FUN_01e60d24();
        iVar6 = unaff_w21 + 1;
      } while (sVar3 == 0x4d);
      unaff_x22 = 0;
      unaff_w25 = iVar5 + 1;
      unaff_w24 = iVar5;
    }
    else {
      unaff_w25 = iVar5;
      if (param_1 == 100) {
        if ((unaff_w21 + 1 < *(int *)(unaff_x20 + 0x10)) && (sVar3 = FUN_01e60d24(), sVar3 == 100))
        {
          iVar2 = 2;
          do {
            iVar6 = iVar2;
            if (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + iVar6) break;
            sVar3 = FUN_01e60d24();
            iVar2 = iVar6 + 1;
          } while (sVar3 == 100);
          unaff_w21 = unaff_w21 + iVar6 + -1;
        }
        else {
          iVar6 = 1;
        }
        if (iVar6 < 3) {
          unaff_w25 = iVar5 + 1;
        }
        unaff_x22 = 0;
        if (iVar6 < 3) {
          unaff_w23 = iVar5;
        }
      }
      else {
        unaff_x22 = 0;
      }
    }
LAB_01f5bc0c:
    while( true ) {
      if ((1 < unaff_w25) || (unaff_w21 = unaff_w21 + 1, *(int *)(unaff_x20 + 0x10) <= unaff_w21)) {
        uVar4 = 7;
        if (unaff_w23 != 0 || unaff_w24 != 1) {
          uVar4 = 0xffffffff;
        }
        uVar1 = 6;
        if (unaff_w23 != 1 || unaff_w24 != 0) {
          uVar1 = uVar4;
        }
        *unaff_x19 = uVar1;
        return unaff_w23 == 1 && unaff_w24 == 0 || unaff_w23 == 0 && unaff_w24 == 1;
      }
      param_1 = FUN_01e60d24();
      if (param_1 < 0x27) break;
      if (param_1 == 0x27) goto LAB_01f5bbb4;
      if (param_1 != 0x5c) goto LAB_01f5bb1c;
LAB_01f5bbac:
      unaff_w21 = unaff_w21 + 1;
    }
    if (param_1 != 0x22) {
      in_ZR = param_1 == 0x25;
      goto code_r0x01f5bb18;
    }
LAB_01f5bbb4:
    iVar5 = unaff_w25;
  } while ((unaff_x22 & 1) != 0);
LAB_01f5bbb8:
  unaff_x22 = 1;
  goto LAB_01f5bc0c;
}


