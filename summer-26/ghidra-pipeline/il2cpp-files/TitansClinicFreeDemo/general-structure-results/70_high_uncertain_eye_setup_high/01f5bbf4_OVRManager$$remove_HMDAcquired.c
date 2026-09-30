/*
FUNCTION_NAME: OVRManager$$remove_HMDAcquired
ENTRY_POINT: 01f5bbf4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_HMDAcquired(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar7;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int iVar8;
  int iVar9;
  
  do {
    bVar2 = false;
LAB_01f5bc0c:
    while( true ) {
      iVar8 = unaff_w26;
      if ((1 < iVar8) || (iVar7 = unaff_w24 + 1, *(int *)(unaff_x20 + 0x10) <= iVar7)) {
        uVar6 = 7;
        if (unaff_w23 != 0 || unaff_w25 != 1) {
          uVar6 = 0xffffffff;
        }
        uVar1 = 6;
        if (unaff_w23 != 1 || unaff_w25 != 0) {
          uVar1 = uVar6;
        }
        *unaff_x19 = uVar1;
        return unaff_w23 == 1 && unaff_w25 == 0 || unaff_w23 == 0 && unaff_w25 == 1;
      }
      uVar4 = FUN_01e60d24();
      unaff_w26 = iVar8;
      if (0x26 < uVar4) break;
      if (uVar4 == 0x22) goto LAB_01f5bbb4;
      if (uVar4 == 0x25) goto LAB_01f5bbac;
LAB_01f5bb1c:
      if (!bVar2) goto LAB_01f5bb20;
LAB_01f5bbb8:
      bVar2 = true;
      unaff_w24 = iVar7;
    }
    if (uVar4 != 0x27) {
      if (uVar4 != 0x5c) goto LAB_01f5bb1c;
LAB_01f5bbac:
      unaff_w24 = unaff_w24 + 2;
      goto LAB_01f5bc0c;
    }
LAB_01f5bbb4:
    if (!bVar2) goto LAB_01f5bbb8;
LAB_01f5bb20:
    if (uVar4 != 0x4d) {
      if (uVar4 == 100) {
        if ((unaff_w24 + 2 < *(int *)(unaff_x20 + 0x10)) && (sVar5 = FUN_01e60d24(), sVar5 == 100))
        {
          iVar3 = 2;
          do {
            iVar9 = iVar3;
            if (*(int *)(unaff_x20 + 0x10) <= iVar7 + iVar9) break;
            sVar5 = FUN_01e60d24();
            iVar3 = iVar9 + 1;
          } while (sVar5 == 100);
          iVar7 = iVar7 + iVar9 + -1;
        }
        else {
          iVar9 = 1;
        }
        if (iVar9 < 3) {
          unaff_w26 = iVar8 + 1;
        }
        bVar2 = false;
        unaff_w24 = iVar7;
        if (iVar9 < 3) {
          unaff_w23 = iVar8;
        }
      }
      else {
        bVar2 = false;
        unaff_w24 = iVar7;
      }
      goto LAB_01f5bc0c;
    }
    unaff_w26 = iVar8 + 1;
    do {
      unaff_w24 = iVar7;
      unaff_w25 = iVar8;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w24 + 1) break;
      sVar5 = FUN_01e60d24();
      iVar7 = unaff_w24 + 1;
    } while (sVar5 == 0x4d);
  } while( true );
}


