/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 063956b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceComponentStatusInternal(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  short sVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int unaff_w19;
  long unaff_x20;
  
  do {
    if (*(int *)(param_1 + 0x10) <= (int)param_2) {
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar8 = thunk_FUN_037788cc();
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6738);
      FUN_062d6d20(uVar8,uVar9,0);
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6740);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar8,uVar9);
    }
    sVar4 = FUN_060bb390(param_1,param_2,0);
    puVar3 = PTR_DAT_07d86548;
    if (sVar4 == 0x5c) {
      param_1 = *(long *)(unaff_x20 + 0x10);
      if (param_1 == 0) break;
      iVar2 = *(int *)(unaff_x20 + 0x20);
      uVar1 = iVar2 + 2;
      if (*(int *)(param_1 + 0x10) <= iVar2 + 1) {
        uVar1 = iVar2 + 1;
      }
    }
    else {
      if (sVar4 == 0x2f) goto LAB_06395714;
      param_1 = *(long *)(unaff_x20 + 0x10);
      uVar1 = *(int *)(unaff_x20 + 0x20) + 1;
    }
    param_2 = (ulong)uVar1;
    *(uint *)(unaff_x20 + 0x20) = uVar1;
  } while (param_1 != 0);
  goto LAB_0639578c;
  while( true ) {
    if (*(int *)(lVar6 + 0x10) <= iVar2) goto LAB_0639576c;
    uVar5 = FUN_060bb390(lVar6,iVar2,0);
    if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(puVar3 + 0x88));
    }
    uVar7 = FUN_061ae240(uVar5,0);
    if ((uVar7 & 1) == 0) break;
LAB_06395714:
    lVar6 = *(long *)(unaff_x20 + 0x10);
    iVar2 = *(int *)(unaff_x20 + 0x20) + 1;
    *(int *)(unaff_x20 + 0x20) = iVar2;
    if (lVar6 == 0) goto LAB_0639578c;
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 != 0) {
LAB_0639576c:
    FUN_060c316c(lVar6,unaff_w19,*(int *)(unaff_x20 + 0x20) - unaff_w19,0);
    return;
  }
LAB_0639578c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


