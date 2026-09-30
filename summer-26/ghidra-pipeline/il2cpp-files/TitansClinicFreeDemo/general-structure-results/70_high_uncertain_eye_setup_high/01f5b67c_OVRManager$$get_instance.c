/*
FUNCTION_NAME: OVRManager$$get_instance
ENTRY_POINT: 01f5b67c
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


bool OVRManager__get_instance(void)

{
  int iVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (in_NG == in_OV) {
    iVar7 = 0;
    bVar5 = false;
    iVar11 = 0;
    iVar8 = -1;
    iVar9 = -1;
    iVar10 = -1;
    do {
      uVar3 = FUN_01e60d24();
      iVar1 = iVar11;
      if (uVar3 < 0x27) {
        if (uVar3 == 0x22) {
LAB_01f5b764:
          if (!bVar5) {
LAB_01f5b768:
            bVar5 = true;
            goto LAB_01f5b770;
          }
        }
        else {
          if (uVar3 == 0x25) goto LAB_01f5b75c;
LAB_01f5b6c4:
          if (bVar5) goto LAB_01f5b768;
        }
        if (uVar3 == 0x4d) {
          iVar9 = iVar7;
          do {
            iVar7 = iVar9;
            if (*(int *)(unaff_x20 + 0x10) <= iVar7 + 1) break;
            sVar4 = FUN_01e60d24();
            iVar9 = iVar7 + 1;
          } while (sVar4 == 0x4d);
          bVar5 = false;
          iVar1 = iVar11 + 1;
          iVar9 = iVar11;
        }
        else if (uVar3 == 0x79) {
          iVar10 = iVar7;
          do {
            iVar7 = iVar10;
            if (*(int *)(unaff_x20 + 0x10) <= iVar7 + 1) break;
            sVar4 = FUN_01e60d24();
            iVar10 = iVar7 + 1;
          } while (sVar4 == 0x79);
          bVar5 = false;
          iVar1 = iVar11 + 1;
          iVar10 = iVar11;
        }
        else if (uVar3 == 100) {
          if ((iVar7 + 1 < *(int *)(unaff_x20 + 0x10)) && (sVar4 = FUN_01e60d24(), sVar4 == 100)) {
            iVar2 = 2;
            do {
              iVar12 = iVar2;
              if (*(int *)(unaff_x20 + 0x10) <= iVar7 + iVar12) break;
              sVar4 = FUN_01e60d24();
              iVar2 = iVar12 + 1;
            } while (sVar4 == 100);
            iVar7 = iVar7 + iVar12 + -1;
          }
          else {
            iVar12 = 1;
          }
          if (iVar12 < 3) {
            iVar1 = iVar11 + 1;
          }
          bVar5 = false;
          if (iVar12 < 3) {
            iVar8 = iVar11;
          }
        }
        else {
          bVar5 = false;
        }
      }
      else {
        if (uVar3 == 0x27) goto LAB_01f5b764;
        if (uVar3 != 0x5c) goto LAB_01f5b6c4;
LAB_01f5b75c:
        iVar7 = iVar7 + 1;
      }
LAB_01f5b770:
      iVar11 = iVar1;
    } while ((iVar11 < 3) && (iVar7 = iVar7 + 1, iVar7 < *(int *)(unaff_x20 + 0x10)));
  }
  else {
    iVar10 = -1;
    iVar9 = -1;
    iVar8 = -1;
  }
  if ((iVar8 == 2) && ((iVar9 == 1 && (iVar10 == 0)))) {
    uVar6 = 0;
  }
  else {
    if ((iVar8 != 1) || ((iVar9 != 0 || (iVar10 != 2)))) {
      if ((iVar8 == 0) && ((iVar9 == 1 && (iVar10 == 2)))) {
        bVar5 = true;
        uVar6 = 2;
      }
      else {
        bVar5 = iVar9 == 2 && (iVar8 == 1 && iVar10 == 0);
        uVar6 = 3;
        if (iVar9 != 2 || (iVar8 != 1 || iVar10 != 0)) {
          uVar6 = 0xffffffff;
        }
      }
      goto LAB_01f5b880;
    }
    uVar6 = 1;
  }
  bVar5 = true;
LAB_01f5b880:
  *unaff_x19 = uVar6;
  return bVar5;
}


