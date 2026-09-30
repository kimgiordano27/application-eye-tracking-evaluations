/*
FUNCTION_NAME: FUN_010a7014
ENTRY_POINT: 010a7014
PROGRAM: Lovesick-libil2cpp.so
SCORE: 201
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6
*/


void FUN_010a7014(long param_1,void *param_2,long param_3,void *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *__src;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  ulong __n;
  void *__dest;
  long *plVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined4 uVar19;
  void *local_d0;
  long local_c8;
  undefined8 local_c0;
  void *local_b8;
  long local_b0;
  void *local_a8;
  undefined8 *local_a0;
  void *pvStack_98;
  long local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 local_74 [4];
  undefined8 local_70;
  long local_68;
  
  local_c8 = tpidr_el0;
  local_68 = *(long *)(local_c8 + 0x28);
  plVar16 = (long *)(param_5 + 0x38);
  lVar13 = *plVar16;
  local_d0 = param_4;
  if (lVar13 == 0) {
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
                    /* try { // try from 010a7138 to 011a7143 has its CatchHandler @ 010a74ac */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
                    /* try { // try from 010a7148 to 011a716b has its CatchHandler @ 010a74b0 */
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_UnityEngine_Microphone_Start__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
                    /* try { // try from 010a716c to 011a74a3 has its CatchHandler @ 010a6f50 */
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f4380);
    lVar13 = *plVar16;
    if (lVar13 == 0) {
      FUN_00d59478(param_5);
      lVar13 = *(long *)(param_5 + 0x38);
    }
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    lVar13 = FUN_00d5941c();
  }
  if (*(int *)(lVar13 + 0x28) < 0) {
    iVar5 = thunk_FUN_00d42afc();
    uVar12 = iVar5 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  __n = (ulong)uVar12;
  uVar15 = __n + 0xf & 0x1fffffff0;
  local_a8 = (void *)((long)&local_d0 - uVar15);
  pvVar6 = (void *)((long)local_a8 - uVar15);
  local_b8 = pvVar6;
  memset(pvVar6,0,__n);
  pvVar6 = (void *)((long)pvVar6 - uVar15);
  memset(pvVar6,0,__n);
  pvVar14 = (void *)((long)pvVar6 - uVar15);
  memset(pvVar14,0,__n);
  pvVar18 = (void *)((long)pvVar14 - uVar15);
  memset(pvVar18,0,__n);
  if (param_3 == 0) {
    param_3 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
  }
  local_70 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
  local_a0 = &local_70;
  puStack_88 = local_74;
  puVar11 = *(undefined8 **)*plVar16;
  local_74[0] = 1;
  pvStack_98 = param_2;
  local_90 = param_3;
  (*(code *)puVar11[2])(*puVar11,puVar11,0,&local_a0,&local_80);
  local_b0 = param_3;
  local_c0 = thunk_FUN_0264ce14(param_3,0);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar17 = *(undefined8 *)(*plVar16 + 8);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  }
  uVar17 = FUN_01780344(uVar17,0);
  puVar2 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_0264bd00(uVar17,0);
  uVar17 = *(undefined8 *)(*plVar16 + 8);
  if ((uVar15 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = FUN_01780344(uVar17,0);
    lVar7 = FUN_01780344(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                         ,0);
    if (lVar13 == lVar7) {
      uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      __dest = local_a8;
      lVar13 = local_b0;
      pvVar6 = local_b8;
      uVar17 = local_c0;
      uVar9 = FUN_02644324(uVar9,local_80,local_c0,0);
      lVar7 = *(long *)(*plVar16 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
    }
    else {
      uVar17 = *(undefined8 *)(*plVar16 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_01780344(uVar17,0);
      lVar7 = FUN_01780344(*(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
      if (lVar13 == lVar7) {
        uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
        __dest = local_a8;
        lVar13 = local_b0;
        uVar17 = local_c0;
        uVar9 = FUN_02644218(uVar9,local_80,local_c0,0);
        uVar15 = FUN_017b4f64(uVar9,**(undefined8 **)
                                      (*(long *)
                                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                      + 0xb8),0);
        pvVar18 = pvVar14;
        if ((uVar15 & 1) == 0) {
          uVar9 = FUN_0264bb78(uVar9,0);
          pvVar6 = local_b8;
          lVar7 = *(long *)(*plVar16 + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
          }
          __src = (void *)FUN_00da5060(uVar9,lVar7,__dest);
          memcpy(pvVar14,__src,__n);
        }
        else {
          memset(pvVar6,0,__n);
          memcpy(__dest,pvVar6,__n);
          memcpy(pvVar14,__dest,__n);
          pvVar6 = local_b8;
        }
      }
      else {
        uVar17 = *(undefined8 *)(*plVar16 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = FUN_01780344(uVar17,0);
        lVar7 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
        if (lVar13 == lVar7) {
          uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          __dest = local_a8;
          lVar13 = local_b0;
          uVar17 = local_c0;
          uVar9 = FUN_02644218(uVar9,local_80,local_c0,0);
          uVar15 = FUN_017b4f64(uVar9,**(undefined8 **)
                                        (*(long *)
                                          Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                        + 0xb8),0);
          if ((uVar15 & 1) == 0) {
            uVar9 = FUN_0264a664(uVar9,0);
            pvVar6 = local_b8;
            lVar7 = *(long *)(*plVar16 + 0x10);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
            }
            pvVar14 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
            memcpy(pvVar18,pvVar14,__n);
          }
          else {
            memset(pvVar6,0,__n);
            memcpy(__dest,pvVar6,__n);
            memcpy(pvVar18,__dest,__n);
            pvVar6 = local_b8;
          }
        }
        else {
          uVar17 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          pvVar6 = local_b8;
          uVar17 = FUN_01780344(uVar17,0);
          lVar13 = local_b0;
          uVar9 = FUN_01780344(*(undefined8 *)(*plVar16 + 8),0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_0264bd14(uVar17,uVar9,0);
          __dest = local_a8;
          if ((uVar15 & 1) == 0) {
            uVar17 = *(undefined8 *)(*plVar16 + 8);
            lVar13 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar16 = (long *)FUN_01780344(uVar17,0);
            uVar17 = thunk_FUN_00d48444(PTR_DAT_033f4040);
            if (plVar16 == (long *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar17 = thunk_FUN_00d48444(PTR_DAT_033f4040);
              uVar9 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
            }
            uVar10 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                       );
            uVar17 = FUN_01600424(uVar17,uVar9,uVar10,0);
            thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
            lVar13 = thunk_FUN_00d62348();
            if (lVar13 != 0) {
              FUN_017a9608(lVar13,uVar17,0);
              uVar17 = thunk_FUN_00d48444(StringLiteral_2908);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(lVar13,uVar17);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          uVar17 = local_c0;
          local_70 = FUN_02644218(uVar9,local_80,local_c0,0);
          local_a0 = &local_70;
          puVar11 = *(undefined8 **)(*plVar16 + 0x18);
          pvStack_98 = __dest;
          (*(code *)puVar11[2])(*puVar11,puVar11,0,&local_a0,__dest);
          pvVar18 = __dest;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    __dest = local_a8;
    lVar13 = FUN_01780344(uVar17,0);
    lVar7 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar13 == lVar7) {
      uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      lVar13 = local_b0;
      pvVar6 = local_b8;
      uVar17 = local_c0;
      uVar19 = FUN_02644b48(uVar9,local_80,local_c0,0);
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,uVar19);
      uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&local_a0);
      lVar7 = *(long *)(*plVar16 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
    }
    else {
      uVar17 = *(undefined8 *)(*plVar16 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_01780344(uVar17,0);
      lVar7 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
      if (lVar13 == lVar7) {
        uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
        lVar13 = local_b0;
        pvVar6 = local_b8;
        uVar17 = local_c0;
        uVar3 = FUN_02644a3c(uVar9,local_80,local_c0,0);
        local_a0 = (undefined8 *)(CONCAT71(local_a0._1_7_,uVar3) & 0xffffffffffffff01);
        uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&local_a0);
        lVar7 = *(long *)(*plVar16 + 0x10);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c(lVar7);
        }
        pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
      }
      else {
        uVar17 = *(undefined8 *)(*plVar16 + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = FUN_01780344(uVar17,0);
        lVar7 = FUN_01780344(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                             ,0);
        if (lVar13 == lVar7) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)PTR_DAT_033f4380,0);
          lVar13 = local_b0;
          pvVar6 = local_b8;
          uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          uVar17 = local_c0;
          uVar3 = FUN_02644930(uVar9,local_80,local_c0,0);
          local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,uVar3);
          uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,&local_a0);
          lVar7 = *(long *)(*plVar16 + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
          }
          pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
        }
        else {
          uVar17 = *(undefined8 *)(*plVar16 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar13 = FUN_01780344(uVar17,0);
          lVar7 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
          if (lVar13 == lVar7) {
            uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
            lVar13 = local_b0;
            pvVar6 = local_b8;
            uVar17 = local_c0;
            uVar3 = FUN_02644930(uVar9,local_80,local_c0,0);
            local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,uVar3);
            uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7239,&local_a0);
            lVar7 = *(long *)(*plVar16 + 0x10);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
            }
            pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
          }
          else {
            uVar17 = *(undefined8 *)(*plVar16 + 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = FUN_01780344(uVar17,0);
            lVar7 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
            if (lVar13 == lVar7) {
              uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
              lVar13 = local_b0;
              pvVar6 = local_b8;
              uVar17 = local_c0;
              uVar4 = FUN_02644824(uVar9,local_80,local_c0,0);
              local_a0 = (undefined8 *)CONCAT62(local_a0._2_6_,uVar4);
              uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Data_Common_UInt32Storage_Aggregate__,
                                         &local_a0);
              lVar7 = *(long *)(*plVar16 + 0x10);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
              }
              pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
            }
            else {
              uVar17 = *(undefined8 *)(*plVar16 + 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar13 = FUN_01780344(uVar17,0);
              lVar7 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              if (lVar13 == lVar7) {
                uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
                lVar13 = local_b0;
                pvVar6 = local_b8;
                uVar17 = local_c0;
                local_a0 = (undefined8 *)FUN_02644718(uVar9,local_80,local_c0,0);
                uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                            OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo,
                                           &local_a0);
                lVar7 = *(long *)(*plVar16 + 0x10);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c(lVar7);
                }
                pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
              }
              else {
                uVar17 = *(undefined8 *)(*plVar16 + 8);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar13 = FUN_01780344(uVar17,0);
                lVar7 = FUN_01780344(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                     ,0);
                if (lVar13 == lVar7) {
                  uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
                  lVar13 = local_b0;
                  pvVar6 = local_b8;
                  uVar17 = local_c0;
                  uVar19 = FUN_02644600(uVar9,local_80,local_c0,0);
                  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,uVar19);
                  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                              System_Runtime_InteropServices_InAttribute_TypeInfo,
                                             &local_a0);
                  lVar7 = *(long *)(*plVar16 + 0x10);
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                  }
                  pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
                }
                else {
                  uVar17 = *(undefined8 *)(*plVar16 + 8);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar13 = FUN_01780344(uVar17,0);
                  lVar7 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0
                                      );
                  if (lVar13 == lVar7) {
                    uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
                    lVar13 = local_b0;
                    pvVar6 = local_b8;
                    uVar17 = local_c0;
                    local_a0 = (undefined8 *)FUN_026444e8(uVar9,local_80,local_c0,0);
                    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78,&local_a0);
                    lVar7 = *(long *)(*plVar16 + 0x10);
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c(lVar7);
                    }
                    pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
                  }
                  else {
                    uVar17 = *(undefined8 *)(*plVar16 + 8);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar13 = local_b0;
                    lVar7 = FUN_01780344(uVar17,0);
                    lVar8 = FUN_01780344(*(undefined8 *)
                                          Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                    if (lVar7 != lVar8) {
                      memset(pvVar6,0,__n);
                      memcpy(__dest,pvVar6,__n);
                      pvVar6 = local_b8;
                      memcpy(local_b8,__dest,__n);
                      uVar17 = local_c0;
                      goto LAB_010a7ddc;
                    }
                    uVar9 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
                    pvVar6 = local_b8;
                    uVar17 = local_c0;
                    uVar4 = FUN_026443dc(uVar9,local_80,local_c0,0);
                    local_a0 = (undefined8 *)CONCAT62(local_a0._2_6_,uVar4);
                    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                Newtonsoft_Json_JsonReader_State_TypeInfo,&local_a0)
                    ;
                    lVar7 = *(long *)(*plVar16 + 0x10);
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c(lVar7);
                    }
                    pvVar18 = (void *)FUN_00da5060(uVar9,lVar7,__dest);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(pvVar6,pvVar18,__n);
LAB_010a7ddc:
  thunk_FUN_0264e480(lVar13,uVar17,0);
  memcpy(__dest,pvVar6,__n);
  memcpy(local_d0,__dest,__n);
  if (*(long *)(local_c8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


