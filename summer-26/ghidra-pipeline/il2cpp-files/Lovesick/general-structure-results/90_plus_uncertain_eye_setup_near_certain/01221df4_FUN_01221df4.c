/*
FUNCTION_NAME: FUN_01221df4
ENTRY_POINT: 01221df4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 173
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01221df4(undefined8 *param_1,void *param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  void *pvVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong __n;
  void *pvVar24;
  void *pvVar25;
  undefined8 uVar26;
  void *pvVar27;
  void *pvVar28;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  undefined8 *local_80;
  long local_78;
  int local_6c;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
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
  plVar23 = (long *)(param_3 + 0x20);
  lVar7 = *plVar23;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar18 = iVar6 - 0x10;
  }
  else {
    uVar18 = 8;
  }
  __n = (ulong)uVar18;
  uVar19 = __n + 0xf & 0x1fffffff0;
  pvVar24 = (void *)((long)&local_e0 - uVar19);
  local_a0 = (void *)((long)pvVar24 - uVar19);
  pvVar28 = (void *)((long)local_a0 - uVar19);
  pvVar25 = (void *)((long)pvVar28 - uVar19);
  local_88 = (void *)((long)pvVar25 - uVar19);
  local_b8 = (void *)((long)local_88 - uVar19);
  pvVar27 = (void *)((long)local_b8 - uVar19);
  local_b0 = (void *)((long)pvVar27 - uVar19);
  local_98 = (void *)((long)local_b0 - uVar19);
  local_90 = (void *)((long)local_98 - uVar19);
  local_e0 = (void *)((long)local_90 - uVar19);
  local_d8 = (void *)((long)local_e0 - uVar19);
  pvVar21 = (void *)((long)local_d8 - uVar19);
  local_d0 = (void *)((long)pvVar21 - uVar19);
  local_c8 = (void *)((long)local_d0 - uVar19);
  local_c0 = (void *)((long)local_c8 - uVar19);
  *param_1 = 0;
  param_1[1] = 0;
  uVar19 = System_MonoCustomAttrs__GetPseudoCustomAttributesData(0);
  lVar7 = *plVar23;
  local_a8 = pvVar25;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
  local_80 = param_1;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar26 = FUN_01780344(uVar26,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar9 = FUN_01789ac0(uVar26,uVar8,0);
  puVar22 = local_80;
  puVar2 = UnityEngine_Texture2D___TypeInfo;
  if ((uVar19 & 1) != 0) {
    if ((uVar9 & 1) == 0) {
      lVar7 = *plVar23;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      puVar3 = StringLiteral_7239;
      puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
      uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar26 = FUN_01780344(uVar26,0);
      uVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
      uVar19 = FUN_01789ac0(uVar26,uVar8,0);
      puVar22 = local_80;
      if ((uVar19 & 1) == 0) {
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar26 = FUN_01780344(uVar26,0);
        uVar8 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
        uVar19 = FUN_01789ac0(uVar26,uVar8,0);
        puVar3 = 
        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        if ((uVar19 & 1) == 0) {
          lVar7 = *plVar23;
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c();
          }
          uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar26 = FUN_01780344(uVar26,0);
          uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
          uVar19 = FUN_01789ac0(uVar26,uVar8,0);
          if ((uVar19 & 1) == 0) {
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
            uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar26 = FUN_01780344(uVar26,0);
            uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
            uVar19 = FUN_01789ac0(uVar26,uVar8,0);
            puVar4 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
            if ((uVar19 & 1) == 0) {
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar26 = FUN_01780344(uVar26,0);
              uVar8 = FUN_01780344(*(undefined8 *)
                                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                   ,0);
              uVar19 = FUN_01789ac0(uVar26,uVar8,0);
              if ((uVar19 & 1) == 0) {
                lVar7 = *plVar23;
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                }
                uVar26 = FUN_01780344(uVar26,0);
                uVar8 = FUN_01780344(*(undefined8 *)
                                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                     ,0);
                uVar19 = FUN_01789ac0(uVar26,uVar8,0);
                if ((uVar19 & 1) == 0) {
                  lVar7 = *plVar23;
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c();
                  }
                  uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__)
                    ;
                  }
                  uVar26 = FUN_01780344(uVar26,0);
                  uVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0
                                      );
                  uVar19 = FUN_01789ac0(uVar26,uVar8,0);
                  if ((uVar19 & 1) == 0) {
                    lVar7 = *plVar23;
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c();
                    }
                    uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                ) == 0) {
                      thunk_FUN_00d32864(*(long *)
                                          Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                    }
                    uVar26 = FUN_01780344(uVar26,0);
                    uVar8 = FUN_01780344(*(undefined8 *)
                                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                         ,0);
                    uVar19 = FUN_01789ac0(uVar26,uVar8,0);
                    if ((uVar19 & 1) == 0) {
                      lVar7 = *plVar23;
                      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                        lVar7 = FUN_00d5941c();
                      }
                      uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)
                                            Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                      }
                      uVar26 = FUN_01780344(uVar26,0);
                      uVar8 = FUN_01780344(*(undefined8 *)
                                            Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                      uVar19 = FUN_01789ac0(uVar26,uVar8,0);
                      if ((uVar19 & 1) == 0) goto LAB_01224804;
                      lVar7 = 0;
                      while( true ) {
                        lVar10 = *plVar23;
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar10 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar20 = *plVar23;
                        uVar1 = *(ushort *)(lVar20 + 0x132);
                        lVar10 = lVar20;
                        if ((uVar1 & 1) == 0) {
                          lVar20 = FUN_00d5941c(lVar20);
                          uVar1 = *(ushort *)(*plVar23 + 0x132);
                          lVar10 = *plVar23;
                        }
                        uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar10 = FUN_00d5941c(lVar10);
                        }
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
                        (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
                        if (local_6c <= lVar7) goto LAB_01224804;
                        memcpy(pvVar24,param_2,__n);
                        lVar10 = *plVar23;
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
                        if (plVar11 == (long *)0x0) goto LAB_01224e80;
                        if (*(long *)(*plVar11 + 0x40) !=
                            *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) break;
                        puVar16 = (undefined8 *)thunk_FUN_00d624a0();
                        lVar7 = lVar7 + 1;
                        *puVar22 = *puVar16;
                        puVar22 = puVar22 + 1;
                      }
                    }
                    else {
                      lVar7 = 0;
                      while( true ) {
                        lVar10 = *plVar23;
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar10 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar20 = *plVar23;
                        uVar1 = *(ushort *)(lVar20 + 0x132);
                        lVar10 = lVar20;
                        if ((uVar1 & 1) == 0) {
                          lVar20 = FUN_00d5941c(lVar20);
                          uVar1 = *(ushort *)(*plVar23 + 0x132);
                          lVar10 = *plVar23;
                        }
                        uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar10 = FUN_00d5941c(lVar10);
                        }
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
                        (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
                        if (local_6c <= lVar7) goto LAB_01224804;
                        memcpy(pvVar24,param_2,__n);
                        lVar10 = *plVar23;
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
                        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                          lVar10 = FUN_00d5941c();
                        }
                        plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
                        if (plVar11 == (long *)0x0) goto LAB_01224e80;
                        if (*(long *)(*plVar11 + 0x40) !=
                            *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo +
                                     0x40)) break;
                        puVar15 = (undefined4 *)thunk_FUN_00d624a0();
                        lVar7 = lVar7 + 1;
                        *(undefined4 *)puVar22 = *puVar15;
                        puVar22 = (undefined8 *)((long)puVar22 + 4);
                      }
                    }
                  }
                  else {
                    lVar7 = 0;
                    while( true ) {
                      lVar10 = *plVar23;
                      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                        lVar10 = FUN_00d5941c();
                      }
                      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                        lVar10 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar10 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar20 = *plVar23;
                      uVar1 = *(ushort *)(lVar20 + 0x132);
                      lVar10 = lVar20;
                      if ((uVar1 & 1) == 0) {
                        lVar20 = FUN_00d5941c(lVar20);
                        uVar1 = *(ushort *)(*plVar23 + 0x132);
                        lVar10 = *plVar23;
                      }
                      uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar10 = FUN_00d5941c(lVar10);
                      }
                      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
                      (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
                      if (local_6c <= lVar7) goto LAB_01224804;
                      memcpy(pvVar24,param_2,__n);
                      lVar10 = *plVar23;
                      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                        lVar10 = FUN_00d5941c();
                      }
                      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
                      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                        lVar10 = FUN_00d5941c();
                      }
                      plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
                      if (plVar11 == (long *)0x0) goto LAB_01224e80;
                      if (*(long *)(*plVar11 + 0x40) !=
                          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo
                                   + 0x40)) break;
                      puVar16 = (undefined8 *)thunk_FUN_00d624a0();
                      lVar7 = lVar7 + 1;
                      *puVar22 = *puVar16;
                      puVar22 = puVar22 + 1;
                    }
                  }
                }
                else {
                  lVar7 = 0;
                  while( true ) {
                    lVar10 = *plVar23;
                    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                      lVar10 = FUN_00d5941c();
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                      lVar10 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar20 = *plVar23;
                    uVar1 = *(ushort *)(lVar20 + 0x132);
                    lVar10 = lVar20;
                    if ((uVar1 & 1) == 0) {
                      lVar20 = FUN_00d5941c(lVar20);
                      uVar1 = *(ushort *)(*plVar23 + 0x132);
                      lVar10 = *plVar23;
                    }
                    uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar10 = FUN_00d5941c(lVar10);
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
                    (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
                    if (local_6c <= lVar7) goto LAB_01224804;
                    memcpy(pvVar24,param_2,__n);
                    lVar10 = *plVar23;
                    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                      lVar10 = FUN_00d5941c();
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
                    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                      lVar10 = FUN_00d5941c();
                    }
                    plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
                    if (plVar11 == (long *)0x0) goto LAB_01224e80;
                    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                    puVar16 = (undefined8 *)thunk_FUN_00d624a0();
                    lVar7 = lVar7 + 1;
                    *puVar22 = *puVar16;
                    puVar22 = puVar22 + 1;
                  }
                }
              }
              else {
                lVar7 = 0;
                while( true ) {
                  lVar10 = *plVar23;
                  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                    lVar10 = FUN_00d5941c();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                    lVar10 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar20 = *plVar23;
                  uVar1 = *(ushort *)(lVar20 + 0x132);
                  lVar10 = lVar20;
                  if ((uVar1 & 1) == 0) {
                    lVar20 = FUN_00d5941c(lVar20);
                    uVar1 = *(ushort *)(*plVar23 + 0x132);
                    lVar10 = *plVar23;
                  }
                  uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_00d5941c(lVar10);
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
                  (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
                  if (local_6c <= lVar7) goto LAB_01224804;
                  memcpy(pvVar24,param_2,__n);
                  lVar10 = *plVar23;
                  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                    lVar10 = FUN_00d5941c();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
                  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                    lVar10 = FUN_00d5941c();
                  }
                  plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
                  if (plVar11 == (long *)0x0) goto LAB_01224e80;
                  if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar15 = (undefined4 *)thunk_FUN_00d624a0();
                  lVar7 = lVar7 + 1;
                  *(undefined4 *)puVar22 = *puVar15;
                  puVar22 = (undefined8 *)((long)puVar22 + 4);
                }
              }
            }
            else {
              lVar7 = 0;
              while( true ) {
                lVar10 = *plVar23;
                if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                  lVar10 = FUN_00d5941c();
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                  lVar10 = FUN_00d5941c();
                }
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar20 = *plVar23;
                uVar1 = *(ushort *)(lVar20 + 0x132);
                lVar10 = lVar20;
                if ((uVar1 & 1) == 0) {
                  lVar20 = FUN_00d5941c(lVar20);
                  uVar1 = *(ushort *)(*plVar23 + 0x132);
                  lVar10 = *plVar23;
                }
                uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar10 = FUN_00d5941c(lVar10);
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
                (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
                if (local_6c <= lVar7) goto LAB_01224804;
                memcpy(pvVar24,param_2,__n);
                lVar10 = *plVar23;
                if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                  lVar10 = FUN_00d5941c();
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
                if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                  lVar10 = FUN_00d5941c();
                }
                plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
                if (plVar11 == (long *)0x0) goto LAB_01224e80;
                if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
                puVar15 = (undefined4 *)thunk_FUN_00d624a0();
                lVar7 = lVar7 + 1;
                *(undefined4 *)puVar22 = *puVar15;
                puVar22 = (undefined8 *)((long)puVar22 + 4);
              }
            }
          }
          else {
            lVar7 = 0;
            while( true ) {
              lVar10 = *plVar23;
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar20 = *plVar23;
              uVar1 = *(ushort *)(lVar20 + 0x132);
              lVar10 = lVar20;
              if ((uVar1 & 1) == 0) {
                lVar20 = FUN_00d5941c(lVar20);
                uVar1 = *(ushort *)(*plVar23 + 0x132);
                lVar10 = *plVar23;
              }
              uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_00d5941c(lVar10);
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
              (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
              if (local_6c <= lVar7) goto LAB_01224804;
              memcpy(pvVar24,param_2,__n);
              lVar10 = *plVar23;
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar14 = (undefined2 *)thunk_FUN_00d624a0();
              lVar7 = lVar7 + 1;
              *(undefined2 *)puVar22 = *puVar14;
              puVar22 = (undefined8 *)((long)puVar22 + 2);
            }
          }
        }
        else {
          lVar7 = 0;
          while( true ) {
            lVar10 = *plVar23;
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar20 = *plVar23;
            uVar1 = *(ushort *)(lVar20 + 0x132);
            lVar10 = lVar20;
            if ((uVar1 & 1) == 0) {
              lVar20 = FUN_00d5941c(lVar20);
              uVar1 = *(ushort *)(*plVar23 + 0x132);
              lVar10 = *plVar23;
            }
            uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar10 = FUN_00d5941c(lVar10);
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
            (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
            if (local_6c <= lVar7) goto LAB_01224804;
            memcpy(pvVar24,param_2,__n);
            lVar10 = *plVar23;
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
            puVar14 = (undefined2 *)thunk_FUN_00d624a0();
            lVar7 = lVar7 + 1;
            *(undefined2 *)puVar22 = *puVar14;
            puVar22 = (undefined8 *)((long)puVar22 + 2);
          }
        }
      }
      else {
        lVar7 = 0;
        while( true ) {
          lVar10 = *plVar23;
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar20 = *plVar23;
          uVar1 = *(ushort *)(lVar20 + 0x132);
          lVar10 = lVar20;
          if ((uVar1 & 1) == 0) {
            lVar20 = FUN_00d5941c(lVar20);
            uVar1 = *(ushort *)(*plVar23 + 0x132);
            lVar10 = *plVar23;
          }
          uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_00d5941c(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
          (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
          if (local_6c <= lVar7) goto LAB_01224804;
          memcpy(pvVar24,param_2,__n);
          lVar10 = *plVar23;
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
          if (plVar11 == (long *)0x0) goto LAB_01224e80;
          if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
          puVar12 = (undefined1 *)thunk_FUN_00d624a0();
          *(undefined1 *)((long)puVar22 + lVar7) = *puVar12;
          lVar7 = lVar7 + 1;
        }
      }
    }
    else {
      lVar7 = 0;
      while( true ) {
        lVar10 = *plVar23;
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar20 = *plVar23;
        uVar1 = *(ushort *)(lVar20 + 0x132);
        lVar10 = lVar20;
        if ((uVar1 & 1) == 0) {
          lVar20 = FUN_00d5941c(lVar20);
          uVar1 = *(ushort *)(*plVar23 + 0x132);
          lVar10 = *plVar23;
        }
        uVar26 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_00d5941c(lVar10);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
        (**(code **)(lVar10 + 0x10))(uVar26,lVar10,0,0,&local_6c);
        if (local_6c <= lVar7) goto LAB_01224804;
        memcpy(pvVar24,param_2,__n);
        lVar10 = *plVar23;
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar10,pvVar24);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar12 = (undefined1 *)thunk_FUN_00d624a0();
        *(undefined1 *)((long)puVar22 + lVar7) = *puVar12;
        lVar7 = lVar7 + 1;
      }
    }
    goto LAB_01224e84;
  }
  if ((uVar9 & 1) == 0) {
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pvVar25 = local_a0;
    uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar26 = FUN_01780344(uVar26,0);
    uVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
    uVar19 = FUN_01789ac0(uVar26,uVar8,0);
    puVar22 = local_80;
    if ((uVar19 & 1) == 0) {
      lVar7 = *plVar23;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar26 = FUN_01780344(uVar26,0);
      uVar8 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
      uVar19 = FUN_01789ac0(uVar26,uVar8,0);
      if ((uVar19 & 1) == 0) {
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar26 = FUN_01780344(uVar26,0);
        uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        uVar19 = FUN_01789ac0(uVar26,uVar8,0);
        if ((uVar19 & 1) == 0) {
          lVar7 = *plVar23;
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c();
          }
          uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar26 = FUN_01780344(uVar26,0);
          uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
          uVar19 = FUN_01789ac0(uVar26,uVar8,0);
          if ((uVar19 & 1) == 0) {
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar26 = FUN_01780344(uVar26,0);
            uVar8 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                 ,0);
            uVar19 = FUN_01789ac0(uVar26,uVar8,0);
            if ((uVar19 & 1) != 0) {
              memcpy(pvVar24,param_2,__n);
              pvVar21 = local_a8;
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar11 + 0x40) !=
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                           + 0x40)) goto LAB_01224e84;
              puVar15 = (undefined4 *)thunk_FUN_00d624a0();
              *(undefined4 *)puVar22 = *puVar15;
              memcpy(pvVar25,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar11 + 0x40) !=
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                           + 0x40)) goto LAB_01224e84;
              puVar15 = (undefined4 *)thunk_FUN_00d624a0();
              *(undefined4 *)((long)puVar22 + 4) = *puVar15;
              memcpy(pvVar28,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              lVar7 = *plVar11;
              plVar11 = (long *)
                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
              goto LAB_0122420c;
            }
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar26 = FUN_01780344(uVar26,0);
            uVar8 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                 ,0);
            uVar19 = FUN_01789ac0(uVar26,uVar8,0);
            if ((uVar19 & 1) != 0) {
              memcpy(pvVar24,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
              goto LAB_01224e84;
              puVar16 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar22 = *puVar16;
              memcpy(pvVar25,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
              if (plVar23 == (long *)0x0) goto LAB_01224e80;
              lVar10 = *plVar23;
              lVar7 = *(long *)puVar2;
LAB_012247e8:
              lVar10 = *(long *)(lVar10 + 0x40);
LAB_012247ec:
              if (lVar10 == *(long *)(lVar7 + 0x40)) {
                puVar16 = (undefined8 *)thunk_FUN_00d624a0();
                puVar22[1] = *puVar16;
                goto LAB_01224804;
              }
              goto LAB_01224e84;
            }
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar26 = FUN_01780344(uVar26,0);
            uVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
            uVar19 = FUN_01789ac0(uVar26,uVar8,0);
            if ((uVar19 & 1) != 0) {
              memcpy(pvVar24,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar11 + 0x40) !=
                  *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40)
                 ) goto LAB_01224e84;
              puVar16 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar22 = *puVar16;
              memcpy(pvVar25,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
              if (plVar23 == (long *)0x0) goto LAB_01224e80;
              lVar10 = *plVar23;
              lVar7 = *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
              goto LAB_012247e8;
            }
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar26 = FUN_01780344(uVar26,0);
            uVar8 = FUN_01780344(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                 ,0);
            uVar19 = FUN_01789ac0(uVar26,uVar8,0);
            if ((uVar19 & 1) == 0) {
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar26 = FUN_01780344(uVar26,0);
              uVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              uVar19 = FUN_01789ac0(uVar26,uVar8,0);
              if ((uVar19 & 1) == 0) goto LAB_01224804;
              memcpy(pvVar24,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
              if (plVar11 == (long *)0x0) goto LAB_01224e80;
              if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
              goto LAB_01224e84;
              puVar16 = (undefined8 *)thunk_FUN_00d624a0();
              *puVar22 = *puVar16;
              memcpy(pvVar25,param_2,__n);
              lVar7 = *plVar23;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
              if (plVar23 == (long *)0x0) goto LAB_01224e80;
              lVar10 = *(long *)(*plVar23 + 0x40);
              lVar7 = *(long *)PTR_DAT_033f2f78;
              goto LAB_012247ec;
            }
            memcpy(pvVar24,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            pvVar21 = local_a8;
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar11 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)puVar22 = *puVar15;
            memcpy(pvVar25,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar11 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar22 + 4) = *puVar15;
            memcpy(pvVar28,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar11 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01224e84;
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)(puVar22 + 1) = *puVar15;
            memcpy(pvVar21,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar21);
            if (plVar23 == (long *)0x0) goto LAB_01224e80;
            lVar10 = *plVar23;
            lVar7 = *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo;
          }
          else {
            memcpy(pvVar24,param_2,__n);
            pvVar21 = local_a8;
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar11 + 0x40) !=
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
            goto LAB_01224e84;
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)puVar22 = *puVar15;
            memcpy(pvVar25,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            if (*(long *)(*plVar11 + 0x40) !=
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
            goto LAB_01224e84;
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar22 + 4) = *puVar15;
            memcpy(pvVar28,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
            if (plVar11 == (long *)0x0) goto LAB_01224e80;
            lVar7 = *plVar11;
            plVar11 = (long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
LAB_0122420c:
            if (*(long *)(lVar7 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)(puVar22 + 1) = *puVar15;
            memcpy(pvVar21,param_2,__n);
            lVar7 = *plVar23;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar21);
            if (plVar23 == (long *)0x0) goto LAB_01224e80;
            lVar10 = *plVar23;
            lVar7 = *plVar11;
          }
          if (*(long *)(lVar10 + 0x40) == *(long *)(lVar7 + 0x40)) {
            puVar15 = (undefined4 *)thunk_FUN_00d624a0();
            *(undefined4 *)((long)puVar22 + 0xc) = *puVar15;
            goto LAB_01224804;
          }
          goto LAB_01224e84;
        }
        memcpy(pvVar24,param_2,__n);
        pvVar21 = local_a8;
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
        pvVar24 = local_b0;
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)puVar22 = *puVar14;
        memcpy(pvVar25,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
        puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 2) = *puVar14;
        memcpy(pvVar28,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
        pvVar25 = local_b8;
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 4) = *puVar14;
        memcpy(pvVar21,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar21);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 6) = *puVar14;
        memcpy(local_88,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_88);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)(puVar22 + 1) = *puVar14;
        memcpy(pvVar25,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 10) = *puVar14;
        memcpy(pvVar27,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar27);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 0xc) = *puVar14;
        memcpy(pvVar24,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
        if (plVar23 == (long *)0x0) goto LAB_01224e80;
        lVar10 = *plVar23;
        lVar7 = *(long *)puVar2;
      }
      else {
        memcpy(pvVar24,param_2,__n);
        pvVar21 = local_a8;
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
        pvVar24 = local_b0;
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)puVar22 = *puVar14;
        memcpy(pvVar25,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 2) = *puVar14;
        memcpy(pvVar28,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
        pvVar25 = local_b8;
        puVar2 = 
        Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
        ;
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 4) = *puVar14;
        memcpy(pvVar21,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar21);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 6) = *puVar14;
        memcpy(local_88,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_88);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)(puVar22 + 1) = *puVar14;
        memcpy(pvVar25,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 10) = *puVar14;
        memcpy(pvVar27,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar27);
        if (plVar11 == (long *)0x0) goto LAB_01224e80;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01224e84;
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 0xc) = *puVar14;
        memcpy(pvVar24,param_2,__n);
        lVar7 = *plVar23;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
        if (plVar23 == (long *)0x0) goto LAB_01224e80;
        lVar10 = *plVar23;
        lVar7 = *(long *)puVar2;
      }
      if (*(long *)(lVar10 + 0x40) == *(long *)(lVar7 + 0x40)) {
        puVar14 = (undefined2 *)thunk_FUN_00d624a0();
        *(undefined2 *)((long)puVar22 + 0xe) = *puVar14;
        goto LAB_01224804;
      }
      goto LAB_01224e84;
    }
    memcpy(pvVar24,param_2,__n);
    puVar22 = local_80;
    pvVar5 = local_a8;
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
    pvVar24 = local_b0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)puVar22 = *puVar12;
    memcpy(pvVar25,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
    pvVar25 = local_e0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 1) = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
    pvVar28 = local_b8;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 2) = *puVar12;
    memcpy(pvVar5,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar5);
    pvVar5 = local_c8;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 3) = *puVar12;
    memcpy(local_88,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_88);
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 4) = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
    pvVar28 = local_d8;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 5) = *puVar12;
    memcpy(pvVar27,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar27);
    pvVar27 = local_d0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 6) = *puVar12;
    memcpy(pvVar24,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
    pvVar24 = local_c0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 7) = *puVar12;
    memcpy(local_98,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_98);
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)(puVar22 + 1) = *puVar12;
    memcpy(local_90,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_90);
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 9) = *puVar12;
    memcpy(pvVar25,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
    plVar11 = (long *)StringLiteral_7239;
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 10) = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xb) = *puVar12;
    memcpy(pvVar21,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar21);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xc) = *puVar12;
    memcpy(pvVar27,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar27);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xd) = *puVar12;
    memcpy(pvVar5,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar5);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    uVar17 = *puVar12;
  }
  else {
    memcpy(pvVar24,param_2,__n);
    pvVar25 = local_a8;
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar22 = local_80;
    pvVar5 = local_a0;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
    pvVar24 = local_b0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)puVar22 = *puVar12;
    memcpy(pvVar5,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar5);
    pvVar5 = local_e0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 1) = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
    pvVar28 = local_b8;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 2) = *puVar12;
    memcpy(pvVar25,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
    pvVar25 = local_c8;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 3) = *puVar12;
    memcpy(local_88,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_88);
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 4) = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
    pvVar28 = local_d8;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 5) = *puVar12;
    memcpy(pvVar27,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar27);
    pvVar27 = local_d0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 6) = *puVar12;
    memcpy(pvVar24,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
    pvVar24 = local_c0;
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 7) = *puVar12;
    memcpy(local_98,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_98);
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)(puVar22 + 1) = *puVar12;
    memcpy(local_90,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar7,local_90);
    if (plVar11 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 9) = *puVar12;
    memcpy(pvVar5,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar5);
    plVar11 = (long *)UnityEngine_Texture2D___TypeInfo;
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 10) = *puVar12;
    memcpy(pvVar28,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar28);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xb) = *puVar12;
    memcpy(pvVar21,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar21);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xc) = *puVar12;
    memcpy(pvVar27,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar27);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xd) = *puVar12;
    memcpy(pvVar25,param_2,__n);
    lVar7 = *plVar23;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar13 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar25);
    if (plVar13 == (long *)0x0) goto LAB_01224e80;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*plVar11 + 0x40)) goto LAB_01224e84;
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    uVar17 = *puVar12;
  }
  *(undefined1 *)((long)puVar22 + 0xe) = uVar17;
  memcpy(pvVar24,param_2,__n);
  lVar7 = *plVar23;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar23 = (long *)thunk_FUN_00d61fa0(lVar7,pvVar24);
  if (plVar23 == (long *)0x0) {
LAB_01224e80:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar23 + 0x40) == *(long *)(*plVar11 + 0x40)) {
    puVar12 = (undefined1 *)thunk_FUN_00d624a0();
    *(undefined1 *)((long)puVar22 + 0xf) = *puVar12;
LAB_01224804:
    if (*(long *)(local_78 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_01224e84:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


