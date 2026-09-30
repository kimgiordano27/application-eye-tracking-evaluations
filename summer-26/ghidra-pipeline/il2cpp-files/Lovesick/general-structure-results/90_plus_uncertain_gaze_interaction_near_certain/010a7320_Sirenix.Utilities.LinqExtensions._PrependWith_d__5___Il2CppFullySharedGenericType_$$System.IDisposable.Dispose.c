/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependWith>d__5<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
ENTRY_POINT: 010a7320
PROGRAM: Lovesick-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void Sirenix_Utilities_LinqExtensions_<PrependWith>d__5<__Il2CppFullySharedGenericType>__System_IDisposable_Dispose
               (undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  void *unaff_x19;
  undefined8 uVar14;
  long *unaff_x20;
  size_t unaff_x21;
  void *__dest;
  long *unaff_x23;
  long unaff_x25;
  void *unaff_x27;
  void *__dest_00;
  void *unaff_x28;
  long unaff_x29;
  undefined4 uVar15;
  
  thunk_FUN_00d32864(param_1);
  uVar5 = FUN_01780344();
  puVar1 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_0264bd00(uVar5,0);
  uVar5 = *(undefined8 *)(*unaff_x23 + 8);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_01780344(uVar5,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar7 == lVar8) {
      FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
      uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
      __dest_00 = *(void **)(unaff_x29 + -0xa8);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
      __dest = *(void **)(unaff_x29 + -0x98);
      uVar10 = FUN_02644324();
      lVar7 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
    }
    else {
      uVar5 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01780344(uVar5,0);
      lVar8 = FUN_01780344(*(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
      if (lVar7 == lVar8) {
        FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
        uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
        __dest = *(void **)(unaff_x29 + -0x98);
        uVar10 = FUN_02644218();
        uVar6 = FUN_017b4f64(uVar10,**(undefined8 **)
                                      (*(long *)
                                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                      + 0xb8),0);
        unaff_x28 = unaff_x19;
        if ((uVar6 & 1) == 0) {
          uVar10 = FUN_0264bb78(uVar10,0);
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
          lVar7 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
          }
          pvVar9 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
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
        uVar5 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar7 = FUN_01780344(uVar5,0);
        lVar8 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
        if (lVar7 == lVar8) {
          FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
          __dest = *(void **)(unaff_x29 + -0x98);
          uVar10 = FUN_02644218();
          uVar6 = FUN_017b4f64(uVar10,**(undefined8 **)
                                        (*(long *)
                                          Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                        + 0xb8),0);
          if ((uVar6 & 1) == 0) {
            uVar10 = FUN_0264a664(uVar10,0);
            __dest_00 = *(void **)(unaff_x29 + -0xa8);
            lVar7 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
            }
            pvVar9 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
            memcpy(unaff_x28,pvVar9,unaff_x21);
          }
          else {
            memset(unaff_x27,0,unaff_x21);
            memcpy(__dest,unaff_x27,unaff_x21);
            memcpy(unaff_x28,__dest,unaff_x21);
            __dest_00 = *(void **)(unaff_x29 + -0xa8);
          }
        }
        else {
          uVar5 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
          uVar14 = FUN_01780344(uVar5,0);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar10 = FUN_01780344(*(undefined8 *)(*unaff_x23 + 8),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_0264bd14(uVar14,uVar10,0);
          __dest = *(void **)(unaff_x29 + -0x98);
          if ((uVar6 & 1) == 0) {
            uVar5 = *(undefined8 *)(*unaff_x23 + 8);
            lVar7 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar11 = (long *)FUN_01780344(uVar5,0);
            uVar5 = thunk_FUN_00d48444(PTR_DAT_033f4040);
            if (plVar11 == (long *)0x0) {
              uVar14 = 0;
            }
            else {
              uVar5 = thunk_FUN_00d48444(PTR_DAT_033f4040);
              uVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            }
            uVar10 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                       );
            uVar5 = FUN_01600424(uVar5,uVar14,uVar10,0);
            thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
            lVar7 = thunk_FUN_00d62348();
            if (lVar7 != 0) {
              FUN_017a9608(lVar7,uVar5,0);
              uVar5 = thunk_FUN_00d48444(StringLiteral_2908);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(lVar7,uVar5);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar10 = FUN_02644218();
          puVar12 = *(undefined8 **)(*unaff_x23 + 0x18);
          uVar13 = *puVar12;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar10;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(void **)(unaff_x29 + -0x88) = __dest;
          (*(code *)puVar12[2])(uVar13,puVar12,0,unaff_x29 + -0x90,__dest);
          unaff_x28 = __dest;
        }
      }
    }
  }
  else {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    __dest = *(void **)(unaff_x29 + -0x98);
    lVar7 = FUN_01780344(uVar5,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar7 == lVar8) {
      FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
      uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
      __dest_00 = *(void **)(unaff_x29 + -0xa8);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar15 = FUN_02644b48();
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      *(undefined4 *)(unaff_x29 + -0x90) = uVar15;
      uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
      lVar7 = *(long *)(*unaff_x23 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
    }
    else {
      uVar5 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01780344(uVar5,0);
      lVar8 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      if (lVar7 == lVar8) {
        FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
        uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
        __dest_00 = *(void **)(unaff_x29 + -0xa8);
        uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
        bVar2 = FUN_02644a3c();
        puVar1 = StringLiteral_9958;
        *(byte *)(unaff_x29 + -0x90) = bVar2 & 1;
        uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
        lVar7 = *(long *)(*unaff_x23 + 0x10);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c(lVar7);
        }
        unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
      }
      else {
        uVar5 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar7 = FUN_01780344(uVar5,0);
        lVar8 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar7 == lVar8) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)PTR_DAT_033f4380,0);
          __dest_00 = *(void **)(unaff_x29 + -0xa8);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
          FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
          uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar3 = FUN_02644930();
          puVar1 = UnityEngine_Texture2D___TypeInfo;
          *(undefined1 *)(unaff_x29 + -0x90) = uVar3;
          uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
          lVar7 = *(long *)(*unaff_x23 + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
          }
          unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
        }
        else {
          uVar5 = *(undefined8 *)(*unaff_x23 + 8);
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar7 = FUN_01780344(uVar5,0);
          lVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
          if (lVar7 == lVar8) {
            FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
            uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
            __dest_00 = *(void **)(unaff_x29 + -0xa8);
            uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
            uVar3 = FUN_02644930();
            puVar1 = StringLiteral_7239;
            *(undefined1 *)(unaff_x29 + -0x90) = uVar3;
            uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
            lVar7 = *(long *)(*unaff_x23 + 0x10);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
            }
            unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
          }
          else {
            uVar5 = *(undefined8 *)(*unaff_x23 + 8);
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar7 = FUN_01780344(uVar5,0);
            lVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
            if (lVar7 == lVar8) {
              FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
              uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
              __dest_00 = *(void **)(unaff_x29 + -0xa8);
              uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
              uVar4 = FUN_02644824();
              puVar1 = Method_System_Data_Common_UInt32Storage_Aggregate__;
              *(undefined2 *)(unaff_x29 + -0x90) = uVar4;
              uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
              lVar7 = *(long *)(*unaff_x23 + 0x10);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
              }
              unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
            }
            else {
              uVar5 = *(undefined8 *)(*unaff_x23 + 8);
              if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar7 = FUN_01780344(uVar5,0);
              lVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              if (lVar7 == lVar8) {
                FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
                __dest_00 = *(void **)(unaff_x29 + -0xa8);
                uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar10 = FUN_02644718();
                puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
                *(undefined8 *)(unaff_x29 + -0x90) = uVar10;
                uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                lVar7 = *(long *)(*unaff_x23 + 0x10);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c(lVar7);
                }
                unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
              }
              else {
                uVar5 = *(undefined8 *)(*unaff_x23 + 8);
                if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar7 = FUN_01780344(uVar5,0);
                lVar8 = FUN_01780344(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                     ,0);
                if (lVar7 == lVar8) {
                  FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                  uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
                  __dest_00 = *(void **)(unaff_x29 + -0xa8);
                  uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
                  uVar15 = FUN_02644600();
                  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  *(undefined4 *)(unaff_x29 + -0x90) = uVar15;
                  uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                  lVar7 = *(long *)(*unaff_x23 + 0x10);
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                  }
                  unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
                }
                else {
                  uVar5 = *(undefined8 *)(*unaff_x23 + 8);
                  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar7 = FUN_01780344(uVar5,0);
                  lVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0
                                      );
                  if (lVar7 == lVar8) {
                    FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                    uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
                    __dest_00 = *(void **)(unaff_x29 + -0xa8);
                    uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
                    uVar10 = FUN_026444e8();
                    puVar1 = PTR_DAT_033f2f78;
                    *(undefined8 *)(unaff_x29 + -0x90) = uVar10;
                    uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar7 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c(lVar7);
                    }
                    unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
                  }
                  else {
                    uVar14 = *(undefined8 *)(*unaff_x23 + 8);
                    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
                    lVar7 = FUN_01780344(uVar14,0);
                    lVar8 = FUN_01780344(*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                    if (lVar7 != lVar8) {
                      memset(unaff_x27,0,unaff_x21);
                      memcpy(__dest,unaff_x27,unaff_x21);
                      __dest_00 = *(void **)(unaff_x29 + -0xa8);
                      memcpy(__dest_00,__dest,unaff_x21);
                      uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
                      goto LAB_010a7ddc;
                    }
                    FUN_026480b0(*(undefined8 *)(unaff_x25 + 0x18),0);
                    uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
                    __dest_00 = *(void **)(unaff_x29 + -0xa8);
                    uVar4 = FUN_026443dc();
                    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                    *(undefined2 *)(unaff_x29 + -0x90) = uVar4;
                    uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x90);
                    lVar7 = *(long *)(*unaff_x23 + 0x10);
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c(lVar7);
                    }
                    unaff_x28 = (void *)FUN_00da5060(uVar10,lVar7,__dest);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(__dest_00,unaff_x28,unaff_x21);
LAB_010a7ddc:
  thunk_FUN_0264e480(uVar5,uVar14,0);
  memcpy(__dest,__dest_00,unaff_x21);
  memcpy(*(void **)(unaff_x29 + -0xc0),__dest,unaff_x21);
  if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


