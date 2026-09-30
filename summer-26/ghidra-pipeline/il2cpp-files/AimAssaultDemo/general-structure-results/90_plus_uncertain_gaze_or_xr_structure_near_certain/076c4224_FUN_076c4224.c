/*
FUNCTION_NAME: FUN_076c4224
ENTRY_POINT: 076c4224
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_076c4224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_0827141b & 1) == 0) {
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_0373b518(PTR_DAT_07dbeea8);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_0827141b = 1;
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
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
        uVar2 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                          (*(long *)(lVar3 + 0x18),param_1,&local_28,
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if ((local_28 != 0) &&
           (System_Array_InternalEnumerator<XRReferenceObject>__System_Collections_IEnumerator_get_Current
                      (local_28,param_2,
                       *(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__),
           local_28 != 0)) {
          if (*(int *)(local_28 + 0x20) != 0) {
            return;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar3 = FUN_076c8f3c();
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
            FUN_05b10be4(*(long *)(lVar3 + 0x18),param_1,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                        );
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  return;
}


