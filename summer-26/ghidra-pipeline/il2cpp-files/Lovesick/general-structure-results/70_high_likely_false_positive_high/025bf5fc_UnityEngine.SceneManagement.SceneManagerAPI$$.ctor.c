/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManagerAPI$$.ctor
ENTRY_POINT: 025bf5fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source;functionality_data_collection_or_telemetry_hits_6
*/


void UnityEngine_SceneManagement_SceneManagerAPI___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_Meta_WitAi_WitRequest_WaitForTimeout__;
  puVar2 = Method_System_Linq_Enumerable_Select<JProperty,_JToken>__;
  FUN_012c6300(param_1,*(undefined8 *)Method_System_Collections_Generic_List<StackFrame>_Add__);
  FUN_013a4bfc(param_1,0,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x70) = param_1;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_System_Nullable<Vector2>_GetValueOrDefault__;
  if (lVar4 != 0) {
    FUN_01298da0(lVar4,*(undefined8 *)StringLiteral_940);
    *(long *)(unaff_x19 + 0x80) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Mono_Unity_UnityTls_TypeInfo;
    if (lVar4 != 0) {
      FUN_01298da0(lVar4,*(undefined8 *)StringLiteral_1838);
      *(long *)(unaff_x19 + 0x88) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__;
      if (lVar4 != 0) {
        FUN_0138e64c(lVar4,*(undefined8 *)Method_System_Collections_Generic_List<Vertex>_ToArray__);
        *(long *)(unaff_x19 + 0x90) = lVar4;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_033f4490;
        if (lVar4 != 0) {
          FUN_0138e64c(lVar4,*(undefined8 *)StringLiteral_9237);
          *(long *)(unaff_x19 + 0x98) = lVar4;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vduph_laneq_s16__;
          if (lVar4 != 0) {
            FUN_0138e64c(lVar4,*(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_high_u16__);
            *(long *)(unaff_x19 + 0xa0) = lVar4;
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = StringLiteral_3317;
            if (lVar4 != 0) {
              FUN_01320e50(lVar4,*(undefined8 *)
                                  Method_System_Collections_Generic_List<RendererList>_Clear__);
              *(long *)(unaff_x19 + 0xa8) = lVar4;
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar2 = 
              Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Count__;
              if (lVar4 != 0) {
                FUN_01320e50(lVar4,*(undefined8 *)PTR_DAT_033eaab0);
                *(long *)(unaff_x19 + 0xb0) = lVar4;
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar2 = Method_System_Linq_Enumerable_Where<Transform>__;
                if (lVar4 != 0) {
                  FUN_01298da0(lVar4,*(undefined8 *)StringLiteral_9043);
                  *(long *)(unaff_x19 + 0xb8) = lVar4;
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  puVar3 = StringLiteral_199;
                  puVar1 = Method_System_Globalization_IdnMapping_GetAscii__;
                  if (lVar4 != 0) {
                    FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_199);
                    *(long *)(unaff_x19 + 0xc0) = lVar4;
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    puVar1 = PTR_DAT_033ee120;
                    if (lVar4 != 0) {
                      FUN_012dd38c(lVar4,*(undefined8 *)StringLiteral_11197);
                      *(long *)(unaff_x19 + 200) = lVar4;
                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      puVar1 = 
                      Method_System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_get_Item2__
                      ;
                      if (lVar4 != 0) {
                        FUN_012dd38c(lVar4,*(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_ColorField>__
                                    );
                        *(long *)(unaff_x19 + 0xd0) = lVar4;
                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdotq_laneq_u32__;
                        if (lVar4 != 0) {
                          FUN_012dd38c(lVar4,*(undefined8 *)
                                              Method_MB3_TextureBaker_<_CreateAtlasesCoroutineTextureArray>d__110_System_Collections_IEnumerator_Reset__
                                      );
                          *(long *)(unaff_x19 + 0xd8) = lVar4;
                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                          puVar1 = 
                          Method_Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12_MoveNext__
                          ;
                          if (lVar4 != 0) {
                            FUN_01320e50(lVar4,*(undefined8 *)
                                                System_Collections_Generic_IEnumerator<MethodInfo>_TypeInfo
                                        );
                            *(long *)(unaff_x19 + 0xe0) = lVar4;
                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            puVar1 = System_Collections_Generic_List<Index>_TypeInfo;
                            if (lVar4 != 0) {
                              FUN_01320e50(lVar4,*(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<byte[]>>_GetResult__
                                          );
                              *(long *)(unaff_x19 + 0xe8) = lVar4;
                              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                              if (lVar4 != 0) {
                                FUN_01320e50(lVar4,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_ARSubsystems_XRCameraConfiguration__ctor__
                                            );
                                *(long *)(unaff_x19 + 0xf0) = lVar4;
                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                puVar2 = StringLiteral_14101;
                                if (lVar4 != 0) {
                                  FUN_01320e50(lVar4,*(undefined8 *)puVar3);
                                  *(long *)(unaff_x19 + 0xf8) = lVar4;
                                  lVar4 = *(long *)puVar2;
                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar4 = *(long *)puVar2;
                                  }
                                  puVar1 = StringLiteral_756;
                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                                  if (lVar5 == 0) {
                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar4 = *(long *)puVar2;
                                    }
                                    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    if (lVar5 == 0) goto LAB_025c019c;
                                    FUN_012d1810(lVar5,uVar6,*(undefined8 *)StringLiteral_12383,0);
                                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
                                  }
                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ef140);
                                  if (lVar4 != 0) {
                                    FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                 *(undefined8 *)PTR_DAT_033f4760);
                                    *(long *)(unaff_x19 + 0x100) = lVar4;
                                    lVar4 = *(long *)puVar2;
                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar4 = *(long *)puVar2;
                                    }
                                    puVar1 = StringLiteral_222;
                                    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                                    if (lVar5 == 0) {
                                      if (*(int *)(lVar4 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar4 = *(long *)puVar2;
                                      }
                                      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                      if (lVar5 == 0) goto LAB_025c019c;
                                      FUN_012d1810(lVar5,uVar6,*(undefined8 *)PTR_DAT_033f3f08,0);
                                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar5;
                                    }
                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
                                                  );
                                    if (lVar4 != 0) {
                                      FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                   *(undefined8 *)
                                                    Method_System_Net_NetEventSource_WriteEvent__);
                                      *(long *)(unaff_x19 + 0x108) = lVar4;
                                      lVar4 = *(long *)puVar2;
                                      if (*(int *)(lVar4 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar4 = *(long *)puVar2;
                                      }
                                      puVar1 = StringLiteral_13506;
                                      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
                                      if (lVar5 == 0) {
                                        if (*(int *)(lVar4 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar4 = *(long *)puVar2;
                                        }
                                        uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        if (lVar5 == 0) goto LAB_025c019c;
                                        FUN_012d1810(lVar5,uVar6,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_ListViewController_EnsureItemSourceCanBeResized__
                                                  ,0);
                                        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar5;
                                      }
                                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<GreenroomComboComponent>__ctor__
                                                  );
                                      if (lVar4 != 0) {
                                        FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlahh_s16__
                                                  );
                                        *(long *)(unaff_x19 + 0x110) = lVar4;
                                        lVar4 = *(long *)puVar2;
                                        if (*(int *)(lVar4 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar4 = *(long *)puVar2;
                                        }
                                        puVar1 = StringLiteral_13696;
                                        lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
                                        if (lVar5 == 0) {
                                          if (*(int *)(lVar4 + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                            lVar4 = *(long *)puVar2;
                                          }
                                          uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                          if (lVar5 == 0) goto LAB_025c019c;
                                          FUN_012d1810(lVar5,uVar6,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_XR_CoreUtils_Collections_HashSetList<XRBaseControllerInteractor>_Remove__
                                                  ,0);
                                          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) =
                                               lVar5;
                                        }
                                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Nullable<NativeSlice<ulong>>__ctor__
                                                  );
                                        if (lVar4 != 0) {
                                          FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_List<ApplicationInvite>_TypeInfo
                                                  );
                                          *(long *)(unaff_x19 + 0x118) = lVar4;
                                          lVar4 = *(long *)puVar2;
                                          if (*(int *)(lVar4 + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                            lVar4 = *(long *)puVar2;
                                          }
                                          puVar1 = StringLiteral_10737;
                                          lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
                                          if (lVar5 == 0) {
                                            if (*(int *)(lVar4 + 0xe0) == 0) {
                                              thunk_FUN_00d32864();
                                              lVar4 = *(long *)puVar2;
                                            }
                                            uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                            if (lVar5 == 0) goto LAB_025c019c;
                                            FUN_012d1810(lVar5,uVar6,
                                                         *(undefined8 *)
                                                          UnityEngine_UI_Slider_SliderEvent_TypeInfo
                                                         ,0);
                                            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                 lVar5;
                                          }
                                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                            
                                                  System_Collections_Generic_List<IMaterialDataProvider>_TypeInfo
                                                  );
                                          if (lVar4 != 0) {
                                            FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                         *(undefined8 *)PTR_DAT_033f1a18);
                                            *(long *)(unaff_x19 + 0x120) = lVar4;
                                            lVar4 = *(long *)puVar2;
                                            if (*(int *)(lVar4 + 0xe0) == 0) {
                                              thunk_FUN_00d32864();
                                              lVar4 = *(long *)puVar2;
                                            }
                                            puVar1 = StringLiteral_6810;
                                            lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
                                            if (lVar5 == 0) {
                                              if (*(int *)(lVar4 + 0xe0) == 0) {
                                                thunk_FUN_00d32864();
                                                lVar4 = *(long *)puVar2;
                                              }
                                              uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                              if (lVar5 == 0) goto LAB_025c019c;
                                              FUN_012d1810(lVar5,uVar6,
                                                           *(undefined8 *)
                                                            Unity_Mathematics_int4x4_TypeInfo,0);
                                              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) =
                                                   lVar5;
                                            }
                                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                        StringLiteral_9355);
                                            if (lVar4 != 0) {
                                              FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Dynamic_Utils_TypeUtils_ValidateType__
                                                  );
                                              *(long *)(unaff_x19 + 0x128) = lVar4;
                                              lVar4 = *(long *)puVar2;
                                              if (*(int *)(lVar4 + 0xe0) == 0) {
                                                thunk_FUN_00d32864();
                                                lVar4 = *(long *)puVar2;
                                              }
                                              puVar1 = 
                                              UnityEngine_Rendering_Universal_PixelValidationChannels_var
                                              ;
                                              lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
                                              if (lVar5 == 0) {
                                                if (*(int *)(lVar4 + 0xe0) == 0) {
                                                  thunk_FUN_00d32864();
                                                  lVar4 = *(long *)puVar2;
                                                }
                                                uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                if (lVar5 == 0) goto LAB_025c019c;
                                                FUN_012d1810(lVar5,uVar6,
                                                             *(undefined8 *)PTR_DAT_033ee1c8,0);
                                                *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38)
                                                     = lVar5;
                                              }
                                              lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                    
                                                  System_Action<List<OVRAnchor>,_int>_TypeInfo);
                                              if (lVar4 != 0) {
                                                FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_MoveNext__
                                                  );
                                                *(long *)(unaff_x19 + 0x130) = lVar4;
                                                lVar4 = *(long *)puVar2;
                                                if (*(int *)(lVar4 + 0xe0) == 0) {
                                                  thunk_FUN_00d32864();
                                                  lVar4 = *(long *)puVar2;
                                                }
                                                puVar1 = 
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtz_s16__;
                                                lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x40);
                                                if (lVar5 == 0) {
                                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar4 = *(long *)puVar2;
                                                  }
                                                  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar5 == 0) goto LAB_025c019c;
                                                  FUN_012d1810(lVar5,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Text_RegularExpressions_RegexReplacement_Replace__
                                                  ,0);
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40
                                                           ) = lVar5;
                                                }
                                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                        
                                                  System_Collections_Generic_Dictionary<Thread,_StackTrace>_TypeInfo
                                                  );
                                                if (lVar4 != 0) {
                                                  FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Jobs_IJobExtensions_Schedule<OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob>__
                                                  );
                                                  *(long *)(unaff_x19 + 0x138) = lVar4;
                                                  lVar4 = *(long *)puVar2;
                                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar4 = *(long *)puVar2;
                                                  }
                                                  puVar1 = 
                                                  Method_TMPro_TMP_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_0__
                                                  ;
                                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                      lVar4 = *(long *)puVar2;
                                                    }
                                                    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar5 == 0) goto LAB_025c019c;
                                                    FUN_012d1810(lVar5,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                                                  ,0);
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48
                                                           ) = lVar5;
                                                  }
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  System_Data_RelatedView_TypeInfo);
                                                  if (lVar4 != 0) {
                                                    FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                                 *(undefined8 *)StringLiteral_9104);
                                                    *(long *)(unaff_x19 + 0x140) = lVar4;
                                                    lVar4 = *(long *)puVar2;
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                      lVar4 = *(long *)puVar2;
                                                    }
                                                    puVar1 = StringLiteral_9033;
                                                    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50
                                                                     );
                                                    if (lVar5 == 0) {
                                                      if (*(int *)(lVar4 + 0xe0) == 0) {
                                                        thunk_FUN_00d32864();
                                                        lVar4 = *(long *)puVar2;
                                                      }
                                                      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar1);
                                                      if (lVar5 == 0) goto LAB_025c019c;
                                                      FUN_012d1810(lVar5,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<int,_float>_TryGetValue__
                                                  ,0);
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50
                                                           ) = lVar5;
                                                  }
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                                                  );
                                                  if (lVar4 != 0) {
                                                    FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_RemoveRange__
                                                  );
                                                  *(long *)(unaff_x19 + 0x148) = lVar4;
                                                  lVar4 = *(long *)puVar2;
                                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar4 = *(long *)puVar2;
                                                  }
                                                  puVar1 = Oculus_Platform_Models_Error_TypeInfo;
                                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                      lVar4 = *(long *)puVar2;
                                                    }
                                                    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar5 == 0) goto LAB_025c019c;
                                                    FUN_012d1810(lVar5,uVar6,
                                                                 *(undefined8 *)StringLiteral_1157,0
                                                                );
                                                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) +
                                                             0x58) = lVar5;
                                                  }
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8>__ctor__
                                                  );
                                                  if (lVar4 != 0) {
                                                    FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                                 *(undefined8 *)PTR_DAT_033f2668);
                                                    *(long *)(unaff_x19 + 0x150) = lVar4;
                                                    lVar4 = *(long *)puVar2;
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                      lVar4 = *(long *)puVar2;
                                                    }
                                                    puVar1 = 
                                                  System_Collections_Generic_List<ManifestEntity>_TypeInfo
                                                  ;
                                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x60);
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                      lVar4 = *(long *)puVar2;
                                                    }
                                                    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar5 == 0) goto LAB_025c019c;
                                                    FUN_012d1810(lVar5,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_Obi_ObiPathDataChannelIdentity<Vector3>__ctor__
                                                  ,0);
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60
                                                           ) = lVar5;
                                                  }
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                                  );
                                                  if (lVar4 != 0) {
                                                    FUN_0131d234(lVar4,lVar5,0,0,0,0,10000,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_InputSystem_InputControlPath_TryFindControl<object>__
                                                  );
                                                  *(long *)(unaff_x19 + 0x158) = lVar4;
                                                  thunk_FUN_0268a01c();
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
LAB_025c019c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


