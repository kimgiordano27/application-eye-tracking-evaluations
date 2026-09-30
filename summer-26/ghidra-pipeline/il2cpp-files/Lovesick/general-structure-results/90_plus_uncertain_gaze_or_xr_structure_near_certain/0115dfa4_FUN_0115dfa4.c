/*
FUNCTION_NAME: FUN_0115dfa4
ENTRY_POINT: 0115dfa4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_0115dfa4(undefined8 param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 *__dest;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong __n;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_90 [8];
  long local_88;
  undefined1 *local_80;
  void *pvStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar10 = *(long *)(param_3 + 0x38);
  if (lVar10 == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                      );
    thunk_FUN_00d48444(Method_System_Xml_ValidateNames_SplitQName__);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_11323);
    lVar10 = *(long *)(param_3 + 0x38);
    if (lVar10 == 0) {
      FUN_00d59478(param_3);
      lVar10 = *(long *)(param_3 + 0x38);
    }
  }
  lVar10 = *(long *)(lVar10 + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0x28) < 0) {
    iVar2 = thunk_FUN_00d42afc();
    uVar3 = iVar2 - 0x10;
  }
  else {
    uVar3 = 8;
  }
  __n = (ulong)uVar3;
  uVar11 = __n + 0xf & 0x1fffffff0;
  __dest = auStack_90 + -uVar11;
  puVar4 = __dest + -uVar11;
  local_70 = puVar4;
  memset(puVar4,0,__n);
  puVar4 = puVar4 + -uVar11;
  memset(puVar4,0,__n);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar14 = **(undefined8 **)(param_3 + 0x38);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar5 = (long *)FUN_01780344(uVar14,0);
  if (plVar5 == (long *)0x0) {
LAB_0115e6f8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar11 = FUN_0264bd00(plVar5,0);
  if ((uVar11 & 1) == 0) {
    uVar14 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar14,0);
    local_80 = __dest;
    pvStack_78 = param_2;
    if (plVar5 == plVar6) {
      uVar3 = FUN_02647ce0(param_1,0);
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,(ulong)uVar3);
      if (0 < (int)uVar3) {
        uVar11 = 0;
        do {
          uVar14 = FUN_02647c9c(param_1,uVar11 & 0xffffffff,0);
          lVar10 = FUN_02642550(uVar14,0);
          if (plVar5 == (long *)0x0) goto LAB_0115e6f8;
          if ((lVar10 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_0115e700;
          if (*(uint *)(plVar5 + 3) <= uVar11) goto LAB_0115e6fc;
          plVar5[uVar11 + 4] = lVar10;
          FUN_026423ac(uVar14,0);
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      puVar12 = local_80;
      param_2 = pvStack_78;
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c(lVar10);
        puVar12 = local_80;
        param_2 = pvStack_78;
      }
    }
    else {
      uVar14 = *(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_88 = lVar7;
      plVar6 = (long *)FUN_01780344(uVar14,0);
      if (plVar5 != plVar6) {
        uVar14 = thunk_FUN_00d48444(StringLiteral_5480);
        if (plVar5 == (long *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar14 = thunk_FUN_00d48444(StringLiteral_5480);
          uVar13 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        uVar9 = thunk_FUN_00d48444(
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                  );
        uVar14 = FUN_01600424(uVar14,uVar13,uVar9,0);
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar13 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017a9608(uVar13,uVar14,0);
        uVar14 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<long>_get_Count__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,uVar14);
      }
      uVar3 = FUN_02647ce0(param_1,0);
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__
                                    ,(ulong)uVar3);
      puVar1 = 
      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__;
      if (0 < (int)uVar3) {
        uVar11 = 0;
        do {
          uVar14 = FUN_02647c9c(param_1,uVar11 & 0xffffffff,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if ((lVar7 == 0) || (FUN_0264b94c(lVar7,uVar14,0), plVar5 == (long *)0x0))
          goto LAB_0115e6f8;
          lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar10 == 0) {
LAB_0115e700:
            uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar14,0);
          }
          if (*(uint *)(plVar5 + 3) <= uVar11) {
LAB_0115e6fc:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar5[uVar11 + 4] = lVar7;
          FUN_026423ac(uVar14,0);
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      puVar12 = local_80;
      param_2 = pvStack_78;
      lVar7 = local_88;
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c(lVar10);
        puVar12 = local_80;
        param_2 = pvStack_78;
        lVar7 = local_88;
      }
    }
  }
  else {
    uVar14 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar14,0);
    puVar12 = __dest;
    if (plVar5 == plVar6) {
      plVar5 = (long *)FUN_02647270(param_1,0);
    }
    else {
      uVar14 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar6 = (long *)FUN_01780344(uVar14,0);
      if (plVar5 == plVar6) {
        plVar5 = (long *)FUN_02647194(param_1,0);
      }
      else {
        uVar14 = *(undefined8 *)
                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar14,0);
        if (plVar5 == plVar6) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)StringLiteral_11323,0);
          plVar5 = (long *)FUN_02646fdc(param_1,0);
        }
        else {
          uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar6 = (long *)FUN_01780344(uVar14,0);
          if (plVar5 == plVar6) {
            plVar5 = (long *)FUN_026470b8(param_1,0);
          }
          else {
            uVar14 = *(undefined8 *)StringLiteral_5228;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar6 = (long *)FUN_01780344(uVar14,0);
            if (plVar5 == plVar6) {
              plVar5 = (long *)FUN_02646f00(param_1,0);
            }
            else {
              uVar14 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar6 = (long *)FUN_01780344(uVar14,0);
              if (plVar5 == plVar6) {
                plVar5 = (long *)FUN_02646e24(param_1,0);
              }
              else {
                uVar14 = *(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar6 = (long *)FUN_01780344(uVar14,0);
                if (plVar5 == plVar6) {
                  plVar5 = (long *)FUN_02646d48(param_1,0);
                }
                else {
                  uVar14 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar6 = (long *)FUN_01780344(uVar14,0);
                  if (plVar5 == plVar6) {
                    plVar5 = (long *)FUN_02646c6c(param_1,0);
                  }
                  else {
                    uVar14 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar6 = (long *)FUN_01780344(uVar14,0);
                    if (plVar5 != plVar6) {
                      memset(puVar4,0,__n);
                      memcpy(__dest,puVar4,__n);
                      puVar4 = local_70;
                      goto LAB_0115e69c;
                    }
                    plVar5 = (long *)FUN_02646b90(param_1,0);
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c(lVar10);
    }
  }
  puVar4 = local_70;
  __dest = (undefined1 *)FUN_00da5060(plVar5,lVar10,puVar12);
LAB_0115e69c:
  memcpy(puVar4,__dest,__n);
  memcpy(puVar12,puVar4,__n);
  memcpy(param_2,puVar12,__n);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


