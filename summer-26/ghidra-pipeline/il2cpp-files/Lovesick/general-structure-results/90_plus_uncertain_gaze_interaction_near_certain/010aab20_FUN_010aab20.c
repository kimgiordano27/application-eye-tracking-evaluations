/*
FUNCTION_NAME: FUN_010aab20
ENTRY_POINT: 010aab20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 171
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void FUN_010aab20(long param_1,undefined8 param_2,undefined8 *****param_3,long param_4)

{
  undefined8 *****pppppuVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  void *__dest;
  ulong __n;
  undefined8 uVar18;
  long *plVar19;
  undefined8 ****local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_74 [4];
  undefined8 local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  plVar19 = (long *)(param_4 + 0x38);
  lVar17 = *plVar19;
  local_a0 = param_3;
  if (lVar17 == 0) {
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_SerializationInfo_SetType__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                      );
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
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Reflection_FieldInfo_GetFieldFromHandle__);
    lVar17 = *plVar19;
    if (lVar17 == 0) {
      FUN_00d59478(param_4);
      lVar17 = *(long *)(param_4 + 0x38);
    }
  }
  lVar17 = *(long *)(lVar17 + 0x10);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  if (*(int *)(lVar17 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar16 = iVar6 - 0x10;
  }
  else {
    uVar16 = 8;
  }
  __n = (ulong)uVar16;
  __dest = (void *)((long)&local_a0 - (__n + 0xf & 0x1fffffff0));
  local_70 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
  local_98 = &local_70;
  local_88 = local_74;
  puVar15 = *(undefined8 **)*plVar19;
  local_74[0] = 1;
  uStack_90 = param_2;
  (*(code *)puVar15[2])(*puVar15,puVar15,0,&local_98,&local_80);
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar18 = *(undefined8 *)(*plVar19 + 8);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_01780344(uVar18,0);
  puVar5 = Method_System_Xml_ValidateNames_SplitQName__;
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar7 = FUN_0264bd00(uVar18,0);
  uVar18 = *(undefined8 *)(*plVar19 + 8);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  lVar17 = FUN_01780344(uVar18,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    if (lVar17 == lVar8) {
      uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      if (plVar19 == (long *)0x0) goto LAB_010abb10;
      if (*(long *)(*plVar19 + 0x40) ==
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
        puVar12 = (undefined4 *)thunk_FUN_00d624a0();
        FUN_026436a8(uVar18,local_80,*puVar12,0);
        goto LAB_010ab838;
      }
LAB_010abb0c:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    uVar18 = *(undefined8 *)(*plVar19 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar17 = FUN_01780344(uVar18,0);
    lVar8 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
    if (lVar17 == lVar8) {
      uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      if (plVar19 != (long *)0x0) {
        if (*(long *)(*plVar19 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
        goto LAB_010abb0c;
        puVar11 = (undefined1 *)thunk_FUN_00d624a0();
        FUN_02643598(uVar18,local_80,*puVar11,0);
        goto LAB_010ab838;
      }
LAB_010abb10:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar18 = *(undefined8 *)(*plVar19 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar17 = FUN_01780344(uVar18,0);
    lVar8 = FUN_01780344(*(undefined8 *)
                          Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
    if (lVar17 == lVar8) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)Method_System_Reflection_FieldInfo_GetFieldFromHandle__,0);
      uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      plVar3 = (long *)UnityEngine_Texture2D___TypeInfo;
    }
    else {
      uVar18 = *(undefined8 *)(*plVar19 + 8);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar17 = FUN_01780344(uVar18,0);
      lVar8 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
      if (lVar17 != lVar8) {
        uVar18 = *(undefined8 *)(*plVar19 + 8);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = FUN_01780344(uVar18,0);
        lVar8 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        if (lVar17 == lVar8) {
          uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
          lVar8 = *plVar19;
          lVar17 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c(lVar17);
            lVar8 = *plVar19;
          }
          pppppuVar1 = (undefined8 *****)local_a0;
          if (-1 < *(int *)(lVar17 + 0x28)) {
            pppppuVar1 = &local_a0;
          }
          memcpy(__dest,pppppuVar1,__n);
          lVar17 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
          if (plVar19 == (long *)0x0) goto LAB_010abb10;
          if (*(long *)(*plVar19 + 0x40) !=
              *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
          goto LAB_010abb0c;
          puVar9 = (undefined2 *)thunk_FUN_00d624a0();
          FUN_02643378(uVar18,local_80,*puVar9,0);
        }
        else {
          uVar18 = *(undefined8 *)(*plVar19 + 8);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar17 = FUN_01780344(uVar18,0);
          lVar8 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          if (lVar17 == lVar8) {
            uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
            lVar8 = *plVar19;
            lVar17 = *(long *)(lVar8 + 0x10);
            if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
              lVar17 = FUN_00d5941c(lVar17);
              lVar8 = *plVar19;
            }
            pppppuVar1 = (undefined8 *****)local_a0;
            if (-1 < *(int *)(lVar17 + 0x28)) {
              pppppuVar1 = &local_a0;
            }
            memcpy(__dest,pppppuVar1,__n);
            lVar17 = *(long *)(lVar8 + 0x10);
            if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
              lVar17 = FUN_00d5941c();
            }
            plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
            if (plVar19 == (long *)0x0) goto LAB_010abb10;
            if (*(long *)(*plVar19 + 0x40) !=
                *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
            goto LAB_010abb0c;
            puVar15 = (undefined8 *)thunk_FUN_00d624a0();
            FUN_02643268(uVar18,local_80,*puVar15,0);
          }
          else {
            uVar18 = *(undefined8 *)(*plVar19 + 8);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar17 = FUN_01780344(uVar18,0);
            lVar8 = FUN_01780344(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                 ,0);
            if (lVar17 == lVar8) {
              uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
              lVar8 = *plVar19;
              lVar17 = *(long *)(lVar8 + 0x10);
              if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                lVar17 = FUN_00d5941c(lVar17);
                lVar8 = *plVar19;
              }
              pppppuVar1 = (undefined8 *****)local_a0;
              if (-1 < *(int *)(lVar17 + 0x28)) {
                pppppuVar1 = &local_a0;
              }
              memcpy(__dest,pppppuVar1,__n);
              lVar17 = *(long *)(lVar8 + 0x10);
              if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                lVar17 = FUN_00d5941c();
              }
              plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
              if (plVar19 == (long *)0x0) goto LAB_010abb10;
              if (*(long *)(*plVar19 + 0x40) !=
                  *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
              goto LAB_010abb0c;
              puVar12 = (undefined4 *)thunk_FUN_00d624a0();
              FUN_02643158(*puVar12,uVar18,local_80,0);
            }
            else {
              uVar18 = *(undefined8 *)(*plVar19 + 8);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar17 = FUN_01780344(uVar18,0);
              lVar8 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              if (lVar17 == lVar8) {
                uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
                lVar8 = *plVar19;
                lVar17 = *(long *)(lVar8 + 0x10);
                if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                  lVar17 = FUN_00d5941c(lVar17);
                  lVar8 = *plVar19;
                }
                pppppuVar1 = (undefined8 *****)local_a0;
                if (-1 < *(int *)(lVar17 + 0x28)) {
                  pppppuVar1 = &local_a0;
                }
                memcpy(__dest,pppppuVar1,__n);
                lVar17 = *(long *)(lVar8 + 0x10);
                if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                  lVar17 = FUN_00d5941c();
                }
                plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
                if (plVar19 == (long *)0x0) goto LAB_010abb10;
                if (*(long *)(*plVar19 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
                goto LAB_010abb0c;
                puVar15 = (undefined8 *)thunk_FUN_00d624a0();
                FUN_02643048(*puVar15,uVar18,local_80,0);
              }
              else {
                uVar18 = *(undefined8 *)(*plVar19 + 8);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar17 = FUN_01780344(uVar18,0);
                lVar8 = FUN_01780344(*(undefined8 *)
                                      Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                if (lVar17 == lVar8) {
                  uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
                  lVar8 = *plVar19;
                  lVar17 = *(long *)(lVar8 + 0x10);
                  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                    lVar17 = FUN_00d5941c(lVar17);
                    lVar8 = *plVar19;
                  }
                  pppppuVar1 = (undefined8 *****)local_a0;
                  if (-1 < *(int *)(lVar17 + 0x28)) {
                    pppppuVar1 = &local_a0;
                  }
                  memcpy(__dest,pppppuVar1,__n);
                  lVar17 = *(long *)(lVar8 + 0x10);
                  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                    lVar17 = FUN_00d5941c();
                  }
                  plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
                  if (plVar19 == (long *)0x0) goto LAB_010abb10;
                  if (*(long *)(*plVar19 + 0x40) !=
                      *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40))
                  goto LAB_010abb0c;
                  puVar9 = (undefined2 *)thunk_FUN_00d624a0();
                  FUN_02642f38(uVar18,local_80,*puVar9,0);
                }
              }
            }
          }
        }
        goto LAB_010ab838;
      }
      uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      plVar3 = (long *)StringLiteral_7239;
    }
    if (plVar19 == (long *)0x0) goto LAB_010abb10;
    if (*(long *)(*plVar19 + 0x40) != *(long *)(*plVar3 + 0x40)) goto LAB_010abb0c;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    FUN_02643488(uVar18,local_80,*puVar11,0);
    goto LAB_010ab838;
  }
  lVar8 = FUN_01780344(*(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                       ,0);
  if (lVar17 == lVar8) {
    uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
    lVar8 = *plVar19;
    lVar17 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c(lVar17);
      lVar8 = *plVar19;
    }
    pppppuVar1 = (undefined8 *****)local_a0;
    if (-1 < *(int *)(lVar17 + 0x28)) {
      pppppuVar1 = &local_a0;
    }
    memcpy(__dest,pppppuVar1,__n);
    lVar17 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
    if ((plVar19 != (long *)0x0) &&
       (*plVar19 !=
        *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar19);
    }
    FUN_02642e28(uVar18,local_80,plVar19,0);
    goto LAB_010ab838;
  }
  uVar18 = *(undefined8 *)(*plVar19 + 8);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar17 = FUN_01780344(uVar18,0);
  lVar8 = FUN_01780344(*(undefined8 *)
                        Method_System_Runtime_Serialization_SerializationInfo_SetType__,0);
  if (lVar17 == lVar8) {
    uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
    lVar8 = *plVar19;
    lVar17 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c(lVar17);
      lVar8 = *plVar19;
    }
    pppppuVar1 = (undefined8 *****)local_a0;
    if (-1 < *(int *)(lVar17 + 0x28)) {
      pppppuVar1 = &local_a0;
    }
    memcpy(__dest,pppppuVar1,__n);
    lVar17 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    uVar7 = FUN_00da5124(lVar17,__dest);
    if ((uVar7 & 1) != 0) {
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      if (plVar19 == (long *)0x0) goto LAB_010abb10;
      bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__ + 300);
      if ((*(byte *)(*plVar19 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__)) goto LAB_010abb0c;
      lVar17 = plVar19[3];
      goto LAB_010ab75c;
    }
LAB_010ab76c:
    uVar10 = **(undefined8 **)
               (*(long *)
                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
               0xb8);
  }
  else {
    uVar18 = *(undefined8 *)(*plVar19 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar17 = FUN_01780344(uVar18,0);
    lVar8 = FUN_01780344(*(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__,0);
    if (lVar17 == lVar8) {
      uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      uVar7 = FUN_00da5124(lVar17,__dest);
      if ((uVar7 & 1) == 0) goto LAB_010ab76c;
      lVar8 = *plVar19;
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
        lVar8 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      if (plVar19 == (long *)0x0) goto LAB_010abb10;
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                       + 300);
      if ((*(byte *)(*plVar19 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__)
         ) goto LAB_010abb0c;
      lVar17 = plVar19[2];
LAB_010ab75c:
      uVar10 = FUN_026480b0(lVar17,0);
    }
    else {
      uVar18 = *(undefined8 *)Method_UnityEngine_Microphone_Start__;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)(*plVar19 + 8),0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar7 = FUN_0264bd14(uVar18,uVar10,0);
      lVar17 = *plVar19;
      if ((uVar7 & 1) == 0) {
        uVar18 = *(undefined8 *)(lVar17 + 8);
        lVar13 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar19 = (long *)FUN_01780344(uVar18,0);
        uVar18 = thunk_FUN_00d48444(PTR_DAT_033f4788);
        if (plVar19 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar18 = thunk_FUN_00d48444(PTR_DAT_033f4788);
          uVar10 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
        }
        uVar14 = thunk_FUN_00d48444(
                                   Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                   );
        uVar18 = FUN_01600424(uVar18,uVar10,uVar14,0);
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar10 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017a9608(uVar10,uVar18,0);
        uVar18 = thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<ScheduledItem>_Add__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar10,uVar18);
      }
      lVar8 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
        lVar17 = *plVar19;
      }
      pppppuVar1 = (undefined8 *****)local_a0;
      if (-1 < *(int *)(lVar8 + 0x28)) {
        pppppuVar1 = &local_a0;
      }
      memcpy(__dest,pppppuVar1,__n);
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_00d5941c();
      }
      plVar19 = (long *)thunk_FUN_00d61fa0(lVar17,__dest);
      if (plVar19 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo +
                         300);
        if ((*(byte *)(*plVar19 + 300) < bVar2) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo))
        goto LAB_010abb0c;
      }
      uVar10 = thunk_FUN_0264d420(plVar19,0);
      uVar18 = FUN_026480b0(*(undefined8 *)(param_1 + 0x18),0);
    }
  }
  FUN_02642d18(uVar18,local_80,uVar10,0);
LAB_010ab838:
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


