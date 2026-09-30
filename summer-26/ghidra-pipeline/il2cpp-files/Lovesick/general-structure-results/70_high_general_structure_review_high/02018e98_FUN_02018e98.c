/*
FUNCTION_NAME: FUN_02018e98
ENTRY_POINT: 02018e98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_02018e98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  
  puVar2 = Autohand_HandCollisionHaptics_<PlayBuffer>d__14_TypeInfo;
  if ((DAT_0378096a & 1) == 0) {
    thunk_FUN_00d48444(Autohand_HandCollisionHaptics_<PlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13533);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlUntypedConverter_ToSingle__);
    thunk_FUN_00d48444(
                      RCG_Lovesick_Props_SunGlassesPlacementPoint_<DestroyGlassesCoroutine>d__15_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ee698);
    thunk_FUN_00d48444(Method_System_Resources_ResourceReader_LoadString__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__2__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>__ctor__);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequest_<Dispose>b__101_0__);
    thunk_FUN_00d48444(Method_System_ThrowHelper_ThrowNotSupportedException__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_UIRenderDevice_EvaluateChain__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ChangelogEntry>_Add__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AudioStateLoader_AudioSourceSaveState>_Add__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_f64__);
    thunk_FUN_00d48444(System_Data_DataRowBuilder_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<fsAotConfiguration_Entry>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_Trace<int,_long>__);
    thunk_FUN_00d48444(StringLiteral_5352);
    thunk_FUN_00d48444(Method_OVRAnchor_CreateSpatialAnchorAsync__);
    thunk_FUN_00d48444(Method_Mono_Math_BigInteger_TestBit__);
    DAT_0378096a = 1;
  }
  puVar3 = Method_System_Resources_ResourceReader_LoadString__;
  puVar1 = PTR_DAT_033ee698;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  uVar6 = 2;
  if (**(char **)(lVar4 + 0xb8) != '\0') {
    uVar6 = 3;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x90) = uVar6;
  uVar5 = FUN_0201889c();
  uVar6 = 0x17e00f7d;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0x15e00f7d;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94) = uVar6;
  uVar5 = FUN_0201889c();
  uVar6 = 0x17f02fd1;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0x17f02ff1;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98) = uVar6;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_System_Xml_Schema_XmlUntypedConverter_ToSingle__;
  if (lVar4 != 0) {
    FUN_01298de8(lVar4,0x19,*(undefined8 *)Method_System_Xml_Schema_XmlUntypedConverter_ToSingle__);
    **(long **)(*(long *)puVar3 + 0xb8) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_13533;
    if (lVar4 != 0) {
      FUN_01298de8(lVar4,0x19,*(undefined8 *)puVar2);
      lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
      *(long *)(lVar7 + 8) = lVar4;
      uVar6 = *(undefined4 *)(lVar7 + 0x94);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        FUN_0201961c(lVar4,*(undefined8 *)Method_System_ThrowHelper_ThrowNotSupportedException__,
                     0x50,uVar6);
        lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
        (*(long **)(*(long *)puVar3 + 0xb8))[2] = lVar4;
        puVar2 = RCG_Lovesick_Props_SunGlassesPlacementPoint_<DestroyGlassesCoroutine>d__15_TypeInfo
        ;
        if (lVar7 != 0) {
          FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,
                       *(undefined8 *)
                        RCG_Lovesick_Props_SunGlassesPlacementPoint_<DestroyGlassesCoroutine>d__15_TypeInfo
                      );
          lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          if (lVar4 != 0) {
            uVar6 = *(undefined4 *)(lVar4 + 0x10);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              FUN_0201961c(lVar4,*(undefined8 *)Method_Mono_Math_BigInteger_TestBit__,0x1bb,uVar6);
              lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
              (*(long **)(*(long *)puVar3 + 0xb8))[3] = lVar4;
              if (lVar7 != 0) {
                FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,*(undefined8 *)puVar2);
                uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  FUN_0201961c(lVar4,*(undefined8 *)
                                      Method_Meta_WitAi_Requests_VRequest_<Dispose>b__101_0__,0x50,
                               uVar6);
                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                  (*(long **)(*(long *)puVar3 + 0xb8))[4] = lVar4;
                  if (lVar7 != 0) {
                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,*(undefined8 *)puVar2);
                    uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94);
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar4 != 0) {
                      FUN_0201961c(lVar4,*(undefined8 *)
                                          Method_System_Collections_Generic_List<VisualElement>__ctor__
                                   ,0x1bb,uVar6);
                      lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                      (*(long **)(*(long *)puVar3 + 0xb8))[5] = lVar4;
                      if (lVar7 != 0) {
                        FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,*(undefined8 *)puVar2
                                    );
                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        if (lVar4 != 0) {
                          FUN_0201961c(lVar4,*(undefined8 *)
                                              Method_System_Collections_Generic_List<AudioStateLoader_AudioSourceSaveState>_Add__
                                       ,0x15,0x15e00f5d);
                          lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                          (*(long **)(*(long *)puVar3 + 0xb8))[6] = lVar4;
                          if (lVar7 != 0) {
                            FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,
                                         *(undefined8 *)puVar2);
                            uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98);
                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            if (lVar4 != 0) {
                              FUN_0201961c(lVar4,*(undefined8 *)
                                                  Method_System_Data_DataCommonEventSource_Trace<int,_long>__
                                           ,0xffffffff,uVar6);
                              lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                              (*(long **)(*(long *)puVar3 + 0xb8))[7] = lVar4;
                              if (lVar7 != 0) {
                                FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,
                                             *(undefined8 *)puVar2);
                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                if (lVar4 != 0) {
                                  FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List_Enumerator<fsAotConfiguration_Entry>_get_Current__
                                               ,0x46,0x14200f5d);
                                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                  (*(long **)(*(long *)puVar3 + 0xb8))[8] = lVar4;
                                  if (lVar7 != 0) {
                                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,
                                                 *(undefined8 *)puVar2);
                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    if (lVar4 != 0) {
                                      FUN_0201961c(lVar4,*(undefined8 *)
                                                          System_Data_DataRowBuilder_TypeInfo,0x77,
                                                   0x14200f5d);
                                      lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                      (*(long **)(*(long *)puVar3 + 0xb8))[9] = lVar4;
                                      if (lVar7 != 0) {
                                        FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,
                                                     *(undefined8 *)puVar2);
                                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        if (lVar4 != 0) {
                                          FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_UIR_UIRenderDevice_EvaluateChain__
                                                  ,0xffffffff,0x10000050);
                                          lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                          (*(long **)(*(long *)puVar3 + 0xb8))[10] = lVar4;
                                          if (lVar7 != 0) {
                                            FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),lVar4,
                                                         *(undefined8 *)puVar2);
                                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                            if (lVar4 != 0) {
                                              FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                                    
                                                  Method_OVRAnchor_CreateSpatialAnchorAsync__,0x19,
                                                  0x14004ffc);
                                              lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                              (*(long **)(*(long *)puVar3 + 0xb8))[0xb] = lVar4;
                                              if (lVar7 != 0) {
                                                FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20),
                                                             lVar4,*(undefined8 *)puVar2);
                                                lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8)
                                                                 + 0x50);
                                                if (lVar4 != 0) {
                                                  uVar6 = *(undefined4 *)(lVar4 + 0x10);
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Collections_Generic_List<ChangelogEntry>_Add__
                                                  ,0xffffffff,uVar6);
                                                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                                  (*(long **)(*(long *)puVar3 + 0xb8))[0xc] = lVar4;
                                                  if (lVar7 != 0) {
                                                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20)
                                                                 ,lVar4,*(undefined8 *)puVar2);
                                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar4 != 0) {
                                                      FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__
                                                  ,0x17,0x14200f5d);
                                                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                                  (*(long **)(*(long *)puVar3 + 0xb8))[0xd] = lVar4;
                                                  if (lVar7 != 0) {
                                                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20)
                                                                 ,lVar4,*(undefined8 *)puVar2);
                                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar4 != 0) {
                                                      FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_f64__,
                                                  0x185,0x14200ffd);
                                                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                                  (*(long **)(*(long *)puVar3 + 0xb8))[0xe] = lVar4;
                                                  if (lVar7 != 0) {
                                                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20)
                                                                 ,lVar4,*(undefined8 *)puVar2);
                                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar4 != 0) {
                                                      FUN_0201961c(lVar4,*(undefined8 *)
                                                                          StringLiteral_5352,0x328,
                                                                   0x17e00e79);
                                                      lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                                      (*(long **)(*(long *)puVar3 + 0xb8))[0xf] =
                                                           lVar4;
                                                      if (lVar7 != 0) {
                                                        FUN_01299e64(lVar7,*(undefined8 *)
                                                                            (lVar4 + 0x20),lVar4,
                                                                     *(undefined8 *)puVar2);
                                                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar1);
                                                        if (lVar4 != 0) {
                                                          FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>__ctor__
                                                  ,0xffffffff,0x17e00e71);
                                                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                                  (*(long **)(*(long *)puVar3 + 0xb8))[0x10] = lVar4
                                                  ;
                                                  if (lVar7 != 0) {
                                                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20)
                                                                 ,lVar4,*(undefined8 *)puVar2);
                                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar4 != 0) {
                                                      FUN_0201961c(lVar4,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_<CreatePixelValidationMode>b__2__
                                                  ,0xffffffff,0x17d02fd1);
                                                  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
                                                  (*(long **)(*(long *)puVar3 + 0xb8))[0x11] = lVar4
                                                  ;
                                                  if (lVar7 != 0) {
                                                    FUN_01299e64(lVar7,*(undefined8 *)(lVar4 + 0x20)
                                                                 ,lVar4,*(undefined8 *)puVar2);
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
  FUN_00da518c();
}


