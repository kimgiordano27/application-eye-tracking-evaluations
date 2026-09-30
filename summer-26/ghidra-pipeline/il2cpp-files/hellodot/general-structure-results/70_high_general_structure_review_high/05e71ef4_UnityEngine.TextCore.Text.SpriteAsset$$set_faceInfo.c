/*
FUNCTION_NAME: UnityEngine.TextCore.Text.SpriteAsset$$set_faceInfo
ENTRY_POINT: 05e71ef4
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_TextCore_Text_SpriteAsset__set_faceInfo(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  FUN_039683cc();
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x22;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
    }
    else {
      FUN_039683cc();
    }
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                              );
    FUN_04f7383c(lVar4,0);
    puVar2 = System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)
            System_Net_Http_Headers_TryParseListDelegate<StringWithQualityHeaderValue>_TypeInfo;
      uVar5 = *(undefined8 *)puVar2;
      *(undefined4 *)(lVar4 + 0x18) = 3;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      lVar3 = thunk_FUN_02cea894(*unaff_x25);
      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                (lVar3,*unaff_x24);
      if (lVar3 != 0) {
        lVar7 = *unaff_x29;
        uVar5 = *(undefined8 *)
                 System_Net_Http_Headers_TryParseDelegate<MediaTypeHeaderValue>_TypeInfo;
        lVar6 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          }
          else {
            FUN_039683cc(lVar3,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar4 + 0x30) = lVar3;
          lVar3 = thunk_FUN_02cea894(*unaff_x28);
          System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                    (lVar3,*(undefined8 *)
                            Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                    );
          lVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                      System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                    );
          FUN_04f7383c(lVar6,0);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)System_Tuple<Guid,_string>_TypeInfo;
            *(undefined8 *)(lVar6 + 0x10) =
                 *(undefined8 *)
                  UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>_TypeInfo;
            if (lVar3 != 0) {
              lVar7 = *(long *)(lVar3 + 0x10);
              lVar8 = *unaff_x26;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                }
                else {
                  FUN_039683cc(lVar3,lVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar4 + 0x28) = lVar3;
                lVar3 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar3 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                  }
                  else {
                    FUN_039683cc();
                  }
                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                              System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                            );
                  FUN_04f7383c(lVar4,0);
                  puVar2 = System_Net_Http_Headers_TryParseListDelegate<ProductHeaderValue>_TypeInfo
                  ;
                  if (lVar4 != 0) {
                    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_065f6950;
                    uVar5 = *(undefined8 *)puVar2;
                    *(undefined4 *)(lVar4 + 0x18) = 3;
                    *(undefined8 *)(lVar4 + 0x20) = uVar5;
                    lVar3 = thunk_FUN_02cea894(*unaff_x25);
                    System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                              (lVar3,*unaff_x24);
                    if (lVar3 != 0) {
                      lVar7 = *unaff_x29;
                      uVar5 = *(undefined8 *)PTR_DAT_06630e48;
                      lVar6 = *(long *)(lVar3 + 0x10);
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                        }
                        else {
                          FUN_039683cc(lVar3,uVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar4 + 0x30) = lVar3;
                        lVar3 = thunk_FUN_02cea894(*unaff_x28);
                        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                  (lVar3,*(undefined8 *)
                                          Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                  );
                        lVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                        
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                        FUN_04f7383c(lVar6,0);
                        if (lVar6 != 0) {
                          *(undefined8 *)(lVar6 + 0x18) =
                               *(undefined8 *)
                                System_Net_Http_Headers_TryParseListDelegate<TransferCodingWithQualityHeaderValue>_TypeInfo
                          ;
                          *(undefined8 *)(lVar6 + 0x10) =
                               *(undefined8 *)
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>_TypeInfo
                          ;
                          if (lVar3 != 0) {
                            lVar7 = *(long *)(lVar3 + 0x10);
                            lVar8 = *unaff_x26;
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                              }
                              else {
                                FUN_039683cc(lVar3,lVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar4 + 0x28) = lVar3;
                              lVar3 = *(long *)(unaff_x20 + 0x10);
                              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                              if (lVar3 != 0) {
                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                                }
                                else {
                                  FUN_039683cc();
                                }
                                lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                        
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                FUN_04f7383c(lVar4,0);
                                puVar2 = UnityEngine_Events_UnityAction<MessageEventArgs>_TypeInfo;
                                if (lVar4 != 0) {
                                  *(undefined8 *)(lVar4 + 0x10) =
                                       *(undefined8 *)
                                        UnityEngine_Events_UnityAction<AtlasAllocator_AtlasNode>_TypeInfo
                                  ;
                                  uVar5 = *(undefined8 *)puVar2;
                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                  *(undefined8 *)(lVar4 + 0x20) = uVar5;
                                  lVar3 = thunk_FUN_02cea894(*unaff_x25);
                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                            (lVar3,*unaff_x24);
                                  if (lVar3 != 0) {
                                    lVar7 = *unaff_x29;
                                    uVar5 = *(undefined8 *)
                                             Google_Protobuf_Collections_RepeatedField<TelemetryValue>_TypeInfo
                                    ;
                                    lVar6 = *(long *)(lVar3 + 0x10);
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                        ;
                                      }
                                      else {
                                        FUN_039683cc(lVar3,uVar5,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar4 + 0x30) = lVar3;
                                      lVar3 = thunk_FUN_02cea894(*unaff_x28);
                                      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                (lVar3,*(undefined8 *)
                                                                                                                
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                );
                                      lVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                      FUN_04f7383c(lVar6,0);
                                      if (lVar6 != 0) {
                                        *(undefined8 *)(lVar6 + 0x18) =
                                             *(undefined8 *)
                                              UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar6 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>_TypeInfo
                                        ;
                                        if (lVar3 != 0) {
                                          lVar7 = *(long *)(lVar3 + 0x10);
                                          lVar8 = *unaff_x26;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6
                                              ;
                                            }
                                            else {
                                              FUN_039683cc(lVar3,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar4 + 0x28) = lVar3;
                                            lVar3 = *(long *)(unaff_x20 + 0x10);
                                            *(int *)(unaff_x20 + 0x1c) =
                                                 *(int *)(unaff_x20 + 0x1c) + 1;
                                            if (lVar3 != 0) {
                                              uVar1 = *(uint *)(unaff_x20 + 0x18);
                                              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar4;
                                              }
                                              else {
                                                FUN_039683cc();
                                              }
                                              *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                              FUN_05e65fdc();
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


