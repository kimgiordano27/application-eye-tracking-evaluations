/*
FUNCTION_NAME: FUN_06b7f0ac
ENTRY_POINT: 06b7f0ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06b7f0ac(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  thunk_FUN_0333a630();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78();
    }
    lVar6 = thunk_FUN_032a56a0(*unaff_x19);
    FUN_06b60cec(lVar6,0);
    puVar2 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_uint>__;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) =
           *(undefined8 *)NovaSamples_UIControls_TextFieldKeyboardInput_<InputLoop>d__9_TypeInfo;
      thunk_FUN_0333a630();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x20));
      *(undefined4 *)(lVar6 + 0x18) = 0;
      lVar3 = thunk_FUN_032a56a0(*unaff_x25);
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (lVar3,*(undefined8 *)PTR_DAT_0727e500);
      if (lVar3 != 0) {
        lVar8 = *unaff_x26;
        uVar5 = *(undefined8 *)
                 Method_UnityEngine_UIElements_UxmlFactory<RangeSliderInt,_RangeSliderInt_UxmlTraits>__ctor__
        ;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_0333a630();
          }
          else {
            FUN_041e2c78(lVar3,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar6 + 0x30) = lVar3;
          thunk_FUN_0333a630((long *)(lVar6 + 0x30),lVar3);
          lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                    );
          System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                    (lVar3,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                    );
          lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                    );
          FUN_06b60ce4(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)Method_Mono_Math_BigInteger_TestBit__;
            thunk_FUN_0333a630();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
            thunk_FUN_0333a630();
            if (lVar3 != 0) {
              lVar8 = *(long *)(lVar3 + 0x10);
              lVar9 = *unaff_x27;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar4 = lVar7;
                  thunk_FUN_0333a630(plVar4,lVar7);
                }
                else {
                  FUN_041e2c78(lVar3,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x28) = lVar3;
                thunk_FUN_0333a630((long *)(lVar6 + 0x28),lVar3);
                lVar3 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar3 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar4 = lVar6;
                    thunk_FUN_0333a630(plVar4,lVar6);
                  }
                  else {
                    FUN_041e2c78();
                  }
                  lVar6 = thunk_FUN_032a56a0(*unaff_x19);
                  FUN_06b60cec(lVar6,0);
                  puVar2 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_long>__;
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)UnityEngine_UIElements_TextField_UxmlTraits_TypeInfo;
                    thunk_FUN_0333a630();
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x20));
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                              (lVar3,*(undefined8 *)PTR_DAT_0727e500);
                    if (lVar3 != 0) {
                      lVar8 = *unaff_x26;
                      uVar5 = *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                      ;
                      lVar7 = *(long *)(lVar3 + 0x10);
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                          thunk_FUN_0333a630();
                        }
                        else {
                          FUN_041e2c78(lVar3,uVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar6 + 0x30) = lVar3;
                        thunk_FUN_0333a630((long *)(lVar6 + 0x30),lVar3);
                        lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                        System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                  (lVar3,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                  );
                        lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                        FUN_06b60ce4(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__;
                          thunk_FUN_0333a630();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                          thunk_FUN_0333a630();
                          if (lVar3 != 0) {
                            lVar8 = *(long *)(lVar3 + 0x10);
                            lVar9 = *unaff_x27;
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar4 = lVar7;
                                thunk_FUN_0333a630(plVar4,lVar7);
                              }
                              else {
                                FUN_041e2c78(lVar3,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar3;
                              thunk_FUN_0333a630((long *)(lVar6 + 0x28),lVar3);
                              lVar3 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar3 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar4 = lVar6;
                                  thunk_FUN_0333a630(plVar4,lVar6);
                                }
                                else {
                                  FUN_041e2c78();
                                }
                                lVar6 = thunk_FUN_032a56a0(*unaff_x19);
                                FUN_06b60cec(lVar6,0);
                                puVar2 = 
                                Method_Oculus_Interaction_AutoMoveTowardsTarget_HandlePointerEventRaised__
                                ;
                                if (lVar6 != 0) {
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)
                                        Method_ReadyPlayerMe_AvatarCreator_AuthorizedRequest_SendRequest<ResponseData>__
                                  ;
                                  thunk_FUN_0333a630();
                                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x20));
                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                  lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                            (lVar3,*(undefined8 *)PTR_DAT_0727e500);
                                  if (lVar3 != 0) {
                                    lVar8 = *unaff_x26;
                                    uVar5 = *(undefined8 *)
                                             Method_UnityEngine_Audio_AudioClipPlayable_SetStereoPan__
                                    ;
                                    lVar7 = *(long *)(lVar3 + 0x10);
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                        ;
                                        thunk_FUN_0333a630();
                                      }
                                      else {
                                        FUN_041e2c78(lVar3,uVar5,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x30) = lVar3;
                                      thunk_FUN_0333a630((long *)(lVar6 + 0x30),lVar3);
                                      lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                (lVar3,*(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                );
                                      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                      FUN_06b60ce4(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              Method_AutoSpawnObjectInHandOnGrab_OnRelease__;
                                        thunk_FUN_0333a630();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                        thunk_FUN_0333a630();
                                        if (lVar3 != 0) {
                                          lVar8 = *(long *)(lVar3 + 0x10);
                                          lVar9 = *unaff_x27;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar4 = lVar7;
                                              thunk_FUN_0333a630(plVar4,lVar7);
                                            }
                                            else {
                                              FUN_041e2c78(lVar3,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x28) = lVar3;
                                            thunk_FUN_0333a630((long *)(lVar6 + 0x28),lVar3);
                                            lVar3 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar3 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar4 = lVar6;
                                                thunk_FUN_0333a630(plVar4,lVar6);
                                              }
                                              else {
                                                FUN_041e2c78();
                                              }
                                              lVar6 = thunk_FUN_032a56a0(*unaff_x19);
                                              FUN_06b60cec(lVar6,0);
                                              puVar2 = 
                                              Method_Mono_Security_Authenticode_AuthenticodeBase_ReadFirstBlock__
                                              ;
                                              if (lVar6 != 0) {
                                                *(undefined8 *)(lVar6 + 0x10) =
                                                     *(undefined8 *)PTR_DAT_07295c70;
                                                thunk_FUN_0333a630();
                                                *(undefined8 *)(lVar6 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x20));
                                                *(undefined4 *)(lVar6 + 0x18) = 3;
                                                lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                                System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                          (lVar3,*(undefined8 *)PTR_DAT_0727e500);
                                                if (lVar3 != 0) {
                                                  lVar8 = *unaff_x26;
                                                  uVar5 = *(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_0333a630((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar3,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Data_AutoIncrementBigInteger_set_Step__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_0333a630();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar7;
                                                        thunk_FUN_0333a630(plVar4,lVar7);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar3,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_0333a630((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_0333a630(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x19);
                                                    FUN_06b60cec(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseVerticalCollectionView_CreateVirtualizationController<ReusableMultiColumnListViewItem>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerDown__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar3,*(undefined8 *)PTR_DAT_0727e500);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x26;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_0333a630();
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_0333a630((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                                  );
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar3,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SimpleAvatarCreator_<TemplateSelected>d__16>__
                                                  );
                                                  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                                                  );
                                                  FUN_06b60ce4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_BaseValidator_ProcessEntity__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_0333a630();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar7;
                                                        thunk_FUN_0333a630(plVar4,lVar7);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar3,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_0333a630((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_0333a630(plVar4,lVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


