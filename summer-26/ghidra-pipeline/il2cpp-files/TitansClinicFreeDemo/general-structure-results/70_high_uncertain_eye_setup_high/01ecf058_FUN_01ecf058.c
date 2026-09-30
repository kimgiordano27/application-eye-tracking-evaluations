/*
FUNCTION_NAME: FUN_01ecf058
ENTRY_POINT: 01ecf058
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_01ecf058(long param_1,long param_2,ulong param_3,long param_4,undefined1 *param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x90) == param_2) {
    *param_5 = 0;
    lVar4 = *(long *)(param_1 + 0x98);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
LAB_01ecf134:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(plVar2 + 2) = iVar1;
    if (param_4 == 0) {
      *(int *)(param_1 + 0x20) = iVar1 + 1;
    }
    else {
      uVar3 = OVRPlugin__set_tiledMultiResLevel(param_4,0);
      if (((uVar3 & 1) != 0) && ((param_3 & 1) == 0)) {
        *param_5 = 0;
        iVar1 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        return (long)-iVar1;
      }
      plVar2 = *(long **)(param_1 + 0x18);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if (plVar2 == (long *)0x0) goto LAB_01ecf134;
    }
    lVar4 = (**(code **)(*plVar2 + 0x178))(plVar2,param_2,param_5,*(undefined8 *)(*plVar2 + 0x180));
    *(long *)(param_1 + 0x90) = param_2;
    thunk_FUN_01286abc((long *)(param_1 + 0x90),param_2);
    *(long *)(param_1 + 0x98) = lVar4;
  }
  return lVar4;
}


