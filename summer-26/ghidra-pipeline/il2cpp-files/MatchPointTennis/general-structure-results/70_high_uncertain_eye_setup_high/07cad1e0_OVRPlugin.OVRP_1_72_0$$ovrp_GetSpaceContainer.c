/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceContainer
ENTRY_POINT: 07cad1e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer
          (undefined4 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000028;
  
  puVar3 = PTR_DAT_09f511b8;
  if ((DAT_0a526aac & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f511b8);
    DAT_0a526aac = 1;
  }
  in_stack_00000028 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a526ad1 == '\0') {
    FUN_04447ba8(PTR_DAT_09f511b8);
    DAT_0a526ad1 = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar5 = *(long *)puVar3;
  }
  if (*(int *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + 0x18);
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = iVar2 + 1;
      }
      iVar1 = iVar1 >> 1;
      if ((param_4 & 1) == 0) {
        iVar1 = iVar2;
      }
      in_stack_00000028 = FUN_0795714c(param_2,3,0);
      uVar6 = System_Type__GetRootElementType(&stack0x00000028,0);
      if ((param_3 != 0) && (lVar5 = *(long *)(param_3 + 0x18), lVar5 != 0)) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar4 = FUN_07cac47c(param_1,uVar6,iVar1,param_4 & 1,param_3 + 0x10,param_3 + 0x14,lVar5,
                             *(undefined4 *)(lVar5 + 0x18));
        FUN_07957160(&stack0x00000028,0);
        return uVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return 0xfffff768;
}


