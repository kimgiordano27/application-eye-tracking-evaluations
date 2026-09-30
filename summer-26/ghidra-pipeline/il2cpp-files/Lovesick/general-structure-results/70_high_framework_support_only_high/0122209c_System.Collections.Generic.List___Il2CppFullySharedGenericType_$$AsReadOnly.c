/*
FUNCTION_NAME: System.Collections.Generic.List<__Il2CppFullySharedGenericType>$$AsReadOnly
ENTRY_POINT: 0122209c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_List<__Il2CppFullySharedGenericType>__AsReadOnly(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  void *pvVar12;
  void *pvVar13;
  long *plVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  long lVar19;
  undefined8 unaff_x19;
  long lVar20;
  undefined8 *puVar21;
  long *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *pvVar22;
  undefined8 uVar23;
  void *pvVar24;
  void *unaff_x25;
  ulong unaff_x26;
  void *unaff_x27;
  void *pvVar25;
  void *unaff_x28;
  void *pvVar26;
  long unaff_x29;
  
  lVar5 = FUN_00d5941c();
  *(undefined8 *)(unaff_x29 + -0x70) = unaff_x19;
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar23 = FUN_01780344(uVar23,0);
  uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar7 = FUN_01789ac0(uVar23,uVar6,0);
  puVar2 = UnityEngine_Texture2D___TypeInfo;
  if ((unaff_x26 & 1) != 0) {
    if ((uVar7 & 1) == 0) {
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      puVar3 = StringLiteral_7239;
      puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
      uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar23 = FUN_01780344(uVar23,0);
      uVar6 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
      uVar7 = FUN_01789ac0(uVar23,uVar6,0);
      if ((uVar7 & 1) == 0) {
        lVar5 = *unaff_x20;
        puVar21 = *(undefined8 **)(unaff_x29 + -0x70);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar23 = FUN_01780344(uVar23,0);
        uVar6 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
        uVar7 = FUN_01789ac0(uVar23,uVar6,0);
        puVar3 = 
        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        if ((uVar7 & 1) == 0) {
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar23 = FUN_01780344(uVar23,0);
          uVar6 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
          uVar7 = FUN_01789ac0(uVar23,uVar6,0);
          if ((uVar7 & 1) == 0) {
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
            uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar23 = FUN_01780344(uVar23,0);
            uVar6 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
            uVar7 = FUN_01789ac0(uVar23,uVar6,0);
            puVar4 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
            if ((uVar7 & 1) == 0) {
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar23 = FUN_01780344(uVar23,0);
              uVar6 = FUN_01780344(*(undefined8 *)
                                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                   ,0);
              uVar7 = FUN_01789ac0(uVar23,uVar6,0);
              if ((uVar7 & 1) == 0) {
                lVar5 = *unaff_x20;
                if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                  lVar5 = FUN_00d5941c();
                }
                uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                }
                uVar23 = FUN_01780344(uVar23,0);
                uVar6 = FUN_01780344(*(undefined8 *)
                                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                     ,0);
                uVar7 = FUN_01789ac0(uVar23,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  lVar5 = *unaff_x20;
                  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    lVar5 = FUN_00d5941c();
                  }
                  uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__)
                    ;
                  }
                  uVar23 = FUN_01780344(uVar23,0);
                  uVar6 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0
                                      );
                  uVar7 = FUN_01789ac0(uVar23,uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    lVar5 = *unaff_x20;
                    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                      lVar5 = FUN_00d5941c();
                    }
                    uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                ) == 0) {
                      thunk_FUN_00d32864(*(long *)
                                          Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                    }
                    uVar23 = FUN_01780344(uVar23,0);
                    uVar6 = FUN_01780344(*(undefined8 *)
                                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                         ,0);
                    uVar7 = FUN_01789ac0(uVar23,uVar6,0);
                    if ((uVar7 & 1) == 0) {
                      lVar5 = *unaff_x20;
                      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                        lVar5 = FUN_00d5941c();
                      }
                      uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)
                                            Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                      }
                      uVar23 = FUN_01780344(uVar23,0);
                      uVar6 = FUN_01780344(*(undefined8 *)
                                            Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                      uVar7 = FUN_01789ac0(uVar23,uVar6,0);
                      if ((uVar7 & 1) == 0) goto LAB_01224804;
                      lVar5 = 0;
                      while( true ) {
                        lVar20 = *unaff_x20;
                        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                          lVar20 = FUN_00d5941c();
                        }
                        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                          lVar20 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar8 = *unaff_x20;
                        uVar1 = *(ushort *)(lVar8 + 0x132);
                        lVar20 = lVar8;
                        if ((uVar1 & 1) == 0) {
                          lVar8 = FUN_00d5941c(lVar8);
                          uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                          lVar20 = *unaff_x20;
                        }
                        uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar20 = FUN_00d5941c(lVar20);
                        }
                        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
                        (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
                        if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
                        memcpy(unaff_x23,unaff_x27,unaff_x22);
                        lVar20 = *unaff_x20;
                        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                          lVar20 = FUN_00d5941c();
                        }
                        if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0
                           ) {
                          FUN_00d5941c();
                        }
                        plVar9 = (long *)thunk_FUN_00d61fa0();
                        if (plVar9 == (long *)0x0) goto LAB_01224e80;
                        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)
                           ) break;
                        puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                        lVar5 = lVar5 + 1;
                        *puVar21 = *puVar17;
                        puVar21 = puVar21 + 1;
                      }
                    }
                    else {
                      lVar5 = 0;
                      while( true ) {
                        lVar20 = *unaff_x20;
                        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                          lVar20 = FUN_00d5941c();
                        }
                        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                          lVar20 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar8 = *unaff_x20;
                        uVar1 = *(ushort *)(lVar8 + 0x132);
                        lVar20 = lVar8;
                        if ((uVar1 & 1) == 0) {
                          lVar8 = FUN_00d5941c(lVar8);
                          uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                          lVar20 = *unaff_x20;
                        }
                        uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar20 = FUN_00d5941c(lVar20);
                        }
                        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
                        (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
                        if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
                        memcpy(unaff_x23,unaff_x27,unaff_x22);
                        lVar20 = *unaff_x20;
                        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                          lVar20 = FUN_00d5941c();
                        }
                        if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0
                           ) {
                          FUN_00d5941c();
                        }
                        plVar9 = (long *)thunk_FUN_00d61fa0();
                        if (plVar9 == (long *)0x0) goto LAB_01224e80;
                        if (*(long *)(*plVar9 + 0x40) !=
                            *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo +
                                     0x40)) break;
                        puVar16 = (undefined4 *)thunk_FUN_00d624a0();
                        lVar5 = lVar5 + 1;
                        *(undefined4 *)puVar21 = *puVar16;
                        puVar21 = (undefined8 *)((long)puVar21 + 4);
                      }
                    }
                  }
                  else {
                    lVar5 = 0;
                    while( true ) {
                      lVar20 = *unaff_x20;
                      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                        lVar20 = FUN_00d5941c();
                      }
                      lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                        lVar20 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar8 = *unaff_x20;
                      uVar1 = *(ushort *)(lVar8 + 0x132);
                      lVar20 = lVar8;
                      if ((uVar1 & 1) == 0) {
                        lVar8 = FUN_00d5941c(lVar8);
                        uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                        lVar20 = *unaff_x20;
                      }
                      uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar20 = FUN_00d5941c(lVar20);
                      }
                      lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
                      (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
                      if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
                      memcpy(unaff_x23,unaff_x27,unaff_x22);
                      lVar20 = *unaff_x20;
                      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                        lVar20 = FUN_00d5941c();
                      }
                      if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0)
                      {
                        FUN_00d5941c();
                      }
                      plVar9 = (long *)thunk_FUN_00d61fa0();
                      if (plVar9 == (long *)0x0) goto LAB_01224e80;
                      if (*(long *)(*plVar9 + 0x40) !=
                          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo
                                   + 0x40)) break;
                      puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                      lVar5 = lVar5 + 1;
                      *puVar21 = *puVar17;
                      puVar21 = puVar21 + 1;
                    }
                  }
                }
                else {
                  lVar5 = 0;
                  while( true ) {
                    lVar20 = *unaff_x20;
                    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                      lVar20 = FUN_00d5941c();
                    }
                    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                      lVar20 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar8 = *unaff_x20;
                    uVar1 = *(ushort *)(lVar8 + 0x132);
                    lVar20 = lVar8;
                    if ((uVar1 & 1) == 0) {
                      lVar8 = FUN_00d5941c(lVar8);
                      uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                      lVar20 = *unaff_x20;
                    }
                    uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar20 = FUN_00d5941c(lVar20);
                    }
                    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
                    (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
                    if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
                    memcpy(unaff_x23,unaff_x27,unaff_x22);
                    lVar20 = *unaff_x20;
                    if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                      lVar20 = FUN_00d5941c();
                    }
                    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                      FUN_00d5941c();
                    }
                    plVar9 = (long *)thunk_FUN_00d61fa0();
                    if (plVar9 == (long *)0x0) goto LAB_01224e80;
                    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                    puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                    lVar5 = lVar5 + 1;
                    *puVar21 = *puVar17;
                    puVar21 = puVar21 + 1;
                  }
                }
              }
              else {
                lVar5 = 0;
                while( true ) {
                  lVar20 = *unaff_x20;
                  if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                    lVar20 = FUN_00d5941c();
                  }
                  lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                  if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                    lVar20 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar8 = *unaff_x20;
                  uVar1 = *(ushort *)(lVar8 + 0x132);
                  lVar20 = lVar8;
                  if ((uVar1 & 1) == 0) {
                    lVar8 = FUN_00d5941c(lVar8);
                    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                    lVar20 = *unaff_x20;
                  }
                  uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar20 = FUN_00d5941c(lVar20);
                  }
                  lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
                  (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
                  if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
                  memcpy(unaff_x23,unaff_x27,unaff_x22);
                  lVar20 = *unaff_x20;
                  if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                    lVar20 = FUN_00d5941c();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                    FUN_00d5941c();
                  }
                  plVar9 = (long *)thunk_FUN_00d61fa0();
                  if (plVar9 == (long *)0x0) goto LAB_01224e80;
                  if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar16 = (undefined4 *)thunk_FUN_00d624a0();
                  lVar5 = lVar5 + 1;
                  *(undefined4 *)puVar21 = *puVar16;
                  puVar21 = (undefined8 *)((long)puVar21 + 4);
                }
              }
            }
            else {
              lVar5 = 0;
              while( true ) {
                lVar20 = *unaff_x20;
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar8 = *unaff_x20;
                uVar1 = *(ushort *)(lVar8 + 0x132);
                lVar20 = lVar8;
                if ((uVar1 & 1) == 0) {
                  lVar8 = FUN_00d5941c(lVar8);
                  uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                  lVar20 = *unaff_x20;
                }
                uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar20 = FUN_00d5941c(lVar20);
                }
                lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
                (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
                if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
                memcpy(unaff_x23,unaff_x27,unaff_x22);
                lVar20 = *unaff_x20;
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                  FUN_00d5941c();
                }
                plVar9 = (long *)thunk_FUN_00d61fa0();
                if (plVar9 == (long *)0x0) goto LAB_01224e80;
                if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
                puVar16 = (undefined4 *)thunk_FUN_00d624a0();
                lVar5 = lVar5 + 1;
                *(undefined4 *)puVar21 = *puVar16;
                puVar21 = (undefined8 *)((long)puVar21 + 4);
              }
            }
          }
          else {
            lVar5 = 0;
            while( true ) {
              lVar20 = *unaff_x20;
              if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                lVar20 = FUN_00d5941c();
              }
              lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
              if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                lVar20 = FUN_00d5941c();
              }
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar8 = *unaff_x20;
              uVar1 = *(ushort *)(lVar8 + 0x132);
              lVar20 = lVar8;
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_00d5941c(lVar8);
                uVar1 = *(ushort *)(*unaff_x20 + 0x132);
                lVar20 = *unaff_x20;
              }
              uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar20 = FUN_00d5941c(lVar20);
              }
              lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
              (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
              if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
              memcpy(unaff_x23,unaff_x27,unaff_x22);
              lVar20 = *unaff_x20;
              if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                lVar20 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar15 = (undefined2 *)thunk_FUN_00d624a0();
              lVar5 = lVar5 + 1;
              *(undefined2 *)puVar21 = *puVar15;
              puVar21 = (undefined8 *)((long)puVar21 + 2);
            }
          }
        }
        else {
          lVar5 = 0;
          while( true ) {
            lVar20 = *unaff_x20;
            if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
              lVar20 = FUN_00d5941c();
            }
            lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
            if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
              lVar20 = FUN_00d5941c();
            }
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar8 = *unaff_x20;
            uVar1 = *(ushort *)(lVar8 + 0x132);
            lVar20 = lVar8;
            if ((uVar1 & 1) == 0) {
              lVar8 = FUN_00d5941c(lVar8);
              uVar1 = *(ushort *)(*unaff_x20 + 0x132);
              lVar20 = *unaff_x20;
            }
            uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar20 = FUN_00d5941c(lVar20);
            }
            lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
            (**(code **)(lVar20 + 0x10))(uVar23,lVar20,0,0,unaff_x29 + -0x5c);
            if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
            memcpy(unaff_x23,unaff_x27,unaff_x22);
            lVar20 = *unaff_x20;
            if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
              lVar20 = FUN_00d5941c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0();
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
            puVar15 = (undefined2 *)thunk_FUN_00d624a0();
            lVar5 = lVar5 + 1;
            *(undefined2 *)puVar21 = *puVar15;
            puVar21 = (undefined8 *)((long)puVar21 + 2);
          }
        }
      }
      else {
        lVar20 = *(long *)(unaff_x29 + -0x70);
        lVar5 = 0;
        while( true ) {
          lVar8 = *unaff_x20;
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar19 = *unaff_x20;
          uVar1 = *(ushort *)(lVar19 + 0x132);
          lVar8 = lVar19;
          if ((uVar1 & 1) == 0) {
            lVar19 = FUN_00d5941c(lVar19);
            uVar1 = *(ushort *)(*unaff_x20 + 0x132);
            lVar8 = *unaff_x20;
          }
          uVar23 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_00d5941c(lVar8);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
          (**(code **)(lVar8 + 0x10))(uVar23,lVar8,0,0,unaff_x29 + -0x5c);
          if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
          memcpy(unaff_x23,unaff_x27,unaff_x22);
          lVar8 = *unaff_x20;
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          plVar9 = (long *)thunk_FUN_00d61fa0();
          if (plVar9 == (long *)0x0) goto LAB_01224e80;
          if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
          puVar10 = (undefined1 *)thunk_FUN_00d624a0();
          *(undefined1 *)(lVar20 + lVar5) = *puVar10;
          lVar5 = lVar5 + 1;
        }
      }
    }
    else {
      lVar20 = *(long *)(unaff_x29 + -0x70);
      lVar5 = 0;
      while( true ) {
        lVar8 = *unaff_x20;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar19 = *unaff_x20;
        uVar1 = *(ushort *)(lVar19 + 0x132);
        lVar8 = lVar19;
        if ((uVar1 & 1) == 0) {
          lVar19 = FUN_00d5941c(lVar19);
          uVar1 = *(ushort *)(*unaff_x20 + 0x132);
          lVar8 = *unaff_x20;
        }
        uVar23 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        (**(code **)(lVar8 + 0x10))(uVar23,lVar8,0,0,unaff_x29 + -0x5c);
        if (*(int *)(unaff_x29 + -0x5c) <= lVar5) goto LAB_01224804;
        memcpy(unaff_x23,unaff_x27,unaff_x22);
        lVar8 = *unaff_x20;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar10 = (undefined1 *)thunk_FUN_00d624a0();
        *(undefined1 *)(lVar20 + lVar5) = *puVar10;
        lVar5 = lVar5 + 1;
      }
    }
    goto LAB_01224e84;
  }
  if ((uVar7 & 1) == 0) {
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    pvVar24 = *(void **)(unaff_x29 + -0x90);
    uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar23 = FUN_01780344(uVar23,0);
    uVar6 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
    uVar7 = FUN_01789ac0(uVar23,uVar6,0);
    if ((uVar7 & 1) == 0) {
      lVar5 = *unaff_x20;
      puVar21 = *(undefined8 **)(unaff_x29 + -0x70);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar23 = FUN_01780344(uVar23,0);
      uVar6 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
      uVar7 = FUN_01789ac0(uVar23,uVar6,0);
      if ((uVar7 & 1) == 0) {
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar23 = FUN_01780344(uVar23,0);
        uVar6 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        uVar7 = FUN_01789ac0(uVar23,uVar6,0);
        if ((uVar7 & 1) == 0) {
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar23 = FUN_01780344(uVar23,0);
          uVar6 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
          uVar7 = FUN_01789ac0(uVar23,uVar6,0);
          if ((uVar7 & 1) == 0) {
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar23 = FUN_01780344(uVar23,0);
            uVar6 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                 ,0);
            uVar7 = FUN_01789ac0(uVar23,uVar6,0);
            if ((uVar7 & 1) != 0) {
              memcpy(unaff_x23,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              pvVar26 = *(void **)(unaff_x29 + -0x98);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar9 + 0x40) !=
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                           + 0x40)) goto LAB_01224e84;
              puVar16 = (undefined4 *)thunk_FUN_00d624a0();
              *(undefined4 *)puVar21 = *puVar16;
              memcpy(pvVar24,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar9 + 0x40) !=
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                           + 0x40)) goto LAB_01224e84;
              puVar16 = (undefined4 *)thunk_FUN_00d624a0();
              *(undefined4 *)((long)puVar21 + 4) = *puVar16;
              memcpy(unaff_x28,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              lVar5 = *plVar9;
              plVar9 = (long *)
                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
              goto LAB_0122420c;
            }
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar23 = FUN_01780344(uVar23,0);
            uVar6 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                 ,0);
            uVar7 = FUN_01789ac0(uVar23,uVar6,0);
            if ((uVar7 & 1) != 0) {
              memcpy(unaff_x23,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
              puVar17 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar21 = *puVar17;
              memcpy(pvVar24,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              lVar20 = *plVar9;
              lVar5 = *(long *)puVar2;
LAB_012247e8:
              lVar20 = *(long *)(lVar20 + 0x40);
LAB_012247ec:
              if (lVar20 == *(long *)(lVar5 + 0x40)) {
                puVar17 = (undefined8 *)thunk_FUN_00d624a0();
                puVar21[1] = *puVar17;
                goto LAB_01224804;
              }
              goto LAB_01224e84;
            }
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar23 = FUN_01780344(uVar23,0);
            uVar6 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
            uVar7 = FUN_01789ac0(uVar23,uVar6,0);
            if ((uVar7 & 1) != 0) {
              memcpy(unaff_x23,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar9 + 0x40) !=
                  *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40)
                 ) goto LAB_01224e84;
              puVar17 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar21 = *puVar17;
              memcpy(pvVar24,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              lVar20 = *plVar9;
              lVar5 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
              goto LAB_012247e8;
            }
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar23 = FUN_01780344(uVar23,0);
            uVar6 = FUN_01780344(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                 ,0);
            uVar7 = FUN_01789ac0(uVar23,uVar6,0);
            if ((uVar7 & 1) == 0) {
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              uVar23 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar23 = FUN_01780344(uVar23,0);
              uVar6 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              uVar7 = FUN_01789ac0(uVar23,uVar6,0);
              if ((uVar7 & 1) == 0) goto LAB_01224804;
              memcpy(unaff_x23,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0();
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
              goto LAB_01224e84;
              puVar17 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar21 = *puVar17;
              memcpy(pvVar24,unaff_x27,unaff_x22);
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
              if (plVar9 == (long *)0x0) goto LAB_01224e80;
              lVar20 = *(long *)(*plVar9 + 0x40);
              lVar5 = *(long *)PTR_DAT_033f2f78;
              goto LAB_012247ec;
            }
            memcpy(unaff_x23,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            pvVar26 = *(void **)(unaff_x29 + -0x98);
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0();
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar9 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)puVar21 = *puVar16;
            memcpy(pvVar24,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar9 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar21 + 4) = *puVar16;
            memcpy(unaff_x28,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0();
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar9 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)(puVar21 + 1) = *puVar16;
            memcpy(pvVar26,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            lVar20 = *plVar9;
            lVar5 = *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo;
          }
          else {
            memcpy(unaff_x23,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            pvVar26 = *(void **)(unaff_x29 + -0x98);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0();
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar9 + 0x40) !=
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)puVar21 = *puVar16;
            memcpy(pvVar24,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar9 + 0x40) !=
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
            goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar21 + 4) = *puVar16;
            memcpy(unaff_x28,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0();
            if (plVar9 == (long *)0x0) goto LAB_01224e80;
            lVar5 = *plVar9;
            plVar9 = (long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
LAB_0122420c:
            if (*(long *)(lVar5 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)(puVar21 + 1) = *puVar16;
            memcpy(pvVar26,unaff_x27,unaff_x22);
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
            if (plVar14 == (long *)0x0) goto LAB_01224e80;
            lVar20 = *plVar14;
            lVar5 = *plVar9;
          }
          if (*(long *)(lVar20 + 0x40) == *(long *)(lVar5 + 0x40)) {
            puVar16 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar21 + 0xc) = *puVar16;
            goto LAB_01224804;
          }
          goto LAB_01224e84;
        }
        memcpy(unaff_x23,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        pvVar26 = *(void **)(unaff_x29 + -0x98);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        pvVar22 = *(void **)(unaff_x29 + -0xa0);
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)puVar21 = *puVar15;
        memcpy(pvVar24,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
        puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 2) = *puVar15;
        memcpy(unaff_x28,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        pvVar24 = *(void **)(unaff_x29 + -0xa8);
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 4) = *puVar15;
        memcpy(pvVar26,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        pvVar26 = *(void **)(unaff_x29 + -0x78);
        *(undefined2 *)((long)puVar21 + 6) = *puVar15;
        memcpy(pvVar26,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x78));
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)(puVar21 + 1) = *puVar15;
        memcpy(pvVar24,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 10) = *puVar15;
        memcpy(unaff_x25,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 0xc) = *puVar15;
        memcpy(pvVar22,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar22);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        lVar20 = *plVar9;
        lVar5 = *(long *)puVar2;
      }
      else {
        memcpy(unaff_x23,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        pvVar26 = *(void **)(unaff_x29 + -0x98);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        pvVar22 = *(void **)(unaff_x29 + -0xa0);
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)puVar21 = *puVar15;
        memcpy(pvVar24,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 2) = *puVar15;
        memcpy(unaff_x28,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        puVar2 = 
        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        pvVar24 = *(void **)(unaff_x29 + -0xa8);
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 4) = *puVar15;
        memcpy(pvVar26,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        pvVar26 = *(void **)(unaff_x29 + -0x78);
        *(undefined2 *)((long)puVar21 + 6) = *puVar15;
        memcpy(pvVar26,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x78));
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)(puVar21 + 1) = *puVar15;
        memcpy(pvVar24,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 10) = *puVar15;
        memcpy(unaff_x25,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0();
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 0xc) = *puVar15;
        memcpy(pvVar22,unaff_x27,unaff_x22);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar22);
        if (plVar9 == (long *)0x0) goto LAB_01224e80;
        lVar20 = *plVar9;
        lVar5 = *(long *)puVar2;
      }
      if (*(long *)(lVar20 + 0x40) == *(long *)(lVar5 + 0x40)) {
        puVar15 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar21 + 0xe) = *puVar15;
        goto LAB_01224804;
      }
      goto LAB_01224e84;
    }
    memcpy(unaff_x23,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    pvVar26 = *(void **)(unaff_x29 + -0x98);
    puVar10 = *(undefined1 **)(unaff_x29 + -0x70);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar22 = *(void **)(unaff_x29 + -0xa0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    *puVar10 = *puVar11;
    memcpy(pvVar24,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar24 = *(void **)(unaff_x29 + -0xd0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[1] = *puVar11;
    memcpy(unaff_x28,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar25 = *(void **)(unaff_x29 + -0xa8);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[2] = *puVar11;
    memcpy(pvVar26,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar26 = *(void **)(unaff_x29 + -0xb8);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar12 = *(void **)(unaff_x29 + -0x78);
    puVar10[3] = *puVar11;
    memcpy(pvVar12,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x78));
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[4] = *puVar11;
    memcpy(pvVar25,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar25);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar25 = *(void **)(unaff_x29 + -200);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[5] = *puVar11;
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar12 = *(void **)(unaff_x29 + -0xc0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[6] = *puVar11;
    memcpy(pvVar22,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar22);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar22 = *(void **)(unaff_x29 + -0xb0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x88);
    puVar10[7] = *puVar11;
    memcpy(pvVar13,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x88));
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x80);
    puVar10[8] = *puVar11;
    memcpy(pvVar13,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x80));
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[9] = *puVar11;
    memcpy(pvVar24,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
    plVar9 = (long *)StringLiteral_7239;
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[10] = *puVar11;
    memcpy(pvVar25,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar25);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xb] = *puVar11;
    memcpy(unaff_x21,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0();
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xc] = *puVar11;
    memcpy(pvVar12,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar12);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xd] = *puVar11;
    memcpy(pvVar26,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    uVar18 = *puVar11;
  }
  else {
    memcpy(unaff_x23,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    pvVar24 = *(void **)(unaff_x29 + -0x98);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar10 = *(undefined1 **)(unaff_x29 + -0x70);
    pvVar26 = *(void **)(unaff_x29 + -0x90);
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar22 = *(void **)(unaff_x29 + -0xa0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    *puVar10 = *puVar11;
    memcpy(pvVar26,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar26 = *(void **)(unaff_x29 + -0xd0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[1] = *puVar11;
    memcpy(unaff_x28,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar25 = *(void **)(unaff_x29 + -0xa8);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[2] = *puVar11;
    memcpy(pvVar24,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar24 = *(void **)(unaff_x29 + -0xb8);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar12 = *(void **)(unaff_x29 + -0x78);
    puVar10[3] = *puVar11;
    memcpy(pvVar12,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x78));
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[4] = *puVar11;
    memcpy(pvVar25,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar25);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar25 = *(void **)(unaff_x29 + -200);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[5] = *puVar11;
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0();
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar12 = *(void **)(unaff_x29 + -0xc0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[6] = *puVar11;
    memcpy(pvVar22,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar22);
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    pvVar22 = *(void **)(unaff_x29 + -0xb0);
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x88);
    puVar10[7] = *puVar11;
    memcpy(pvVar13,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x88));
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    pvVar13 = *(void **)(unaff_x29 + -0x80);
    puVar10[8] = *puVar11;
    memcpy(pvVar13,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar5,*(undefined8 *)(unaff_x29 + -0x80));
    if (plVar9 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[9] = *puVar11;
    memcpy(pvVar26,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar26);
    plVar9 = (long *)UnityEngine_Texture2D___TypeInfo;
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[10] = *puVar11;
    memcpy(pvVar25,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar25);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xb] = *puVar11;
    memcpy(unaff_x21,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0();
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xc] = *puVar11;
    memcpy(pvVar12,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar12);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xd] = *puVar11;
    memcpy(pvVar24,unaff_x27,unaff_x22);
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar24);
    if (plVar14 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*plVar9 + 0x40)) goto LAB_01224e84;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    uVar18 = *puVar11;
  }
  puVar10[0xe] = uVar18;
  memcpy(pvVar22,unaff_x27,unaff_x22);
  lVar5 = *unaff_x20;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  plVar14 = (long *)thunk_FUN_00d61fa0(lVar5,pvVar22);
  if (plVar14 == (long *)0x0) {
LAB_01224e80:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar14 + 0x40) == *(long *)(*plVar9 + 0x40)) {
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    puVar10[0xf] = *puVar11;
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


