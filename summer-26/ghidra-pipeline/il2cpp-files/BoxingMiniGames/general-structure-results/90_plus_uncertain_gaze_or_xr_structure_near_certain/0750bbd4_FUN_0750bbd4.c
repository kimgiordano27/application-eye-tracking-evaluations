/*
FUNCTION_NAME: FUN_0750bbd4
ENTRY_POINT: 0750bbd4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0750bbd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = 
  Method_OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__
  ;
  if ((DAT_07ef4afe & 1) == 0) {
    FUN_03642964(PTR_DAT_079fdb30);
    FUN_03642964(Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_03642964(
                Method_OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                );
    FUN_03642964(
                Method_OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__
                );
    FUN_03642964(Method_OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_GetAwaiter__);
    FUN_03642964(Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__);
    DAT_07ef4afe = 1;
  }
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_036b7ad0((long *)(lVar3 + 0x10),param_1);
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x18),param_2);
    iVar2 = FUN_07508ad4(param_1,0);
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        uVar4 = FUN_074ef718(0);
        uVar6 = thunk_FUN_036aa1c8(
                                  Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar4,uVar6);
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      uVar4 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb30);
      FUN_04164968(uVar4,lVar3,
                   *(undefined8 *)
                    Method_OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                   ,0);
LAB_0750bdb0:
      FUN_07509278(param_1,uVar6,uVar4,0);
      return;
    }
    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__);
    FUN_05e5ae34(lVar5,0);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0x18);
      *plVar7 = lVar3;
      thunk_FUN_036b7ad0(plVar7,lVar3);
      if ((*plVar7 != 0) && (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) {
        uVar4 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(*plVar7 + 0x18),
                           *(undefined8 *)(lVar3 + 0x28));
        uVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                    Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
        FUN_0752a3e4(uVar6,uVar4,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
        thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x10),uVar6);
        if (*(long *)(lVar5 + 0x18) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18);
          uVar4 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb30);
          FUN_04164968(uVar4,lVar5,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_GetAwaiter__,0)
          ;
          goto LAB_0750bdb0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


