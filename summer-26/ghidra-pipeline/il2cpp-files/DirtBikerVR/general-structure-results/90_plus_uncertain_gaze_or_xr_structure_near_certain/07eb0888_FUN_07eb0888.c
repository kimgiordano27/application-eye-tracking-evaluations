/*
FUNCTION_NAME: FUN_07eb0888
ENTRY_POINT: 07eb0888
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined4 FUN_07eb0888(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 local_34;
  undefined8 local_28;
  
  if ((DAT_0899ac23 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionManager_<CreateOrJoinAsync>d__16>__
                );
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_0899ac23 = 1;
  }
  local_28 = 0;
  local_34 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    auVar4 = FUN_04e919b0(*(long *)(param_1 + 0x10),*(int *)(param_1 + 0x40) + param_3,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionManager_<CreateOrJoinAsync>d__16>__
                         );
    local_28 = auVar4._8_8_;
    lVar2 = auVar4._0_8_;
    iVar1 = FUN_07e2ed04(&local_28,0);
    if (iVar1 == 1) {
      if (lVar2 == 0) goto LAB_07eb0990;
      uVar3 = FUN_07e2ece8(lVar2,local_28,0);
      uVar3 = FUN_07e318a4(uVar3,0);
    }
    else {
      if (lVar2 == 0) goto LAB_07eb0990;
      uVar3 = FUN_07e2f0d8(lVar2,local_28,0);
    }
    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07ea7830(param_2,uVar3,&local_34,0);
    return local_34;
  }
LAB_07eb0990:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


