/*
FUNCTION_NAME: FUN_058d1f88
ENTRY_POINT: 058d1f88
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_058d1f88(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_06b80ac6 & 1) == 0) {
    FUN_02d6084c(OVRManager_CompositionMethod_TypeInfo);
    DAT_06b80ac6 = 1;
  }
  puVar2 = OVRManager_CompositionMethod_TypeInfo;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  if (param_2 != 0) {
    *(long *)(param_1 + 6) = param_2;
    thunk_FUN_02dd37b4(param_1 + 6,param_2);
    FUN_058d20a0(&local_58);
    FUN_0345b42c(param_2,&local_58,*(undefined8 *)puVar2);
    *(undefined2 *)((long)param_1 + 6) = 0;
    *param_1 = (undefined4)local_50;
    *(undefined2 *)(param_1 + 1) = local_50._4_2_;
    *(undefined8 *)(param_1 + 2) = local_48;
    param_1[4] = local_40;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_02dc61f4(PTR_DAT_06764070);
  uVar3 = thunk_FUN_02d9d534();
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067683f0);
  FUN_04f77010(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02dc61f4(OVRManager_EventListener_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar4);
}


