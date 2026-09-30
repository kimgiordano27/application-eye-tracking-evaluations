/*
FUNCTION_NAME: Unity.XR.CoreUtils.CollectionPool<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$GetCollection
ENTRY_POINT: 0115e0e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void Unity_XR_CoreUtils_CollectionPool<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__GetCollection
               (void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 *__dest;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  void *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  void *__dest_00;
  undefined8 uVar11;
  long unaff_x29;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  __dest = auStack_10;
  *(undefined1 **)(unaff_x29 + -0x60) = auStack_20;
  memset(auStack_20,0,8);
  memset(auStack_30,0,8);
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar11 = **(undefined8 **)(unaff_x23 + 0x38);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar3 = (long *)FUN_01780344(uVar11,0);
  if (plVar3 == (long *)0x0) {
LAB_0115e6f8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
  if (*(int *)(*(long *)Method_System_Xml_ValidateNames_SplitQName__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Xml_ValidateNames_SplitQName__);
  }
  uVar4 = FUN_0264bd00(plVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar11 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar5 = (long *)FUN_01780344(uVar11,0);
    *(undefined1 **)(unaff_x29 + -0x70) = __dest;
    *(void **)(unaff_x29 + -0x68) = unaff_x21;
    if (plVar3 == plVar5) {
      uVar2 = FUN_02647ce0();
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,(ulong)uVar2);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          uVar11 = FUN_02647c9c();
          lVar8 = FUN_02642550(uVar11,0);
          if (plVar3 == (long *)0x0) goto LAB_0115e6f8;
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
          goto LAB_0115e700;
          if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_0115e6fc;
          plVar3[uVar4 + 4] = lVar8;
          FUN_026423ac(uVar11,0);
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      lVar8 = *(long *)(*(long *)(unaff_x23 + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
    }
    else {
      uVar11 = *(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      *(long *)(unaff_x29 + -0x78) = unaff_x22;
      plVar5 = (long *)FUN_01780344(uVar11,0);
      if (plVar3 != plVar5) {
                    /* try { // try from 0115e710 to 0125e717 has its CatchHandler @ 0115e780 */
                    /* try { // try from 0115e718 to 0125e75f has its CatchHandler @ 0115e548 */
        uVar11 = thunk_FUN_00d48444(StringLiteral_5480);
        if (plVar3 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar11 = thunk_FUN_00d48444(StringLiteral_5480);
          uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar7 = thunk_FUN_00d48444(
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                  );
                    /* try { // try from 0115e760 to 0125e763 has its CatchHandler @ 0115e778 */
                    /* try { // try from 0115e764 to 0125e767 has its CatchHandler @ 0115e774 */
                    /* try { // try from 0115e768 to 0125e76b has its CatchHandler @ 0115e770 */
                    /* try { // try from 0115e76c to 0125e79f has its CatchHandler @ 0115e548 */
        uVar11 = FUN_01600424(uVar11,uVar10,uVar7,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0115e768 with catch @ 0115e770
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0115e764 with catch @ 0115e774
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0115e760 with catch @ 0115e778
                        */
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar10 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017a9608(uVar10,uVar11,0);
        uVar11 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<long>_get_Count__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar10,uVar11);
      }
      uVar2 = FUN_02647ce0();
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          uVar11 = FUN_02647c9c();
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if ((lVar8 == 0) || (FUN_0264b94c(lVar8,uVar11,0), plVar3 == (long *)0x0))
          goto LAB_0115e6f8;
          lVar6 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar6 == 0) {
LAB_0115e700:
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar4) {
LAB_0115e6fc:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar3[uVar4 + 4] = lVar8;
          FUN_026423ac(uVar11,0);
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      lVar8 = *(long *)(*(long *)(unaff_x23 + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      unaff_x22 = *(long *)(unaff_x29 + -0x78);
    }
    puVar9 = *(undefined1 **)(unaff_x29 + -0x70);
    unaff_x21 = *(void **)(unaff_x29 + -0x68);
    __dest_00 = *(void **)(unaff_x29 + -0x60);
  }
  else {
    uVar11 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar5 = (long *)FUN_01780344(uVar11,0);
    puVar9 = __dest;
    if (plVar3 == plVar5) {
      plVar3 = (long *)FUN_02647270();
    }
    else {
      uVar11 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar5 = (long *)FUN_01780344(uVar11,0);
      if (plVar3 == plVar5) {
        plVar3 = (long *)FUN_02647194();
      }
      else {
        uVar11 = *(undefined8 *)
                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar5 = (long *)FUN_01780344(uVar11,0);
        if (plVar3 == plVar5) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)StringLiteral_11323,0);
          plVar3 = (long *)FUN_02646fdc();
        }
        else {
          uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar5 = (long *)FUN_01780344(uVar11,0);
          if (plVar3 == plVar5) {
            plVar3 = (long *)FUN_026470b8();
          }
          else {
            uVar11 = *(undefined8 *)StringLiteral_5228;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar5 = (long *)FUN_01780344(uVar11,0);
            if (plVar3 == plVar5) {
              plVar3 = (long *)FUN_02646f00();
            }
            else {
              uVar11 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar5 = (long *)FUN_01780344(uVar11,0);
              if (plVar3 == plVar5) {
                plVar3 = (long *)FUN_02646e24();
              }
              else {
                uVar11 = *(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar5 = (long *)FUN_01780344(uVar11,0);
                if (plVar3 == plVar5) {
                  plVar3 = (long *)FUN_02646d48();
                }
                else {
                  uVar11 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar5 = (long *)FUN_01780344(uVar11,0);
                  if (plVar3 == plVar5) {
                    plVar3 = (long *)FUN_02646c6c();
                  }
                  else {
                    uVar11 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar5 = (long *)FUN_01780344(uVar11,0);
                    if (plVar3 != plVar5) {
                      memset(auStack_30,0,8);
                      memcpy(__dest,auStack_30,8);
                      __dest_00 = *(void **)(unaff_x29 + -0x60);
                      goto LAB_0115e69c;
                    }
                    plVar3 = (long *)FUN_02646b90();
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar8 = *(long *)(*(long *)(unaff_x23 + 0x38) + 8);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
    __dest_00 = *(void **)(unaff_x29 + -0x60);
  }
  __dest = (undefined1 *)FUN_00da5060(plVar3,lVar8,puVar9);
LAB_0115e69c:
  memcpy(__dest_00,__dest,8);
  memcpy(puVar9,__dest_00,8);
  memcpy(unaff_x21,puVar9,8);
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


