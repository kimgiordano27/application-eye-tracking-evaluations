/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 01f5b6d4
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


bool OVRManager__set_instance(void)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  uint in_w8;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar6;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int iVar7;
  
  do {
    if (in_w8 == 0x79) {
      do {
        iVar6 = unaff_w21;
        unaff_w21 = iVar6 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
        sVar3 = FUN_01e60d24();
      } while (sVar3 == 0x79);
      bVar4 = false;
      iVar1 = unaff_w26 + 1;
      unaff_w25 = unaff_w26;
    }
    else {
      iVar1 = unaff_w26;
      if (in_w8 == 100) {
        if ((unaff_w21 + 1 < *(int *)(unaff_x20 + 0x10)) && (sVar3 = FUN_01e60d24(), sVar3 == 100))
        {
          iVar6 = 2;
          do {
            iVar7 = iVar6;
            if (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + iVar7) break;
            sVar3 = FUN_01e60d24();
            iVar6 = iVar7 + 1;
          } while (sVar3 == 100);
          unaff_w21 = unaff_w21 + iVar7 + -1;
        }
        else {
          iVar7 = 1;
        }
        if (iVar7 < 3) {
          iVar1 = unaff_w26 + 1;
        }
        bVar4 = false;
        iVar6 = unaff_w21;
        if (iVar7 < 3) {
          unaff_w23 = unaff_w26;
        }
      }
      else {
        bVar4 = false;
        iVar6 = unaff_w21;
      }
    }
LAB_01f5b770:
    unaff_w26 = iVar1;
    if ((2 < unaff_w26) || (unaff_w21 = iVar6 + 1, *(int *)(unaff_x20 + 0x10) <= unaff_w21)) {
      if ((unaff_w23 == 2) && ((unaff_w24 == 1 && (unaff_w25 == 0)))) {
        uVar5 = 0;
      }
      else {
        if ((unaff_w23 != 1) || ((unaff_w24 != 0 || (unaff_w25 != 2)))) {
          if ((unaff_w23 == 0) && ((unaff_w24 == 1 && (unaff_w25 == 2)))) {
            bVar4 = true;
            uVar5 = 2;
          }
          else {
            bVar4 = unaff_w24 == 2 && (unaff_w23 == 1 && unaff_w25 == 0);
            uVar5 = 3;
            if (unaff_w24 != 2 || (unaff_w23 != 1 || unaff_w25 != 0)) {
              uVar5 = 0xffffffff;
            }
          }
          goto LAB_01f5b880;
        }
        uVar5 = 1;
      }
      bVar4 = true;
LAB_01f5b880:
      *unaff_x19 = uVar5;
      return bVar4;
    }
    uVar2 = FUN_01e60d24();
    iVar1 = unaff_w26;
    if (0x26 < uVar2) {
      if (uVar2 == 0x27) {
LAB_01f5b764:
        if (bVar4) goto LAB_01f5b6c8;
LAB_01f5b768:
        bVar4 = true;
        iVar6 = unaff_w21;
      }
      else {
        if (uVar2 != 0x5c) goto LAB_01f5b6c4;
LAB_01f5b75c:
        iVar6 = iVar6 + 2;
      }
      goto LAB_01f5b770;
    }
    if (uVar2 == 0x22) goto LAB_01f5b764;
    if (uVar2 == 0x25) goto LAB_01f5b75c;
LAB_01f5b6c4:
    if (bVar4) goto LAB_01f5b768;
LAB_01f5b6c8:
    in_w8 = (uint)uVar2;
  } while (in_w8 != 0x4d);
  do {
    iVar6 = unaff_w21;
    unaff_w21 = iVar6 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
    sVar3 = FUN_01e60d24();
  } while (sVar3 == 0x4d);
  bVar4 = false;
  iVar1 = unaff_w26 + 1;
  unaff_w24 = unaff_w26;
  goto LAB_01f5b770;
}


