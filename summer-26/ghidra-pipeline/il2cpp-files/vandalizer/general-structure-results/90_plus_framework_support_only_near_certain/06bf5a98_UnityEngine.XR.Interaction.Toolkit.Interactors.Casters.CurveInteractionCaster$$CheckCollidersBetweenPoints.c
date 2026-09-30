/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster$$CheckCollidersBetweenPoints
ENTRY_POINT: 06bf5a98
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


long * UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster__CheckCollidersBetweenPoints
                 (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 (*unaff_x19) [16];
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar11 [16];
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x27);
  }
  uVar2 = FUN_06bd3850(param_1,&stack0x00000018,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *unaff_x21;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar2 = FUN_06bf6c08(lVar3);
    if ((uVar2 & 1) == 0) {
      uVar10 = *(undefined8 *)*unaff_x19;
      uVar4 = *(undefined8 *)(*unaff_x19 + 8);
      uVar5 = FUN_05c88a70(*(undefined8 *)System_Action<XRNodeState>_TypeInfo,param_1,
                           *(undefined8 *)PTR_DAT_0759c818,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x28);
      }
      auVar11 = FUN_06bf0b4c(uVar5);
      auVar11 = FUN_06be4a00(uVar10,uVar4,auVar11._0_8_,auVar11._8_8_);
      *unaff_x19 = auVar11;
      thunk_FUN_0329bf60(*unaff_x19 + 8,0);
      return unaff_x20;
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    plVar8 = (long *)*unaff_x21;
    if (plVar8 == (long *)0x0) goto LAB_06bf6884;
    uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    puVar1 = PTR_DAT_075dae68;
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
    FUN_05e44034(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x10),uVar5);
    FUN_05813834();
    FUN_05813834();
    uVar5 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_05e44034(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x10),uVar5);
    FUN_05813834();
    uVar5 = *(undefined8 *)*unaff_x19;
    uVar10 = *(undefined8 *)(*unaff_x19 + 8);
    lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
    if (lVar3 == 0) goto LAB_06bf6884;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x20) =
         *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
    if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x28) = param_1;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x28),param_1);
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x30));
    if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x38) = param_1;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x38),param_1);
    if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x40));
    if (*(uint *)(lVar3 + 0x18) < 6) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x48));
    if (*(uint *)(lVar3 + 0x18) < 7) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo;
    thunk_FUN_0329bf60();
    uVar4 = FUN_05c89314(lVar3,0);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x28);
    }
    auVar11 = FUN_06bf0b4c(uVar4);
    auVar11 = FUN_06be4a00(uVar5,uVar10,auVar11._0_8_,auVar11._8_8_);
    *unaff_x19 = auVar11;
    goto LAB_06bf6434;
  }
  lVar3 = *unaff_x29;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x29;
  }
  uVar2 = thunk_FUN_05c86c8c(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x68),0);
  if ((uVar2 & 1) == 0) {
LAB_06bf614c:
    if (unaff_x20 == (long *)0x0) goto LAB_06bf6884;
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                    /* try { // try from 06bf5afc to 06cf5d6f has its CatchHandler @ 06bf5afc
                       catch() { ... } // from try @ 06bf5afc with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf5de8 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf5ef4 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6008 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf60e4 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf61e0 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf62b8 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6310 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf63c8 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6408 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6424 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6464 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6498 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf64d8 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf64f4 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6544 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6560 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf65b8 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf65d4 with catch @ 06bf5afc
                       catch() { ... } // from try @ 06bf6604 with catch @ 06bf5afc */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar2 = FUN_05813a3c();
    if ((uVar2 & 1) == 0) {
LAB_06bf60ac:
      uVar5 = *(undefined8 *)*unaff_x19;
      uVar10 = *(undefined8 *)(*unaff_x19 + 8);
      lVar3 = *unaff_x29;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar3 = *unaff_x29;
      }
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x68);
      uVar6 = *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
      uVar9 = *(undefined8 *)System_Action<NearFarInteractor_Region>_TypeInfo;
LAB_06bf60ec:
      uVar4 = FUN_05c88a70(uVar6,uVar4,uVar9,0);
      if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_075d8458);
      }
      auVar11 = FUN_06bf0b4c(uVar4);
      auVar11 = FUN_06be4a00(uVar5,uVar10,auVar11._0_8_,auVar11._8_8_);
      *unaff_x19 = auVar11;
      thunk_FUN_0329bf60(*unaff_x19 + 8,0);
      unaff_x28 = (long *)PTR_DAT_075d8458;
      goto LAB_06bf614c;
    }
    lVar3 = *unaff_x21;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar2 = FUN_06bf6c08(lVar3);
    if ((uVar2 & 1) == 0) goto LAB_06bf60ac;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar3 = FUN_058137c8();
    if (lVar3 == 0) goto LAB_06bf6884;
    uVar4 = FUN_06be575c();
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x27);
    }
    uVar2 = FUN_06bd3850(uVar4,&stack0x00000010,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)*unaff_x19;
      uVar10 = *(undefined8 *)(*unaff_x19 + 8);
      uVar6 = *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
      uVar9 = *(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo;
      goto LAB_06bf60ec;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_06bf6884;
    uVar2 = (**(code **)(*unaff_x20 + 0x298))();
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar2 = FUN_05813a3c();
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x29);
      }
      puVar1 = PTR_DAT_075d8458;
      if ((uVar2 & 1) == 0) {
        lVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
        FUN_05e44034(lVar3,0);
        *(undefined8 *)(lVar3 + 0x10) = uVar4;
        thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x10),uVar4);
        FUN_05813834();
        uVar5 = *(undefined8 *)*unaff_x19;
        uVar10 = *(undefined8 *)(*unaff_x19 + 8);
        lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,8);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo;
            thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
            if (1 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x28) = uVar4;
              thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x28),uVar4);
              if (2 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x30) =
                     *(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo;
                thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x30));
                if (3 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x38) =
                       *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x38));
                  if (4 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x40) =
                         *(undefined8 *)System_Action<XRInputValueReader>_TypeInfo;
                    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x40));
                    if (5 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x48) = uVar4;
                      thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x48),uVar4);
                      if (6 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x50) =
                             *(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
                        thunk_FUN_0329bf60();
                        plVar8 = (long *)*unaff_x21;
                        if (plVar8 == (long *)0x0) {
                          uVar4 = 0;
                        }
                        else {
                          uVar4 = (**(code **)(*plVar8 + 0x168))
                                            (plVar8,*(undefined8 *)(*plVar8 + 0x170));
                        }
                        if (7 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x58) = uVar4;
                          thunk_FUN_0329bf60();
FUN_06bf6830:
                          uVar4 = FUN_05c89314(lVar3,0);
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                      (*(long *)puVar1);
                          }
                          auVar11 = FUN_06bf0b4c(uVar4);
                          auVar11 = FUN_06be4a00(uVar5,uVar10,auVar11._0_8_,auVar11._8_8_);
                          *unaff_x19 = auVar11;
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
        uVar5 = FUN_058137c8();
        lVar3 = FUN_058137c8();
        if (lVar3 != 0) {
          FUN_06be575c();
          lVar3 = FUN_06bef38c();
          *unaff_x21 = lVar3;
          thunk_FUN_0329bf60();
          if ((*unaff_x21 != 0) && (lVar3 = FUN_06be77ec(), lVar3 != 0)) {
            FUN_05813834(lVar3,*(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x38),uVar5,
                         *(undefined8 *)PTR_DAT_075d8460);
            uVar5 = *(undefined8 *)*unaff_x19;
            uVar10 = *(undefined8 *)(*unaff_x19 + 8);
            lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
            if (lVar3 != 0) {
              if (*(int *)(lVar3 + 0x18) != 0) {
                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo
                ;
                thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                if (1 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x28) = uVar4;
                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x28),uVar4);
                  if (2 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x30) =
                         *(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo;
                    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x30));
                    if (3 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x38) =
                           *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                      thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x38));
                      if (4 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x40) =
                             *(undefined8 *)System_Action<XRInputValueReader>_TypeInfo;
                        thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x40));
                    /* try { // try from 06bf5d70 to 06cf5d77 has its CatchHandler @ 06bf65b8 */
                        if (5 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x48) = uVar4;
                          thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x48),uVar4);
                    /* try { // try from 06bf5d94 to 06cf5d97 has its CatchHandler @ 06bf6334 */
                    /* try { // try from 06bf5d98 to 06cf5dab has its CatchHandler @ 06bf63a8 */
                          if (6 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_0759cd90;
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
    uVar5 = *(undefined8 *)*unaff_x19;
    uVar10 = *(undefined8 *)(*unaff_x19 + 8);
    lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,7);
    if (lVar3 == 0) goto LAB_06bf6884;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
    if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x28),uVar4);
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x30) =
         *(undefined8 *)System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x30));
    uVar4 = (**(code **)(*unaff_x20 + 0x2d8))();
    if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x38) = uVar4;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x38),uVar4);
    if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x40) =
         *(undefined8 *)
          System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo;
    thunk_FUN_0329bf60();
    lVar7 = *unaff_x29;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *unaff_x29;
    }
    if (*(uint *)(lVar3 + 0x18) < 6) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58);
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x48));
    if (*(uint *)(lVar3 + 0x18) < 7) goto LAB_06bf6888;
    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo
    ;
    thunk_FUN_0329bf60();
    uVar4 = FUN_05c89314(lVar3,0);
    unaff_x28 = (long *)PTR_DAT_075d8458;
    if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_075d8458);
    }
    auVar11 = FUN_06bf0b4c(uVar4);
    auVar11 = FUN_06be4a00(uVar5,uVar10,auVar11._0_8_,auVar11._8_8_);
    *unaff_x19 = auVar11;
    thunk_FUN_0329bf60(*unaff_x19 + 8,0);
  }
  uVar2 = (**(code **)(*unaff_x20 + 0x298))();
  if ((uVar2 & 1) != 0) {
    return in_stack_00000018;
  }
  lVar3 = *unaff_x21;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = FUN_06bf6c08(lVar3);
  if ((uVar2 & 1) == 0) {
    uVar10 = *(undefined8 *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo;
    uVar5 = (**(code **)(*unaff_x20 + 0x168))();
    uVar4 = *(undefined8 *)System_Action<XRInputSubsystem>_TypeInfo;
    if (in_stack_00000018 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*in_stack_00000018 + 0x168))
                        (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
    }
    FUN_05c8920c(uVar10,uVar5,uVar4,uVar6,0);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x28);
    }
    FUN_06bf0974();
    return unaff_x20;
  }
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05813834();
  uVar5 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
  lVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
  FUN_05e44034(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x10),uVar5);
  FUN_05813834();
  uVar5 = *(undefined8 *)*unaff_x19;
  uVar10 = *(undefined8 *)(*unaff_x19 + 8);
  lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bc20,0xb);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_075d71a0;
      thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = param_1;
        thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x28),param_1);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)System_Action<float3>_TypeInfo;
          thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x30));
          uVar4 = (**(code **)(*unaff_x20 + 0x2d8))();
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = uVar4;
            thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x38),uVar4);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) =
                   *(undefined8 *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
              thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x58)
                ;
                thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x48));
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) =
                       *(undefined8 *)System_Action<XRMovableBody>_TypeInfo;
                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x50));
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = param_1;
                    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x58),param_1);
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x60) =
                           *(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo;
                      thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x60));
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) =
                             *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                        thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x68));
                        if (10 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)PTR_DAT_075edda8;
                          thunk_FUN_0329bf60();
                          uVar4 = FUN_05c89314(lVar3,0);
                          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                      (*unaff_x28);
                          }
                          auVar11 = FUN_06bf0b4c(uVar4);
                          auVar11 = FUN_06be4a00(uVar5,uVar10,auVar11._0_8_,auVar11._8_8_);
                          *unaff_x19 = auVar11;
LAB_06bf6434:
                          thunk_FUN_0329bf60(*unaff_x19 + 8,0);
                          return *(long **)(*(long *)(*unaff_x29 + 0xb8) + 0x70);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_06bf6888:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
LAB_06bf6884:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


