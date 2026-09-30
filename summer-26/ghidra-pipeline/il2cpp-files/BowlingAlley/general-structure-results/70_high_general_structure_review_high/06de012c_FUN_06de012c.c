/*
FUNCTION_NAME: FUN_06de012c
ENTRY_POINT: 06de012c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06de012c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  
  puVar2 = Method_ReadyPlayerMe_AvatarCreator_ListExtensions_ChunkBy<PartnerAsset>__;
  puVar1 = Method_Oculus_Avatar2_ListExtensions_AddSorted<AvatarLOD>__;
  if ((DAT_076ea0ea & 1) == 0) {
    thunk_FUN_032e1da0(Method_Oculus_Avatar2_ListExtensions_AddSorted<AvatarLOD>__);
    thunk_FUN_032e1da0(Method_Unity_Collections_ListExtensions_RemoveAtSwapBack<InternalType_131>__)
    ;
    thunk_FUN_032e1da0(Method_Unity_Collections_ListExtensions_RemoveAtSwapBack<InternalType_265>__)
    ;
    thunk_FUN_032e1da0(Method_Unity_Collections_ListExtensions_RemoveAtSwapBack<Texture2D>__);
    thunk_FUN_032e1da0(Method_Unity_XR_CoreUtils_ListExtensions_EnsureCapacity<GameObject>__);
    thunk_FUN_032e1da0(Method_Unity_XR_CoreUtils_ListExtensions_EnsureCapacity<int>__);
    thunk_FUN_032e1da0(Method_Oculus_Interaction_ListLayoutEase_HandleElementAdded__);
    thunk_FUN_032e1da0(Method_Oculus_Interaction_ListLayoutEase_HandleElementRemoved__);
    thunk_FUN_032e1da0(Method_Oculus_Interaction_ListLayoutEase_HandleElementUpdated__);
    thunk_FUN_032e1da0(Method_System_Xml_Serialization_ListMap_FindElement__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddDataBinder<string,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddGestureHandler<Gesture_OnCancel,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddGestureHandler<Gesture_OnClick,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddGestureHandler<Gesture_OnHover,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddGestureHandler<Gesture_OnPress,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddGestureHandler<Gesture_OnRelease,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_AddGestureHandler<Gesture_OnUnhover,_ToggleVisuals>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_GetDataSource<string>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_SetDataSource<string>__);
    thunk_FUN_032e1da0(Method_Nova_ListView_InternalMethod_2059__);
    thunk_FUN_032e1da0(Method_Nova_ListView_InternalMethod_234__);
    thunk_FUN_032e1da0(Method_Nova_ListView_InternalMethod_2686__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ListViewController_BindItem__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ListViewController_MakeItem__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_ListViewDragger_<ApplyDragAndDropUI>g__GeometryChangedCallback_27_0__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ListViewDragger_ApplyDragAndDropUI__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Literal_<Definition>b__17_0__);
    thunk_FUN_032e1da0(Method_LoadingManager_OnGetViewerPurchasesComplete__);
    thunk_FUN_032e1da0(Method_LoadingManager_OnInitializationComplete__);
    thunk_FUN_032e1da0(Method_System_LocalDataStore_GetData__);
    thunk_FUN_032e1da0(Method_System_LocalDataStore_PopulateElement__);
    thunk_FUN_032e1da0(Method_System_LocalDataStore_SetData__);
    thunk_FUN_032e1da0(Method_System_LocalDataStoreMgr_AllocateDataSlot__);
    thunk_FUN_032e1da0(Method_System_LocalDataStoreMgr_ValidateSlot__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_UI_LocalizedTextElement_OnDetachedFromPanel__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_UI_LocalizedTextElement_OnLangContextChanged__);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionAxisTurnerInteractor_<Start>b__15_0__
                      );
    thunk_FUN_032e1da0(Method_Oculus_Interaction_Locomotion_LocomotionGate_HandleHandupdated__);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionGateUnityEventWrapper_HandleActiveModeChanged__
                      );
    thunk_FUN_032e1da0(Method_BNG_LocomotionManager_OnLocomotionToggle__);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionTunneling_HandleLocomotionEventHandled__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractor_<Start>b__24_0__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorEventsWrapper_HandleTurnDirectionChanged__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerStateChanged__
                      );
    thunk_FUN_032e1da0(Method_Firebase_LogUtil_<_ctor>b__9_0__);
    thunk_FUN_032e1da0(Method_Firebase_LogUtil_LogMessageFromCallback__);
    thunk_FUN_032e1da0(Method_Meta_XR_MultiplayerBlocks_Colocation_Logger_Log__);
    thunk_FUN_032e1da0(Method_Meta_XR_MultiplayerBlocks_Colocation_Logger_SetLogLevelVisibility__);
    thunk_FUN_032e1da0(Method_System_Runtime_Remoting_Messaging_LogicalCallContext_GetObjectData__);
    thunk_FUN_032e1da0(Method_ReadyPlayerMe_AvatarCreator_ListExtensions_ChunkBy<PartnerAsset>__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_Accept__);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_ExtractString__
                      );
    DAT_076ea0ea = 1;
  }
  plVar3 = (long *)FUN_032d5d3c(*(undefined8 *)puVar1,0x34);
  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_06ddafa4();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_06de145c:
    uVar6 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6,0);
  }
  puVar1 = Method_Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_ExtractString__;
  puVar9 = (uint *)(plVar3 + 3);
  if (*puVar9 != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_0333a630(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_06ddb934();
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_06de145c;
    puVar1 = Method_Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_Accept__;
    if (1 < *puVar9) {
      plVar3[5] = lVar4;
      thunk_FUN_0333a630(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_06ddb544();
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_06de145c;
      puVar1 = Method_Unity_Collections_ListExtensions_RemoveAtSwapBack<InternalType_131>__;
      if (2 < *puVar9) {
        plVar3[6] = lVar4;
        thunk_FUN_0333a630(plVar3 + 6,lVar4);
        lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
        FUN_06ddbd2c();
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_06de145c;
        puVar1 = Method_Nova_ListView_AddDataBinder<string,_ToggleVisuals>__;
        if (3 < *puVar9) {
          plVar3[7] = lVar4;
          thunk_FUN_0333a630(plVar3 + 7,lVar4);
          lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_06cbf70c(lVar4,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_06de145c;
          puVar1 = 
          Method_Oculus_Interaction_Locomotion_LocomotionGateUnityEventWrapper_HandleActiveModeChanged__
          ;
          if (4 < *puVar9) {
            plVar3[8] = lVar4;
            thunk_FUN_0333a630(plVar3 + 8,lVar4);
            lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
            FUN_06db70c0(lVar4,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_06de145c;
            puVar1 = Method_System_Runtime_Remoting_Messaging_LogicalCallContext_GetObjectData__;
            if (5 < *puVar9) {
              plVar3[9] = lVar4;
              thunk_FUN_0333a630(plVar3 + 9,lVar4);
              lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
              FUN_06d76970(lVar4,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_06de145c;
              puVar1 = Method_System_LocalDataStore_SetData__;
              if (6 < *puVar9) {
                plVar3[10] = lVar4;
                thunk_FUN_0333a630(plVar3 + 10,lVar4);
                lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                FUN_06d22768(lVar4,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_06de145c;
                puVar1 = Method_Nova_ListView_AddGestureHandler<Gesture_OnUnhover,_ToggleVisuals>__;
                if (7 < *puVar9) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_0333a630(plVar3 + 0xb,lVar4);
                  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                  FUN_06d27780(lVar4,0);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)
                     ) goto LAB_06de145c;
                  puVar1 = Method_Meta_XR_MultiplayerBlocks_Colocation_Logger_Log__;
                  if (8 < *puVar9) {
                    plVar3[0xc] = lVar4;
                    thunk_FUN_0333a630(plVar3 + 0xc,lVar4);
                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                    FUN_06d38ed4(lVar4,0);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_06de145c;
                    puVar1 = Method_System_LocalDataStore_PopulateElement__;
                    if (9 < *puVar9) {
                      plVar3[0xd] = lVar4;
                      thunk_FUN_0333a630(plVar3 + 0xd,lVar4);
                      lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                      FUN_06d3ecc4(lVar4,0);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar5 == 0)) goto LAB_06de145c;
                      puVar1 = Method_LoadingManager_OnGetViewerPurchasesComplete__;
                      if (10 < *puVar9) {
                        plVar3[0xe] = lVar4;
                        thunk_FUN_0333a630(plVar3 + 0xe,lVar4);
                        lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                        FUN_06d405a8(lVar4,0);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_06de145c;
                        puVar1 = Method_Unity_AppUI_UI_LocalizedTextElement_OnLangContextChanged__;
                        if (0xb < *puVar9) {
                          plVar3[0xf] = lVar4;
                          thunk_FUN_0333a630(plVar3 + 0xf,lVar4);
                          lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                          FUN_06d414d4(lVar4,0);
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar5 == 0)) goto LAB_06de145c;
                          puVar1 = Method_UnityEngine_UIElements_ListViewController_MakeItem__;
                          if (0xc < *puVar9) {
                            plVar3[0x10] = lVar4;
                            thunk_FUN_0333a630(plVar3 + 0x10,lVar4);
                            lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                            FUN_06d427d4(lVar4,0);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                               lVar5 == 0)) goto LAB_06de145c;
                            puVar1 = 
                            Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                            ;
                            if (0xd < *puVar9) {
                              plVar3[0x11] = lVar4;
                              thunk_FUN_0333a630(plVar3 + 0x11,lVar4);
                              lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                              FUN_06d2b00c(lVar4,0);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar5 == 0)) goto LAB_06de145c;
                              puVar1 = 
                              Method_Unity_XR_CoreUtils_ListExtensions_EnsureCapacity<int>__;
                              if (0xe < *puVar9) {
                                plVar3[0x12] = lVar4;
                                thunk_FUN_0333a630(plVar3 + 0x12,lVar4);
                                lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                FUN_06ccb7b0(lVar4,0);
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar5 == 0)) goto LAB_06de145c;
                                puVar1 = 
                                Method_Nova_ListView_AddGestureHandler<Gesture_OnCancel,_ToggleVisuals>__
                                ;
                                if (0xf < *puVar9) {
                                  plVar3[0x13] = lVar4;
                                  thunk_FUN_0333a630(plVar3 + 0x13,lVar4);
                                  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                  FUN_06d377e8(lVar4,0);
                                  if ((lVar4 != 0) &&
                                     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar5 == 0)) goto LAB_06de145c;
                                  puVar1 = Method_System_LocalDataStoreMgr_ValidateSlot__;
                                  if (0x10 < *puVar9) {
                                    plVar3[0x14] = lVar4;
                                    thunk_FUN_0333a630(plVar3 + 0x14,lVar4);
                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                    FUN_06d38aa4(lVar4,0);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40)),
                                       lVar5 == 0)) goto LAB_06de145c;
                                    puVar1 = 
                                    Method_Nova_ListView_AddGestureHandler<Gesture_OnPress,_ToggleVisuals>__
                                    ;
                                    if (0x11 < *puVar9) {
                                      plVar3[0x15] = lVar4;
                                      thunk_FUN_0333a630(plVar3 + 0x15,lVar4);
                                      lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                      FUN_06d432d0(lVar4,0);
                                      if ((lVar4 != 0) &&
                                         (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                            (*plVar3 + 0x40)),
                                         lVar5 == 0)) goto LAB_06de145c;
                                      puVar1 = 
                                      Method_Oculus_Interaction_ListLayoutEase_HandleElementRemoved__
                                      ;
                                      if (0x12 < *puVar9) {
                                        plVar3[0x16] = lVar4;
                                        thunk_FUN_0333a630(plVar3 + 0x16,lVar4);
                                        lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                        FUN_06d24a38(lVar4,0);
                                        if ((lVar4 != 0) &&
                                           (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar5 == 0)) goto LAB_06de145c;
                                        puVar1 = 
                                        Method_UnityEngine_UIElements_ListViewDragger_<ApplyDragAndDropUI>g__GeometryChangedCallback_27_0__
                                        ;
                                        if (0x13 < *puVar9) {
                                          plVar3[0x17] = lVar4;
                                          thunk_FUN_0333a630(plVar3 + 0x17,lVar4);
                                          lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                          FUN_06dc96a4();
                                          if ((lVar4 != 0) &&
                                             (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                                (*plVar3 + 0x40)),
                                             lVar5 == 0)) goto LAB_06de145c;
                                          puVar1 = 
                                          Method_Oculus_Interaction_Locomotion_LocomotionGate_HandleHandupdated__
                                          ;
                                          if (0x14 < *puVar9) {
                                            plVar3[0x18] = lVar4;
                                            thunk_FUN_0333a630(plVar3 + 0x18,lVar4);
                                            lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                            FUN_06cbf358(lVar4,0);
                                            if ((lVar4 != 0) &&
                                               (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                                  (*plVar3 + 0x40)),
                                               lVar5 == 0)) goto LAB_06de145c;
                                            puVar1 = 
                                            Method_Unity_Collections_ListExtensions_RemoveAtSwapBack<Texture2D>__
                                            ;
                                            if (0x15 < *puVar9) {
                                              plVar3[0x19] = lVar4;
                                              thunk_FUN_0333a630(plVar3 + 0x19,lVar4);
                                              lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                              FUN_06cc6f38(lVar4,0);
                                              if ((lVar4 != 0) &&
                                                 (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                                    (*plVar3 + 0x40)
                                                                            ), lVar5 == 0))
                                              goto LAB_06de145c;
                                              puVar1 = 
                                              Method_Nova_ListView_AddGestureHandler<Gesture_OnRelease,_ToggleVisuals>__
                                              ;
                                              if (0x16 < *puVar9) {
                                                plVar3[0x1a] = lVar4;
                                                thunk_FUN_0333a630(plVar3 + 0x1a,lVar4);
                                                lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                                FUN_06cc5310(lVar4,0);
                                                if ((lVar4 != 0) &&
                                                   (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40)),
                                                   lVar5 == 0)) goto LAB_06de145c;
                                                puVar1 = 
                                                Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorEventsWrapper_HandleTurnDirectionChanged__
                                                ;
                                                if (0x17 < *puVar9) {
                                                  plVar3[0x1b] = lVar4;
                                                  thunk_FUN_0333a630(plVar3 + 0x1b,lVar4);
                                                  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                                  FUN_06ccca28(lVar4,0);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_UnityEngine_UIElements_ListViewController_BindItem__
                                                  ;
                                                  if (0x18 < *puVar9) {
                                                    plVar3[0x1c] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x1c,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d35e24(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Firebase_LogUtil_LogMessageFromCallback__;
                                                  if (0x19 < *puVar9) {
                                                    plVar3[0x1d] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x1d,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d36eac(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_UnityEngine_UIElements_ListViewDragger_ApplyDragAndDropUI__
                                                  ;
                                                  if (0x1a < *puVar9) {
                                                    plVar3[0x1e] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x1e,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d278f4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Unity_Collections_ListExtensions_RemoveAtSwapBack<InternalType_265>__
                                                  ;
                                                  if (0x1b < *puVar9) {
                                                    plVar3[0x1f] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x1f,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d4606c(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_ListLayoutEase_HandleElementAdded__
                                                  ;
                                                  if (0x1c < *puVar9) {
                                                    plVar3[0x20] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x20,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d436e8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Unity_VisualScripting_Literal_<Definition>b__17_0__
                                                  ;
                                                  if (0x1d < *puVar9) {
                                                    plVar3[0x21] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x21,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc8968(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = Method_Firebase_LogUtil_<_ctor>b__9_0__;
                                                  if (0x1e < *puVar9) {
                                                    plVar3[0x22] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x22,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d34370(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Nova_ListView_SetDataSource<string>__;
                                                  if (0x1f < *puVar9) {
                                                    plVar3[0x23] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x23,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d34d34(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_System_Xml_Serialization_ListMap_FindElement__
                                                  ;
                                                  if (0x20 < *puVar9) {
                                                    plVar3[0x24] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x24,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06ca2dc8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_Locomotion_LocomotionTunneling_HandleLocomotionEventHandled__
                                                  ;
                                                  if (0x21 < *puVar9) {
                                                    plVar3[0x25] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x25,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06dd3e08();
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_ListLayoutEase_HandleElementUpdated__
                                                  ;
                                                  if (0x22 < *puVar9) {
                                                    plVar3[0x26] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x26,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cbf9cc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_Locomotion_LocomotionAxisTurnerInteractor_<Start>b__15_0__
                                                  ;
                                                  if (0x23 < *puVar9) {
                                                    plVar3[0x27] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x27,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc78b0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Unity_XR_CoreUtils_ListExtensions_EnsureCapacity<GameObject>__
                                                  ;
                                                  if (0x24 < *puVar9) {
                                                    plVar3[0x28] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x28,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                                                                        
                                                  UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundRepeat___ctor
                                                            (lVar4,0);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_06de145c;
                                                  puVar1 = Method_System_LocalDataStore_GetData__;
                                                  if (0x25 < *puVar9) {
                                                    plVar3[0x29] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x29,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06ccc344(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Nova_ListView_AddGestureHandler<Gesture_OnClick,_ToggleVisuals>__
                                                  ;
                                                  if (0x26 < *puVar9) {
                                                    plVar3[0x2a] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x2a,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    UnityEngine_XR_InputFeatureUsage__Equals
                                                              (lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Nova_ListView_GetDataSource<string>__;
                                                  if (0x27 < *puVar9) {
                                                    plVar3[0x2b] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x2b,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d27ed4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_BNG_LocomotionManager_OnLocomotionToggle__;
                                                  if (0x28 < *puVar9) {
                                                    plVar3[0x2c] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x2c,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d47dd0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_LoadingManager_OnInitializationComplete__;
                                                  if (0x29 < *puVar9) {
                                                    plVar3[0x2d] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x2d,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06d4880c(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Nova_ListView_InternalMethod_2686__;
                                                  if (0x2a < *puVar9) {
                                                    plVar3[0x2e] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x2e,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc0370(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerStateChanged__
                                                  ;
                                                  if (0x2b < *puVar9) {
                                                    plVar3[0x2f] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x2f,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc1b34(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Nova_ListView_InternalMethod_2059__;
                                                  if (0x2c < *puVar9) {
                                                    plVar3[0x30] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x30,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc10e4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Meta_XR_MultiplayerBlocks_Colocation_Logger_SetLogLevelVisibility__
                                                  ;
                                                  if (0x2d < *puVar9) {
                                                    plVar3[0x31] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x31,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc24bc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_System_LocalDataStoreMgr_AllocateDataSlot__
                                                  ;
                                                  if (0x2e < *puVar9) {
                                                    plVar3[0x32] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x32,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc317c(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Unity_AppUI_UI_LocalizedTextElement_OnDetachedFromPanel__
                                                  ;
                                                  if (0x2f < *puVar9) {
                                                    plVar3[0x33] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x33,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc3bd0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractor_<Start>b__24_0__
                                                  ;
                                                  if (0x30 < *puVar9) {
                                                    plVar3[0x34] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x34,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cc4554(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = Method_Nova_ListView_InternalMethod_234__
                                                  ;
                                                  if (0x31 < *puVar9) {
                                                    plVar3[0x35] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x35,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cbdfb0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  puVar1 = 
                                                  Method_Nova_ListView_AddGestureHandler<Gesture_OnHover,_ToggleVisuals>__
                                                  ;
                                                  if (0x32 < *puVar9) {
                                                    plVar3[0x36] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x36,lVar4);
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06cbed90(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_032a55a4(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_06de145c;
                                                  if (0x33 < *puVar9) {
                                                    plVar3[0x37] = lVar4;
                                                    thunk_FUN_0333a630(plVar3 + 0x37,lVar4);
                                                    if (0 < (int)plVar3[3]) {
                                                      uVar8 = 0;
                                                      uVar7 = plVar3[3] & 0xffffffff;
                                                      do {
                                                        if (uVar7 <= uVar8) goto LAB_06de1458;
                                                        FUN_06de173c(plVar3[uVar8 + 4]);
                                                        uVar7 = (ulong)*puVar9;
                                                        uVar8 = uVar8 + 1;
                                                      } while ((long)uVar8 < (long)(int)*puVar9);
                                                    }
                                                    return;
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06de1458:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


