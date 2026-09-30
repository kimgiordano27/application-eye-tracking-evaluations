/*
FUNCTION_NAME: FUN_0699cf98
ENTRY_POINT: 0699cf98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0699cf98(undefined4 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_070c2638;
  if ((DAT_0755b400 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2638);
    FUN_03188a78(Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__);
    FUN_03188a78(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    DAT_0755b400 = 1;
  }
  plVar2 = (long *)FUN_03188b1c(*(undefined8 *)puVar1,3);
  puVar1 = PTR_DAT_070c1958;
  local_24 = *param_1;
  lVar3 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_24);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_031c3cac(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_0699d0fc:
    uVar5 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    local_28 = param_1[1];
    lVar3 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x48),&local_28);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_031c3cac(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_0699d0fc;
    puVar1 = Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      local_38 = *(undefined8 *)(param_1 + 2);
      lVar3 = thunk_FUN_031c39fc(*(undefined8 *)puVar1,&local_38);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_031c3cac(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_0699d0fc;
      puVar1 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        FUN_06a7bf94(*(undefined8 *)puVar1,plVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


