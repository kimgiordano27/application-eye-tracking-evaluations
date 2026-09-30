/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependWith>d__7<__Il2CppFullySharedGenericType>$$MoveNext
ENTRY_POINT: 010a9038
PROGRAM: Lovesick-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void Sirenix_Utilities_LinqExtensions_<PrependWith>d__7<__Il2CppFullySharedGenericType>__MoveNext
               (long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 in_w9;
  undefined8 in_x10;
  undefined8 in_x11;
  size_t unaff_x20;
  long unaff_x21;
  void *__dest;
  long *unaff_x22;
  void *__dest_00;
  undefined8 unaff_x24;
  void *__dest_01;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  undefined4 uVar15;
  
  puVar13 = (undefined8 *)*param_1;
  uVar14 = *puVar13;
  *(undefined8 *)(unaff_x29 + -0x60) = param_2;
  *(undefined1 *)(unaff_x29 + -100) = in_w9;
  *(undefined8 *)(unaff_x29 + -0x88) = in_x10;
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x78) = in_x11;
  (*(code *)puVar13[2])(uVar14,puVar13,0,unaff_x29 + -0x88,unaff_x29 + -0x70);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar6 = *(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar14 = *(undefined8 *)(*unaff_x22 + 8);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x70);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  puVar2 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar7 = FUN_0264bd00(uVar14,0);
  uVar14 = *(undefined8 *)(*unaff_x22 + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar6 = FUN_01780344(uVar14,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar6 == lVar8) {
      uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
      uVar14 = FUN_026438a4(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
      goto LAB_010a9554;
    }
    uVar14 = *(undefined8 *)(*unaff_x22 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = FUN_01780344(uVar14,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
    if (lVar6 == lVar8) {
      uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
      uVar14 = FUN_026437b8(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
      uVar7 = FUN_017b4f64(uVar14,**(undefined8 **)
                                    (*(long *)
                                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                    + 0xb8),0);
      unaff_x26 = unaff_x27;
      if ((uVar7 & 1) == 0) {
        uVar14 = FUN_0264bb78(uVar14,0);
        __dest = *(void **)(unaff_x29 + -0xa8);
        lVar6 = *(long *)(*unaff_x22 + 0x10);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c(lVar6);
        }
        __dest_00 = *(void **)(unaff_x29 + -0x98);
        lVar8 = *(long *)(unaff_x29 + -0x90);
        __dest_01 = *(void **)(unaff_x29 + -0xa0);
        pvVar10 = (void *)FUN_00da5060(uVar14,lVar6,__dest);
        memcpy(unaff_x27,pvVar10,unaff_x20);
      }
      else {
        memset(unaff_x25,0,unaff_x20);
        __dest = *(void **)(unaff_x29 + -0xa8);
        memcpy(__dest,unaff_x25,unaff_x20);
        memcpy(unaff_x27,__dest,unaff_x20);
        __dest_00 = *(void **)(unaff_x29 + -0x98);
        lVar8 = *(long *)(unaff_x29 + -0x90);
        __dest_01 = *(void **)(unaff_x29 + -0xa0);
      }
    }
    else {
      uVar14 = *(undefined8 *)(*unaff_x22 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_01780344(uVar14,0);
      lVar8 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
      if (lVar6 != lVar8) {
        uVar14 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar14,0);
        uVar9 = FUN_01780344(*(undefined8 *)(*unaff_x22 + 8),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar7 = FUN_0264bd14(uVar14,uVar9,0);
        if ((uVar7 & 1) == 0) {
          uVar14 = *(undefined8 *)(*unaff_x22 + 8);
          lVar6 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar11 = (long *)FUN_01780344(uVar14,0);
          uVar14 = thunk_FUN_00d48444(PTR_DAT_033f4788);
          if (plVar11 == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar14 = thunk_FUN_00d48444(PTR_DAT_033f4788);
            uVar9 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          }
          uVar12 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                     );
          uVar14 = FUN_01600424(uVar14,uVar9,uVar12,0);
          thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
          uVar9 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017a9608(uVar9,uVar14,0);
          uVar14 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_Any<JsonSchemaModel>__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,uVar14);
        }
        uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
        uVar14 = FUN_026437b8(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
        __dest = *(void **)(unaff_x29 + -0xa8);
        puVar13 = *(undefined8 **)(*unaff_x22 + 0x18);
        uVar9 = *puVar13;
        *(undefined8 *)(unaff_x29 + -0x60) = uVar14;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
        *(void **)(unaff_x29 + -0x80) = __dest;
        (*(code *)puVar13[2])(uVar9,puVar13,0,unaff_x29 + -0x88,__dest);
LAB_010a94e8:
        __dest_01 = *(void **)(unaff_x29 + -0xa0);
        memcpy(__dest_01,__dest,unaff_x20);
        __dest_00 = *(void **)(unaff_x29 + -0x98);
        lVar8 = *(long *)(unaff_x29 + -0x90);
        goto LAB_010a98bc;
      }
      uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
      uVar14 = FUN_026437b8(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
      uVar7 = FUN_017b4f64(uVar14,**(undefined8 **)
                                    (*(long *)
                                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                    + 0xb8),0);
      if ((uVar7 & 1) == 0) {
        uVar14 = FUN_0264a664(uVar14,0);
        __dest = *(void **)(unaff_x29 + -0xa8);
        lVar6 = *(long *)(*unaff_x22 + 0x10);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c(lVar6);
        }
        __dest_00 = *(void **)(unaff_x29 + -0x98);
        lVar8 = *(long *)(unaff_x29 + -0x90);
        __dest_01 = *(void **)(unaff_x29 + -0xa0);
        pvVar10 = (void *)FUN_00da5060(uVar14,lVar6,__dest);
        memcpy(unaff_x26,pvVar10,unaff_x20);
      }
      else {
        memset(unaff_x25,0,unaff_x20);
        __dest = *(void **)(unaff_x29 + -0xa8);
        memcpy(__dest,unaff_x25,unaff_x20);
        memcpy(unaff_x26,__dest,unaff_x20);
        __dest_00 = *(void **)(unaff_x29 + -0x98);
        lVar8 = *(long *)(unaff_x29 + -0x90);
        __dest_01 = *(void **)(unaff_x29 + -0xa0);
      }
    }
  }
  else {
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar6 == lVar8) {
      uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
      uVar15 = FUN_0264401c(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      *(undefined4 *)(unaff_x29 + -0x88) = uVar15;
      uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x88);
LAB_010a9554:
      lVar6 = *(long *)(*unaff_x22 + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c(lVar6);
      }
      __dest_00 = *(void **)(unaff_x29 + -0x98);
      lVar8 = *(long *)(unaff_x29 + -0x90);
      __dest = *(void **)(unaff_x29 + -0xa8);
      __dest_01 = *(void **)(unaff_x29 + -0xa0);
    }
    else {
      uVar14 = *(undefined8 *)(*unaff_x22 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_01780344(uVar14,0);
      lVar8 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      __dest = *(void **)(unaff_x29 + -0xa8);
      if (lVar6 == lVar8) {
        uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
        bVar3 = FUN_02643f30(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
        puVar13 = (undefined8 *)StringLiteral_9958;
        *(byte *)(unaff_x29 + -0x88) = bVar3 & 1;
LAB_010a9868:
        uVar14 = *puVar13;
      }
      else {
        uVar14 = *(undefined8 *)(*unaff_x22 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar6 = FUN_01780344(uVar14,0);
        lVar8 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar6 == lVar8) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_Convert__,0);
          uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
          uVar4 = FUN_02643e44(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
          puVar1 = UnityEngine_Texture2D___TypeInfo;
          *(undefined1 *)(unaff_x29 + -0x88) = uVar4;
          uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x88);
          __dest_01 = *(void **)(unaff_x29 + -0xa0);
          __dest_00 = *(void **)(unaff_x29 + -0x98);
          lVar6 = *(long *)(*unaff_x22 + 0x10);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c(lVar6);
          }
          lVar8 = *(long *)(unaff_x29 + -0x90);
          goto LAB_010a98a0;
        }
        uVar14 = *(undefined8 *)(*unaff_x22 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar6 = FUN_01780344(uVar14,0);
        lVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
        if (lVar6 == lVar8) {
          uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
          uVar4 = FUN_02643e44(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
          puVar13 = (undefined8 *)StringLiteral_7239;
          *(undefined1 *)(unaff_x29 + -0x88) = uVar4;
          goto LAB_010a9868;
        }
        uVar14 = *(undefined8 *)(*unaff_x22 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar6 = FUN_01780344(uVar14,0);
        lVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        if (lVar6 == lVar8) {
          uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
          uVar5 = FUN_02643d58(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
          puVar13 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
LAB_010a9838:
          uVar14 = *puVar13;
          *(undefined2 *)(unaff_x29 + -0x88) = uVar5;
        }
        else {
          uVar14 = *(undefined8 *)(*unaff_x22 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar6 = FUN_01780344(uVar14,0);
          lVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          if (lVar6 == lVar8) {
            uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
            uVar14 = FUN_02643c6c(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
            puVar13 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar14;
            goto LAB_010a9868;
          }
          uVar14 = *(undefined8 *)(*unaff_x22 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar6 = FUN_01780344(uVar14,0);
          lVar8 = FUN_01780344(*(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                               ,0);
          if (lVar6 == lVar8) {
            uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
            uVar15 = FUN_02643b74(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
            puVar13 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar15;
          }
          else {
            uVar14 = *(undefined8 *)(*unaff_x22 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar6 = FUN_01780344(uVar14,0);
            lVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
            if (lVar6 != lVar8) {
              uVar14 = *(undefined8 *)(*unaff_x22 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar6 = FUN_01780344(uVar14,0);
              lVar8 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                   ,0);
              if (lVar6 != lVar8) {
                memset(unaff_x25,0,unaff_x20);
                memcpy(__dest,unaff_x25,unaff_x20);
                goto LAB_010a94e8;
              }
              uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
              uVar5 = FUN_02643990(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
              puVar13 = (undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo;
              goto LAB_010a9838;
            }
            uVar14 = FUN_026480b0(*(undefined8 *)(unaff_x21 + 0x18),0);
            uVar14 = FUN_02643a7c(uVar14,*(undefined8 *)(unaff_x29 + -0xb0),0);
            puVar13 = (undefined8 *)PTR_DAT_033f2f78;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar14;
          }
          uVar14 = *puVar13;
        }
      }
      uVar14 = thunk_FUN_00d61fa0(uVar14,unaff_x29 + -0x88);
      lVar6 = *(long *)(*unaff_x22 + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c(lVar6);
      }
      __dest_00 = *(void **)(unaff_x29 + -0x98);
      lVar8 = *(long *)(unaff_x29 + -0x90);
      __dest_01 = *(void **)(unaff_x29 + -0xa0);
    }
LAB_010a98a0:
    unaff_x26 = (void *)FUN_00da5060(uVar14,lVar6,__dest);
  }
  memcpy(__dest_01,unaff_x26,unaff_x20);
LAB_010a98bc:
  memcpy(__dest,__dest_01,unaff_x20);
  memcpy(__dest_00,__dest,unaff_x20);
  if (*(long *)(lVar8 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


