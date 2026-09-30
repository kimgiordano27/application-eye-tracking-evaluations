/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 01f5b904
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


bool OVRManager__set_boundary(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    iVar9 = -1;
    iVar8 = -1;
  }
  else {
    iVar7 = 0;
    bVar2 = false;
    iVar10 = 0;
    iVar8 = -1;
    iVar9 = -1;
    do {
      uVar4 = FUN_01e60d24(param_1,iVar7,0);
      iVar3 = iVar10;
      if (uVar4 < 0x27) {
        if (uVar4 == 0x22) {
LAB_01f5b9d4:
          if (!bVar2) {
LAB_01f5b9d8:
            bVar2 = true;
            goto LAB_01f5ba2c;
          }
        }
        else {
          if (uVar4 == 0x25) goto LAB_01f5b9cc;
LAB_01f5b960:
          if (bVar2) goto LAB_01f5b9d8;
        }
        if (uVar4 == 0x4d) {
          iVar8 = iVar7;
          do {
            iVar7 = iVar8;
            iVar8 = iVar7 + 1;
            if (*(int *)(param_1 + 0x10) <= iVar8) break;
            sVar5 = FUN_01e60d24(param_1,iVar8,0);
          } while (sVar5 == 0x4d);
          bVar2 = false;
          iVar3 = iVar10 + 1;
          iVar8 = iVar10;
        }
        else if (uVar4 == 0x79) {
          iVar9 = iVar7;
          do {
            iVar7 = iVar9;
            iVar9 = iVar7 + 1;
            if (*(int *)(param_1 + 0x10) <= iVar9) break;
            sVar5 = FUN_01e60d24(param_1,iVar9,0);
          } while (sVar5 == 0x79);
          bVar2 = false;
          iVar3 = iVar10 + 1;
          iVar9 = iVar10;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        if (uVar4 == 0x27) goto LAB_01f5b9d4;
        if (uVar4 != 0x5c) goto LAB_01f5b960;
LAB_01f5b9cc:
        iVar7 = iVar7 + 1;
      }
LAB_01f5ba2c:
      iVar10 = iVar3;
    } while ((iVar10 < 2) && (iVar7 = iVar7 + 1, iVar7 < *(int *)(param_1 + 0x10)));
  }
  uVar6 = 5;
  if (iVar8 != 0 || iVar9 != 1) {
    uVar6 = 0xffffffff;
  }
  uVar1 = 4;
  if (iVar8 != 1 || iVar9 != 0) {
    uVar1 = uVar6;
  }
  *param_3 = uVar1;
  return iVar8 == 1 && iVar9 == 0 || iVar8 == 0 && iVar9 == 1;
}


