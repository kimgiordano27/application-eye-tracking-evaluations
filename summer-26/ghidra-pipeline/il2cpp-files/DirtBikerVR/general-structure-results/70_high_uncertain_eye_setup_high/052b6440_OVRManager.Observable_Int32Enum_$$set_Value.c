/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$set_Value
ENTRY_POINT: 052b6440
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager_Observable<Int32Enum>__set_Value(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  if ((*param_1 & 1) == 0) {
    FUN_03ac4090(param_3);
  }
  plVar2 = (long *)thunk_FUN_03ac73c0();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (plVar2 == (long *)0x0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar3);
    }
    plVar2 = (long *)thunk_FUN_03ac73c0();
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_052b65e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar2,lVar3,0);
LAB_052b65e0:
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
  }
  else {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_052b6598;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar2,lVar3,0);
LAB_052b6598:
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
  }
  uVar1 = (*pcVar7)(plVar2,uVar5);
  in_stack_00000008 = 0;
  FUN_0529a878(&stack0x00000008,uVar1,*(undefined8 *)PTR_DAT_08491c30);
  return in_stack_00000008;
}


