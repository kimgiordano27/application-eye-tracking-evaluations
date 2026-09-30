/*
FUNCTION_NAME: Sirenix.Utilities.LinqExtensions.<PrependWith>d__7<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
ENTRY_POINT: 010a8f8c
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


void Sirenix_Utilities_LinqExtensions_<PrependWith>d__7<__Il2CppFullySharedGenericType>__System_IDisposable_Dispose
               (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  void *__src;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  void *__dest;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  void *__dest_00;
  void *pvVar15;
  void *pvVar16;
  long unaff_x29;
  undefined4 uVar17;
  
  param_1 = param_1 & 0xffffffff;
  uVar14 = param_1 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0xa8) = (long)&stack0x00000000 - uVar14;
  pvVar6 = (void *)(((long)&stack0x00000000 - uVar14) - uVar14);
  *(void **)(unaff_x29 + -0xa0) = pvVar6;
  memset(pvVar6,0,param_1);
  pvVar6 = (void *)((long)pvVar6 - uVar14);
  memset(pvVar6,0,param_1);
  pvVar16 = (void *)((long)pvVar6 - uVar14);
  memset(pvVar16,0,param_1);
  pvVar15 = (void *)((long)pvVar16 - uVar14);
  memset(pvVar15,0,param_1);
  uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
  puVar12 = *(undefined8 **)*unaff_x22;
  uVar13 = *puVar12;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar7;
  *(undefined1 *)(unaff_x29 + -100) = 1;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x24;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -100;
  (*(code *)puVar12[2])(uVar13,puVar12,0,unaff_x29 + -0x88,unaff_x29 + -0x70);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar8 = *(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar7 = *(undefined8 *)(*unaff_x22 + 8);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x70);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01780344(uVar7,0);
  puVar2 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar14 = FUN_0264bd00(uVar7,0);
  uVar7 = *(undefined8 *)(*unaff_x22 + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar8 = FUN_01780344(uVar7,0);
  if ((uVar14 & 1) == 0) {
    lVar9 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar8 == lVar9) {
      uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
      uVar7 = FUN_026438a4(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
      goto LAB_010a9554;
    }
    uVar7 = *(undefined8 *)(*unaff_x22 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = FUN_01780344(uVar7,0);
    lVar9 = FUN_01780344(*(undefined8 *)
                          Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
    if (lVar8 == lVar9) {
      uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
      uVar7 = FUN_026437b8(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
      uVar14 = FUN_017b4f64(uVar7,**(undefined8 **)
                                    (*(long *)
                                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                    + 0xb8),0);
      pvVar15 = pvVar16;
      if ((uVar14 & 1) == 0) {
        uVar7 = FUN_0264bb78(uVar7,0);
        __dest = *(void **)(unaff_x29 + -0xa8);
        lVar8 = *(long *)(*unaff_x22 + 0x10);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        lVar9 = *(long *)(unaff_x29 + -0x90);
        __dest_00 = *(void **)(unaff_x29 + -0xa0);
        __src = (void *)FUN_00da5060(uVar7,lVar8,__dest);
        memcpy(pvVar16,__src,param_1);
      }
      else {
        memset(pvVar6,0,param_1);
        __dest = *(void **)(unaff_x29 + -0xa8);
        memcpy(__dest,pvVar6,param_1);
        memcpy(pvVar16,__dest,param_1);
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        lVar9 = *(long *)(unaff_x29 + -0x90);
        __dest_00 = *(void **)(unaff_x29 + -0xa0);
      }
    }
    else {
      uVar7 = *(undefined8 *)(*unaff_x22 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = FUN_01780344(uVar7,0);
      lVar9 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
      if (lVar8 != lVar9) {
        uVar7 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01780344(uVar7,0);
        uVar13 = FUN_01780344(*(undefined8 *)(*unaff_x22 + 8),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar14 = FUN_0264bd14(uVar7,uVar13,0);
        if ((uVar14 & 1) == 0) {
          uVar7 = *(undefined8 *)(*unaff_x22 + 8);
          lVar8 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar10 = (long *)FUN_01780344(uVar7,0);
          uVar7 = thunk_FUN_00d48444(PTR_DAT_033f4788);
          if (plVar10 == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar7 = thunk_FUN_00d48444(PTR_DAT_033f4788);
            uVar13 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          }
          uVar11 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                     );
          uVar7 = FUN_01600424(uVar7,uVar13,uVar11,0);
          thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
          uVar13 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017a9608(uVar13,uVar7,0);
          uVar7 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_Any<JsonSchemaModel>__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar13,uVar7);
        }
        uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
        uVar7 = FUN_026437b8(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
        __dest = *(void **)(unaff_x29 + -0xa8);
        puVar12 = *(undefined8 **)(*unaff_x22 + 0x18);
        uVar13 = *puVar12;
        *(undefined8 *)(unaff_x29 + -0x60) = uVar7;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
        *(void **)(unaff_x29 + -0x80) = __dest;
        (*(code *)puVar12[2])(uVar13,puVar12,0,unaff_x29 + -0x88,__dest);
LAB_010a94e8:
        __dest_00 = *(void **)(unaff_x29 + -0xa0);
        memcpy(__dest_00,__dest,param_1);
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        lVar9 = *(long *)(unaff_x29 + -0x90);
        goto LAB_010a98bc;
      }
      uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
      uVar7 = FUN_026437b8(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
      uVar14 = FUN_017b4f64(uVar7,**(undefined8 **)
                                    (*(long *)
                                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                    + 0xb8),0);
      if ((uVar14 & 1) == 0) {
        uVar7 = FUN_0264a664(uVar7,0);
        __dest = *(void **)(unaff_x29 + -0xa8);
        lVar8 = *(long *)(*unaff_x22 + 0x10);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        lVar9 = *(long *)(unaff_x29 + -0x90);
        __dest_00 = *(void **)(unaff_x29 + -0xa0);
        pvVar16 = (void *)FUN_00da5060(uVar7,lVar8,__dest);
        memcpy(pvVar15,pvVar16,param_1);
      }
      else {
        memset(pvVar6,0,param_1);
        __dest = *(void **)(unaff_x29 + -0xa8);
        memcpy(__dest,pvVar6,param_1);
        memcpy(pvVar15,__dest,param_1);
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        lVar9 = *(long *)(unaff_x29 + -0x90);
        __dest_00 = *(void **)(unaff_x29 + -0xa0);
      }
    }
  }
  else {
    lVar9 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar8 == lVar9) {
      uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
      uVar17 = FUN_0264401c(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      *(undefined4 *)(unaff_x29 + -0x88) = uVar17;
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x88);
LAB_010a9554:
      lVar8 = *(long *)(*unaff_x22 + 0x10);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      pvVar6 = *(void **)(unaff_x29 + -0x98);
      lVar9 = *(long *)(unaff_x29 + -0x90);
      __dest = *(void **)(unaff_x29 + -0xa8);
      __dest_00 = *(void **)(unaff_x29 + -0xa0);
    }
    else {
      uVar7 = *(undefined8 *)(*unaff_x22 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = FUN_01780344(uVar7,0);
      lVar9 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      __dest = *(void **)(unaff_x29 + -0xa8);
      if (lVar8 == lVar9) {
        uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
        bVar3 = FUN_02643f30(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
        puVar12 = (undefined8 *)StringLiteral_9958;
        *(byte *)(unaff_x29 + -0x88) = bVar3 & 1;
LAB_010a9868:
        uVar7 = *puVar12;
      }
      else {
        uVar7 = *(undefined8 *)(*unaff_x22 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = FUN_01780344(uVar7,0);
        lVar9 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar8 == lVar9) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_Convert__,0);
          uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
          uVar4 = FUN_02643e44(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
          puVar1 = UnityEngine_Texture2D___TypeInfo;
          *(undefined1 *)(unaff_x29 + -0x88) = uVar4;
          uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,unaff_x29 + -0x88);
          __dest_00 = *(void **)(unaff_x29 + -0xa0);
          pvVar6 = *(void **)(unaff_x29 + -0x98);
          lVar8 = *(long *)(*unaff_x22 + 0x10);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c(lVar8);
          }
          lVar9 = *(long *)(unaff_x29 + -0x90);
          goto LAB_010a98a0;
        }
        uVar7 = *(undefined8 *)(*unaff_x22 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = FUN_01780344(uVar7,0);
        lVar9 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
        if (lVar8 == lVar9) {
          uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
          uVar4 = FUN_02643e44(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
          puVar12 = (undefined8 *)StringLiteral_7239;
          *(undefined1 *)(unaff_x29 + -0x88) = uVar4;
          goto LAB_010a9868;
        }
        uVar7 = *(undefined8 *)(*unaff_x22 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = FUN_01780344(uVar7,0);
        lVar9 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        if (lVar8 == lVar9) {
          uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
          uVar5 = FUN_02643d58(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
          puVar12 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
LAB_010a9838:
          uVar7 = *puVar12;
          *(undefined2 *)(unaff_x29 + -0x88) = uVar5;
        }
        else {
          uVar7 = *(undefined8 *)(*unaff_x22 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar8 = FUN_01780344(uVar7,0);
          lVar9 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          if (lVar8 == lVar9) {
            uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
            uVar7 = FUN_02643c6c(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
            puVar12 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
            goto LAB_010a9868;
          }
          uVar7 = *(undefined8 *)(*unaff_x22 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar8 = FUN_01780344(uVar7,0);
          lVar9 = FUN_01780344(*(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                               ,0);
          if (lVar8 == lVar9) {
            uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
            uVar17 = FUN_02643b74(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
            puVar12 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar17;
          }
          else {
            uVar7 = *(undefined8 *)(*unaff_x22 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar8 = FUN_01780344(uVar7,0);
            lVar9 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
            if (lVar8 != lVar9) {
              uVar7 = *(undefined8 *)(*unaff_x22 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar8 = FUN_01780344(uVar7,0);
              lVar9 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                   ,0);
              if (lVar8 != lVar9) {
                memset(pvVar6,0,param_1);
                memcpy(__dest,pvVar6,param_1);
                goto LAB_010a94e8;
              }
              uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
              uVar5 = FUN_02643990(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
              puVar12 = (undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo;
              goto LAB_010a9838;
            }
            uVar7 = FUN_026480b0(*(undefined8 *)(unaff_x23 + 0x18),0);
            uVar7 = FUN_02643a7c(uVar7,*(undefined8 *)(unaff_x29 + -0xb0),0);
            puVar12 = (undefined8 *)PTR_DAT_033f2f78;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
          }
          uVar7 = *puVar12;
        }
      }
      uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0x88);
      lVar8 = *(long *)(*unaff_x22 + 0x10);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      pvVar6 = *(void **)(unaff_x29 + -0x98);
      lVar9 = *(long *)(unaff_x29 + -0x90);
      __dest_00 = *(void **)(unaff_x29 + -0xa0);
    }
LAB_010a98a0:
    pvVar15 = (void *)FUN_00da5060(uVar7,lVar8,__dest);
  }
  memcpy(__dest_00,pvVar15,param_1);
LAB_010a98bc:
  memcpy(__dest,__dest_00,param_1);
  memcpy(pvVar6,__dest,param_1);
  if (*(long *)(lVar9 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


