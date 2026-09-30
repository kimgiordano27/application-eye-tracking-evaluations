/*
FUNCTION_NAME: FUN_0386fe00
ENTRY_POINT: 0386fe00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0386fe00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar3 = Method_OVRPermissionsRequester_GetPermissionId__;
  puVar2 = PTR_DAT_042315d8;
  puVar1 = PTR_DAT_04230940;
  if ((DAT_045393c4 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04230940);
    FUN_01c5d288(Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__);
    FUN_01c5d288(Method_UnityEngine_UIElements_GroupBoxUtility_OnGroupBoxDetachedFromPanel__);
    FUN_01c5d288(PTR_DAT_042315d8);
    FUN_01c5d288(Method_OVRPermissionsRequester_GetPermissionId__);
    DAT_045393c4 = 1;
  }
  uVar4 = FUN_03152fb8(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar2,0
                      );
  plVar5 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03160c7c(plVar5,uVar4,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0x28) + 0x10)) {
      if (plVar5 == (long *)0x0) goto LAB_0386ff70;
      FUN_0315ab48(plVar5,*(undefined8 *)
                           Method_UnityEngine_UIElements_GroupBoxUtility_OnGroupBoxDetachedFromPanel__
                   ,0);
      FUN_0315ab48(plVar5,*(undefined8 *)(param_1 + 0x28),0);
      FUN_0315ab48(plVar5,*(undefined8 *)puVar2,0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x10) < 1) {
        if (plVar5 == (long *)0x0) goto LAB_0386ff70;
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_0386ff70;
        FUN_0315ab48(plVar5,*(undefined8 *)
                             Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__
                     ,0);
        FUN_0315ab48(plVar5,*(undefined8 *)(param_1 + 0x30),0);
        FUN_0315ab48(plVar5,*(undefined8 *)puVar2,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0386ff6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
LAB_0386ff70:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


