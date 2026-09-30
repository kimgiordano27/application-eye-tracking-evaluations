/*
FUNCTION_NAME: OVRManager$$get_profile
ENTRY_POINT: 01f5ba1c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRManager__get_profile(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w23;
  int unaff_w24;
  ulong unaff_x25;
  int unaff_w26;
  int iVar6;
  
  do {
    while( true ) {
      iVar6 = unaff_w26;
      if ((1 < iVar6) || (iVar1 = unaff_w21 + 1, *(int *)(unaff_x20 + 0x10) <= iVar1)) {
        uVar5 = 5;
        if (unaff_w24 != 0 || unaff_w23 != 1) {
          uVar5 = 0xffffffff;
        }
        uVar2 = 4;
        if (unaff_w24 != 1 || unaff_w23 != 0) {
          uVar2 = uVar5;
        }
        *unaff_x19 = uVar2;
        return unaff_w24 == 1 && unaff_w23 == 0 || unaff_w24 == 0 && unaff_w23 == 1;
      }
      uVar3 = FUN_01e60d24();
      unaff_w26 = iVar6;
      if (0x26 < uVar3) break;
      if (uVar3 == 0x22) goto LAB_01f5b9d4;
      if (uVar3 == 0x25) goto LAB_01f5b9cc;
LAB_01f5b960:
      if ((unaff_x25 & 1) == 0) goto OVRManager__get_runtimeSettings;
LAB_01f5b9d8:
      unaff_x25 = 1;
      unaff_w21 = iVar1;
    }
    if (uVar3 == 0x27) {
LAB_01f5b9d4:
      if ((unaff_x25 & 1) == 0) goto LAB_01f5b9d8;
OVRManager__get_runtimeSettings:
      if (uVar3 == 0x4d) {
        do {
          unaff_w21 = iVar1;
          iVar1 = unaff_w21 + 1;
          if (*(int *)(unaff_x20 + 0x10) <= iVar1) break;
          sVar4 = FUN_01e60d24();
        } while (sVar4 == 0x4d);
        unaff_x25 = 0;
        unaff_w26 = iVar6 + 1;
        unaff_w24 = iVar6;
      }
      else if (uVar3 == 0x79) {
        do {
          unaff_w21 = iVar1;
          iVar1 = unaff_w21 + 1;
          if (*(int *)(unaff_x20 + 0x10) <= iVar1) break;
          sVar4 = FUN_01e60d24();
        } while (sVar4 == 0x79);
        unaff_x25 = 0;
        unaff_w26 = iVar6 + 1;
        unaff_w23 = iVar6;
      }
      else {
        unaff_x25 = 0;
        unaff_w21 = iVar1;
      }
    }
    else {
      if (uVar3 != 0x5c) goto LAB_01f5b960;
LAB_01f5b9cc:
      unaff_w21 = unaff_w21 + 2;
    }
  } while( true );
}


