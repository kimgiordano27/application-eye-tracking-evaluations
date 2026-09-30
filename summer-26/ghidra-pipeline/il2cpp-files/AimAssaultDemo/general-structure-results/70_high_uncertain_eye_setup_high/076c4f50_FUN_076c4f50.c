/*
FUNCTION_NAME: FUN_076c4f50
ENTRY_POINT: 076c4f50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_076c4f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_08271418 & 1) == 0) {
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_0373b518(PTR_DAT_07dbeea8);
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                );
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08271418 = 1;
  }
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_075ac5e0(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_075ac5e0(param_2,0,0);
    puVar1 = PTR_DAT_07dbeea8;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_07dbeea8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar3 = FUN_076c8f3c();
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_076c5138;
      System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                (*(long *)(lVar3 + 0x10),param_1,&local_28,
                 *(undefined8 *)Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
      if (local_28 == 0) {
        lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                    Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                                  );
        FUN_046340bc(lVar3,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                    );
        local_28 = lVar3;
        if (lVar3 == 0) {
LAB_076c5138:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_0463378c(lVar3,param_2,
                     *(undefined8 *)
                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                    );
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar3 = FUN_076c8f3c();
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_076c5138;
        FUN_05b0f700(*(long *)(lVar3 + 0x10),param_1,local_28,
                     *(undefined8 *)
                      Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                    );
      }
      else {
        FUN_04633890(local_28,param_2,1,
                     *(undefined8 *)
                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                    );
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
      }
      FUN_076c43a0(param_1,param_2);
    }
  }
  return;
}


