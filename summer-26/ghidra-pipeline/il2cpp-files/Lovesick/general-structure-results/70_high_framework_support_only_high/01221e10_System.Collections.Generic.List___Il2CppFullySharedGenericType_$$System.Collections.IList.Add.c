/*
FUNCTION_NAME: System.Collections.Generic.List<__Il2CppFullySharedGenericType>$$System.Collections.IList.Add
ENTRY_POINT: 01221e10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Collections_Generic_List<__Il2CppFullySharedGenericType>__System_Collections_IList_Add
               (undefined8 *param_1,void *param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  void *pvVar13;
  long *plVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  void *pvVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong __n;
  void *pvVar26;
  undefined8 uVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  long unaff_x29;
  undefined1 auStack_80 [128];
  
  lVar6 = tpidr_el0;
  *(long *)(unaff_x29 + -0x68) = lVar6;
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(lVar6 + 0x28);
  if ((DAT_0377645b & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_0377645b = 1;
  }
  plVar25 = (long *)(param_3 + 0x20);
  lVar6 = *plVar25;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    iVar5 = thunk_FUN_00d42afc();
    uVar19 = iVar5 - 0x10;
  }
  else {
    uVar19 = 8;
  }
  __n = (ulong)uVar19;
  uVar20 = __n + 0xf & 0x1fffffff0;
  puVar12 = auStack_80 + -uVar20;
  *(ulong *)(unaff_x29 + -0x90) = (long)puVar12 - uVar20;
  pvVar30 = (void *)(((long)puVar12 - uVar20) - uVar20);
  lVar6 = ((long)pvVar30 - uVar20) - uVar20;
  *(long *)(unaff_x29 + -0x78) = lVar6;
  lVar6 = lVar6 - uVar20;
  *(long *)(unaff_x29 + -0xa8) = lVar6;
  pvVar29 = (void *)(lVar6 - uVar20);
  *(ulong *)(unaff_x29 + -0xa0) = (long)pvVar29 - uVar20;
  lVar6 = ((long)pvVar29 - uVar20) - uVar20;
  *(long *)(unaff_x29 + -0x88) = lVar6;
  lVar6 = lVar6 - uVar20;
  *(long *)(unaff_x29 + -0x80) = lVar6;
  lVar6 = lVar6 - uVar20;
  *(long *)(unaff_x29 + -0xd0) = lVar6;
  lVar6 = lVar6 - uVar20;
  *(long *)(unaff_x29 + -200) = lVar6;
  pvVar22 = (void *)(lVar6 - uVar20);
  *(ulong *)(unaff_x29 + -0xc0) = (long)pvVar22 - uVar20;
  lVar6 = ((long)pvVar22 - uVar20) - uVar20;
  *(long *)(unaff_x29 + -0xb8) = lVar6;
  *(ulong *)(unaff_x29 + -0xb0) = lVar6 - uVar20;
  *param_1 = 0;
  param_1[1] = 0;
  uVar7 = System_MonoCustomAttrs__GetPseudoCustomAttributesData(0);
  lVar6 = *plVar25;
  *(ulong *)(unaff_x29 + -0x98) = (long)pvVar30 - uVar20;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c(lVar6);
  }
  *(undefined8 **)(unaff_x29 + -0x70) = param_1;
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar27 = FUN_01780344(uVar27,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar20 = FUN_01789ac0(uVar27,uVar8,0);
  puVar2 = UnityEngine_Texture2D___TypeInfo;
  if ((uVar7 & 1) != 0) {
    if ((uVar20 & 1) == 0) {
      lVar6 = *plVar25;
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
      }
      puVar3 = StringLiteral_7239;
      puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
      uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar27 = FUN_01780344(uVar27,0);
      uVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
      uVar7 = FUN_01789ac0(uVar27,uVar8,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = *plVar25;
        puVar24 = *(undefined8 **)(unaff_x29 + -0x70);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar27 = FUN_01780344(uVar27,0);
        uVar8 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
        uVar7 = FUN_01789ac0(uVar27,uVar8,0);
        puVar3 = 
        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        if ((uVar7 & 1) == 0) {
          lVar6 = *plVar25;
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c();
          }
          uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar27 = FUN_01780344(uVar27,0);
          uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
          uVar7 = FUN_01789ac0(uVar27,uVar8,0);
          if ((uVar7 & 1) == 0) {
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
            uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar27 = FUN_01780344(uVar27,0);
            uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
            uVar7 = FUN_01789ac0(uVar27,uVar8,0);
            puVar4 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
            if ((uVar7 & 1) == 0) {
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar27 = FUN_01780344(uVar27,0);
              uVar8 = FUN_01780344(*(undefined8 *)
                                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                   ,0);
              uVar7 = FUN_01789ac0(uVar27,uVar8,0);
              if ((uVar7 & 1) == 0) {
                lVar6 = *plVar25;
                if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                  lVar6 = FUN_00d5941c();
                }
                uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                }
                uVar27 = FUN_01780344(uVar27,0);
                uVar8 = FUN_01780344(*(undefined8 *)
                                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                     ,0);
                uVar7 = FUN_01789ac0(uVar27,uVar8,0);
                if ((uVar7 & 1) == 0) {
                  lVar6 = *plVar25;
                  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                    lVar6 = FUN_00d5941c();
                  }
                  uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__)
                    ;
                  }
                  uVar27 = FUN_01780344(uVar27,0);
                  uVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0
                                      );
                  uVar7 = FUN_01789ac0(uVar27,uVar8,0);
                  if ((uVar7 & 1) == 0) {
                    lVar6 = *plVar25;
                    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                      lVar6 = FUN_00d5941c();
                    }
                    uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                ) == 0) {
                      thunk_FUN_00d32864(*(long *)
                                          Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                    }
                    uVar27 = FUN_01780344(uVar27,0);
                    uVar8 = FUN_01780344(*(undefined8 *)
                                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                         ,0);
                    uVar7 = FUN_01789ac0(uVar27,uVar8,0);
                    if ((uVar7 & 1) == 0) {
                      lVar6 = *plVar25;
                      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                        lVar6 = FUN_00d5941c();
                      }
                      uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)
                                            Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                      }
                      uVar27 = FUN_01780344(uVar27,0);
                      uVar8 = FUN_01780344(*(undefined8 *)
                                            Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                      uVar7 = FUN_01789ac0(uVar27,uVar8,0);
                      if ((uVar7 & 1) == 0) goto LAB_01224804;
                      lVar6 = 0;
                      while( true ) {
                        lVar23 = *plVar25;
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar9 = *plVar25;
                        uVar1 = *(ushort *)(lVar9 + 0x132);
                        lVar23 = lVar9;
                        if ((uVar1 & 1) == 0) {
                          lVar9 = FUN_00d5941c(lVar9);
                          uVar1 = *(ushort *)(*plVar25 + 0x132);
                          lVar23 = *plVar25;
                        }
                        uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar23 = FUN_00d5941c(lVar23);
                        }
                        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
                        (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
                        if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
                        memcpy(puVar12,param_2,__n);
                        lVar23 = *plVar25;
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
                        if (plVar10 == (long *)0x0) goto LAB_01224e80;
                        if (*(long *)(*plVar10 + 0x40) !=
                            *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) break;
                        puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                        lVar6 = lVar6 + 1;
                        *puVar24 = *puVar17;
                        puVar24 = puVar24 + 1;
                      }
                    }
                    else {
                      lVar6 = 0;
                      while( true ) {
                        lVar23 = *plVar25;
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar9 = *plVar25;
                        uVar1 = *(ushort *)(lVar9 + 0x132);
                        lVar23 = lVar9;
                        if ((uVar1 & 1) == 0) {
                          lVar9 = FUN_00d5941c(lVar9);
                          uVar1 = *(ushort *)(*plVar25 + 0x132);
                          lVar23 = *plVar25;
                        }
                        uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar23 = FUN_00d5941c(lVar23);
                        }
                        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
                        (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
                        if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
                        memcpy(puVar12,param_2,__n);
                        lVar23 = *plVar25;
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
                        if (plVar10 == (long *)0x0) goto LAB_01224e80;
                        if (*(long *)(*plVar10 + 0x40) !=
                            *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo +
                                     0x40)) break;
                        puVar16 = (undefined4 *)thunk_FUN_00d624a0();
                        lVar6 = lVar6 + 1;
                        *(undefined4 *)puVar24 = *puVar16;
                        puVar24 = (undefined8 *)((long)puVar24 + 4);
                      }
                    }
                  }
                  else {
                    lVar6 = 0;
                    while( true ) {
                      lVar23 = *plVar25;
                      if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                        lVar23 = FUN_00d5941c();
                      }
                      lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                      if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                        lVar23 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar9 = *plVar25;
                      uVar1 = *(ushort *)(lVar9 + 0x132);
                      lVar23 = lVar9;
                      if ((uVar1 & 1) == 0) {
                        lVar9 = FUN_00d5941c(lVar9);
                        uVar1 = *(ushort *)(*plVar25 + 0x132);
                        lVar23 = *plVar25;
                      }
                      uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar23 = FUN_00d5941c(lVar23);
                      }
                      lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
                      (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
                      if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
                      memcpy(puVar12,param_2,__n);
                      lVar23 = *plVar25;
                      if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                        lVar23 = FUN_00d5941c();
                      }
                      lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
                      if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                        lVar23 = FUN_00d5941c();
                      }
                      plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
                      if (plVar10 == (long *)0x0) goto LAB_01224e80;
                      if (*(long *)(*plVar10 + 0x40) !=
                          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo
                                   + 0x40)) break;
                      puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                      lVar6 = lVar6 + 1;
                      *puVar24 = *puVar17;
                      puVar24 = puVar24 + 1;
                    }
                  }
                }
                else {
                  lVar6 = 0;
                  while( true ) {
                    lVar23 = *plVar25;
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar9 = *plVar25;
                    uVar1 = *(ushort *)(lVar9 + 0x132);
                    lVar23 = lVar9;
                    if ((uVar1 & 1) == 0) {
                      lVar9 = FUN_00d5941c(lVar9);
                      uVar1 = *(ushort *)(*plVar25 + 0x132);
                      lVar23 = *plVar25;
                    }
                    uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar23 = FUN_00d5941c(lVar23);
                    }
                    lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
                    (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
                    if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
                    memcpy(puVar12,param_2,__n);
                    lVar23 = *plVar25;
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
                    if (plVar10 == (long *)0x0) goto LAB_01224e80;
                    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                    puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                    lVar6 = lVar6 + 1;
                    *puVar24 = *puVar17;
                    puVar24 = puVar24 + 1;
                  }
                }
              }
              else {
                lVar6 = 0;
                while( true ) {
                  lVar23 = *plVar25;
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c();
                  }
                  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar9 = *plVar25;
                  uVar1 = *(ushort *)(lVar9 + 0x132);
                  lVar23 = lVar9;
                  if ((uVar1 & 1) == 0) {
                    lVar9 = FUN_00d5941c(lVar9);
                    uVar1 = *(ushort *)(*plVar25 + 0x132);
                    lVar23 = *plVar25;
                  }
                  uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar23 = FUN_00d5941c(lVar23);
                  }
                  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
                  (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
                  if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
                  memcpy(puVar12,param_2,__n);
                  lVar23 = *plVar25;
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c();
                  }
                  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c();
                  }
                  plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
                  if (plVar10 == (long *)0x0) goto LAB_01224e80;
                  if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar16 = (undefined4 *)thunk_FUN_00d624a0();
                  lVar6 = lVar6 + 1;
                  *(undefined4 *)puVar24 = *puVar16;
                  puVar24 = (undefined8 *)((long)puVar24 + 4);
                }
              }
            }
            else {
              lVar6 = 0;
              while( true ) {
                lVar23 = *plVar25;
                if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                  lVar23 = FUN_00d5941c();
                }
                lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                  lVar23 = FUN_00d5941c();
                }
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar9 = *plVar25;
                uVar1 = *(ushort *)(lVar9 + 0x132);
                lVar23 = lVar9;
                if ((uVar1 & 1) == 0) {
                  lVar9 = FUN_00d5941c(lVar9);
                  uVar1 = *(ushort *)(*plVar25 + 0x132);
                  lVar23 = *plVar25;
                }
                uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar23 = FUN_00d5941c(lVar23);
                }
                lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
                (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
                if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
                memcpy(puVar12,param_2,__n);
                lVar23 = *plVar25;
                if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                  lVar23 = FUN_00d5941c();
                }
                lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
                if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                  lVar23 = FUN_00d5941c();
                }
                plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
                if (plVar10 == (long *)0x0) goto LAB_01224e80;
                if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
                puVar16 = (undefined4 *)thunk_FUN_00d624a0();
                lVar6 = lVar6 + 1;
                *(undefined4 *)puVar24 = *puVar16;
                puVar24 = (undefined8 *)((long)puVar24 + 4);
              }
            }
          }
          else {
            lVar6 = 0;
            while( true ) {
              lVar23 = *plVar25;
              if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                lVar23 = FUN_00d5941c();
              }
              lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
              if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                lVar23 = FUN_00d5941c();
              }
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar9 = *plVar25;
              uVar1 = *(ushort *)(lVar9 + 0x132);
              lVar23 = lVar9;
              if ((uVar1 & 1) == 0) {
                lVar9 = FUN_00d5941c(lVar9);
                uVar1 = *(ushort *)(*plVar25 + 0x132);
                lVar23 = *plVar25;
              }
              uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar23 = FUN_00d5941c(lVar23);
              }
              lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
              (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
              if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
              memcpy(puVar12,param_2,__n);
              lVar23 = *plVar25;
              if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                lVar23 = FUN_00d5941c();
              }
              lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
              if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                lVar23 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar15 = (undefined2 *)thunk_FUN_00d624a0();
              lVar6 = lVar6 + 1;
              *(undefined2 *)puVar24 = *puVar15;
              puVar24 = (undefined8 *)((long)puVar24 + 2);
            }
          }
        }
        else {
          lVar6 = 0;
          while( true ) {
            lVar23 = *plVar25;
            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
              lVar23 = FUN_00d5941c();
            }
            lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
              lVar23 = FUN_00d5941c();
            }
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar9 = *plVar25;
            uVar1 = *(ushort *)(lVar9 + 0x132);
            lVar23 = lVar9;
            if ((uVar1 & 1) == 0) {
              lVar9 = FUN_00d5941c(lVar9);
              uVar1 = *(ushort *)(*plVar25 + 0x132);
              lVar23 = *plVar25;
            }
            uVar27 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar23 = FUN_00d5941c(lVar23);
            }
            lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x28);
            (**(code **)(lVar23 + 0x10))(uVar27,lVar23,0,0,unaff_x29 + -0x5c);
            if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
            memcpy(puVar12,param_2,__n);
            lVar23 = *plVar25;
            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
              lVar23 = FUN_00d5941c();
            }
            lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x20);
            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
              lVar23 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar23,puVar12);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
            puVar15 = (undefined2 *)thunk_FUN_00d624a0();
            lVar6 = lVar6 + 1;
            *(undefined2 *)puVar24 = *puVar15;
            puVar24 = (undefined8 *)((long)puVar24 + 2);
          }
        }
      }
      else {
        lVar23 = *(long *)(unaff_x29 + -0x70);
        lVar6 = 0;
        while( true ) {
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar21 = *plVar25;
          uVar1 = *(ushort *)(lVar21 + 0x132);
          lVar9 = lVar21;
          if ((uVar1 & 1) == 0) {
            lVar21 = FUN_00d5941c(lVar21);
            uVar1 = *(ushort *)(*plVar25 + 0x132);
            lVar9 = *plVar25;
          }
          uVar27 = **(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_00d5941c(lVar9);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
          (**(code **)(lVar9 + 0x10))(uVar27,lVar9,0,0,unaff_x29 + -0x5c);
          if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
          memcpy(puVar12,param_2,__n);
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          plVar10 = (long *)thunk_FUN_00d61fa0(lVar9,puVar12);
          if (plVar10 == (long *)0x0) goto LAB_01224e80;
          if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
          puVar11 = (undefined1 *)thunk_FUN_00d624a0();
          *(undefined1 *)(lVar23 + lVar6) = *puVar11;
          lVar6 = lVar6 + 1;
        }
      }
    }
    else {
      lVar23 = *(long *)(unaff_x29 + -0x70);
      lVar6 = 0;
      while( true ) {
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar21 = *plVar25;
        uVar1 = *(ushort *)(lVar21 + 0x132);
        lVar9 = lVar21;
        if ((uVar1 & 1) == 0) {
          lVar21 = FUN_00d5941c(lVar21);
          uVar1 = *(ushort *)(*plVar25 + 0x132);
          lVar9 = *plVar25;
        }
        uVar27 = **(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_00d5941c(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        (**(code **)(lVar9 + 0x10))(uVar27,lVar9,0,0,unaff_x29 + -0x5c);
        if (*(int *)(unaff_x29 + -0x5c) <= lVar6) goto LAB_01224804;
        memcpy(puVar12,param_2,__n);
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar9,puVar12);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar11 = (undefined1 *)thunk_FUN_00d624a0();
        *(undefined1 *)(lVar23 + lVar6) = *puVar11;
        lVar6 = lVar6 + 1;
      }
    }
    goto LAB_01224e84;
  }
  if ((uVar20 & 1) == 0) {
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    pvVar28 = *(void **)(unaff_x29 + -0x90);
    uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar27 = FUN_01780344(uVar27,0);
    uVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
    uVar7 = FUN_01789ac0(uVar27,uVar8,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = *plVar25;
      puVar24 = *(undefined8 **)(unaff_x29 + -0x70);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
      }
      uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar27 = FUN_01780344(uVar27,0);
      uVar8 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
      uVar7 = FUN_01789ac0(uVar27,uVar8,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar27 = FUN_01780344(uVar27,0);
        uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        uVar7 = FUN_01789ac0(uVar27,uVar8,0);
        if ((uVar7 & 1) == 0) {
          lVar6 = *plVar25;
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c();
          }
          uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar27 = FUN_01780344(uVar27,0);
          uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
          uVar7 = FUN_01789ac0(uVar27,uVar8,0);
          if ((uVar7 & 1) == 0) {
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar27 = FUN_01780344(uVar27,0);
            uVar8 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                 ,0);
            uVar7 = FUN_01789ac0(uVar27,uVar8,0);
            if ((uVar7 & 1) != 0) {
              memcpy(puVar12,param_2,__n);
              lVar6 = *plVar25;
              pvVar22 = *(void **)(unaff_x29 + -0x98);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar10 + 0x40) !=
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                           + 0x40)) goto LAB_01224e84;
              puVar16 = (undefined4 *)thunk_FUN_00d624a0();
              *(undefined4 *)puVar24 = *puVar16;
              memcpy(pvVar28,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar10 + 0x40) !=
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                           + 0x40)) goto LAB_01224e84;
              puVar16 = (undefined4 *)thunk_FUN_00d624a0();
              *(undefined4 *)((long)puVar24 + 4) = *puVar16;
              memcpy(pvVar30,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              lVar6 = *plVar10;
              plVar10 = (long *)
                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
              goto LAB_0122420c;
            }
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar27 = FUN_01780344(uVar27,0);
            uVar8 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                 ,0);
            uVar7 = FUN_01789ac0(uVar27,uVar8,0);
            if ((uVar7 & 1) != 0) {
              memcpy(puVar12,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
              goto LAB_01224e84;
              puVar17 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar24 = *puVar17;
              memcpy(pvVar28,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
              if (plVar25 == (long *)0x0) goto LAB_01224e80;
              lVar23 = *plVar25;
              lVar6 = *(long *)puVar2;
LAB_012247e8:
              lVar23 = *(long *)(lVar23 + 0x40);
LAB_012247ec:
              if (lVar23 == *(long *)(lVar6 + 0x40)) {
                puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                puVar24[1] = *puVar17;
                goto LAB_01224804;
              }
              goto LAB_01224e84;
            }
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar27 = FUN_01780344(uVar27,0);
            uVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
            uVar7 = FUN_01789ac0(uVar27,uVar8,0);
            if ((uVar7 & 1) != 0) {
              memcpy(puVar12,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar10 + 0x40) !=
                  *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40)
                 ) goto LAB_01224e84;
              puVar17 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar24 = *puVar17;
              memcpy(pvVar28,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
              if (plVar25 == (long *)0x0) goto LAB_01224e80;
              lVar23 = *plVar25;
              lVar6 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
              goto LAB_012247e8;
            }
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar27 = FUN_01780344(uVar27,0);
            uVar8 = FUN_01780344(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                 ,0);
            uVar7 = FUN_01789ac0(uVar27,uVar8,0);
            if ((uVar7 & 1) == 0) {
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              uVar27 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar27 = FUN_01780344(uVar27,0);
              uVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              uVar7 = FUN_01789ac0(uVar27,uVar8,0);
              if ((uVar7 & 1) == 0) goto LAB_01224804;
              memcpy(puVar12,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
              if (plVar10 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
              goto LAB_01224e84;
              puVar17 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar24 = *puVar17;
              memcpy(pvVar28,param_2,__n);
              lVar6 = *plVar25;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
              if (plVar25 == (long *)0x0) goto LAB_01224e80;
              lVar23 = *(long *)(*plVar25 + 0x40);
              lVar6 = *(long *)PTR_DAT_033f2f78;
              goto LAB_012247ec;
            }
            memcpy(puVar12,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            pvVar22 = *(void **)(unaff_x29 + -0x98);
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar10 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)puVar24 = *puVar16;
            memcpy(pvVar28,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar10 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar24 + 4) = *puVar16;
            memcpy(pvVar30,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar10 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)(puVar24 + 1) = *puVar16;
            memcpy(pvVar22,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar22);
            if (plVar25 == (long *)0x0) goto LAB_01224e80;
            lVar23 = *plVar25;
            lVar6 = *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo;
          }
          else {
            memcpy(puVar12,param_2,__n);
            lVar6 = *plVar25;
            pvVar22 = *(void **)(unaff_x29 + -0x98);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar10 + 0x40) !=
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)puVar24 = *puVar16;
            memcpy(pvVar28,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar10 + 0x40) !=
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar24 + 4) = *puVar16;
            memcpy(pvVar30,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
            if (plVar10 == (long *)0x0) goto LAB_01224e80;
            lVar6 = *plVar10;
            plVar10 = (long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
LAB_0122420c:
            if (*(long *)(lVar6 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)(puVar24 + 1) = *puVar16;
            memcpy(pvVar22,param_2,__n);
            lVar6 = *plVar25;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar22);
            if (plVar25 == (long *)0x0) goto LAB_01224e80;
            lVar23 = *plVar25;
            lVar6 = *plVar10;
          }
          if (*(long *)(lVar23 + 0x40) == *(long *)(lVar6 + 0x40)) {
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar24 + 0xc) = *puVar16;
            goto LAB_01224804;
          }
          goto LAB_01224e84;
        }
        memcpy(puVar12,param_2,__n);
        lVar6 = *plVar25;
        pvVar22 = *(void **)(unaff_x29 + -0x98);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        pvVar31 = *(void **)(unaff_x29 + -0xa0);
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)puVar24 = *puVar15;
        memcpy(pvVar28,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
        puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 2) = *puVar15;
        memcpy(pvVar30,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        pvVar30 = *(void **)(unaff_x29 + -0xa8);
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 4) = *puVar15;
        memcpy(pvVar22,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar22);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        pvVar22 = *(void **)(unaff_x29 + -0x78);
        *(undefined2 *)((long)puVar24 + 6) = *puVar15;
        memcpy(pvVar22,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x78));
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)(puVar24 + 1) = *puVar15;
        memcpy(pvVar30,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 10) = *puVar15;
        memcpy(pvVar29,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar29);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 0xc) = *puVar15;
        memcpy(pvVar31,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar31);
        if (plVar25 == (long *)0x0) goto LAB_01224e80;
        lVar23 = *plVar25;
        lVar6 = *(long *)puVar2;
      }
      else {
        memcpy(puVar12,param_2,__n);
        lVar6 = *plVar25;
        pvVar22 = *(void **)(unaff_x29 + -0x98);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        pvVar31 = *(void **)(unaff_x29 + -0xa0);
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)puVar24 = *puVar15;
        memcpy(pvVar28,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 2) = *puVar15;
        memcpy(pvVar30,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
        puVar2 = 
        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        pvVar30 = *(void **)(unaff_x29 + -0xa8);
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 4) = *puVar15;
        memcpy(pvVar22,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar22);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        pvVar22 = *(void **)(unaff_x29 + -0x78);
        *(undefined2 *)((long)puVar24 + 6) = *puVar15;
        memcpy(pvVar22,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x78));
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)(puVar24 + 1) = *puVar15;
        memcpy(pvVar30,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 10) = *puVar15;
        memcpy(pvVar29,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar29);
        if (plVar10 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 0xc) = *puVar15;
        memcpy(pvVar31,param_2,__n);
        lVar6 = *plVar25;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar31);
        if (plVar25 == (long *)0x0) goto LAB_01224e80;
        lVar23 = *plVar25;
        lVar6 = *(long *)puVar2;
      }
      if (*(long *)(lVar23 + 0x40) == *(long *)(lVar6 + 0x40)) {
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar24 + 0xe) = *puVar15;
        goto LAB_01224804;
      }
      goto LAB_01224e84;
    }
    memcpy(puVar12,param_2,__n);
    lVar6 = *plVar25;
    pvVar31 = *(void **)(unaff_x29 + -0x98);
    puVar11 = *(undefined1 **)(unaff_x29 + -0x70);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar26 = *(void **)(unaff_x29 + -0xa0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *puVar11 = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar28 = *(void **)(unaff_x29 + -0xd0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[1] = *puVar12;
    memcpy(pvVar30,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar30 = *(void **)(unaff_x29 + -0xa8);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[2] = *puVar12;
    memcpy(pvVar31,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar31);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar31 = *(void **)(unaff_x29 + -0xb8);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x78);
    puVar11[3] = *puVar12;
    memcpy(pvVar13,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x78));
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[4] = *puVar12;
    memcpy(pvVar30,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar30 = *(void **)(unaff_x29 + -200);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[5] = *puVar12;
    memcpy(pvVar29,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar29);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar29 = *(void **)(unaff_x29 + -0xc0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[6] = *puVar12;
    memcpy(pvVar26,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar26);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar26 = *(void **)(unaff_x29 + -0xb0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x88);
    puVar11[7] = *puVar12;
    memcpy(pvVar13,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x88));
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x80);
    puVar11[8] = *puVar12;
    memcpy(pvVar13,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x80));
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[9] = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
    plVar10 = (long *)StringLiteral_7239;
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[10] = *puVar12;
    memcpy(pvVar30,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xb] = *puVar12;
    memcpy(pvVar22,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar22);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xc] = *puVar12;
    memcpy(pvVar29,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar29);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xd] = *puVar12;
    memcpy(pvVar31,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar31);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    uVar18 = *puVar12;
  }
  else {
    memcpy(puVar12,param_2,__n);
    lVar6 = *plVar25;
    pvVar28 = *(void **)(unaff_x29 + -0x98);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    puVar11 = *(undefined1 **)(unaff_x29 + -0x70);
    pvVar31 = *(void **)(unaff_x29 + -0x90);
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,puVar12);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar26 = *(void **)(unaff_x29 + -0xa0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *puVar11 = *puVar12;
    memcpy(pvVar31,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar31);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar31 = *(void **)(unaff_x29 + -0xd0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[1] = *puVar12;
    memcpy(pvVar30,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar30 = *(void **)(unaff_x29 + -0xa8);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[2] = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar28 = *(void **)(unaff_x29 + -0xb8);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x78);
    puVar11[3] = *puVar12;
    memcpy(pvVar13,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x78));
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[4] = *puVar12;
    memcpy(pvVar30,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar30 = *(void **)(unaff_x29 + -200);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[5] = *puVar12;
    memcpy(pvVar29,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar29);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar29 = *(void **)(unaff_x29 + -0xc0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[6] = *puVar12;
    memcpy(pvVar26,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar26);
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    pvVar26 = *(void **)(unaff_x29 + -0xb0);
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x88);
    puVar11[7] = *puVar12;
    memcpy(pvVar13,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x88));
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x80);
    puVar11[8] = *puVar12;
    memcpy(pvVar13,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d61fa0(lVar6,*(undefined8 *)(unaff_x29 + -0x80));
    if (plVar10 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[9] = *puVar12;
    memcpy(pvVar31,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar31);
    plVar10 = (long *)UnityEngine_Texture2D___TypeInfo;
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[10] = *puVar12;
    memcpy(pvVar30,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar30);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xb] = *puVar12;
    memcpy(pvVar22,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar22);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xc] = *puVar12;
    memcpy(pvVar29,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar29);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xd] = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar6 = *plVar25;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar28);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar10 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    uVar18 = *puVar12;
  }
  puVar11[0xe] = uVar18;
  memcpy(pvVar26,param_2,__n);
  lVar6 = *plVar25;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  plVar25 = (long *)thunk_FUN_00d61fa0(lVar6,pvVar26);
  if (plVar25 == (long *)0x0) {
LAB_01224e80:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar25 + 0x40) == *(long *)(*plVar10 + 0x40)) {
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    puVar11[0xf] = *puVar12;
LAB_01224804:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_01224e84:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


