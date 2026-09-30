/*
FUNCTION_NAME: OVRManager$$set_display
ENTRY_POINT: 01f5b794
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_display(void)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar5;
  int unaff_w21;
  int unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int iVar6;
  int unaff_w27;
  int iVar7;
  
code_r0x01f5b794:
  iVar5 = unaff_w21;
  unaff_w21 = iVar5 + 1;
  if (unaff_w21 < *(int *)(unaff_x20 + 0x10)) goto code_r0x01f5b7a8;
  goto LAB_01f5b7c4;
code_r0x01f5b7a8:
  sVar2 = FUN_01e60d24();
  if (sVar2 != 0x4d) {
LAB_01f5b7c4:
    bVar3 = false;
LAB_01f5b770:
    iVar6 = unaff_w27;
    if ((2 < iVar6) || (unaff_w21 = iVar5 + 1, *(int *)(unaff_x20 + 0x10) <= unaff_w21)) {
      if ((unaff_w23 == 2) && ((unaff_w26 == 1 && (unaff_w25 == 0)))) {
        uVar4 = 0;
      }
      else {
        if ((unaff_w23 != 1) || ((unaff_w26 != 0 || (unaff_w25 != 2)))) {
          if ((unaff_w23 == 0) && ((unaff_w26 == 1 && (unaff_w25 == 2)))) {
            bVar3 = true;
            uVar4 = 2;
          }
          else {
            bVar3 = unaff_w26 == 2 && (unaff_w23 == 1 && unaff_w25 == 0);
            uVar4 = 3;
            if (unaff_w26 != 2 || (unaff_w23 != 1 || unaff_w25 != 0)) {
              uVar4 = 0xffffffff;
            }
          }
          goto LAB_01f5b880;
        }
        uVar4 = 1;
      }
      bVar3 = true;
LAB_01f5b880:
      *unaff_x19 = uVar4;
      return bVar3;
    }
    uVar1 = FUN_01e60d24();
    unaff_w27 = iVar6;
    if (0x26 < uVar1) {
      if (uVar1 == 0x27) goto LAB_01f5b764;
      if (uVar1 != 0x5c) goto LAB_01f5b6c4;
LAB_01f5b75c:
      iVar5 = iVar5 + 2;
      goto LAB_01f5b770;
    }
    if (uVar1 == 0x22) {
LAB_01f5b764:
      if (!bVar3) {
LAB_01f5b768:
        bVar3 = true;
        iVar5 = unaff_w21;
        goto LAB_01f5b770;
      }
    }
    else {
      if (uVar1 == 0x25) goto LAB_01f5b75c;
LAB_01f5b6c4:
      if (bVar3) goto LAB_01f5b768;
    }
    if (uVar1 != 0x4d) {
      if (uVar1 == 0x79) {
        do {
          iVar5 = unaff_w21;
          unaff_w21 = iVar5 + 1;
          if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
          sVar2 = FUN_01e60d24();
        } while (sVar2 == 0x79);
        bVar3 = false;
        unaff_w27 = iVar6 + 1;
        unaff_w25 = iVar6;
      }
      else if (uVar1 == 100) {
        if ((iVar5 + 2 < *(int *)(unaff_x20 + 0x10)) && (sVar2 = FUN_01e60d24(), sVar2 == 100)) {
          iVar5 = 2;
          do {
            iVar7 = iVar5;
            if (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + iVar7) break;
            sVar2 = FUN_01e60d24();
            iVar5 = iVar7 + 1;
          } while (sVar2 == 100);
          unaff_w21 = unaff_w21 + iVar7 + -1;
        }
        else {
          iVar7 = 1;
        }
        if (iVar7 < 3) {
          unaff_w27 = iVar6 + 1;
        }
        bVar3 = false;
        iVar5 = unaff_w21;
        if (iVar7 < 3) {
          unaff_w23 = iVar6;
        }
      }
      else {
        bVar3 = false;
        iVar5 = unaff_w21;
      }
      goto LAB_01f5b770;
    }
    unaff_w27 = iVar6 + 1;
    unaff_w26 = iVar6;
  }
  goto code_r0x01f5b794;
}


