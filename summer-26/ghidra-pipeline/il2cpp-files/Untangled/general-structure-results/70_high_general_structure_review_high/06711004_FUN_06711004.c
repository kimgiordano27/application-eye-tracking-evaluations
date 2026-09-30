/*
FUNCTION_NAME: FUN_06711004
ENTRY_POINT: 06711004
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_9
*/


void FUN_06711004(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  
  if ((bRam00000000071d3c75 & 1) == 0) {
    FUN_02f07e70(System_Resources_ResourceTypeCode_TypeInfo);
    FUN_02f07e70(UnityEngine_ResourcesAPI_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_Response_TypeInfo);
    FUN_02f07e70(System_Net_ResponseDescription_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0feb8);
    FUN_02f07e70(PTR_DAT_06d0e120);
    FUN_02f07e70(System_Net_ResponseStream_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d91d40);
    FUN_02f07e70(PlayFab_ClientModels_RestoreIOSPurchasesResult_TypeInfo);
    FUN_02f07e70(System_Xml_Schema_RestrictionFacets_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_RethrowException_TypeInfo);
    FUN_02f07e70(System_Net_Http_Headers_RetryConditionHeaderValue_TypeInfo);
    FUN_02f07e70(System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_Antlr3_Runtime_CommonToken_TypeInfo);
    FUN_02f07e70(Language_Lua_ReturnStmt_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ReusableListViewItem_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d130f0);
    FUN_02f07e70(UnityEngine_UIElements_ReusableMultiColumnListViewItem_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ReusableMultiColumnTreeViewItem_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ReusableTreeViewItem_TypeInfo);
    FUN_02f07e70(Gley_TrafficSystem_Reverse_TypeInfo);
    FUN_02f07e70(PlayFab_EconomyModels_ReviewItemRequest_TypeInfo);
    FUN_02f07e70(PlayFab_EconomyModels_ReviewItemResponse_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_RewardAdActivityRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_RewardAdActivityResult_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_Antlr3_Runtime_Tree_RewriteCardinalityException_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_Antlr3_Runtime_Tree_RewriteEmptyStreamException_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_Rfc2898DeriveBytes_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_RightShiftHandler_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_RightShiftInstruction_TypeInfo);
    bRam00000000071d3c75 = 1;
  }
  plVar9 = (long *)(param_1 + 0x20);
  if (*plVar9 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar9 = lVar4;
    thunk_FUN_02f411dc(plVar9,lVar4);
  }
  plVar7 = (long *)(param_1 + 0x28);
  if (*plVar7 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar7 = lVar4;
    thunk_FUN_02f411dc(plVar7,lVar4);
  }
  plVar29 = (long *)(param_1 + 0x30);
  if (*plVar29 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar29 = lVar4;
    thunk_FUN_02f411dc(plVar29,lVar4);
  }
  plVar28 = (long *)(param_1 + 0x38);
  if (*plVar28 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar28 = lVar4;
    thunk_FUN_02f411dc(plVar28,lVar4);
  }
  plVar27 = (long *)(param_1 + 0x50);
  if (*plVar27 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar27 = lVar4;
    thunk_FUN_02f411dc(plVar27,lVar4);
  }
  plVar11 = (long *)(param_1 + 0x40);
  if (*plVar11 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar11 = lVar4;
    thunk_FUN_02f411dc(plVar11,lVar4);
  }
  plVar12 = (long *)(param_1 + 0x48);
  if (*plVar12 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar12 = lVar4;
    thunk_FUN_02f411dc(plVar12,lVar4);
  }
  plVar13 = (long *)(param_1 + 0x58);
  if (*plVar13 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar13 = lVar4;
    thunk_FUN_02f411dc(plVar13,lVar4);
  }
  plVar14 = (long *)(param_1 + 0x60);
  if (*plVar14 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar14 = lVar4;
    thunk_FUN_02f411dc(plVar14,lVar4);
  }
  plVar15 = (long *)(param_1 + 0x70);
  if (*plVar15 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar15 = lVar4;
    thunk_FUN_02f411dc(plVar15,lVar4);
  }
  plVar16 = (long *)(param_1 + 0x78);
  if (*plVar16 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar16 = lVar4;
    thunk_FUN_02f411dc(plVar16,lVar4);
  }
  plVar17 = (long *)(param_1 + 0x90);
  if (*plVar17 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar17 = lVar4;
    thunk_FUN_02f411dc(plVar17,lVar4);
  }
  plVar18 = (long *)(param_1 + 0x98);
  if (*plVar18 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar18 = lVar4;
    thunk_FUN_02f411dc(plVar18,lVar4);
  }
  plVar19 = (long *)(param_1 + 0xa0);
  if (*plVar19 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar19 = lVar4;
    thunk_FUN_02f411dc(plVar19,lVar4);
  }
  plVar20 = (long *)(param_1 + 0xa8);
  if (*plVar20 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar20 = lVar4;
    thunk_FUN_02f411dc(plVar20,lVar4);
  }
  plVar21 = (long *)(param_1 + 0xb0);
  if (*plVar21 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar21 = lVar4;
    thunk_FUN_02f411dc(plVar21,lVar4);
  }
  plVar22 = (long *)(param_1 + 0xb8);
  if (*plVar22 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar22 = lVar4;
    thunk_FUN_02f411dc(plVar22,lVar4);
  }
  plVar23 = (long *)(param_1 + 0xc0);
  if (*plVar23 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar23 = lVar4;
    thunk_FUN_02f411dc(plVar23,lVar4);
  }
  plVar24 = (long *)(param_1 + 200);
  if (*plVar24 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar24 = lVar4;
    thunk_FUN_02f411dc(plVar24,lVar4);
  }
  puVar1 = PTR_DAT_06d0e120;
  plVar26 = (long *)(param_1 + 0xd0);
  if (*plVar26 == 0) {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0feb8);
    FUN_06710380();
    *plVar26 = lVar4;
    thunk_FUN_02f411dc(plVar26,lVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c20de == '\0') {
    FUN_02f07e70(PTR_DAT_06d0e120);
    DAT_071c20de = '\x01';
  }
  puVar3 = System_Net_ResponseDescription_TypeInfo;
  puVar2 = UnityEngine_ResourcesAPI_TypeInfo;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_04c73c8c(lVar4,uVar5,*(undefined8 *)puVar2);
  plVar6 = (long *)(param_1 + 0xe8);
  *plVar6 = lVar4;
  thunk_FUN_02f411dc(plVar6,lVar4);
  puVar2 = System_Xml_Schema_RestrictionFacets_TypeInfo;
  puVar1 = PixelCrushers_DialogueSystem_Response_TypeInfo;
  if (*plVar6 != 0) {
    FUN_04c74618(*plVar6,*(undefined8 *)System_Xml_Schema_RestrictionFacets_TypeInfo,*plVar9,
                 *(undefined8 *)PixelCrushers_DialogueSystem_Response_TypeInfo);
    if (*plVar9 != 0) {
      FUN_06710fb8(*plVar9,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_06d91d40;
      if (*plVar6 != 0) {
        FUN_04c74618(*plVar6,*(undefined8 *)PTR_DAT_06d91d40,*plVar7,*(undefined8 *)puVar1);
        if (*plVar7 != 0) {
          FUN_06710fb8(*plVar7,*(undefined8 *)puVar2);
          puVar2 = Unity_VisualScripting_Antlr3_Runtime_CommonToken_TypeInfo;
          if (*plVar6 != 0) {
            FUN_04c74618(*plVar6,*(undefined8 *)
                                  Unity_VisualScripting_Antlr3_Runtime_CommonToken_TypeInfo,*plVar29
                         ,*(undefined8 *)puVar1);
            if (*plVar29 != 0) {
              FUN_06710fb8(*plVar29,*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_06d130f0;
              if (*plVar6 != 0) {
                FUN_04c74618(*plVar6,*(undefined8 *)PTR_DAT_06d130f0,*plVar28,*(undefined8 *)puVar1)
                ;
                if (*plVar28 != 0) {
                  FUN_06710fb8(*plVar28,*(undefined8 *)puVar2);
                  puVar2 = Unity_VisualScripting_RightShiftHandler_TypeInfo;
                  if (*plVar6 != 0) {
                    FUN_04c74618(*plVar6,*(undefined8 *)
                                          Unity_VisualScripting_RightShiftHandler_TypeInfo,*plVar27,
                                 *(undefined8 *)puVar1);
                    if (*plVar27 != 0) {
                      FUN_06710fb8(*plVar27,*(undefined8 *)puVar2);
                      puVar2 = System_Net_ResponseStream_TypeInfo;
                      if (*plVar6 != 0) {
                        FUN_04c74618(*plVar6,*(undefined8 *)System_Net_ResponseStream_TypeInfo,
                                     *plVar11,*(undefined8 *)puVar1);
                        if (*plVar11 != 0) {
                          FUN_06710fb8(*plVar11,*(undefined8 *)puVar2);
                          puVar2 = UnityEngine_UIElements_ReusableTreeViewItem_TypeInfo;
                          if (*plVar6 != 0) {
                            FUN_04c74618(*plVar6,*(undefined8 *)
                                                  UnityEngine_UIElements_ReusableTreeViewItem_TypeInfo
                                         ,*plVar12,*(undefined8 *)puVar1);
                            if (*plVar12 != 0) {
                              FUN_06710fb8(*plVar12,*(undefined8 *)puVar2);
                              puVar2 = PlayFab_EconomyModels_ReviewItemResponse_TypeInfo;
                              if (*plVar6 != 0) {
                                FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                            
                                                  PlayFab_EconomyModels_ReviewItemResponse_TypeInfo,
                                             *plVar13,*(undefined8 *)puVar1);
                                if (*plVar13 != 0) {
                                  FUN_06710fb8(*plVar13,*(undefined8 *)puVar2);
                                  puVar2 = PlayFab_ClientModels_RewardAdActivityRequest_TypeInfo;
                                  if (*plVar6 != 0) {
                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_RewardAdActivityRequest_TypeInfo
                                                 ,*plVar14,*(undefined8 *)puVar1);
                                    if (*plVar14 != 0) {
                                      FUN_06710fb8(*plVar14,*(undefined8 *)puVar2);
                                      puVar2 = 
                                      System_Linq_Expressions_Interpreter_RethrowException_TypeInfo;
                                      if (*plVar6 != 0) {
                                        FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_RethrowException_TypeInfo
                                                  ,*plVar15,*(undefined8 *)puVar1);
                                        if (*plVar15 != 0) {
                                          FUN_06710fb8(*plVar15,*(undefined8 *)puVar2);
                                          puVar2 = 
                                          System_Security_Cryptography_Rfc2898DeriveBytes_TypeInfo;
                                          if (*plVar6 != 0) {
                                            FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                    
                                                  System_Security_Cryptography_Rfc2898DeriveBytes_TypeInfo
                                                  ,*plVar16,*(undefined8 *)puVar1);
                                            if (*plVar16 != 0) {
                                              FUN_06710fb8(*plVar16,*(undefined8 *)puVar2);
                                              puVar2 = Language_Lua_ReturnStmt_TypeInfo;
                                              if (*plVar6 != 0) {
                                                FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                            
                                                  Language_Lua_ReturnStmt_TypeInfo,*plVar17,
                                                  *(undefined8 *)puVar1);
                                                if (*plVar17 != 0) {
                                                  FUN_06710fb8(*plVar17,*(undefined8 *)puVar2);
                                                  puVar2 = 
                                                  UnityEngine_UIElements_ReusableListViewItem_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_ReusableListViewItem_TypeInfo
                                                  ,*plVar18,*(undefined8 *)puVar1);
                                                  if (*plVar18 != 0) {
                                                    FUN_06710fb8(*plVar18,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo
                                                  ,*plVar19,*(undefined8 *)puVar1);
                                                  if (*plVar19 != 0) {
                                                    FUN_06710fb8(*plVar19,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  Unity_VisualScripting_Antlr3_Runtime_Tree_RewriteCardinalityException_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Unity_VisualScripting_Antlr3_Runtime_Tree_RewriteCardinalityException_TypeInfo
                                                  ,*plVar20,*(undefined8 *)puVar1);
                                                  if (*plVar20 != 0) {
                                                    FUN_06710fb8(*plVar20,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  System_Linq_Expressions_Interpreter_RightShiftInstruction_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_RightShiftInstruction_TypeInfo
                                                  ,*plVar21,*(undefined8 *)puVar1);
                                                  if (*plVar21 != 0) {
                                                    FUN_06710fb8(*plVar21,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  UnityEngine_UIElements_ReusableMultiColumnListViewItem_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_ReusableMultiColumnListViewItem_TypeInfo
                                                  ,*plVar22,*(undefined8 *)puVar1);
                                                  if (*plVar22 != 0) {
                                                    FUN_06710fb8(*plVar22,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  UnityEngine_UIElements_ReusableMultiColumnTreeViewItem_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_ReusableMultiColumnTreeViewItem_TypeInfo
                                                  ,*plVar23,*(undefined8 *)puVar1);
                                                  if (*plVar23 != 0) {
                                                    FUN_06710fb8(*plVar23,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  PlayFab_ClientModels_RestoreIOSPurchasesResult_TypeInfo
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  PlayFab_ClientModels_RestoreIOSPurchasesResult_TypeInfo
                                                  ,*plVar24,*(undefined8 *)puVar1);
                                                  if (*plVar24 != 0) {
                                                    FUN_06710fb8(*plVar24,*(undefined8 *)puVar2);
                                                    puVar2 = Gley_TrafficSystem_Reverse_TypeInfo;
                                                    if (*plVar6 != 0) {
                                                      FUN_04c74618(*plVar6,*(undefined8 *)
                                                                                                                                                        
                                                  Gley_TrafficSystem_Reverse_TypeInfo,*plVar26,
                                                  *(undefined8 *)puVar1);
                                                  if (*plVar26 != 0) {
                                                    FUN_06710fb8(*plVar26,*(undefined8 *)puVar2);
                                                    lVar4 = *(long *)(param_1 + 0xd8);
                                                    if (lVar4 == 0) {
LAB_06711af4:
                                                      puVar3 = 
                                                  Unity_VisualScripting_Antlr3_Runtime_Tree_RewriteEmptyStreamException_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  System_Resources_ResourceTypeCode_TypeInfo;
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    plVar9 = (long *)(param_1 + 0x68);
                                                    uVar25 = 
                                                  System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                                                            (*(long *)(param_1 + 0xe8),
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_VisualScripting_Antlr3_Runtime_Tree_RewriteEmptyStreamException_TypeInfo
                                                  ,plVar9,*(undefined8 *)
                                                                                                                      
                                                  System_Resources_ResourceTypeCode_TypeInfo);
                                                  if ((uVar25 & 1) == 0) {
                                                    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                PTR_DAT_06d0feb8);
                                                    FUN_06710380();
                                                    *plVar9 = lVar4;
                                                    thunk_FUN_02f411dc(plVar9,lVar4);
                                                    if (*plVar9 == 0) goto LAB_06711cec;
                                                    FUN_06710fb8(*plVar9,*(undefined8 *)
                                                                                                                                                    
                                                  System_Runtime_Remoting_Messaging_ReturnMessage_TypeInfo
                                                  );
                                                  if (*plVar6 == 0) goto LAB_06711cec;
                                                  FUN_04c74618(*plVar6,*(undefined8 *)puVar3,*plVar9
                                                               ,*(undefined8 *)puVar1);
                                                  }
                                                  puVar3 = 
                                                  PlayFab_EconomyModels_ReviewItemRequest_TypeInfo;
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    plVar9 = (long *)(param_1 + 0x88);
                                                    uVar25 = 
                                                  System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                                                            (*(long *)(param_1 + 0xe8),
                                                             *(undefined8 *)
                                                                                                                            
                                                  PlayFab_EconomyModels_ReviewItemRequest_TypeInfo,
                                                  plVar9,*(undefined8 *)puVar2);
                                                  if ((uVar25 & 1) == 0) {
                                                    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                PTR_DAT_06d0feb8);
                                                    FUN_06710380();
                                                    *plVar9 = lVar4;
                                                    thunk_FUN_02f411dc(plVar9,lVar4);
                                                    if (*plVar9 == 0) goto LAB_06711cec;
                                                    FUN_06710fb8(*plVar9,*(undefined8 *)puVar3);
                                                    if (*plVar6 == 0) goto LAB_06711cec;
                                                    FUN_04c74618(*plVar6,*(undefined8 *)puVar3,
                                                                 *plVar9,*(undefined8 *)puVar1);
                                                  }
                                                  puVar3 = 
                                                  System_Net_Http_Headers_RetryConditionHeaderValue_TypeInfo
                                                  ;
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    plVar9 = (long *)(param_1 + 0x80);
                                                    uVar25 = 
                                                  System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                                                            (*(long *)(param_1 + 0xe8),
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Net_Http_Headers_RetryConditionHeaderValue_TypeInfo
                                                  ,plVar9,*(undefined8 *)puVar2);
                                                  if ((uVar25 & 1) == 0) {
                                                    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                PTR_DAT_06d0feb8);
                                                    FUN_06710380();
                                                    *plVar9 = lVar4;
                                                    thunk_FUN_02f411dc(plVar9,lVar4);
                                                    if (*plVar6 == 0) goto LAB_06711cec;
                                                    FUN_04c74618(*plVar6,*(undefined8 *)puVar3,
                                                                 *plVar9,*(undefined8 *)puVar1);
                                                    if (*plVar9 == 0) goto LAB_06711cec;
                                                    FUN_06710fb8(*plVar9,*(undefined8 *)
                                                                                                                                                    
                                                  PlayFab_ClientModels_RewardAdActivityResult_TypeInfo
                                                  );
                                                  }
                                                  lVar4 = FUN_06710ef0();
                                                  if (lVar4 != 0) {
                                                    if (pcRam00000000071d3d58 == (code *)0x0) {
                                                      pcRam00000000071d3d58 =
                                                           (code *)FUN_02f07e34(
                                                  "UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)"
                                                  );
                                                  }
                                                  (*pcRam00000000071d3d58)(lVar4,1);
                                                  lVar4 = FUN_06710ef0();
                                                  if ((lVar4 != 0) &&
                                                     (lVar4 = FUN_06711d38(), lVar4 != 0)) {
                                                    FUN_06711dac(0x3f800000,0,0,0x3f800000);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    lVar10 = 4;
                                                    do {
                                                      uVar25 = lVar10 - 4;
                                                      if ((long)(int)*(uint *)(lVar4 + 0x18) <=
                                                          (long)uVar25) goto LAB_06711af4;
                                                      if (*(uint *)(lVar4 + 0x18) <= uVar25) {
LAB_06711cf0:
                    /* WARNING: Subroutine does not return */
                                                        FUN_02f080c8();
                                                      }
                                                      if (*(long *)(lVar4 + lVar10 * 8) != 0) {
                                                        lVar8 = *(long *)(param_1 + 0xe8);
                                                        uVar5 = FUN_06707a4c();
                                                        lVar4 = *(long *)(param_1 + 0xd8);
                                                        if (lVar4 == 0) break;
                                                        if (*(uint *)(lVar4 + 0x18) <= uVar25)
                                                        goto LAB_06711cf0;
                                                        if (lVar8 == 0) break;
                                                        FUN_04c74618(lVar8,uVar5,
                                                                     *(undefined8 *)
                                                                      (lVar4 + lVar10 * 8),
                                                                     *(undefined8 *)puVar1);
                                                        lVar4 = *(long *)(param_1 + 0xd8);
                                                      }
                                                      lVar10 = lVar10 + 1;
                                                    } while (lVar4 != 0);
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
LAB_06711cec:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


