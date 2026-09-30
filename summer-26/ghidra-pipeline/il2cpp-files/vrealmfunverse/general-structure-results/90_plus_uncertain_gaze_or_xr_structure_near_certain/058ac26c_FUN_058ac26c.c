/*
FUNCTION_NAME: FUN_058ac26c
ENTRY_POINT: 058ac26c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_058ac26c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06313630;
  if ((DAT_066d31e0 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_get_Task__);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__)
    ;
    FUN_02b3c81c(Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask<bool[]>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_ContinueWith__);
    FUN_02b3c81c(Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_SetResult__);
    DAT_066d31e0 = 1;
  }
  lVar2 = FUN_02b3c908(*(undefined8 *)puVar1,7);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)
            Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) =
             *(undefined8 *)Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_ContinueWith__;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) =
                 *(undefined8 *)Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_SetResult__;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)Method_OVRTask<bool[]>_GetAwaiter__;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) =
                     *(undefined8 *)
                      Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__
                ;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x48));
                puVar1 = Method_OVRTaskBuilder<bool>_get_Task__;
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_GetAwaiter__;
                  thunk_FUN_02bb0e9c();
                  **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar2);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


