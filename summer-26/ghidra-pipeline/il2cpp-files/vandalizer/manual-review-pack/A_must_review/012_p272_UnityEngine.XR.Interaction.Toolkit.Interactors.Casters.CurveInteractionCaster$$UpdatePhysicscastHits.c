/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster$$UpdatePhysicscastHits
ENTRY_POINT: 06bf5800
PROGRAM: vandalizer-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long * UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster__UpdatePhysicscastHits
                 (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 (*unaff_x19) [16];
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  long *in_stack_00000010;
  long *in_stack_00000018;
  
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
  *(undefined1 *)(unaff_x22 + 0xfa1) = 1;
  puVar1 = OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = (long *)0x0;
  if (*unaff_x21 == 0) goto LAB_06bf6884;
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
     plVar13 = (long *)PTR_DAT_075d8458, lVar6 == 0)) goto LAB_06bf6884;
  if ((*(long **)(lVar6 + 0x10) == (long *)0x0) ||
     (**(long **)(lVar6 + 0x10) != *(long *)(PTR_DAT_0759b388 + 0x90))) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_0759d278;
    plVar7 = (long *)*unaff_x21;
    uVar16 = *(undefined8 *)puVar2;
    uVar17 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar15 = *(undefined8 *)puVar1;
LAB_06bf5a38:
    FUN_05c8920c(uVar17,uVar16,uVar8,uVar15,0);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar13);
    }
    FUN_06bf0974();
  }
  else {
    uVar17 = FUN_06be575c(lVar6);
    puVar2 = PTR_DAT_075d7f20;
    if (*(int *)(*(long *)PTR_DAT_075d7f20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_075d7f20);
    }
    uVar9 = FUN_06bd3850(uVar17,&stack0x00000018,0);
    if ((uVar9 & 1) == 0) {
      lVar10 = *unaff_x21;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar9 = FUN_06bf6c08(lVar10);
      if ((uVar9 & 1) == 0) {
        uVar16 = *(undefined8 *)*unaff_x19;
        uVar8 = *(undefined8 *)(*unaff_x19 + 8);
        uVar17 = FUN_05c88a70(*(undefined8 *)System_Action<XRNodeState>_TypeInfo,uVar17,
                              *(undefined8 *)PTR_DAT_0759c818,0);
        if (*(int *)(*plVar13 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar13);
        }
        auVar18 = FUN_06bf0b4c(uVar17);
        auVar18 = FUN_06be4a00(uVar16,uVar8,auVar18._0_8_,auVar18._8_8_);
        *unaff_x19 = auVar18;
        thunk_FUN_0329bf60(*unaff_x19 + 8,0);
        return unaff_x20;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar7 = (long *)*unaff_x21;
      if (plVar7 == (long *)0x0) goto LAB_06bf6884;
      uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      uVar16 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      puVar2 = PTR_DAT_075dae68;
      lVar10 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
      FUN_05e44034(lVar10,0);
      *(undefined8 *)(lVar10 + 0x10) = uVar16;
      thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x10),uVar16);
      puVar3 = PTR_DAT_075d8460;
      FUN_05813834(lVar5,uVar8,lVar10,*(undefined8 *)PTR_DAT_075d8460);
      FUN_05813834(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)puVar3);
      uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      lVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
      FUN_05e44034(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      thunk_FUN_0329bf60((undefined8 *)(lVar6 + 0x10),uVar8);
      FUN_05813834(lVar5,uVar16,lVar6,*(undefined8 *)puVar3);
      uVar16 = *(undefined8 *)*unaff_x19;
      uVar8 = *(undefined8 *)(*unaff_x19 + 8);
      lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
      if (lVar5 == 0) goto LAB_06bf6884;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x28) = uVar17;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar17);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x38) = uVar17;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38),uVar17);
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
      uVar17 = FUN_05c89314(lVar5,0);
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar13);
      }
      auVar18 = FUN_06bf0b4c(uVar17);
      auVar18 = FUN_06be4a00(uVar16,uVar8,auVar18._0_8_,auVar18._8_8_);
      *unaff_x19 = auVar18;
    }
    else {
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar10 = *(long *)puVar1;
      }
      uVar9 = thunk_FUN_05c86c8c(uVar17,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x68),0);
      if ((uVar9 & 1) == 0) {
LAB_06bf614c:
        if (unaff_x20 == (long *)0x0) goto LAB_06bf6884;
      }
      else {
        lVar10 = *(long *)puVar1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar10 = *(long *)puVar1;
        }
        puVar4 = System_Action<AsyncOperationHandle<bool>>_TypeInfo;
        uVar9 = FUN_05813a3c(lVar5,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x48),
                             *(undefined8 *)System_Action<AsyncOperationHandle<bool>>_TypeInfo);
        if ((uVar9 & 1) == 0) {
LAB_06bf60ac:
          uVar16 = *(undefined8 *)*unaff_x19;
          uVar8 = *(undefined8 *)(*unaff_x19 + 8);
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar10 = *(long *)puVar1;
          }
          uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x68);
          uVar11 = *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
          uVar14 = *(undefined8 *)System_Action<NearFarInteractor_Region>_TypeInfo;
LAB_06bf60ec:
          uVar15 = FUN_05c88a70(uVar11,uVar15,uVar14,0);
          if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_075d8458);
          }
          auVar18 = FUN_06bf0b4c(uVar15);
          auVar18 = FUN_06be4a00(uVar16,uVar8,auVar18._0_8_,auVar18._8_8_);
          *unaff_x19 = auVar18;
          thunk_FUN_0329bf60(*unaff_x19 + 8,0);
          plVar13 = (long *)PTR_DAT_075d8458;
          goto LAB_06bf614c;
        }
        lVar10 = *unaff_x21;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = FUN_06bf6c08(lVar10);
        if ((uVar9 & 1) == 0) goto LAB_06bf60ac;
        lVar10 = *(long *)puVar1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar10 = *(long *)puVar1;
        }
        lVar10 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x48),
                              *(undefined8 *)puVar3);
        if (lVar10 == 0) goto LAB_06bf6884;
        uVar15 = FUN_06be575c();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
        }
        uVar9 = FUN_06bd3850(uVar15,&stack0x00000010,0);
        if ((uVar9 & 1) == 0) {
          uVar16 = *(undefined8 *)*unaff_x19;
          uVar8 = *(undefined8 *)(*unaff_x19 + 8);
          uVar11 = *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
          uVar14 = *(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo;
          goto LAB_06bf60ec;
        }
        if (unaff_x20 == (long *)0x0) goto LAB_06bf6884;
        uVar9 = (**(code **)(*unaff_x20 + 0x298))();
        if ((uVar9 & 1) != 0) {
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar6 = *(long *)puVar1;
          }
          uVar9 = FUN_05813a3c(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                               *(undefined8 *)puVar4);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar6);
            lVar6 = *(long *)puVar1;
          }
          puVar2 = PTR_DAT_075d8458;
          if ((uVar9 & 1) == 0) {
            uVar17 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
            lVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
            FUN_05e44034(lVar6,0);
            *(undefined8 *)(lVar6 + 0x10) = uVar15;
            thunk_FUN_0329bf60((undefined8 *)(lVar6 + 0x10),uVar15);
            FUN_05813834(lVar5,uVar17,lVar6,*(undefined8 *)PTR_DAT_075d8460);
            uVar17 = *(undefined8 *)*unaff_x19;
            uVar16 = *(undefined8 *)(*unaff_x19 + 8);
            lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,8);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo
                ;
                thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar15;
                  thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar15);
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
                          *(undefined8 *)(lVar5 + 0x48) = uVar15;
                          thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48),uVar15);
                          if (6 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x50) =
                                 *(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo
                            ;
                            thunk_FUN_0329bf60();
                            plVar13 = (long *)*unaff_x21;
                            if (plVar13 == (long *)0x0) {
                              uVar8 = 0;
                            }
                            else {
                              uVar8 = (**(code **)(*plVar13 + 0x168))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                            }
                            if (7 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x58) = uVar8;
                              thunk_FUN_0329bf60();
FUN_06bf6830:
                              uVar8 = FUN_05c89314(lVar5,0);
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                          (*(long *)puVar2);
                              }
                              auVar18 = FUN_06bf0b4c(uVar8);
                              auVar18 = FUN_06be4a00(uVar17,uVar16,auVar18._0_8_,auVar18._8_8_);
                              *unaff_x19 = auVar18;
                              thunk_FUN_0329bf60(*unaff_x19 + 8,0);
                              return in_stack_00000010;
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
            uVar17 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                                  *(undefined8 *)puVar3);
            lVar5 = FUN_058137c8(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50),
                                 *(undefined8 *)puVar3);
            if (lVar5 != 0) {
              FUN_06be575c();
              lVar5 = FUN_06bef38c();
              *unaff_x21 = lVar5;
              thunk_FUN_0329bf60();
              if ((*unaff_x21 != 0) && (lVar5 = FUN_06be77ec(), lVar5 != 0)) {
                FUN_05813834(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38),uVar17,
                             *(undefined8 *)PTR_DAT_075d8460);
                uVar17 = *(undefined8 *)*unaff_x19;
                uVar16 = *(undefined8 *)(*unaff_x19 + 8);
                lVar5 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) =
                         *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo;
                    thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar15;
                      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar15);
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
                              *(undefined8 *)(lVar5 + 0x48) = uVar15;
                              thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48),uVar15);
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
        uVar16 = *(undefined8 *)*unaff_x19;
        uVar8 = *(undefined8 *)(*unaff_x19 + 8);
        lVar10 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
        if (lVar10 == 0) goto LAB_06bf6884;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo;
        thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x20));
        if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x28) = uVar15;
        thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x28),uVar15);
        if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x30) =
             *(undefined8 *)System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo
        ;
        thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x30));
        uVar15 = (**(code **)(*unaff_x20 + 0x2d8))();
        if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x38) = uVar15;
        thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x38),uVar15);
        if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x40) =
             *(undefined8 *)
              System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo;
        thunk_FUN_0329bf60();
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar12 = *(long *)puVar1;
        }
        if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x58);
        thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x48));
        if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_06bf6888;
        *(undefined8 *)(lVar10 + 0x50) =
             *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo;
        thunk_FUN_0329bf60();
        uVar15 = FUN_05c89314(lVar10,0);
        plVar13 = (long *)PTR_DAT_075d8458;
        if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_075d8458);
        }
        auVar18 = FUN_06bf0b4c(uVar15);
        auVar18 = FUN_06be4a00(uVar16,uVar8,auVar18._0_8_,auVar18._8_8_);
        *unaff_x19 = auVar18;
        thunk_FUN_0329bf60(*unaff_x19 + 8,0);
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x298))();
      if ((uVar9 & 1) != 0) {
        return in_stack_00000018;
      }
      lVar10 = *unaff_x21;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar9 = FUN_06bf6c08(lVar10);
      if ((uVar9 & 1) == 0) {
        uVar17 = *(undefined8 *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo;
        uVar16 = (**(code **)(*unaff_x20 + 0x168))();
        uVar8 = *(undefined8 *)System_Action<XRInputSubsystem>_TypeInfo;
        if (in_stack_00000018 == (long *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (**(code **)(*in_stack_00000018 + 0x168))
                             (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
        }
        goto LAB_06bf5a38;
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar10 = *(long *)puVar1;
      }
      puVar3 = PTR_DAT_075d8460;
      FUN_05813834(lVar5,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)PTR_DAT_075d8460);
      uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      lVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
      FUN_05e44034(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      thunk_FUN_0329bf60((undefined8 *)(lVar6 + 0x10),uVar8);
      FUN_05813834(lVar5,uVar16,lVar6,*(undefined8 *)puVar3);
      uVar16 = *(undefined8 *)*unaff_x19;
      uVar8 = *(undefined8 *)(*unaff_x19 + 8);
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
      *(undefined8 *)(lVar5 + 0x28) = uVar17;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28),uVar17);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)System_Action<float3>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
      uVar15 = (**(code **)(*unaff_x20 + 0x2d8))();
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x38) = uVar15;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38),uVar15);
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
      *(undefined8 *)(lVar5 + 0x58) = uVar17;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x58),uVar17);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo;
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x60));
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x68));
      if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_06bf6888;
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)PTR_DAT_075edda8;
      thunk_FUN_0329bf60();
      uVar17 = FUN_05c89314(lVar5,0);
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar13);
      }
      auVar18 = FUN_06bf0b4c(uVar17);
      auVar18 = FUN_06be4a00(uVar16,uVar8,auVar18._0_8_,auVar18._8_8_);
      *unaff_x19 = auVar18;
    }
    thunk_FUN_0329bf60(*unaff_x19 + 8,0);
    unaff_x20 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
  }
  return unaff_x20;
}


