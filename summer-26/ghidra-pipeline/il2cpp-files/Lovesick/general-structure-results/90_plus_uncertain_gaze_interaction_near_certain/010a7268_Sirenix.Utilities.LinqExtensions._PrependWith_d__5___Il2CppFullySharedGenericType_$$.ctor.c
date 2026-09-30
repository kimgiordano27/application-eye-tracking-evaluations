/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependWith>d__5<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 010a7268
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


void Sirenix_Utilities_LinqExtensions_<PrependWith>d__5<__Il2CppFullySharedGenericType>___ctor
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
  void *pvVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  void *unaff_x19;
  undefined8 uVar15;
  long unaff_x20;
  size_t unaff_x21;
  long unaff_x22;
  void *__dest;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  void *unaff_x27;
  void *__dest_00;
  void *pvVar16;
  long unaff_x29;
  undefined4 uVar17;
  
  pvVar16 = (void *)(param_1 - unaff_x20);
  memset(pvVar16,0,unaff_x21);
  if (unaff_x22 == 0) {
    unaff_x22 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
  }
  uVar6 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
  puVar12 = *(undefined8 **)*unaff_x23;
  uVar13 = *puVar12;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar6;
  *(undefined1 *)(unaff_x29 + -100) = 1;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
  *(long *)(unaff_x29 + -0x80) = unaff_x22;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -100;
  (*(code *)puVar12[2])(uVar13,puVar12,0,unaff_x29 + -0x90,unaff_x29 + -0x70);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x70);
  *(long *)(unaff_x29 + -0xa0) = unaff_x22;
  uVar6 = thunk_FUN_0264ce14(unaff_x22,0);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar14 = *unaff_x23;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
  uVar6 = *(undefined8 *)(lVar14 + 8);
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
    lVar14 = FUN_01780344(uVar6,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar14 == lVar8) {
      uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
      uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
      __dest_00 = *(void **)(unaff_x29 + -0xa8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
      __dest = *(void **)(unaff_x29 + -0x98);
      uVar13 = FUN_02644324(uVar10,uVar13,uVar15,0);
      lVar14 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
      }
      pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
    }
    else {
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = FUN_01780344(uVar6,0);
      lVar8 = FUN_01780344(*(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
      if (lVar14 == lVar8) {
        uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
        uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
        __dest = *(void **)(unaff_x29 + -0x98);
        uVar13 = FUN_02644218(uVar10,uVar13,uVar15,0);
        uVar7 = FUN_017b4f64(uVar13,**(undefined8 **)
                                      (*(long *)
                                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                      + 0xb8),0);
        pvVar16 = unaff_x19;
        if ((uVar7 & 1) == 0) {
          uVar13 = FUN_0264bb78(uVar13,0);
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
          lVar14 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar14 = FUN_00d5941c(lVar14);
          }
          pvVar9 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
          memcpy(unaff_x19,pvVar9,unaff_x21);
        }
        else {
          memset(unaff_x27,0,unaff_x21);
          memcpy(__dest,unaff_x27,unaff_x21);
          memcpy(unaff_x19,__dest,unaff_x21);
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
        }
      }
      else {
        uVar6 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar14 = FUN_01780344(uVar6,0);
        lVar8 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
        if (lVar14 == lVar8) {
          uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          __dest = *(void **)(unaff_x29 + -0x98);
          uVar13 = FUN_02644218(uVar10,uVar13,uVar15,0);
          uVar7 = FUN_017b4f64(uVar13,**(undefined8 **)
                                        (*(long *)
                                          Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                        + 0xb8),0);
          if ((uVar7 & 1) == 0) {
            uVar13 = FUN_0264a664(uVar13,0);
            __dest_00 = *(void **)(unaff_x29 + -0xa8);
            lVar14 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c(lVar14);
            }
            pvVar9 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
            memcpy(pvVar16,pvVar9,unaff_x21);
          }
          else {
            memset(unaff_x27,0,unaff_x21);
            memcpy(__dest,unaff_x27,unaff_x21);
            memcpy(pvVar16,__dest,unaff_x21);
            __dest_00 = *(void **)(unaff_x29 + -0xa8);
          }
        }
        else {
          uVar6 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
          uVar15 = FUN_01780344(uVar6,0);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar10 = FUN_01780344(*(undefined8 *)(*unaff_x23 + 8),0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_0264bd14(uVar15,uVar10,0);
          __dest = *(void **)(unaff_x29 + -0x98);
          if ((uVar7 & 1) == 0) {
            uVar6 = *(undefined8 *)(*unaff_x23 + 8);
            lVar14 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar11 = (long *)FUN_01780344(uVar6,0);
            uVar6 = thunk_FUN_00d48444(PTR_DAT_033f4040);
            if (plVar11 == (long *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar6 = thunk_FUN_00d48444(PTR_DAT_033f4040);
              uVar13 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            }
            uVar15 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                       );
            uVar6 = FUN_01600424(uVar6,uVar13,uVar15,0);
            thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
            lVar14 = thunk_FUN_00d62348();
            if (lVar14 != 0) {
              FUN_017a9608(lVar14,uVar6,0);
              uVar6 = thunk_FUN_00d48444(StringLiteral_2908);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(lVar14,uVar6);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar13 = FUN_02644218(uVar10,uVar13,uVar15,0);
          puVar12 = *(undefined8 **)(*unaff_x23 + 0x18);
          uVar10 = *puVar12;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar13;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(void **)(unaff_x29 + -0x88) = __dest;
          (*(code *)puVar12[2])(uVar10,puVar12,0,unaff_x29 + -0x90,__dest);
          pvVar16 = __dest;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    __dest = *(void **)(unaff_x29 + -0x98);
    lVar14 = FUN_01780344(uVar6,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar14 == lVar8) {
      uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
      uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
      __dest_00 = *(void **)(unaff_x29 + -0xa8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar17 = FUN_02644b48(uVar10,uVar13,uVar15,0);
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      *(undefined4 *)(unaff_x29 + -0x90) = uVar17;
      uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
      lVar14 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
      }
      pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
    }
    else {
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = FUN_01780344(uVar6,0);
      lVar8 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      if (lVar14 == lVar8) {
        uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
        uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
        __dest_00 = *(void **)(unaff_x29 + -0xa8);
        uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
        bVar3 = FUN_02644a3c(uVar10,uVar13,uVar15,0);
        puVar1 = StringLiteral_9958;
        *(byte *)(unaff_x29 + -0x90) = bVar3 & 1;
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
        lVar14 = *(long *)(*unaff_x23 + 0x10);
        if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
          lVar14 = FUN_00d5941c(lVar14);
        }
        pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
      }
      else {
        uVar6 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar14 = FUN_01780344(uVar6,0);
        lVar8 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar14 == lVar8) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)PTR_DAT_033f4380,0);
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar4 = FUN_02644930(uVar10,uVar13,uVar15,0);
          puVar1 = UnityEngine_Texture2D___TypeInfo;
          *(undefined1 *)(unaff_x29 + -0x90) = uVar4;
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
          lVar14 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar14 = FUN_00d5941c(lVar14);
          }
          pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
        }
        else {
          uVar6 = *(undefined8 *)(*unaff_x23 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = FUN_01780344(uVar6,0);
          lVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
          if (lVar14 == lVar8) {
            uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
            uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
            __dest_00 = *(void **)(unaff_x29 + -0xa8);
            uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
            uVar4 = FUN_02644930(uVar10,uVar13,uVar15,0);
            puVar1 = StringLiteral_7239;
            *(undefined1 *)(unaff_x29 + -0x90) = uVar4;
            uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
            lVar14 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c(lVar14);
            }
            pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
          }
          else {
            uVar6 = *(undefined8 *)(*unaff_x23 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar14 = FUN_01780344(uVar6,0);
            lVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
            if (lVar14 == lVar8) {
              uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
              uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
              __dest_00 = *(void **)(unaff_x29 + -0xa8);
              uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
              uVar5 = FUN_02644824(uVar10,uVar13,uVar15,0);
              puVar1 = Method_System_Data_Common_UInt32Storage_Aggregate__;
              *(undefined2 *)(unaff_x29 + -0x90) = uVar5;
              uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
              lVar14 = *(long *)(*unaff_x23 + 0x10);
              if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                lVar14 = FUN_00d5941c(lVar14);
              }
              pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
            }
            else {
              uVar6 = *(undefined8 *)(*unaff_x23 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar14 = FUN_01780344(uVar6,0);
              lVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              if (lVar14 == lVar8) {
                uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                __dest_00 = *(void **)(unaff_x29 + -0xa8);
                uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar13 = FUN_02644718(uVar10,uVar13,uVar15,0);
                puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
                *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
                uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                lVar14 = *(long *)(*unaff_x23 + 0x10);
                if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                  lVar14 = FUN_00d5941c(lVar14);
                }
                pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
              }
              else {
                uVar6 = *(undefined8 *)(*unaff_x23 + 8);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar14 = FUN_01780344(uVar6,0);
                lVar8 = FUN_01780344(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                     ,0);
                if (lVar14 == lVar8) {
                  uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                  uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                  __dest_00 = *(void **)(unaff_x29 + -0xa8);
                  uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                  uVar17 = FUN_02644600(uVar10,uVar13,uVar15,0);
                  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  *(undefined4 *)(unaff_x29 + -0x90) = uVar17;
                  uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                  lVar14 = *(long *)(*unaff_x23 + 0x10);
                  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                    lVar14 = FUN_00d5941c(lVar14);
                  }
                  pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
                }
                else {
                  uVar6 = *(undefined8 *)(*unaff_x23 + 8);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar14 = FUN_01780344(uVar6,0);
                  lVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0
                                      );
                  if (lVar14 == lVar8) {
                    uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                    uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                    __dest_00 = *(void **)(unaff_x29 + -0xa8);
                    uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                    uVar13 = FUN_026444e8(uVar10,uVar13,uVar15,0);
                    puVar1 = PTR_DAT_033f2f78;
                    *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
                    uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar14 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                      lVar14 = FUN_00d5941c(lVar14);
                    }
                    pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
                  }
                  else {
                    uVar15 = *(undefined8 *)(*unaff_x23 + 8);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                    lVar14 = FUN_01780344(uVar15,0);
                    lVar8 = FUN_01780344(*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                    if (lVar14 != lVar8) {
                      memset(unaff_x27,0,unaff_x21);
                      memcpy(__dest,unaff_x27,unaff_x21);
                      __dest_00 = *(void **)(unaff_x29 + -0xa8);
                      memcpy(__dest_00,__dest,unaff_x21);
                      uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                      goto LAB_010a7ddc;
                    }
                    uVar10 = FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                    uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
                    __dest_00 = *(void **)(unaff_x29 + -0xa8);
                    uVar5 = FUN_026443dc(uVar10,uVar13,uVar15,0);
                    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                    *(undefined2 *)(unaff_x29 + -0x90) = uVar5;
                    uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar14 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                      lVar14 = FUN_00d5941c(lVar14);
                    }
                    pvVar16 = (void *)FUN_00da5060(uVar13,lVar14,__dest);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(__dest_00,pvVar16,unaff_x21);
LAB_010a7ddc:
  thunk_FUN_0264e480(uVar6,uVar15,0);
  memcpy(__dest,__dest_00,unaff_x21);
  memcpy(*(void **)(unaff_x29 + -0xc0),__dest,unaff_x21);
  if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


