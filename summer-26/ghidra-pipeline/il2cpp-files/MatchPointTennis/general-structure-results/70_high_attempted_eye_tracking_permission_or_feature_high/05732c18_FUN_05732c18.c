/*
FUNCTION_NAME: FUN_05732c18
ENTRY_POINT: 05732c18
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05732c18(undefined8 param_1,long param_2,long param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_09f1e5b8;
  local_24 = 0;
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar2 = thunk_FUN_0448520c();
    puVar1 = PTR_DAT_09f261e8;
  }
  else {
    if (param_3 != 0) {
      if (3 < param_4) {
        local_24 = System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
                             (param_1,param_2,
                              *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
        FUN_094b5338(param_3,&local_24,4,0);
        return;
      }
      local_28 = param_4;
      uVar2 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&local_28);
      local_2c = 4;
      uVar3 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&local_2c);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f28ae8);
      uVar3 = FUN_078b5afc(uVar4,uVar2,uVar3,0);
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar2 = thunk_FUN_0448520c();
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f28a58);
      FUN_07996d40(uVar2,uVar3,uVar4,0);
      goto LAB_05732d64;
    }
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar2 = thunk_FUN_0448520c();
    puVar1 = PTR_DAT_09f28ae0;
  }
  uVar3 = thunk_FUN_044adef4(puVar1);
  FUN_07996cc8(uVar2,uVar3,0);
LAB_05732d64:
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,param_5);
}


