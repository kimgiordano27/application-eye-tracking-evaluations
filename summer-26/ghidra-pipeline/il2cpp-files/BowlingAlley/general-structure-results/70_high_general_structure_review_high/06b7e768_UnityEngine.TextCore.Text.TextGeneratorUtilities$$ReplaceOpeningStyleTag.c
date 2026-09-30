/*
FUNCTION_NAME: UnityEngine.TextCore.Text.TextGeneratorUtilities$$ReplaceOpeningStyleTag
ENTRY_POINT: 06b7e768
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void UnityEngine_TextCore_Text_TextGeneratorUtilities__ReplaceOpeningStyleTag(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  thunk_FUN_0333a630();
  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                            );
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
            (lVar4,*(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
            );
  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                            );
  FUN_06b60ce4(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = *unaff_x29;
    thunk_FUN_0333a630();
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x19;
    thunk_FUN_0333a630();
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar4 + 0x10);
      lVar9 = *unaff_x27;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar5;
          thunk_FUN_0333a630(plVar6,lVar5);
        }
        else {
          FUN_041e2c78(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar4;
        thunk_FUN_0333a630((long *)(unaff_x22 + 0x28),lVar4);
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_0333a630();
          }
          else {
            FUN_041e2c78();
          }
          lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23>__
                                    );
          FUN_06b60cec(lVar4,0);
          puVar2 = UnityEngine_Rendering_GenericPool<XRPass>_TypeInfo;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07283dd0;
            thunk_FUN_0333a630();
            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
            *(undefined4 *)(lVar4 + 0x18) = 0;
            lVar5 = thunk_FUN_032a56a0(*unaff_x25);
            System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                      (lVar5,*(undefined8 *)PTR_DAT_0727e500);
            if (lVar5 != 0) {
              lVar9 = *unaff_x26;
              uVar7 = *(undefined8 *)
                       Method_UnityEngine_UIElements_UxmlFactory<Scroller,_Scroller_UxmlTraits>__ctor__
              ;
              lVar8 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_0333a630();
                }
                else {
                  FUN_041e2c78(lVar5,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar4 + 0x30) = lVar5;
                thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                          );
                System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                          (lVar5,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                          );
                lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                          );
                FUN_06b60ce4(lVar8,0);
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x18) =
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__;
                  thunk_FUN_0333a630();
                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                  thunk_FUN_0333a630();
                  if (lVar5 != 0) {
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar10 = *unaff_x27;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar6 = lVar8;
                        thunk_FUN_0333a630(plVar6,lVar8);
                      }
                      else {
                        FUN_041e2c78(lVar5,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar4 + 0x28) = lVar5;
                      thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                      lVar5 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar4;
                          thunk_FUN_0333a630(plVar6,lVar4);
                        }
                        else {
                          FUN_041e2c78();
                        }
                        lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23>__
                                                  );
                        FUN_06b60cec(lVar4,0);
                        puVar2 = PTR_DAT_07279b88;
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07285f70;
                          thunk_FUN_0333a630();
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                          *(undefined4 *)(lVar4 + 0x18) = 1;
                          lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                          System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                    (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                          if (lVar5 != 0) {
                            uVar7 = *(undefined8 *)puVar2;
                            lVar8 = *(long *)(lVar5 + 0x10);
                            lVar9 = *unaff_x26;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                thunk_FUN_0333a630();
                              }
                              else {
                                FUN_041e2c78(lVar5,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar4 + 0x30) = lVar5;
                              thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                              lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                              System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                        (lVar5,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                        );
                              lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                              FUN_06b60ce4(lVar8,0);
                              puVar2 = 
                              Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnCustomStyleResolved__
                              ;
                              if (lVar8 != 0) {
                                *(undefined8 *)(lVar8 + 0x18) =
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnCustomStyleResolved__
                                ;
                                thunk_FUN_0333a630();
                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                thunk_FUN_0333a630();
                                if (lVar5 != 0) {
                                  lVar9 = *(long *)(lVar5 + 0x10);
                                  lVar10 = *unaff_x27;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar6 = lVar8;
                                      thunk_FUN_0333a630(plVar6,lVar8);
                                    }
                                    else {
                                      FUN_041e2c78(lVar5,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar4 + 0x28) = lVar5;
                                    thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                    lVar5 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar5 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar6 = lVar4;
                                        thunk_FUN_0333a630(plVar6,lVar4);
                                      }
                                      else {
                                        FUN_041e2c78();
                                      }
                                      lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23>__
                                                  );
                                      FUN_06b60cec(lVar4,0);
                                      puVar3 = 
                                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                      ;
                                      if (lVar4 != 0) {
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_TemplateContainer_UxmlFactory_TypeInfo
                                        ;
                                        thunk_FUN_0333a630();
                                        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                                        thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                        *(undefined4 *)(lVar4 + 0x18) = 0;
                                        lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                        System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                  (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                        if (lVar5 != 0) {
                                          lVar9 = *unaff_x26;
                                          uVar7 = *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                                          ;
                                          lVar8 = *(long *)(lVar5 + 0x10);
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar7;
                                              thunk_FUN_0333a630();
                                            }
                                            else {
                                              FUN_041e2c78(lVar5,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar4 + 0x30) = lVar5;
                                            thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                            lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                            System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                      (lVar5,*(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                            lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                            FUN_06b60ce4(lVar8,0);
                                            if (lVar8 != 0) {
                                              *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar2;
                                              thunk_FUN_0333a630();
                                              *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                              thunk_FUN_0333a630();
                                              if (lVar5 != 0) {
                                                lVar10 = *unaff_x27;
                                                lVar9 = *(long *)(lVar5 + 0x10);
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                puVar2 = 
                                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23>__
                                                ;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar6 = lVar8;
                                                    thunk_FUN_0333a630(plVar6,lVar8);
                                                  }
                                                  else {
                                                    FUN_041e2c78(lVar5,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06b60cec(lVar4,0);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_float>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_IO_TextReader_SyncTextReader_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_UxmlFactory<SearchBar,_TextField_UxmlTraits>__ctor__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_BaseValidator_set_DtdInfo__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                  thunk_FUN_0333a630();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_0333a630(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06b60cec(lVar4,0);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_uint>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  NovaSamples_UIControls_TextFieldKeyboardInput_<InputLoop>d__9_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_UxmlFactory<RangeSliderInt,_RangeSliderInt_UxmlTraits>__ctor__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Mono_Math_BigInteger_TestBit__;
                                                    thunk_FUN_0333a630();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                    thunk_FUN_0333a630();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *unaff_x27;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          plVar6 = (long *)(lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar6 = lVar8;
                                                          thunk_FUN_0333a630(plVar6,lVar8);
                                                        }
                                                        else {
                                                          FUN_041e2c78(lVar5,lVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06b60cec(lVar4,0);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_long>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_TextField_UxmlTraits_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Mono_Math_BigInteger_op_Multiply__;
                                                    thunk_FUN_0333a630();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                    thunk_FUN_0333a630();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *unaff_x27;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          plVar6 = (long *)(lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar6 = lVar8;
                                                          thunk_FUN_0333a630(plVar6,lVar8);
                                                        }
                                                        else {
                                                          FUN_041e2c78(lVar5,lVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06b60cec(lVar4,0);
                                                    puVar3 = 
                                                  Method_Oculus_Interaction_AutoMoveTowardsTarget_HandlePointerEventRaised__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_ReadyPlayerMe_AvatarCreator_AuthorizedRequest_SendRequest<ResponseData>__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Audio_AudioClipPlayable_SetStereoPan__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_AutoSpawnObjectInHandOnGrab_OnRelease__;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                  thunk_FUN_0333a630();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_0333a630(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06b60cec(lVar4,0);
                                                    puVar3 = 
                                                  Method_Mono_Security_Authenticode_AuthenticodeBase_ReadFirstBlock__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07295c70;
                                                    thunk_FUN_0333a630();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                                                                                        
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Data_AutoIncrementBigInteger_set_Step__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                  thunk_FUN_0333a630();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_0333a630(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06b60cec(lVar4,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseVerticalCollectionView_CreateVirtualizationController<ReusableMultiColumnListViewItem>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerDown__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x25);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_BaseValidator_ProcessEntity__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                  thunk_FUN_0333a630();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_0333a630(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_0333a630((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_0333a630(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_0333a630();
                                                    FUN_06b60ab0(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


