/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 01f5b964
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_runtimeSettings(ushort param_1)

{
  undefined4 uVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar5;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int iVar6;
  
code_r0x01f5b964:
  if (param_1 == 0x4d) {
    do {
      iVar5 = unaff_w21;
      unaff_w21 = iVar5 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
      sVar3 = FUN_01e60d24();
    } while (sVar3 == 0x4d);
    bVar2 = false;
    iVar6 = unaff_w24 + 1;
    unaff_w21 = iVar5;
    unaff_w22 = unaff_w24;
  }
  else if (param_1 == 0x79) {
    do {
      iVar5 = unaff_w21;
      unaff_w21 = iVar5 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
      sVar3 = FUN_01e60d24();
    } while (sVar3 == 0x79);
    bVar2 = false;
    iVar6 = unaff_w24 + 1;
    unaff_w21 = iVar5;
    unaff_w23 = unaff_w24;
  }
  else {
    bVar2 = false;
    iVar6 = unaff_w24;
  }
LAB_01f5ba2c:
  do {
    if ((1 < iVar6) || (iVar5 = unaff_w21 + 1, *(int *)(unaff_x20 + 0x10) <= iVar5)) {
      uVar4 = 5;
      if (unaff_w22 != 0 || unaff_w23 != 1) {
        uVar4 = 0xffffffff;
      }
      uVar1 = 4;
      if (unaff_w22 != 1 || unaff_w23 != 0) {
        uVar1 = uVar4;
      }
      *unaff_x19 = uVar1;
      return unaff_w22 == 1 && unaff_w23 == 0 || unaff_w22 == 0 && unaff_w23 == 1;
    }
    param_1 = FUN_01e60d24();
    unaff_w24 = iVar6;
    if (param_1 < 0x27) {
      if (param_1 == 0x22) goto LAB_01f5b9d4;
      if (param_1 == 0x25) goto LAB_01f5b9cc;
LAB_01f5b960:
      unaff_w21 = iVar5;
      if (!bVar2) goto code_r0x01f5b964;
    }
    else {
      if (param_1 != 0x27) {
        if (param_1 != 0x5c) goto LAB_01f5b960;
LAB_01f5b9cc:
        unaff_w21 = unaff_w21 + 2;
        goto LAB_01f5ba2c;
      }
LAB_01f5b9d4:
      unaff_w21 = iVar5;
      if (bVar2) goto code_r0x01f5b964;
    }
    bVar2 = true;
    unaff_w21 = iVar5;
  } while( true );
}


