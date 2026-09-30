/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 01d7d838
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int unaff_w25;
  long unaff_x26;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x26 + 0xac8);
  thunk_FUN_0106e12c(param_2,param_1);
  uVar3 = FUN_01ca1f10();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  thunk_FUN_0106e12c();
  uVar3 = FUN_01ca1f10();
  puVar7 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar7 = uVar3;
  thunk_FUN_0106e12c(puVar7,uVar3);
  uVar3 = FUN_01ca1f10();
  puVar8 = (undefined8 *)(unaff_x20 + 0x48);
  *puVar8 = uVar3;
  thunk_FUN_0106e12c(puVar8,uVar3);
  uVar2 = FUN_01ca1ab4();
  *(undefined4 *)(unaff_x20 + 0x50) = uVar2;
  uVar2 = FUN_01ca1ab4();
  *(undefined4 *)(unaff_x20 + 0x60) = uVar2;
  uVar3 = FUN_01ca1f10();
  *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
  thunk_FUN_0106e12c();
  FUN_01d5e86c(*puVar9,0);
  plVar4 = (long *)System_ValueType__GetHashCode();
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
  }
  else {
    lVar6 = *(long *)PTR_DAT_02358f58;
    plVar1 = plVar4;
    if (*plVar4 != lVar6) {
      plVar1 = (long *)0x0;
    }
    *(long **)(unaff_x20 + 0x70) = plVar1;
    if (*plVar4 != lVar6) {
      plVar4 = (long *)0x0;
    }
  }
  thunk_FUN_0106e12c(unaff_x20 + 0x70,plVar4);
  if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
    if (unaff_w25 != 0x80) {
      return;
    }
    uVar3 = FUN_01c45a74(*puVar8,*puVar7,0);
    *puVar8 = uVar3;
    thunk_FUN_0106e12c(puVar8,uVar3);
    *puVar7 = 0;
    thunk_FUN_0106e12c(puVar7,0);
    return;
  }
  uVar3 = thunk_FUN_010303a8(PTR_DAT_02353b00);
  thunk_FUN_010303a8(PTR_DAT_0234d110);
  uVar5 = thunk_FUN_010400dc();
  FUN_01c96740(uVar5,uVar3,0);
  uVar3 = thunk_FUN_010303a8(PTR_DAT_02358fb0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,uVar3);
}


