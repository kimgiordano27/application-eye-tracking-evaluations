/*
FUNCTION_NAME: FUN_076c5824
ENTRY_POINT: 076c5824
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_076c5824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_0827141c & 1) == 0) {
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_0373b518(PTR_DAT_07dbeea8);
    FUN_0373b518(Method_UnityEngine_Awaitable_Awaiter<Result<XRAnchor>>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__);
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_0827141c = 1;
  }
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075ac5e0(param_1,0,0);
  puVar1 = PTR_DAT_07dbeea8;
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_07dbeea8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = FUN_076c8f3c();
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    uVar3 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                      (*(long *)(lVar4 + 0x10),param_1,&local_28,
                       *(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((local_28 != 0) &&
       (FUN_046339b4(local_28,param_2,
                     *(undefined8 *)
                      Method_UnityEngine_Awaitable_Awaiter<Result<XRAnchor>>_get_IsCompleted__),
       local_28 != 0)) {
      iVar2 = FUN_04633bb0(local_28,*(undefined8 *)
                                     Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__
                          );
      if (iVar2 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar4 = FUN_076c8f3c();
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_076c59a0;
        FUN_05b10be4(*(long *)(lVar4 + 0x10),param_1,
                     *(undefined8 *)
                      Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                    );
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_076c8fec(param_1,param_2);
      return;
    }
  }
LAB_076c59a0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


