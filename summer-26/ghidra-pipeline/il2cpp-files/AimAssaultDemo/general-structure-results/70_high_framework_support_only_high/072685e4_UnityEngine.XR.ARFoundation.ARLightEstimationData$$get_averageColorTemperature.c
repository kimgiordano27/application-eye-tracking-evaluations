/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARLightEstimationData$$get_averageColorTemperature
ENTRY_POINT: 072685e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARFoundation_ARLightEstimationData__get_averageColorTemperature
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
                    /* try { // try from 072685e4 to 073685eb has its CatchHandler @ 07268600 */
  FUN_03eea390(param_1,param_2,0);
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RayfireDebris>_TypeInfo);
    FUN_044b8660(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x170,uVar2);
  }
  FUN_03eeb394();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PositionType>_TypeInfo
                              );
    FUN_044b12ec(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x178,uVar2);
  }
  FUN_03eb8ae4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
    FUN_044b1aa8(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x180,uVar2);
  }
  FUN_03eb9e1c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<ShaderTagId>_TypeInfo)
    ;
    FUN_044b16f4(uVar2,uVar3,
                 *(undefined8 *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x188,uVar2);
  }
  FUN_03eb9480();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
    FUN_044b1d20(uVar2,uVar3,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 400,uVar2);
  }
  FUN_03eba484();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RenderGraph>_TypeInfo)
    ;
    FUN_044b1830(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x198,uVar2);
  }
  FUN_03eb97b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
    FUN_044b1e5c(uVar2,uVar3,
                 *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x1a0,uVar2);
  }
  FUN_03eba7b8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
    FUN_044b196c(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x1a8,uVar2);
  }
  FUN_03eb9ae8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_044b879c(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x1b0,uVar2);
  }
  FUN_03eeb6c8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
    FUN_044b91bc(uVar2,uVar3,*(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x1b8,uVar2);
  }
  FUN_03eecd34();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SpriteGlyph>_TypeInfo)
    ;
    FUN_044b92f8(uVar2,uVar3,*(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x1c0,uVar2);
  }
  FUN_03eed068();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
    FUN_044b9434(uVar2,uVar3,
                 *(undefined8 *)
                  OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_037aeb94(lVar1 + 0x1c8,uVar2);
  }
  FUN_03eed39c();
  return;
}


