/*
FUNCTION_NAME: FUN_05cf6bd4
ENTRY_POINT: 05cf6bd4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05cf6bd4(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_065c8918;
  if ((DAT_06a7a54d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<ResourceManager_DiagnosticEventContext>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8918);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<object,_IBehaviorWebBehavior>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<object,_InputActionChange>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<object,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<PeridotHand,_PeridotHand>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<PlaydayOutcome,_float>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<PointerEventData,_List<RaycastResult>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<ScriptableRenderContext,_Camera>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<float,_float>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<string,_ITextureRequest>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<string,_InputControlLayoutChange>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<TapGesture,_Touch>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<TapGesture,_Touch>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<Task,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<TrayBox,_TrayBox>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<Type,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<ulong,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<Vector3,_Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<VisualElement,_MatchResultInfo>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<VisualElement,_StyleValues>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<XRLayout,_Camera>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<EatingContestPlant_EatingContestEater,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Action<XRDeviceSimulator_SimulatedHandExpression,_InputAction_CallbackContext>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<byte[],_string,_FixedSizedQueue<GifFrame>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<byte[],_string,_GifFrame>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<Column,_int,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<JsonParser,_IMessage,_JsonTokenizer>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<RequestParameterType,_string,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<string,_string,_LogType>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<TwistGesture,_Touch,_Touch>_TypeInfo);
    DAT_06a7a54d = 1;
  }
  lVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,4);
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (((uVar1 != 0) &&
        (*(undefined8 *)(lVar10 + 0x20) =
              *(undefined8 *)
               System_Action<XRDeviceSimulator_SimulatedHandExpression,_InputAction_CallbackContext>_TypeInfo
        , uVar1 != 1)) &&
       (*(undefined8 *)(lVar10 + 0x28) =
             *(undefined8 *)System_Action<PeridotHand,_PeridotHand>_TypeInfo,
       puVar2 = PTR_DAT_065c8668, 2 < uVar1)) {
      *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_065c8668;
      puVar4 = System_Action<ResourceManager_DiagnosticEventContext>_TypeInfo;
      if (uVar1 != 3) {
        *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar2;
        puVar8 = System_Action<XRLayout,_Camera>_TypeInfo;
        puVar5 = System_Action<object,_IBehaviorWebBehavior>_TypeInfo;
        **(long **)(*(long *)puVar4 + 0xb8) = lVar10;
        puVar9 = System_Action<TwistGesture,_Touch,_Touch>_TypeInfo;
        puVar7 = System_Action<TapGesture,_Touch>_TypeInfo;
        puVar6 = System_Action<ScriptableRenderContext,_Camera>_TypeInfo;
        uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar8,0);
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar11;
        uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar8,0);
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar11;
        uVar11 = FUN_05bb0ed4(*(undefined8 *)puVar5,0);
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar11;
        uVar11 = FUN_05bb0ed4(*(undefined8 *)puVar7,0);
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = uVar11;
        uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar9,0);
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = uVar11;
        uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar6,0);
        puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        puVar12[6] = uVar11;
        uVar11 = Unity_VisualScripting_Flow__AfterInvoke(*puVar12,0);
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = uVar11;
        lVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,0x43);
        if (lVar10 == 0) goto LAB_05cf7524;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if ((((((uVar1 != 0) &&
               (*(undefined8 *)(lVar10 + 0x20) =
                     *(undefined8 *)System_Action<TrayBox,_TrayBox>_TypeInfo, uVar1 != 1)) &&
              ((*(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)puVar2, 2 < uVar1 &&
               ((*(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar2, uVar1 != 3 &&
                (*(undefined8 *)(lVar10 + 0x38) =
                      *(undefined8 *)System_Action<Task,_object>_TypeInfo, 4 < uVar1)))))) &&
             (*(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)System_Action<ulong,_bool>_TypeInfo,
             uVar1 != 5)) &&
            ((((*(undefined8 *)(lVar10 + 0x48) =
                     *(undefined8 *)
                      System_Action<byte[],_string,_FixedSizedQueue<GifFrame>>_TypeInfo, 6 < uVar1
               && (*(undefined8 *)(lVar10 + 0x50) =
                        *(undefined8 *)System_Action<float,_float>_TypeInfo, uVar1 != 7)) &&
              (*(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)puVar2, 8 < uVar1)) &&
             ((*(undefined8 *)(lVar10 + 0x60) =
                    *(undefined8 *)System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo,
              uVar1 != 9 &&
              (*(undefined8 *)(lVar10 + 0x68) =
                    *(undefined8 *)System_Action<TapGesture,_Touch>_TypeInfo, 10 < uVar1)))))) &&
           ((((((*(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)System_Action<Type,_int>_TypeInfo,
                uVar1 != 0xb &&
                ((*(undefined8 *)(lVar10 + 0x78) =
                       *(undefined8 *)System_Action<string,_ITextureRequest>_TypeInfo, 0xc < uVar1
                 && (*(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)puVar2, uVar1 != 0xd)))) &&
               (*(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)puVar2, 0xe < uVar1)) &&
              (((((*(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)puVar2, uVar1 != 0xf &&
                  (*(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)puVar2, 0x10 < uVar1)) &&
                 (*(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)puVar2, uVar1 != 0x11)) &&
                ((*(undefined8 *)(lVar10 + 0xa8) =
                       *(undefined8 *)System_Action<Column,_int,_int>_TypeInfo, 0x12 < uVar1 &&
                 (*(undefined8 *)(lVar10 + 0xb0) = *(undefined8 *)puVar2, uVar1 != 0x13)))) &&
               (*(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)puVar2, 0x14 < uVar1)))) &&
             (((*(undefined8 *)(lVar10 + 0xc0) = *(undefined8 *)puVar2, uVar1 != 0x15 &&
               (*(undefined8 *)(lVar10 + 200) = *(undefined8 *)puVar2, 0x16 < uVar1)) &&
              ((*(undefined8 *)(lVar10 + 0xd0) =
                     *(undefined8 *)System_Action<object,_object>_TypeInfo, uVar1 != 0x17 &&
               (((*(undefined8 *)(lVar10 + 0xd8) =
                       *(undefined8 *)System_Action<VisualElement,_StyleValues>_TypeInfo,
                 0x18 < uVar1 &&
                 (*(undefined8 *)(lVar10 + 0xe0) =
                       *(undefined8 *)System_Action<VisualElement,_MatchResultInfo>_TypeInfo,
                 uVar1 != 0x19)) &&
                (*(undefined8 *)(lVar10 + 0xe8) =
                      *(undefined8 *)System_Action<string,_InputControlLayoutChange>_TypeInfo,
                0x1a < uVar1)))))))) &&
            (((*(undefined8 *)(lVar10 + 0xf0) = *(undefined8 *)puVar2, uVar1 != 0x1b &&
              (*(undefined8 *)(lVar10 + 0xf8) = *(undefined8 *)puVar2, 0x1c < uVar1)) &&
             ((*(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)puVar2, uVar1 != 0x1d &&
              (((*(undefined8 *)(lVar10 + 0x108) = *(undefined8 *)puVar2, 0x1e < uVar1 &&
                (*(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)puVar2, uVar1 != 0x1f)) &&
               ((*(undefined8 *)(lVar10 + 0x118) = *(undefined8 *)puVar2, 0x20 < uVar1 &&
                ((*(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)puVar2, uVar1 != 0x21 &&
                 (*(undefined8 *)(lVar10 + 0x128) = *(undefined8 *)puVar2,
                 puVar3 = System_Action<PointerEventData,_List<RaycastResult>>_TypeInfo,
                 0x22 < uVar1)))))))))))))) {
          *(undefined8 *)(lVar10 + 0x130) =
               *(undefined8 *)System_Action<PointerEventData,_List<RaycastResult>>_TypeInfo;
          if ((((uVar1 != 0x23) &&
               ((((((*(undefined8 *)(lVar10 + 0x138) = *(undefined8 *)puVar2, 0x24 < uVar1 &&
                    (*(undefined8 *)(lVar10 + 0x140) = *(undefined8 *)puVar2, uVar1 != 0x25)) &&
                   (*(undefined8 *)(lVar10 + 0x148) =
                         *(undefined8 *)
                          System_Action<EatingContestPlant_EatingContestEater,_bool>_TypeInfo,
                   0x26 < uVar1)) &&
                  ((*(undefined8 *)(lVar10 + 0x150) = *(undefined8 *)puVar2, uVar1 != 0x27 &&
                   (*(undefined8 *)(lVar10 + 0x158) = *(undefined8 *)puVar2, 0x28 < uVar1)))) &&
                 ((*(undefined8 *)(lVar10 + 0x160) = *(undefined8 *)puVar2, uVar1 != 0x29 &&
                  ((*(undefined8 *)(lVar10 + 0x168) = *(undefined8 *)puVar2, 0x2a < uVar1 &&
                   (*(undefined8 *)(lVar10 + 0x170) = *(undefined8 *)puVar2, uVar1 != 0x2b)))))) &&
                (((*(undefined8 *)(lVar10 + 0x178) = *(undefined8 *)puVar2, 0x2c < uVar1 &&
                  ((((*(undefined8 *)(lVar10 + 0x180) = *(undefined8 *)puVar2, uVar1 != 0x2d &&
                     (*(undefined8 *)(lVar10 + 0x188) = *(undefined8 *)puVar2, 0x2e < uVar1)) &&
                    (*(undefined8 *)(lVar10 + 400) = *(undefined8 *)puVar2, uVar1 != 0x2f)) &&
                   ((*(undefined8 *)(lVar10 + 0x198) = *(undefined8 *)puVar2, 0x30 < uVar1 &&
                    (*(undefined8 *)(lVar10 + 0x1a0) = *(undefined8 *)puVar2, uVar1 != 0x31)))))) &&
                 (((*(undefined8 *)(lVar10 + 0x1a8) =
                         *(undefined8 *)System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo,
                   0x32 < uVar1 &&
                   ((*(undefined8 *)(lVar10 + 0x1b0) =
                          *(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo,
                    uVar1 != 0x33 &&
                    (*(undefined8 *)(lVar10 + 0x1b8) =
                          *(undefined8 *)System_Action<byte[],_string,_GifFrame>_TypeInfo,
                    0x34 < uVar1)))) &&
                  (*(undefined8 *)(lVar10 + 0x1c0) = *(undefined8 *)puVar2, uVar1 != 0x35)))))))) &&
              ((((*(undefined8 *)(lVar10 + 0x1c8) =
                       *(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo,
                 0x36 < uVar1 &&
                 (*(undefined8 *)(lVar10 + 0x1d0) = *(undefined8 *)puVar2, uVar1 != 0x37)) &&
                (*(undefined8 *)(lVar10 + 0x1d8) = *(undefined8 *)puVar2, 0x38 < uVar1)) &&
               ((((*(undefined8 *)(lVar10 + 0x1e0) = *(undefined8 *)puVar3, uVar1 != 0x39 &&
                  (*(undefined8 *)(lVar10 + 0x1e8) = *(undefined8 *)puVar3, 0x3a < uVar1)) &&
                 ((*(undefined8 *)(lVar10 + 0x1f0) =
                        *(undefined8 *)System_Action<object,_InputActionChange>_TypeInfo,
                  uVar1 != 0x3b &&
                  ((*(undefined8 *)(lVar10 + 0x1f8) =
                         *(undefined8 *)System_Action<JsonParser,_IMessage,_JsonTokenizer>_TypeInfo,
                   0x3c < uVar1 &&
                   (*(undefined8 *)(lVar10 + 0x200) = *(undefined8 *)puVar2, uVar1 != 0x3d)))))) &&
                (*(undefined8 *)(lVar10 + 0x208) = *(undefined8 *)puVar2, 0x3e < uVar1)))))) &&
             ((((*(undefined8 *)(lVar10 + 0x210) = *(undefined8 *)puVar3, uVar1 != 0x3f &&
                (*(undefined8 *)(lVar10 + 0x218) =
                      *(undefined8 *)System_Action<PlaydayOutcome,_float>_TypeInfo, 0x40 < uVar1))
               && (*(undefined8 *)(lVar10 + 0x220) = *(undefined8 *)puVar2, uVar1 != 0x41)) &&
              (*(undefined8 *)(lVar10 + 0x228) = *(undefined8 *)puVar3, 0x42 < uVar1)))) {
            *(undefined8 *)(lVar10 + 0x230) = *(undefined8 *)puVar2;
            puVar7 = System_Action<RequestParameterType,_string,_object>_TypeInfo;
            puVar5 = System_Action<DebugManager_UIMode,_bool>_TypeInfo;
            puVar3 = System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo;
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = lVar10;
            puVar8 = System_Action<string,_string,_LogType>_TypeInfo;
            puVar6 = System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo;
            puVar2 = System_Action<Vector3,_Vector3>_TypeInfo;
            uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar7,0);
            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = uVar11;
            uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar3,0);
            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) = uVar11;
            uVar11 = FUN_05bb0ed4(*(undefined8 *)puVar5,0);
            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58) = uVar11;
            uVar11 = FUN_05bb0ed4(*(undefined8 *)puVar6,0);
            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) = uVar11;
            uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar8,0);
            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = uVar11;
            uVar11 = FUN_05bb0cf8(*(undefined8 *)puVar2,0);
            lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
            *(undefined8 *)(lVar10 + 0x70) = uVar11;
            uVar11 = Unity_VisualScripting_Flow__AfterInvoke(*(undefined8 *)(lVar10 + 0x40),0);
            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = uVar11;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_05cf7524:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


