/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependIf>d__9<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 010a7230
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void Sirenix_Utilities_LinqExtensions_<PrependIf>d__9<__Il2CppFullySharedGenericType>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  void *__src;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  long unaff_x20;
  size_t unaff_x21;
  long unaff_x22;
  void *__dest;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  void *pvVar16;
  void *pvVar17;
  long unaff_x29;
  undefined4 uVar18;
  
  pvVar16 = (void *)(param_1 - unaff_x20);
  memset(pvVar16,0,unaff_x21);
  pvVar14 = (void *)((long)pvVar16 - unaff_x20);
  memset(pvVar14,0,unaff_x21);
  pvVar17 = (void *)((long)pvVar14 - unaff_x20);
  memset(pvVar17,0,unaff_x21);
  if (unaff_x22 == 0) {
    unaff_x22 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
  }
  uVar6 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
  puVar11 = *(undefined8 **)*unaff_x23;
  uVar12 = *puVar11;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar6;
  *(undefined1 *)(unaff_x29 + -100) = 1;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
  *(long *)(unaff_x29 + -0x80) = unaff_x22;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -100;
  (*(code *)puVar11[2])(uVar12,puVar11,0,unaff_x29 + -0x90,unaff_x29 + -0x70);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
  *(long *)(unaff_x29 + -0xa0) = unaff_x22;
  uVar6 = thunk_FUN_0264ce14(unaff_x22,0);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar13 = *unaff_x23;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
  uVar6 = *(undefined8 *)(lVar13 + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar6 = FUN_01780344(uVar6,0);
  puVar2 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0264bd00(uVar6,0);
  uVar6 = *(undefined8 *)(*unaff_x23 + 8);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = FUN_01780344(uVar6,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar13 == lVar8) {
      uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
      uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
      pvVar16 = *(void **)(unaff_x29 + -0xa8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
      __dest = *(void **)(unaff_x29 + -0x98);
      uVar12 = FUN_02644324(uVar9,uVar12,uVar15,0);
      lVar13 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c(lVar13);
      }
      pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
    }
    else {
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_01780344(uVar6,0);
      lVar8 = FUN_01780344(*(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
      if (lVar13 == lVar8) {
        uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
        uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
        __dest = *(void **)(unaff_x29 + -0x98);
        uVar12 = FUN_02644218(uVar9,uVar12,uVar15,0);
        uVar7 = FUN_017b4f64(uVar12,**(undefined8 **)
                                      (*(long *)
                                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                      + 0xb8),0);
        pvVar17 = pvVar14;
        if ((uVar7 & 1) == 0) {
          uVar12 = FUN_0264bb78(uVar12,0);
          pvVar16 = *(void **)(unaff_x29 + -0xa8);
          lVar13 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
            lVar13 = FUN_00d5941c(lVar13);
          }
          __src = (void *)FUN_00da5060(uVar12,lVar13,__dest);
          memcpy(pvVar14,__src,unaff_x21);
        }
        else {
          memset(pvVar16,0,unaff_x21);
          memcpy(__dest,pvVar16,unaff_x21);
          memcpy(pvVar14,__dest,unaff_x21);
          pvVar16 = *(void **)(unaff_x29 + -0xa8);
        }
      }
      else {
        uVar6 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = FUN_01780344(uVar6,0);
        lVar8 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
        if (lVar13 == lVar8) {
          uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          __dest = *(void **)(unaff_x29 + -0x98);
          uVar12 = FUN_02644218(uVar9,uVar12,uVar15,0);
          uVar7 = FUN_017b4f64(uVar12,**(undefined8 **)
                                        (*(long *)
                                          Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                        + 0xb8),0);
          if ((uVar7 & 1) == 0) {
            uVar12 = FUN_0264a664(uVar12,0);
            pvVar16 = *(void **)(unaff_x29 + -0xa8);
            lVar13 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c(lVar13);
            }
            pvVar14 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
            memcpy(pvVar17,pvVar14,unaff_x21);
          }
          else {
            memset(pvVar16,0,unaff_x21);
            memcpy(__dest,pvVar16,unaff_x21);
            memcpy(pvVar17,__dest,unaff_x21);
            pvVar16 = *(void **)(unaff_x29 + -0xa8);
          }
        }
        else {
          uVar6 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          pvVar16 = *(void **)(unaff_x29 + -0xa8);
          uVar15 = FUN_01780344(uVar6,0);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar9 = FUN_01780344(*(undefined8 *)(*unaff_x23 + 8),0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_0264bd14(uVar15,uVar9,0);
          __dest = *(void **)(unaff_x29 + -0x98);
          if ((uVar7 & 1) == 0) {
            uVar6 = *(undefined8 *)(*unaff_x23 + 8);
            lVar13 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar10 = (long *)FUN_01780344(uVar6,0);
            uVar6 = thunk_FUN_00d48444(PTR_DAT_033f4040);
            if (plVar10 == (long *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar6 = thunk_FUN_00d48444(PTR_DAT_033f4040);
              uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            }
            uVar15 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                       );
            uVar6 = FUN_01600424(uVar6,uVar12,uVar15,0);
            thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
            lVar13 = thunk_FUN_00d62348();
            if (lVar13 != 0) {
              FUN_017a9608(lVar13,uVar6,0);
              uVar6 = thunk_FUN_00d48444(StringLiteral_2908);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(lVar13,uVar6);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar12 = FUN_02644218(uVar9,uVar12,uVar15,0);
          puVar11 = *(undefined8 **)(*unaff_x23 + 0x18);
          uVar9 = *puVar11;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar12;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(void **)(unaff_x29 + -0x88) = __dest;
          (*(code *)puVar11[2])(uVar9,puVar11,0,unaff_x29 + -0x90,__dest);
          pvVar17 = __dest;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    __dest = *(void **)(unaff_x29 + -0x98);
    lVar13 = FUN_01780344(uVar6,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar13 == lVar8) {
      uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
      uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
      pvVar16 = *(void **)(unaff_x29 + -0xa8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar18 = FUN_02644b48(uVar9,uVar12,uVar15,0);
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      *(undefined4 *)(unaff_x29 + -0x90) = uVar18;
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
      lVar13 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c(lVar13);
      }
      pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
    }
    else {
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_01780344(uVar6,0);
      lVar8 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      if (lVar13 == lVar8) {
        uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
        uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
        pvVar16 = *(void **)(unaff_x29 + -0xa8);
        uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
        bVar3 = FUN_02644a3c(uVar9,uVar12,uVar15,0);
        puVar1 = StringLiteral_9958;
        *(byte *)(unaff_x29 + -0x90) = bVar3 & 1;
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
        lVar13 = *(long *)(*unaff_x23 + 0x10);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_00d5941c(lVar13);
        }
        pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
      }
      else {
        uVar6 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = FUN_01780344(uVar6,0);
        lVar8 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar13 == lVar8) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)PTR_DAT_033f4380,0);
          pvVar16 = *(void **)(unaff_x29 + -0xa8);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar4 = FUN_02644930(uVar9,uVar12,uVar15,0);
          puVar1 = UnityEngine_Texture2D___TypeInfo;
          *(undefined1 *)(unaff_x29 + -0x90) = uVar4;
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
          lVar13 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
            lVar13 = FUN_00d5941c(lVar13);
          }
          pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
        }
        else {
          uVar6 = *(undefined8 *)(*unaff_x23 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar13 = FUN_01780344(uVar6,0);
          lVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
          if (lVar13 == lVar8) {
            uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
            uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
            pvVar16 = *(void **)(unaff_x29 + -0xa8);
            uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
            uVar4 = FUN_02644930(uVar9,uVar12,uVar15,0);
            puVar1 = StringLiteral_7239;
            *(undefined1 *)(unaff_x29 + -0x90) = uVar4;
            uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
            lVar13 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c(lVar13);
            }
            pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
          }
          else {
            uVar6 = *(undefined8 *)(*unaff_x23 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = FUN_01780344(uVar6,0);
            lVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
            if (lVar13 == lVar8) {
              uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
              uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
              pvVar16 = *(void **)(unaff_x29 + -0xa8);
              uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
              uVar5 = FUN_02644824(uVar9,uVar12,uVar15,0);
              puVar1 = Method_System_Data_Common_UInt32Storage_Aggregate__;
              *(undefined2 *)(unaff_x29 + -0x90) = uVar5;
              uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
              lVar13 = *(long *)(*unaff_x23 + 0x10);
              if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                lVar13 = FUN_00d5941c(lVar13);
              }
              pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
            }
            else {
              uVar6 = *(undefined8 *)(*unaff_x23 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar13 = FUN_01780344(uVar6,0);
              lVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              if (lVar13 == lVar8) {
                uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                pvVar16 = *(void **)(unaff_x29 + -0xa8);
                uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar12 = FUN_02644718(uVar9,uVar12,uVar15,0);
                puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
                *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
                uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                lVar13 = *(long *)(*unaff_x23 + 0x10);
                if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                  lVar13 = FUN_00d5941c(lVar13);
                }
                pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
              }
              else {
                uVar6 = *(undefined8 *)(*unaff_x23 + 8);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar13 = FUN_01780344(uVar6,0);
                lVar8 = FUN_01780344(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                     ,0);
                if (lVar13 == lVar8) {
                  uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                  uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                  pvVar16 = *(void **)(unaff_x29 + -0xa8);
                  uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                  uVar18 = FUN_02644600(uVar9,uVar12,uVar15,0);
                  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  *(undefined4 *)(unaff_x29 + -0x90) = uVar18;
                  uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                  lVar13 = *(long *)(*unaff_x23 + 0x10);
                  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                    lVar13 = FUN_00d5941c(lVar13);
                  }
                  pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
                }
                else {
                  uVar6 = *(undefined8 *)(*unaff_x23 + 8);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar13 = FUN_01780344(uVar6,0);
                  lVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0
                                      );
                  if (lVar13 == lVar8) {
                    uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                    uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                    pvVar16 = *(void **)(unaff_x29 + -0xa8);
                    uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                    uVar12 = FUN_026444e8(uVar9,uVar12,uVar15,0);
                    puVar1 = PTR_DAT_033f2f78;
                    *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
                    uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar13 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                      lVar13 = FUN_00d5941c(lVar13);
                    }
                    pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
                  }
                  else {
                    uVar15 = *(undefined8 *)(*unaff_x23 + 8);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                    lVar13 = FUN_01780344(uVar15,0);
                    lVar8 = FUN_01780344(*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                    if (lVar13 != lVar8) {
                      memset(pvVar16,0,unaff_x21);
                      memcpy(__dest,pvVar16,unaff_x21);
                      pvVar16 = *(void **)(unaff_x29 + -0xa8);
                      memcpy(pvVar16,__dest,unaff_x21);
                      uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                      goto LAB_010a7ddc;
                    }
                    uVar9 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                    uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                    pvVar16 = *(void **)(unaff_x29 + -0xa8);
                    uVar5 = FUN_026443dc(uVar9,uVar12,uVar15,0);
                    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                    *(undefined2 *)(unaff_x29 + -0x90) = uVar5;
                    uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar13 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                      lVar13 = FUN_00d5941c(lVar13);
                    }
                    pvVar17 = (void *)FUN_00da5060(uVar12,lVar13,__dest);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(pvVar16,pvVar17,unaff_x21);
LAB_010a7ddc:
  thunk_FUN_0264e480(uVar6,uVar15,0);
  memcpy(__dest,pvVar16,unaff_x21);
  memcpy(*(void **)(unaff_x29 + -0xc0),__dest,unaff_x21);
  if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


