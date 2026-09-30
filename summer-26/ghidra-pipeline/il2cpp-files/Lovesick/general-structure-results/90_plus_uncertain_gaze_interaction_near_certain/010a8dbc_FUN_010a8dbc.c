/*
FUNCTION_NAME: FUN_010a8dbc
ENTRY_POINT: 010a8dbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 201
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6
*/


void FUN_010a8dbc(long param_1,void *param_2,void *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  void *__src;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong __n;
  void *__src_00;
  long *plVar15;
  void *__dest;
  void *pvVar16;
  void *pvVar17;
  undefined4 uVar18;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  long local_a0;
  undefined8 *local_98;
  void *pvStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_74 [4];
  undefined8 local_70;
  long local_68;
  
  local_a0 = tpidr_el0;
  local_68 = *(long *)(local_a0 + 0x28);
  plVar15 = (long *)(param_4 + 0x38);
  lVar12 = *plVar15;
  if (lVar12 == 0) {
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_SerializationInfo_SetType__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__);
    thunk_FUN_00d48444(Method_System_Xml_ValidateNames_SplitQName__);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Microphone_Start__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_Convert__);
    lVar12 = *plVar15;
    if (lVar12 == 0) {
      FUN_00d59478(param_4);
      lVar12 = *(long *)(param_4 + 0x38);
    }
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_00d5941c();
  }
  local_a8 = param_3;
  if (*(int *)(lVar12 + 0x28) < 0) {
    iVar5 = thunk_FUN_00d42afc();
    uVar11 = iVar5 - 0x10;
  }
  else {
    uVar11 = 8;
  }
  __n = (ulong)uVar11;
  uVar13 = __n + 0xf & 0x1fffffff0;
  local_b8 = (void *)((long)&local_c0 - uVar13);
  pvVar6 = (void *)((long)local_b8 - uVar13);
  local_b0 = pvVar6;
  memset(pvVar6,0,__n);
  pvVar6 = (void *)((long)pvVar6 - uVar13);
  memset(pvVar6,0,__n);
  pvVar17 = (void *)((long)pvVar6 - uVar13);
  memset(pvVar17,0,__n);
  pvVar16 = (void *)((long)pvVar17 - uVar13);
  memset(pvVar16,0,__n);
  local_70 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
  local_98 = &local_70;
  local_88 = local_74;
  puVar10 = *(undefined8 **)*plVar15;
  local_74[0] = 1;
  pvStack_90 = param_2;
  (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_98,&local_80);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar14 = *(undefined8 *)(*plVar15 + 8);
  local_c0 = local_80;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  puVar2 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar13 = FUN_0264bd00(uVar14,0);
  uVar14 = *(undefined8 *)(*plVar15 + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar12 = FUN_01780344(uVar14,0);
  if ((uVar13 & 1) == 0) {
    lVar7 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar12 == lVar7) {
      uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      uVar14 = FUN_026438a4(uVar14,local_c0,0);
      goto LAB_010a9554;
    }
    uVar14 = *(undefined8 *)(*plVar15 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = FUN_01780344(uVar14,0);
    lVar7 = FUN_01780344(*(undefined8 *)
                          Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
    if (lVar12 == lVar7) {
      uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      uVar14 = FUN_026437b8(uVar14,local_c0,0);
      uVar13 = FUN_017b4f64(uVar14,**(undefined8 **)
                                     (*(long *)
                                       Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                     + 0xb8),0);
      pvVar16 = pvVar17;
      if ((uVar13 & 1) == 0) {
        uVar14 = FUN_0264bb78(uVar14,0);
        __src_00 = local_b8;
        lVar12 = *(long *)(*plVar15 + 0x10);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c(lVar12);
        }
        lVar7 = local_a0;
        __dest = local_a8;
        pvVar6 = local_b0;
        __src = (void *)FUN_00da5060(uVar14,lVar12,__src_00);
        memcpy(pvVar17,__src,__n);
      }
      else {
        memset(pvVar6,0,__n);
        __src_00 = local_b8;
        memcpy(local_b8,pvVar6,__n);
        memcpy(pvVar17,__src_00,__n);
        lVar7 = local_a0;
        __dest = local_a8;
        pvVar6 = local_b0;
      }
    }
    else {
      uVar14 = *(undefined8 *)(*plVar15 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar12 = FUN_01780344(uVar14,0);
      lVar7 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
      if (lVar12 != lVar7) {
        uVar14 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar14,0);
        uVar8 = FUN_01780344(*(undefined8 *)(*plVar15 + 8),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar13 = FUN_0264bd14(uVar14,uVar8,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = *(undefined8 *)(*plVar15 + 8);
          lVar12 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar15 = (long *)FUN_01780344(uVar14,0);
          uVar14 = thunk_FUN_00d48444(PTR_DAT_033f4788);
          if (plVar15 == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar14 = thunk_FUN_00d48444(PTR_DAT_033f4788);
            uVar8 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
          }
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                    );
          uVar14 = FUN_01600424(uVar14,uVar8,uVar9,0);
          thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
          uVar8 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017a9608(uVar8,uVar14,0);
          uVar14 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_Any<JsonSchemaModel>__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,uVar14);
        }
        uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
        local_70 = FUN_026437b8(uVar14,local_c0,0);
        __src_00 = local_b8;
        local_98 = &local_70;
        puVar10 = *(undefined8 **)(*plVar15 + 0x18);
        pvStack_90 = local_b8;
        (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_98,local_b8);
LAB_010a94e8:
        pvVar6 = local_b0;
        memcpy(local_b0,__src_00,__n);
        lVar7 = local_a0;
        __dest = local_a8;
        goto LAB_010a98bc;
      }
      uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      uVar14 = FUN_026437b8(uVar14,local_c0,0);
      uVar13 = FUN_017b4f64(uVar14,**(undefined8 **)
                                     (*(long *)
                                       Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                     + 0xb8),0);
      if ((uVar13 & 1) == 0) {
        uVar14 = FUN_0264a664(uVar14,0);
        __src_00 = local_b8;
        lVar12 = *(long *)(*plVar15 + 0x10);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c(lVar12);
        }
        lVar7 = local_a0;
        __dest = local_a8;
        pvVar6 = local_b0;
        pvVar17 = (void *)FUN_00da5060(uVar14,lVar12,__src_00);
        memcpy(pvVar16,pvVar17,__n);
      }
      else {
        memset(pvVar6,0,__n);
        __src_00 = local_b8;
        memcpy(local_b8,pvVar6,__n);
        memcpy(pvVar16,__src_00,__n);
        lVar7 = local_a0;
        __dest = local_a8;
        pvVar6 = local_b0;
      }
    }
  }
  else {
    lVar7 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar12 == lVar7) {
      uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      uVar18 = FUN_0264401c(uVar14,local_c0,0);
      local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar18);
      uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&local_98);
LAB_010a9554:
      lVar12 = *(long *)(*plVar15 + 0x10);
      __src_00 = local_b8;
      __dest = local_a8;
      pvVar6 = local_b0;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c(lVar12);
        __src_00 = local_b8;
        __dest = local_a8;
        pvVar6 = local_b0;
      }
    }
    else {
      uVar14 = *(undefined8 *)(*plVar15 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar12 = FUN_01780344(uVar14,0);
      lVar7 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      __src_00 = local_b8;
      if (lVar12 == lVar7) {
        uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
        uVar3 = FUN_02643f30(uVar14,local_c0,0);
        local_98 = (undefined8 *)(CONCAT71(local_98._1_7_,uVar3) & 0xffffffffffffff01);
        puVar10 = (undefined8 *)StringLiteral_9958;
LAB_010a9868:
        uVar14 = *puVar10;
      }
      else {
        uVar14 = *(undefined8 *)(*plVar15 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = FUN_01780344(uVar14,0);
        lVar7 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar12 == lVar7) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_Convert__,0);
          uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          uVar3 = FUN_02643e44(uVar14,local_c0,0);
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,uVar3);
          uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,&local_98);
          __dest = local_a8;
          pvVar6 = local_b0;
          lVar12 = *(long *)(*plVar15 + 0x10);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c(lVar12);
          }
          goto LAB_010a98a0;
        }
        uVar14 = *(undefined8 *)(*plVar15 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = FUN_01780344(uVar14,0);
        lVar7 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
        if (lVar12 == lVar7) {
          uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          uVar3 = FUN_02643e44(uVar14,local_c0,0);
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,uVar3);
          puVar10 = (undefined8 *)StringLiteral_7239;
          goto LAB_010a9868;
        }
        uVar14 = *(undefined8 *)(*plVar15 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = FUN_01780344(uVar14,0);
        lVar7 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        if (lVar12 == lVar7) {
          uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          uVar4 = FUN_02643d58(uVar14,local_c0,0);
          puVar10 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
LAB_010a9838:
          uVar14 = *puVar10;
          local_98 = (undefined8 *)CONCAT62(local_98._2_6_,uVar4);
        }
        else {
          uVar14 = *(undefined8 *)(*plVar15 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar12 = FUN_01780344(uVar14,0);
          lVar7 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          if (lVar12 == lVar7) {
            uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
            local_98 = (undefined8 *)FUN_02643c6c(uVar14,local_c0,0);
            puVar10 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
            goto LAB_010a9868;
          }
          uVar14 = *(undefined8 *)(*plVar15 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar12 = FUN_01780344(uVar14,0);
          lVar7 = FUN_01780344(*(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                               ,0);
          if (lVar12 == lVar7) {
            uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
            uVar18 = FUN_02643b74(uVar14,local_c0,0);
            local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar18);
            puVar10 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
          }
          else {
            uVar14 = *(undefined8 *)(*plVar15 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar12 = FUN_01780344(uVar14,0);
            lVar7 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
            if (lVar12 != lVar7) {
              uVar14 = *(undefined8 *)(*plVar15 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar12 = FUN_01780344(uVar14,0);
              lVar7 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                   ,0);
              if (lVar12 != lVar7) {
                memset(pvVar6,0,__n);
                memcpy(__src_00,pvVar6,__n);
                goto LAB_010a94e8;
              }
              uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
              uVar4 = FUN_02643990(uVar14,local_c0,0);
              puVar10 = (undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo;
              goto LAB_010a9838;
            }
            uVar14 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
            local_98 = (undefined8 *)FUN_02643a7c(uVar14,local_c0,0);
            puVar10 = (undefined8 *)PTR_DAT_033f2f78;
          }
          uVar14 = *puVar10;
        }
      }
      uVar14 = thunk_FUN_00d61fa0(uVar14,&local_98);
      lVar12 = *(long *)(*plVar15 + 0x10);
      __dest = local_a8;
      pvVar6 = local_b0;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c(lVar12);
        __dest = local_a8;
        pvVar6 = local_b0;
      }
    }
LAB_010a98a0:
    lVar7 = local_a0;
    pvVar16 = (void *)FUN_00da5060(uVar14,lVar12,__src_00);
  }
  memcpy(pvVar6,pvVar16,__n);
LAB_010a98bc:
  memcpy(__src_00,pvVar6,__n);
  memcpy(__dest,__src_00,__n);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


