/*
FUNCTION_NAME: FUN_069a66e4
ENTRY_POINT: 069a66e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_069a66e4(long param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  ulong local_38;
  
  if ((DAT_0755b837 & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetStateMachine__
                );
    FUN_03188a78(PTR_DAT_070f0e50);
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    DAT_0755b837 = 1;
  }
  puVar1 = PTR_DAT_070f0e50;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (param_3 == 0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      local_40 = param_3 + 0x20;
      local_38 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    }
    uVar2 = FUN_04ae61a8(&local_40,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_069ea1bc(&local_50,uVar2,local_38 & 0xffffffff,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if (DAT_0755b970 == (code *)0x0) {
      DAT_0755b970 = (code *)FUN_03188a3c(
                                         "UnityEngine.Material::SetVectorArrayImpl_Injected(System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)"
                                         );
    }
    (*DAT_0755b970)(lVar3,param_2,&local_50,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


