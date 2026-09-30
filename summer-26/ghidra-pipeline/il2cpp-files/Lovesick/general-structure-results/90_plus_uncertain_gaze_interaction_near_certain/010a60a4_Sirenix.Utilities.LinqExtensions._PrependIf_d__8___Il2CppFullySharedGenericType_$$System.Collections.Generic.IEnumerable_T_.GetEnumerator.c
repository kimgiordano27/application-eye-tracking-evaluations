/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependIf>d__8<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 010a60a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void Sirenix_Utilities_LinqExtensions_<PrependIf>d__8<__Il2CppFullySharedGenericType>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  void *__src;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x19;
  void *pvVar16;
  undefined8 uVar17;
  long unaff_x20;
  ulong uVar18;
  ulong __n;
  void *__dest;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  void *pvVar19;
  long unaff_x29;
  undefined4 uVar20;
  
  thunk_FUN_00d48444();
  lVar14 = *unaff_x23;
  if (lVar14 == 0) {
    FUN_00d59478();
    lVar14 = *(long *)(unaff_x19 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    lVar14 = FUN_00d5941c();
  }
  if (*(int *)(lVar14 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar13 = iVar6 - 0x10;
  }
  else {
    uVar13 = 8;
  }
  __n = (ulong)uVar13;
  uVar18 = __n + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x98) = (long)&stack0x00000000 - uVar18;
  pvVar7 = (void *)(((long)&stack0x00000000 - uVar18) - uVar18);
  *(void **)(unaff_x29 + -0xa8) = pvVar7;
  memset(pvVar7,0,__n);
  pvVar7 = (void *)((long)pvVar7 - uVar18);
  memset(pvVar7,0,__n);
  pvVar16 = (void *)((long)pvVar7 - uVar18);
  memset(pvVar16,0,__n);
  pvVar19 = (void *)((long)pvVar16 - uVar18);
  memset(pvVar19,0,__n);
  if (unaff_x20 == 0) {
    unaff_x20 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
  }
  uVar8 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
  puVar12 = *(undefined8 **)*unaff_x23;
  uVar15 = *puVar12;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
  *(undefined1 *)(unaff_x29 + -100) = 0;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
  *(long *)(unaff_x29 + -0x80) = unaff_x20;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -100;
  (*(code *)puVar12[2])(uVar15,puVar12,0,unaff_x29 + -0x90,unaff_x29 + -0x70);
  uVar15 = *(undefined8 *)(unaff_x29 + -0x70);
  *(long *)(unaff_x29 + -0xa0) = unaff_x20;
  uVar8 = thunk_FUN_0264ce14(unaff_x20,0);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar14 = *unaff_x23;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar8;
  uVar8 = *(undefined8 *)(lVar14 + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar8 = FUN_01780344(uVar8,0);
  puVar2 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_0264bd00(uVar8,0);
  uVar8 = *(undefined8 *)(*unaff_x23 + 8);
  if ((uVar18 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = FUN_01780344(uVar8,0);
    lVar9 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar14 == lVar9) {
      uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
      uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
      pvVar7 = *(void **)(unaff_x29 + -0xa8);
      uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
      __dest = *(void **)(unaff_x29 + -0x98);
      uVar15 = FUN_02646260(uVar10,uVar15,uVar17,0);
      lVar14 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
      }
      pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
    }
    else {
      uVar8 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = FUN_01780344(uVar8,0);
      lVar9 = FUN_01780344(*(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
      if (lVar14 == lVar9) {
        uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
        uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
        __dest = *(void **)(unaff_x29 + -0x98);
        uVar15 = FUN_02646154(uVar10,uVar15,uVar17,0);
        uVar18 = FUN_017b4f64(uVar15,**(undefined8 **)
                                       (*(long *)
                                         Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                       + 0xb8),0);
        pvVar19 = pvVar16;
        if ((uVar18 & 1) == 0) {
          uVar15 = FUN_0264bb78(uVar15,0);
          pvVar7 = *(void **)(unaff_x29 + -0xa8);
          lVar14 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar14 = FUN_00d5941c(lVar14);
          }
          __src = (void *)FUN_00da5060(uVar15,lVar14,__dest);
          memcpy(pvVar16,__src,__n);
        }
        else {
          memset(pvVar7,0,__n);
          memcpy(__dest,pvVar7,__n);
          memcpy(pvVar16,__dest,__n);
          pvVar7 = *(void **)(unaff_x29 + -0xa8);
        }
      }
      else {
        uVar8 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar14 = FUN_01780344(uVar8,0);
        lVar9 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
        if (lVar14 == lVar9) {
          uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
          uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
          __dest = *(void **)(unaff_x29 + -0x98);
          uVar15 = FUN_02646154(uVar10,uVar15,uVar17,0);
          uVar18 = FUN_017b4f64(uVar15,**(undefined8 **)
                                         (*(long *)
                                           Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                         + 0xb8),0);
          if ((uVar18 & 1) == 0) {
            uVar15 = FUN_0264a664(uVar15,0);
            pvVar7 = *(void **)(unaff_x29 + -0xa8);
            lVar14 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c(lVar14);
            }
            pvVar16 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
            memcpy(pvVar19,pvVar16,__n);
          }
          else {
            memset(pvVar7,0,__n);
            memcpy(__dest,pvVar7,__n);
            memcpy(pvVar19,__dest,__n);
            pvVar7 = *(void **)(unaff_x29 + -0xa8);
          }
        }
        else {
          uVar8 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          pvVar7 = *(void **)(unaff_x29 + -0xa8);
          uVar17 = FUN_01780344(uVar8,0);
          uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar10 = FUN_01780344(*(undefined8 *)(*unaff_x23 + 8),0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar18 = FUN_0264bd14(uVar17,uVar10,0);
          __dest = *(void **)(unaff_x29 + -0x98);
          if ((uVar18 & 1) == 0) {
            uVar8 = *(undefined8 *)(*unaff_x23 + 8);
            lVar14 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar11 = (long *)FUN_01780344(uVar8,0);
            uVar8 = thunk_FUN_00d48444(PTR_DAT_033f4040);
            if (plVar11 == (long *)0x0) {
              uVar15 = 0;
            }
            else {
              uVar8 = thunk_FUN_00d48444(PTR_DAT_033f4040);
              uVar15 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            }
            uVar17 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                       );
            uVar8 = FUN_01600424(uVar8,uVar15,uVar17,0);
            thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
            lVar14 = thunk_FUN_00d62348();
            if (lVar14 != 0) {
              FUN_017a9608(lVar14,uVar8,0);
              uVar8 = thunk_FUN_00d48444(StringLiteral_11136);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(lVar14,uVar8);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
          uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar15 = FUN_02646154(uVar10,uVar15,uVar17,0);
          puVar12 = *(undefined8 **)(*unaff_x23 + 0x18);
          uVar10 = *puVar12;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar15;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(void **)(unaff_x29 + -0x88) = __dest;
          (*(code *)puVar12[2])(uVar10,puVar12,0,unaff_x29 + -0x90,__dest);
          pvVar19 = __dest;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    __dest = *(void **)(unaff_x29 + -0x98);
    lVar14 = FUN_01780344(uVar8,0);
    lVar9 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar14 == lVar9) {
      uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
      uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
      pvVar7 = *(void **)(unaff_x29 + -0xa8);
      uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar20 = FUN_02646a84(uVar10,uVar15,uVar17,0);
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      *(undefined4 *)(unaff_x29 + -0x90) = uVar20;
      uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
      lVar14 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
      }
      pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
    }
    else {
      uVar8 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = FUN_01780344(uVar8,0);
      lVar9 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      if (lVar14 == lVar9) {
        uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
        uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
        pvVar7 = *(void **)(unaff_x29 + -0xa8);
        uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
        bVar3 = FUN_02646978(uVar10,uVar15,uVar17,0);
        puVar1 = StringLiteral_9958;
        *(byte *)(unaff_x29 + -0x90) = bVar3 & 1;
        uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
        lVar14 = *(long *)(*unaff_x23 + 0x10);
        if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
          lVar14 = FUN_00d5941c(lVar14);
        }
        pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
      }
      else {
        uVar8 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar14 = FUN_01780344(uVar8,0);
        lVar9 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar14 == lVar9) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)PTR_DAT_033f4380,0);
          pvVar7 = *(void **)(unaff_x29 + -0xa8);
          uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
          uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar4 = FUN_0264686c(uVar10,uVar15,uVar17,0);
          puVar1 = UnityEngine_Texture2D___TypeInfo;
          *(undefined1 *)(unaff_x29 + -0x90) = uVar4;
          uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
          lVar14 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar14 = FUN_00d5941c(lVar14);
          }
          pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
        }
        else {
          uVar8 = *(undefined8 *)(*unaff_x23 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = FUN_01780344(uVar8,0);
          lVar9 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
          if (lVar14 == lVar9) {
            uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
            uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
            pvVar7 = *(void **)(unaff_x29 + -0xa8);
            uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
            uVar4 = FUN_0264686c(uVar10,uVar15,uVar17,0);
            puVar1 = StringLiteral_7239;
            *(undefined1 *)(unaff_x29 + -0x90) = uVar4;
            uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
            lVar14 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c(lVar14);
            }
            pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
          }
          else {
            uVar8 = *(undefined8 *)(*unaff_x23 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar14 = FUN_01780344(uVar8,0);
            lVar9 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
            if (lVar14 == lVar9) {
              uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
              uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
              pvVar7 = *(void **)(unaff_x29 + -0xa8);
              uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
              uVar5 = FUN_02646760(uVar10,uVar15,uVar17,0);
              puVar1 = Method_System_Data_Common_UInt32Storage_Aggregate__;
              *(undefined2 *)(unaff_x29 + -0x90) = uVar5;
              uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
              lVar14 = *(long *)(*unaff_x23 + 0x10);
              if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                lVar14 = FUN_00d5941c(lVar14);
              }
              pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
            }
            else {
              uVar8 = *(undefined8 *)(*unaff_x23 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar14 = FUN_01780344(uVar8,0);
              lVar9 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              if (lVar14 == lVar9) {
                uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
                uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
                pvVar7 = *(void **)(unaff_x29 + -0xa8);
                uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar15 = FUN_02646654(uVar10,uVar15,uVar17,0);
                puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
                *(undefined8 *)(unaff_x29 + -0x90) = uVar15;
                uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                lVar14 = *(long *)(*unaff_x23 + 0x10);
                if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                  lVar14 = FUN_00d5941c(lVar14);
                }
                pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
              }
              else {
                uVar8 = *(undefined8 *)(*unaff_x23 + 8);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar14 = FUN_01780344(uVar8,0);
                lVar9 = FUN_01780344(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                     ,0);
                if (lVar14 == lVar9) {
                  uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
                  uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
                  pvVar7 = *(void **)(unaff_x29 + -0xa8);
                  uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
                  uVar20 = FUN_0264653c(uVar10,uVar15,uVar17,0);
                  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  *(undefined4 *)(unaff_x29 + -0x90) = uVar20;
                  uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                  lVar14 = *(long *)(*unaff_x23 + 0x10);
                  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                    lVar14 = FUN_00d5941c(lVar14);
                  }
                  pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
                }
                else {
                  uVar8 = *(undefined8 *)(*unaff_x23 + 8);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar14 = FUN_01780344(uVar8,0);
                  lVar9 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0
                                      );
                  if (lVar14 == lVar9) {
                    uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
                    uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
                    pvVar7 = *(void **)(unaff_x29 + -0xa8);
                    uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
                    uVar15 = FUN_02646424(uVar10,uVar15,uVar17,0);
                    puVar1 = PTR_DAT_033f2f78;
                    *(undefined8 *)(unaff_x29 + -0x90) = uVar15;
                    uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar14 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                      lVar14 = FUN_00d5941c(lVar14);
                    }
                    pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
                  }
                  else {
                    uVar17 = *(undefined8 *)(*unaff_x23 + 8);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
                    lVar14 = FUN_01780344(uVar17,0);
                    lVar9 = FUN_01780344(*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                    if (lVar14 != lVar9) {
                      memset(pvVar7,0,__n);
                      memcpy(__dest,pvVar7,__n);
                      pvVar7 = *(void **)(unaff_x29 + -0xa8);
                      memcpy(pvVar7,__dest,__n);
                      uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
                      goto LAB_010a6cd0;
                    }
                    uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x10),0);
                    uVar17 = *(undefined8 *)(unaff_x29 + -0xb0);
                    pvVar7 = *(void **)(unaff_x29 + -0xa8);
                    uVar5 = FUN_02646318(uVar10,uVar15,uVar17,0);
                    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                    *(undefined2 *)(unaff_x29 + -0x90) = uVar5;
                    uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar14 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                      lVar14 = FUN_00d5941c(lVar14);
                    }
                    pvVar19 = (void *)FUN_00da5060(uVar15,lVar14,__dest);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(pvVar7,pvVar19,__n);
LAB_010a6cd0:
  thunk_FUN_0264e480(uVar8,uVar17,0);
  memcpy(__dest,pvVar7,__n);
  memcpy(*(void **)(unaff_x29 + -0xc0),__dest,__n);
  if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


