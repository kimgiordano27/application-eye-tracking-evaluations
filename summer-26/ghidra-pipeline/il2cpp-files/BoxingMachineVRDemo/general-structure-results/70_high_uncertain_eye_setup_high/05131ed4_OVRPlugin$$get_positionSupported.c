/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 05131ed4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  if ((DAT_06b79c6d & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767a28);
    FUN_02d6084c(PTR_DAT_06781298);
    FUN_02d6084c(PTR_DAT_067812a0);
    DAT_06b79c6d = 1;
  }
  puVar1 = PTR_DAT_06767a28;
  if (param_2 == (long *)0x0) {
LAB_05132060:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar5 = (**(code **)(*param_2 + 0x2a8))(param_2,param_3,*(undefined8 *)(*param_2 + 0x2b0));
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
  }
  uVar6 = FUN_050d7290(uVar5,0);
  puVar3 = PTR_DAT_067812a0;
  puVar2 = PTR_DAT_06781298;
  if ((uVar6 & 1) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    do {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_05132060;
      iVar4 = FUN_04387650(*(long *)(param_1 + 0x58),*(undefined8 *)puVar2);
      if (iVar4 <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0513205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x228))(param_2,param_3,*(undefined8 *)(*param_2 + 0x230));
        return;
      }
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (plVar7 = (long *)FUN_043876e0(*(long *)(param_1 + 0x58),iVar9,*(undefined8 *)puVar3),
         plVar7 == (long *)0x0)) goto LAB_05132060;
      uVar5 = (**(code **)(*plVar7 + 0x1f8))
                        (plVar7,param_2,param_3,param_4,*(undefined8 *)(*plVar7 + 0x200));
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar8);
      }
      uVar6 = FUN_050d7290(uVar5,0);
      iVar9 = iVar9 + 1;
    } while ((uVar6 & 1) != 0);
  }
  FUN_05132064(param_1,uVar5,iVar9,param_2,param_3,param_4);
  return;
}


