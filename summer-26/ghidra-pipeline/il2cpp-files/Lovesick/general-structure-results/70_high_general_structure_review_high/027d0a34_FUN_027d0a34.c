/*
FUNCTION_NAME: FUN_027d0a34
ENTRY_POINT: 027d0a34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_027d0a34(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_58;
  
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_037888eb & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(Sirenix_OdinInspector_TabGroupAttribute_TabSubGroupAttribute_TypeInfo);
    thunk_FUN_00d48444(Meta_Voice_Audio_RawAudioClipStream_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2668);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_7113);
    thunk_FUN_00d48444(StringLiteral_319);
    thunk_FUN_00d48444(StringLiteral_163);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__);
    thunk_FUN_00d48444(PTR_DAT_033f1410);
    thunk_FUN_00d48444(StringLiteral_12083);
    thunk_FUN_00d48444(StringLiteral_2859);
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2558);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<byte>_Add__);
    thunk_FUN_00d48444(UnityEngine_RaycastHit_TypeInfo);
    thunk_FUN_00d48444(Method_PhotoboothFlashController_FlashPhotoBooth__);
    thunk_FUN_00d48444(PTR_DAT_033ec470);
    thunk_FUN_00d48444(PTR_DAT_033ec840);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_ScrollView_<_ctor>b__117_0__);
    thunk_FUN_00d48444(UnityEngine_Rendering_VertexAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIElementsRuntimeUtility_<>c_<SortPanels>b__47_0__
                      );
    thunk_FUN_00d48444(StringLiteral_8660);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SerializationCallback>_GetEnumerator__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_LinkedList<T>_var);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_short>_Remove__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetCreator__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ColorPalette_SetColors__);
    thunk_FUN_00d48444(StringLiteral_8909);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_DataColumn>_ContainsKey__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>_Get__);
    DAT_037888eb = 1;
  }
  local_70 = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  puVar2 = Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__;
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar5;
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x28);
  *(undefined4 *)(param_1 + 0x3d8) = 0x41900000;
  *(undefined4 *)(param_1 + 0x3c8) = uVar1;
  puVar5 = StringLiteral_2558;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar2;
  }
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  *(undefined8 *)(param_1 + 0x3dc) = *puVar12;
  *(undefined8 *)(param_1 + 0x3f0) = puVar12[1];
  puVar3 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar5;
  }
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 4);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0274e248(param_1,0);
  FUN_0275089c(param_1,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar5 = Method_UnityEngine_ProBuilder_ColorPalette_SetColors__;
  if (lVar10 != 0) {
    FUN_0274e248(lVar10,0);
    FUN_0274de78(lVar10,*(undefined8 *)puVar5,0);
    *(long *)(param_1 + 0x418) = lVar10;
    FUN_0275089c(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),0);
    local_70 = *(undefined8 *)(param_1 + 0x360);
    FUN_02751f44(&local_70,*(undefined8 *)(param_1 + 0x418),0);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar6 = StringLiteral_8909;
    puVar5 = StringLiteral_163;
    if (lVar10 != 0) {
      FUN_0274e248(lVar10,0);
      FUN_0274de78(lVar10,*(undefined8 *)puVar6,0);
      *(long *)(param_1 + 0x3f8) = lVar10;
      FUN_0275089c(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
      lVar15 = *(long *)(param_1 + 0x3f8);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar6 = Method_PhotoboothFlashController_FlashPhotoBooth__;
      if (lVar10 != 0) {
        FUN_012c5834(lVar10,param_1,
                     *(undefined8 *)Method_PhotoboothFlashController_FlashPhotoBooth__,0);
        puVar8 = Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__;
        if (lVar15 != 0) {
          FUN_010bfbd4(lVar15,lVar10,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__
                      );
          puVar7 = StringLiteral_319;
          if (*(long *)(param_1 + 0x3f8) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x3f8) + 700) = 1;
            lVar15 = *(long *)(param_1 + 0x418);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
            if ((lVar10 != 0) &&
               (FUN_012c5834(lVar10,param_1,
                             *(undefined8 *)Method_System_Collections_Generic_List<byte>_Add__,0),
               puVar7 = StringLiteral_12083, lVar15 != 0)) {
              FUN_010bfbd4(lVar15,lVar10,0,
                           *(undefined8 *)Meta_Voice_Audio_RawAudioClipStream_TypeInfo);
              lVar15 = *(long *)(param_1 + 0x418);
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
              if ((lVar10 != 0) &&
                 (FUN_012c5834(lVar10,param_1,*(undefined8 *)UnityEngine_RaycastHit_TypeInfo,0),
                 lVar15 != 0)) {
                FUN_010bfbd4(lVar15,lVar10,0,*(undefined8 *)StringLiteral_2668);
                if (*(long *)(param_1 + 0x418) != 0) {
                  FUN_02751e94(*(long *)(param_1 + 0x418),*(undefined8 *)(param_1 + 0x3f8),0);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  puVar3 = 
                  Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>_Get__;
                  if (lVar10 != 0) {
                    FUN_0274e248(lVar10,0);
                    FUN_0274de78(lVar10,*(undefined8 *)puVar3,0);
                    *(long *)(param_1 + 0x410) = lVar10;
                    FUN_02751e4c(lVar10,1,0);
                    lVar15 = *(long *)(param_1 + 0x410);
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                    if ((lVar10 != 0) &&
                       (FUN_012c5834(lVar10,param_1,*(undefined8 *)puVar6,0), lVar15 != 0)) {
                      FUN_010bfbd4(lVar15,lVar10,0,*(undefined8 *)puVar8);
                      if (*(long *)(param_1 + 0x410) != 0) {
                        FUN_0275089c(*(long *)(param_1 + 0x410),
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),0);
                        if (*(long *)(param_1 + 0x410) != 0) {
                          FUN_0274ab04(*(long *)(param_1 + 0x410),2,0);
                          puVar3 = System_Collections_Generic_List<VisualElement>_TypeInfo;
                          if (*(long *)(param_1 + 0x3f8) != 0) {
                            FUN_02751e94(*(long *)(param_1 + 0x3f8),*(undefined8 *)(param_1 + 0x410)
                                         ,0);
                            FUN_027d14cc(param_1,param_2);
                            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                            puVar6 = 
                            Method_System_Collections_Generic_Dictionary<int,_short>_Remove__;
                            if (lVar10 != 0) {
                              FUN_011c181c(lVar10,param_1,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<SerializationCallback>_GetEnumerator__
                                           ,0);
                              lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                              puVar7 = 
                              Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetCreator__;
                              if (lVar15 != 0) {
                                FUN_027d898c(0,0x4f000000,lVar15,lVar10,0,0);
                                UnityEngine_UIElements_UIR_TextureSlotManager__set_FreeSlots
                                          (lVar15,*(undefined8 *)puVar7,0);
                                *(long *)(param_1 + 0x400) = lVar15;
                                FUN_0275089c(lVar15,*(undefined8 *)
                                                     (*(long *)(*(long *)puVar2 + 0xb8) + 0x30),0);
                                puVar7 = 
                                Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__
                                ;
                                if (*(long *)(param_1 + 0x400) != 0) {
                                  plVar11 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x400),0);
                                  local_64 = 1;
                                  FUN_013b4f10(&local_64,&local_58,*(undefined8 *)puVar7);
                                  uVar9 = local_58;
                                  puVar4 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
                                  if (plVar11 != (long *)0x0) {
                                    lVar10 = *plVar11;
                                    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                    if (uVar13 != 0) {
                                      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar14 + -2) ==
                                            *(long *)
                                             UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo) {
                                          puVar12 = (undefined8 *)
                                                    (lVar10 + (long)(*piVar14 + 0x11) * 0x10 + 0x138
                                                    );
                                          goto LAB_027d10b0;
                                        }
                                        uVar13 = uVar13 - 1;
                                        piVar14 = piVar14 + 4;
                                      } while (uVar13 != 0);
                                    }
                                    puVar12 = (undefined8 *)
                                              FUN_00d59724(plVar11,*(long *)
                                                  UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo
                                                  ,0x11);
LAB_027d10b0:
                                    (*(code *)*puVar12)(plVar11,uVar9,puVar12[1]);
                                    local_70 = *(undefined8 *)(param_1 + 0x360);
                                    FUN_02751f44(&local_70,*(undefined8 *)(param_1 + 0x400),0);
                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                    if (lVar10 != 0) {
                                      FUN_011c181c(lVar10,param_1,
                                                   *(undefined8 *)
                                                    System_Collections_Generic_LinkedList<T>_var,0);
                                      lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                      puVar3 = 
                                      Method_System_Collections_Generic_Dictionary<string,_DataColumn>_ContainsKey__
                                      ;
                                      if (lVar15 != 0) {
                                        FUN_027d898c(0,0x4f000000,lVar15,lVar10,1,0);
                                        UnityEngine_UIElements_UIR_TextureSlotManager__set_FreeSlots
                                                  (lVar15,*(undefined8 *)puVar3,0);
                                        *(long *)(param_1 + 0x408) = lVar15;
                                        FUN_0275089c(lVar15,*(undefined8 *)
                                                             (*(long *)(*(long *)puVar2 + 0xb8) +
                                                             0x38),0);
                                        if (*(long *)(param_1 + 0x408) != 0) {
                                          plVar11 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x408),
                                                                         0);
                                          local_64 = 1;
                                          FUN_013b4f10(&local_64,&local_58,*(undefined8 *)puVar7);
                                          if (plVar11 != (long *)0x0) {
                                            lVar10 = *plVar11;
                                            uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                            if (uVar13 != 0) {
                                              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                                                  puVar12 = (undefined8 *)
                                                            (lVar10 + (long)(*piVar14 + 0x11) * 0x10
                                                            + 0x138);
                                                  goto LAB_027d11e4;
                                                }
                                                uVar13 = uVar13 - 1;
                                                piVar14 = piVar14 + 4;
                                              } while (uVar13 != 0);
                                            }
                                            puVar12 = (undefined8 *)
                                                      FUN_00d59724(plVar11,*(long *)puVar4,0x11);
LAB_027d11e4:
                                            (*(code *)*puVar12)(plVar11,local_58,puVar12[1]);
                                            puVar2 = PTR_DAT_033f1410;
                                            if (*(long *)(param_1 + 0x418) != 0) {
                                              FUN_02751e94(*(long *)(param_1 + 0x418),
                                                           *(undefined8 *)(param_1 + 0x408),0);
                                              FUN_027cfe98(param_1,2);
                                              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              puVar2 = StringLiteral_7113;
                                              if (lVar10 != 0) {
                                                FUN_012c5834(lVar10,param_1,
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_VertexAttribute_TypeInfo,0);
                                                FUN_010bfbd4(param_1,lVar10,0,*(undefined8 *)puVar2)
                                                ;
                                                lVar15 = *(long *)(param_1 + 0x408);
                                                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                                puVar2 = 
                                                Method_UnityEngine_UIElements_UIElementsRuntimeUtility_<>c_<SortPanels>b__47_0__
                                                ;
                                                if (lVar10 != 0) {
                                                  FUN_012c5834(lVar10,param_1,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_UIElementsRuntimeUtility_<>c_<SortPanels>b__47_0__
                                                  ,0);
                                                  if (lVar15 != 0) {
                                                    FUN_010bfbd4(lVar15,lVar10,0,
                                                                 *(undefined8 *)puVar8);
                                                    lVar15 = *(long *)(param_1 + 0x400);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar5);
                                                    if ((lVar10 != 0) &&
                                                       (FUN_012c5834(lVar10,param_1,
                                                                     *(undefined8 *)puVar2,0),
                                                       lVar15 != 0)) {
                                                      FUN_010bfbd4(lVar15,lVar10,0,
                                                                   *(undefined8 *)puVar8);
                                                      *(undefined4 *)(param_1 + 0x3d0) = 0xbf800000;
                                                      FUN_027cf944(param_1);
                                                      *(undefined4 *)(param_1 + 0x3d4) = 0xbf800000;
                                                      FUN_027cfb8c(param_1);
                                                      puVar2 = 
                                                  Sirenix_OdinInspector_TabGroupAttribute_TabSubGroupAttribute_TypeInfo
                                                  ;
                                                  if ((*(long *)(param_1 + 0x400) != 0) &&
                                                     (lVar10 = *(long *)(*(long *)(param_1 + 0x400)
                                                                        + 0x3b8), lVar10 != 0)) {
                                                    lVar15 = **(long **)(*(long *)(*(long *)
                                                  Sirenix_OdinInspector_TabGroupAttribute_TabSubGroupAttribute_TypeInfo
                                                  + 0x20) + 0xc0);
                                                  if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
                                                    lVar15 = FUN_00d5941c();
                                                  }
                                                  plVar11 = (long *)thunk_FUN_00d32ed4(lVar10,*(long
                                                                                                *)(
                                                  lVar15 + 0x80) + 0x20);
                                                  lVar15 = *plVar11;
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5)
                                                  ;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_012c5834(lVar10,param_1,
                                                                   *(undefined8 *)PTR_DAT_033ec470,0
                                                                  ), lVar15 != 0)) {
                                                    FUN_010bfbd4(lVar15,lVar10,0,
                                                                 *(undefined8 *)puVar8);
                                                    if ((*(long *)(param_1 + 0x408) != 0) &&
                                                       (lVar10 = *(long *)(*(long *)(param_1 + 0x408
                                                                                    ) + 0x3b8),
                                                       lVar10 != 0)) {
                                                      lVar15 = **(long **)(*(long *)(*(long *)puVar2
                                                                                    + 0x20) + 0xc0);
                                                      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
                                                        lVar15 = FUN_00d5941c();
                                                      }
                                                      plVar11 = (long *)thunk_FUN_00d32ed4(lVar10,*(
                                                  long *)(lVar15 + 0x80) + 0x20);
                                                  lVar15 = *plVar11;
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5)
                                                  ;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_012c5834(lVar10,param_1,
                                                                   *(undefined8 *)StringLiteral_8660
                                                                   ,0),
                                                     puVar5 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__
                                                  , lVar15 != 0)) {
                                                    FUN_010bfbd4(lVar15,lVar10,0,
                                                                 *(undefined8 *)puVar8);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar5);
                                                    puVar5 = StringLiteral_2859;
                                                    if (lVar10 != 0) {
                                                      FUN_012c5834(lVar10,param_1,
                                                                   *(undefined8 *)PTR_DAT_033ec840,0
                                                                  );
                                                      *(long *)(param_1 + 0x478) = lVar10;
                                                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar5);
                                                      if (lVar10 != 0) {
                                                        FUN_012c5834(lVar10,param_1,
                                                                     *(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_ScrollView_<_ctor>b__117_0__
                                                  ,0);
                                                  *(long *)(param_1 + 0x480) = lVar10;
                                                  if (DAT_03774d77 == '\0') {
                                                    thunk_FUN_00d48444(
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  );
                                                  DAT_03774d77 = '\x01';
                                                  }
                                                  FUN_027cf650(**(undefined4 **)
                                                                 (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8),(*(undefined4 **)
                                                            (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8))[1],param_1);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


