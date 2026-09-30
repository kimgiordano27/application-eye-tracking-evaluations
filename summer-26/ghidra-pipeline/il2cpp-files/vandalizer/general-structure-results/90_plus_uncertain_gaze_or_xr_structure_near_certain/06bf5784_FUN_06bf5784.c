/*
FUNCTION_NAME: FUN_06bf5784
ENTRY_POINT: 06bf5784
PROGRAM: vandalizer-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_11;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_06bf5784(long *param_1,long *param_2,undefined1 (*param_3) [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long *local_70;
  long *local_68;
  
  if ((DAT_07a4ffa1 & 1) == 0) {
    FUN_031f20f4(System_Action<AsyncOperationHandle<bool>>_TypeInfo);
    FUN_031f20f4(System_Action<AsyncOperationHandle<ContentCatalogData>>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8460);
    FUN_031f20f4(PTR_DAT_075d7f20);
    FUN_031f20f4(PTR_DAT_0759bc20);
    FUN_031f20f4(System_Action<XRInputSubsystem>_TypeInfo);
    FUN_031f20f4(System_Action<XRInputValueReader>_TypeInfo);
    FUN_031f20f4(System_Action<XRMovableBody>_TypeInfo);
    FUN_031f20f4(System_Action<XRNodeState>_TypeInfo);
    FUN_031f20f4(System_Action<float3>_TypeInfo);
    FUN_031f20f4(System_Action<Allocator2D_Row>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d71a0);
    FUN_031f20f4(System_Action<BestFitAllocator_Block>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759cd90);
    FUN_031f20f4(System_Action<DebugUI_Panel>_TypeInfo);
    FUN_031f20f4(System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
    FUN_031f20f4(System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<InputAction_CallbackContext>_TypeInfo);
    FUN_031f20f4(System_Action<InputStateHistory_Record>_TypeInfo);
    FUN_031f20f4(System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<NearFarInteractor_Region>_TypeInfo);
    FUN_031f20f4(System_Action<OVRColocationSession_Data>_TypeInfo);
    FUN_031f20f4(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759d278);
    FUN_031f20f4(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759c818);
    FUN_031f20f4(PTR_DAT_075edda8);
    FUN_031f20f4(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_031f20f4(System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo);
    FUN_031f20f4(System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo);
    FUN_031f20f4(System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075dae68);
    FUN_031f20f4(PTR_DAT_075d8458);
    FUN_031f20f4(OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var);
    DAT_07a4ffa1 = 1;
  }
  puVar1 = OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*param_1 == 0) goto LAB_06bf6884;
  lVar5 = FUN_06be77ec();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
  }
  puVar3 = System_Action<AsyncOperationHandle<ContentCatalogData>>_TypeInfo;
  if ((lVar5 == 0) ||
     (lVar6 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),
                           *(undefined8 *)
                            System_Action<AsyncOperationHandle<ContentCatalogData>>_TypeInfo),
     puVar2 = System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo,
     plVar16 = (long *)PTR_DAT_075d8458, lVar6 == 0)) goto LAB_06bf6884;
  if ((*(long **)(lVar6 + 0x10) == (long *)0x0) ||
     (**(long **)(lVar6 + 0x10) != *(long *)(PTR_DAT_0759b388 + 0x90))) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_0759d278;
    param_1 = (long *)*param_1;
    uVar14 = *(undefined8 *)puVar2;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (param_1 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    }
    uVar13 = *(undefined8 *)puVar1;
LAB_06bf5a38:
    uVar15 = FUN_05c8920c(uVar15,uVar14,uVar7,uVar13,0);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar16);
    }
    FUN_06bf0974(param_3,uVar15);
  }
  else {
    uVar15 = FUN_06be575c(lVar6);
    puVar2 = PTR_DAT_075d7f20;
    if (*(int *)(*(long *)PTR_DAT_075d7f20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_075d7f20);
    }
    uVar8 = FUN_06bd3850(uVar15,&local_68,0);
    if ((uVar8 & 1) == 0) {
      lVar9 = *param_1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar8 = FUN_06bf6c08(lVar9);
      if ((uVar8 & 1) == 0) {
        uVar14 = *(undefined8 *)*param_3;
        uVar7 = *(undefined8 *)(*param_3 + 8);
        uVar15 = FUN_05c88a70(*(undefined8 *)System_Action<XRNodeState>_TypeInfo,uVar15,
                              *(undefined8 *)PTR_DAT_0759c818,0);
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar16);
        }
        auVar17 = FUN_06bf0b4c(uVar15);
        auVar17 = FUN_06be4a00(uVar14,uVar7,auVar17._0_8_,auVar17._8_8_);
        *param_3 = auVar17;
        thunk_FUN_0329bf60(*param_3 + 8,0);
        return param_2;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) goto LAB_06bf6884;
      uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      uVar14 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      puVar2 = PTR_DAT_075dae68;
      lVar9 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
      FUN_05e44034(lVar9,0);
      *(undefined8 *)(lVar9 + 0x10) = uVar14;
      thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x10),uVar14);
      puVar3 = PTR_DAT_075d8460;
      FUN_05813834(lVar5,uVar7,lVar9,*(undefined8 *)PTR_DAT_075d8460);
      FUN_05813834(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)puVar3);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      lVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
      FUN_05e44034(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_0329bf60((undefined8 *)(lVar6 + 0x10),uVar7);
      FUN_05813834(lVar5,uVar14,lVar6,*(undefined8 *)puVar3);
      uVar14 = *(undefined8 *)*param_3;
      uVar7 = *(undefined8 *)(*param_3 + 8);
      lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
      if (lVar5 == 0) goto LAB_06bf6884;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x28) = uVar15;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar15);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x38) = uVar15;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38),uVar15);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x50) =
           *(undefined8 *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo;
      thunk_FUN_0329bf60();
      uVar15 = FUN_05c89314(lVar5,0);
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar16);
      }
      auVar17 = FUN_06bf0b4c(uVar15);
      auVar17 = FUN_06be4a00(uVar14,uVar7,auVar17._0_8_,auVar17._8_8_);
      *param_3 = auVar17;
    }
    else {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar9 = *(long *)puVar1;
      }
      uVar8 = thunk_FUN_05c86c8c(uVar15,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68),0);
      if ((uVar8 & 1) == 0) {
LAB_06bf614c:
        if (param_2 == (long *)0x0) goto LAB_06bf6884;
      }
      else {
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar9 = *(long *)puVar1;
        }
        puVar4 = System_Action<AsyncOperationHandle<bool>>_TypeInfo;
        uVar8 = FUN_05813a3c(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)System_Action<AsyncOperationHandle<bool>>_TypeInfo);
        if ((uVar8 & 1) == 0) {
LAB_06bf60ac:
          uVar14 = *(undefined8 *)*param_3;
          uVar7 = *(undefined8 *)(*param_3 + 8);
          lVar9 = *(long *)puVar1;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar9 = *(long *)puVar1;
          }
          uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
          uVar10 = *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
          uVar12 = *(undefined8 *)System_Action<NearFarInteractor_Region>_TypeInfo;
LAB_06bf60ec:
          uVar13 = FUN_05c88a70(uVar10,uVar13,uVar12,0);
          if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_075d8458);
          }
          auVar17 = FUN_06bf0b4c(uVar13);
          auVar17 = FUN_06be4a00(uVar14,uVar7,auVar17._0_8_,auVar17._8_8_);
          *param_3 = auVar17;
          thunk_FUN_0329bf60(*param_3 + 8,0);
          plVar16 = (long *)PTR_DAT_075d8458;
          goto LAB_06bf614c;
        }
        lVar9 = *param_1;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar8 = FUN_06bf6c08(lVar9);
        if ((uVar8 & 1) == 0) goto LAB_06bf60ac;
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar9 = *(long *)puVar1;
        }
        lVar9 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)puVar3);
        if (lVar9 == 0) goto LAB_06bf6884;
        uVar13 = FUN_06be575c();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
        }
        uVar8 = FUN_06bd3850(uVar13,&local_70,0);
        if ((uVar8 & 1) == 0) {
          uVar14 = *(undefined8 *)*param_3;
          uVar7 = *(undefined8 *)(*param_3 + 8);
          uVar10 = *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
          uVar12 = *(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo;
          goto LAB_06bf60ec;
        }
        if (param_2 == (long *)0x0) goto LAB_06bf6884;
        uVar8 = (**(code **)(*param_2 + 0x298))(param_2,local_70,*(undefined8 *)(*param_2 + 0x2a0));
        if ((uVar8 & 1) != 0) {
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar6 = *(long *)puVar1;
          }
          uVar8 = FUN_05813a3c(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                               *(undefined8 *)puVar4);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
            lVar6 = *(long *)puVar1;
          }
          puVar2 = PTR_DAT_075d8458;
          if ((uVar8 & 1) == 0) {
            uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
            lVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
            FUN_05e44034(lVar6,0);
            *(undefined8 *)(lVar6 + 0x10) = uVar13;
            thunk_FUN_0329bf60((undefined8 *)(lVar6 + 0x10),uVar13);
            FUN_05813834(lVar5,uVar15,lVar6,*(undefined8 *)PTR_DAT_075d8460);
            uVar15 = *(undefined8 *)*param_3;
            uVar14 = *(undefined8 *)(*param_3 + 8);
            lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,8);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo
                ;
                thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar13;
                  thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar13);
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x30) =
                         *(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo;
                    thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
                    if (3 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x38) =
                           *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
                      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38));
                      if (4 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x40) =
                             *(undefined8 *)System_Action<XRInputValueReader>_TypeInfo;
                        thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x40));
                        if (5 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x48) = uVar13;
                          thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48),uVar13);
                          if (6 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x50) =
                                 *(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo
                            ;
                            thunk_FUN_0329bf60();
                            param_1 = (long *)*param_1;
                            if (param_1 == (long *)0x0) {
                              uVar7 = 0;
                            }
                            else {
                              uVar7 = (**(code **)(*param_1 + 0x168))
                                                (param_1,*(undefined8 *)(*param_1 + 0x170));
                            }
                            if (7 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x58) = uVar7;
                              thunk_FUN_0329bf60();
FUN_06bf6830:
                              uVar7 = FUN_05c89314(lVar5,0);
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                          (*(long *)puVar2);
                              }
                              auVar17 = FUN_06bf0b4c(uVar7);
                              auVar17 = FUN_06be4a00(uVar15,uVar14,auVar17._0_8_,auVar17._8_8_);
                              *param_3 = auVar17;
                              thunk_FUN_0329bf60(*param_3 + 8,0);
                              return local_70;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_06bf6888;
            }
          }
          else {
            uVar15 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                                  *(undefined8 *)puVar3);
            lVar5 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50),
                                 *(undefined8 *)puVar3);
            if (lVar5 != 0) {
              FUN_06be575c();
              lVar5 = FUN_06bef38c();
              *param_1 = lVar5;
              thunk_FUN_0329bf60(param_1,lVar5);
              if ((*param_1 != 0) && (lVar5 = FUN_06be77ec(), lVar5 != 0)) {
                FUN_05813834(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38),uVar15,
                             *(undefined8 *)PTR_DAT_075d8460);
                uVar15 = *(undefined8 *)*param_3;
                uVar14 = *(undefined8 *)(*param_3 + 8);
                lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) =
                         *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo;
                    thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar13;
                      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar13);
                      if (2 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x30) =
                             *(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo;
                        thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
                        if (3 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x38) =
                               *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
                          thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38));
                          if (4 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x40) =
                                 *(undefined8 *)System_Action<XRInputValueReader>_TypeInfo;
                            thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x40));
                            if (5 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x48) = uVar13;
                              thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48),uVar13);
                              if (6 < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_0759cd90;
                                thunk_FUN_0329bf60();
                                goto FUN_06bf6830;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_06bf6888;
                }
              }
            }
          }
          goto LAB_06bf6884;
        }
        uVar14 = *(undefined8 *)*param_3;
        uVar7 = *(undefined8 *)(*param_3 + 8);
        lVar9 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
        if (lVar9 == 0) goto LAB_06bf6884;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo;
        thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x28) = uVar13;
        thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x28),uVar13);
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x30) =
             *(undefined8 *)System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo
        ;
        thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x30));
        uVar13 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x38) = uVar13;
        thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x38),uVar13);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x40) =
             *(undefined8 *)
              System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo;
        thunk_FUN_0329bf60();
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar11 = *(long *)puVar1;
        }
        if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x58);
        thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x48));
        if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_06bf6888;
        *(undefined8 *)(lVar9 + 0x50) =
             *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo;
        thunk_FUN_0329bf60();
        uVar13 = FUN_05c89314(lVar9,0);
        plVar16 = (long *)PTR_DAT_075d8458;
        if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_075d8458);
        }
        auVar17 = FUN_06bf0b4c(uVar13);
        auVar17 = FUN_06be4a00(uVar14,uVar7,auVar17._0_8_,auVar17._8_8_);
        *param_3 = auVar17;
        thunk_FUN_0329bf60(*param_3 + 8,0);
      }
      uVar8 = (**(code **)(*param_2 + 0x298))(param_2,local_68,*(undefined8 *)(*param_2 + 0x2a0));
      if ((uVar8 & 1) != 0) {
        return local_68;
      }
      lVar9 = *param_1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar8 = FUN_06bf6c08(lVar9);
      if ((uVar8 & 1) == 0) {
        uVar15 = *(undefined8 *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo;
        uVar14 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar7 = *(undefined8 *)System_Action<XRInputSubsystem>_TypeInfo;
        if (local_68 == (long *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
        }
        goto LAB_06bf5a38;
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar9 = *(long *)puVar1;
      }
      puVar3 = PTR_DAT_075d8460;
      FUN_05813834(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)PTR_DAT_075d8460);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      lVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
      FUN_05e44034(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_0329bf60((undefined8 *)(lVar6 + 0x10),uVar7);
      FUN_05813834(lVar5,uVar14,lVar6,*(undefined8 *)puVar3);
      uVar14 = *(undefined8 *)*param_3;
      uVar7 = *(undefined8 *)(*param_3 + 8);
      lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,0xb);
      if (lVar5 == 0) {
LAB_06bf6884:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_06bf6888:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_075d71a0;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x28) = uVar15;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar15);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)System_Action<float3>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
      uVar13 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x38) = uVar13;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38),uVar13);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)System_Action<XRMovableBody>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x50));
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x58) = uVar15;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x58),uVar15);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x60));
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x68));
      if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)PTR_DAT_075edda8;
      thunk_FUN_0329bf60();
      uVar15 = FUN_05c89314(lVar5,0);
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar16);
      }
      auVar17 = FUN_06bf0b4c(uVar15);
      auVar17 = FUN_06be4a00(uVar14,uVar7,auVar17._0_8_,auVar17._8_8_);
      *param_3 = auVar17;
    }
    thunk_FUN_0329bf60(*param_3 + 8,0);
    param_2 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
  }
  return param_2;
}


