/*
FUNCTION_NAME: FUN_03226bb8
ENTRY_POINT: 03226bb8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_14;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_03226bb8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar8 = System_Action<ZipArchiveEntry>_TypeInfo;
  puVar7 = System_Action<XRNodeState>_TypeInfo;
  puVar6 = System_Action<XRInputSubsystem>_TypeInfo;
  puVar5 = System_Action<XRHand>_TypeInfo;
  puVar4 = System_Action<WitRequest>_TypeInfo;
  puVar3 = System_Action<VisualElement>_TypeInfo;
  puVar2 = System_Action<VectorImageRenderInfo>_TypeInfo;
  puVar1 = System_Action<VFXOutputEventArgs>_TypeInfo;
  if ((DAT_076dcfa6 & 1) == 0) {
    thunk_FUN_032e1da0(System_Action<VFXOutputEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<VectorImageRenderInfo>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<XRInputSubsystem>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<VisualElement>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<WitRequest>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<XRHand>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<float3>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<Allocator2D_Row>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<BestFitAllocator_Block>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<DebugUI_Panel>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<InputAction_CallbackContext>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<InputStateHistory_Record>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<OVRColocationSession_Data>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Action<PointableCanvasModule_Pointer>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<XRNodeState>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<ZipArchiveEntry>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<UserAvatarElement_AvatarListItemAction>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<XRInputModalityManager_InputMode>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<List<OVRAnchor>,_int>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<byte[],_string>_TypeInfo);
    DAT_076dcfa6 = 1;
  }
  *(undefined8 *)(param_2 + 0x10) = *param_1;
  *(undefined8 *)(param_2 + 0x18) = param_1[1];
  uVar9 = thunk_FUN_032a6948(param_1[2],*(undefined8 *)puVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[2],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x20),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[3],*(undefined8 *)puVar2);
  *(undefined8 *)(param_2 + 0x28) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[3],*(undefined8 *)puVar2);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x28),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[4],*(undefined8 *)puVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[4],*(undefined8 *)puVar3);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x30),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[5],*(undefined8 *)puVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[5],*(undefined8 *)puVar4);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x38),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[6],*(undefined8 *)puVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[6],*(undefined8 *)puVar5);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x40),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[7],*(undefined8 *)puVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[7],*(undefined8 *)puVar6);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x48),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[8],*(undefined8 *)puVar7);
  *(undefined8 *)(param_2 + 0x50) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[8],*(undefined8 *)puVar7);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x50),uVar9);
  puVar1 = System_Action<DebugUI_Field<int>,_int>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[9],
                             *(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo);
  *(undefined8 *)(param_2 + 0x58) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[9],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x58),uVar9);
  puVar1 = System_Action<DebugUI_Field<Object>,_Object>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[10],
                             *(undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
  *(undefined8 *)(param_2 + 0x60) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[10],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x60),uVar9);
  puVar1 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0xb],
                             *(undefined8 *)System_Action<XRInputModalityManager_InputMode>_TypeInfo
                            );
  *(undefined8 *)(param_2 + 0x68) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0xb],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x68),uVar9);
  puVar1 = System_Action<UserAvatarElement_AvatarListItemAction>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0xc],
                             *(undefined8 *)
                              System_Action<UserAvatarElement_AvatarListItemAction>_TypeInfo);
  *(undefined8 *)(param_2 + 0x70) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0xc],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x70),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[0xd],*(undefined8 *)puVar8);
  *(undefined8 *)(param_2 + 0x78) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0xd],*(undefined8 *)puVar8);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x78),uVar9);
  uVar9 = thunk_FUN_032a6948(param_1[0xe],*(undefined8 *)puVar8);
  *(undefined8 *)(param_2 + 0x80) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0xe],*(undefined8 *)puVar8);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x80),uVar9);
  puVar1 = System_Action<DebugUI_Field<bool>,_bool>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0xf],
                             *(undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
  *(undefined8 *)(param_2 + 0x88) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0xf],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x88),uVar9);
  puVar1 = System_Action<List<OVRAnchor>,_int>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x10],
                             *(undefined8 *)System_Action<List<OVRAnchor>,_int>_TypeInfo);
  *(undefined8 *)(param_2 + 0x90) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x10],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x90),uVar9);
  puVar1 = System_Action<byte[],_string>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x11],*(undefined8 *)System_Action<byte[],_string>_TypeInfo);
  *(undefined8 *)(param_2 + 0x98) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x11],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x98),uVar9);
  puVar1 = System_Action<BestFitAllocator_Block>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x12],
                             *(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo);
  *(undefined8 *)(param_2 + 0xa0) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x12],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xa0),uVar9);
  puVar1 = System_Action<Allocator2D_Row>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x13],*(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo);
  *(undefined8 *)(param_2 + 0xa8) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x13],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xa8),uVar9);
  puVar1 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x14],
                             *(undefined8 *)
                              System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
  *(undefined8 *)(param_2 + 0xb0) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x14],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xb0),uVar9);
  puVar1 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x15],
                             *(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
  *(undefined8 *)(param_2 + 0xb8) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x15],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xb8),uVar9);
  puVar1 = System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x16],
                             *(undefined8 *)
                              System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo
                            );
  *(undefined8 *)(param_2 + 0xc0) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x16],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xc0),uVar9);
  puVar1 = System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x17],
                             *(undefined8 *)
                              System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo
                            );
  *(undefined8 *)(param_2 + 200) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x17],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 200),uVar9);
  puVar1 = System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x18],
                             *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo
                            );
  *(undefined8 *)(param_2 + 0xd0) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x18],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xd0),uVar9);
  puVar1 = System_Action<DynamicAtlas_TextureInfo>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x19],
                             *(undefined8 *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
  *(undefined8 *)(param_2 + 0xd8) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x19],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xd8),uVar9);
  puVar1 = System_Action<InputAction_CallbackContext>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x1a],
                             *(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo);
  *(undefined8 *)(param_2 + 0xe0) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x1a],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xe0),uVar9);
  puVar1 = System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x1b],
                             *(undefined8 *)
                              System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
  *(undefined8 *)(param_2 + 0xe8) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x1b],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xe8),uVar9);
  puVar1 = System_Action<OVRColocationSession_Data>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x1c],
                             *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo);
  *(undefined8 *)(param_2 + 0xf0) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x1c],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xf0),uVar9);
  puVar1 = System_Action<PointableCanvasModule_Pointer>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x1d],
                             *(undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo);
  *(undefined8 *)(param_2 + 0xf8) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x1d],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0xf8),uVar9);
  puVar1 = System_Action<InputStateHistory_Record>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x1e],
                             *(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo);
  *(undefined8 *)(param_2 + 0x100) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x1e],*(undefined8 *)puVar1);
  thunk_FUN_0333a630(param_2 + 0x100,uVar9);
  puVar1 = System_Action<DebugUI_Panel>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x1f],*(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo);
  *(undefined8 *)(param_2 + 0x108) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x1f],*(undefined8 *)puVar1);
  thunk_FUN_0333a630(param_2 + 0x108,uVar9);
  puVar1 = System_Action<float3>_TypeInfo;
  uVar9 = thunk_FUN_032a6948(param_1[0x20],*(undefined8 *)System_Action<float3>_TypeInfo);
  *(undefined8 *)(param_2 + 0x110) = uVar9;
  uVar9 = thunk_FUN_032a6948(param_1[0x20],*(undefined8 *)puVar1);
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x110),uVar9);
  return;
}


