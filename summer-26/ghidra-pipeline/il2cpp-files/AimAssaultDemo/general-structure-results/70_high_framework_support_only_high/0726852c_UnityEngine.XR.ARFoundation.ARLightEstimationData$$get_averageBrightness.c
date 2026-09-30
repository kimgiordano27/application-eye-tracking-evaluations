/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARLightEstimationData$$get_averageBrightness
ENTRY_POINT: 0726852c
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


void UnityEngine_XR_ARFoundation_ARLightEstimationData__get_averageBrightness(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
                    /* try { // try from 0726852c to 0736859b has its CatchHandler @ 072682f4 */
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(lVar2 + 0x160) = unaff_x20;
  thunk_FUN_037aeb94(lVar2 + 0x160);
  FUN_03eeb060();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x168) == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 07268520 with catch @ 0726857c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072684fc with catch @ 07268580
                        */
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072684e0 with catch @ 07268584
                        */
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
                    /* try { // try from 0726859c to 0736859f has its CatchHandler @ 072685d4 */
                    /* try { // try from 072685a0 to 073685e3 has its CatchHandler @ 072682f4 */
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
    FUN_044b8028(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x168) = uVar1;
                    /* catch() { ... } // from try @ 0726859c with catch @ 072685d4 */
    thunk_FUN_037aeb94(lVar2 + 0x168,uVar1);
  }
  FUN_03eea390();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RayfireDebris>_TypeInfo);
    FUN_044b8660(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x170) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x170,uVar1);
  }
  FUN_03eeb394();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PositionType>_TypeInfo
                              );
    FUN_044b12ec(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x178) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x178,uVar1);
  }
  FUN_03eb8ae4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
    FUN_044b1aa8(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x180) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x180,uVar1);
  }
  FUN_03eb9e1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<ShaderTagId>_TypeInfo)
    ;
    FUN_044b16f4(uVar1,uVar3,
                 *(undefined8 *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x188) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x188,uVar1);
  }
  FUN_03eb9480();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
    FUN_044b1d20(uVar1,uVar3,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 400) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 400,uVar1);
  }
  FUN_03eba484();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RenderGraph>_TypeInfo)
    ;
    FUN_044b1830(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x198) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x198,uVar1);
  }
  FUN_03eb97b4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
    FUN_044b1e5c(uVar1,uVar3,
                 *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x1a0,uVar1);
  }
  FUN_03eba7b8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
    FUN_044b196c(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x1a8,uVar1);
  }
  FUN_03eb9ae8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_044b879c(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x1b0,uVar1);
  }
  FUN_03eeb6c8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
    FUN_044b91bc(uVar1,uVar3,*(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x1b8,uVar1);
  }
  FUN_03eecd34();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SpriteGlyph>_TypeInfo)
    ;
    FUN_044b92f8(uVar1,uVar3,*(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x1c0,uVar1);
  }
  FUN_03eed068();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
    FUN_044b9434(uVar1,uVar3,
                 *(undefined8 *)
                  OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x1c8,uVar1);
  }
  FUN_03eed39c();
  return;
}


