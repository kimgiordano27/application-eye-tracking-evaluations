/*
FUNCTION_NAME: thunk_FUN_0264d420
ENTRY_POINT: 02650244
PROGRAM: Lovesick-libil2cpp.so
SCORE: 248
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 thunk_FUN_0264d420(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((DAT_03783893 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__);
    thunk_FUN_00d48444(Method_System_Xml_ValidateNames_SplitQName__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventSystem>_IndexOf__);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_5488);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(System_Net_ServicePointScheduler_ConnectionGroup_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(PTR_DAT_033ee7f0);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(StringLiteral_6668);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_8260);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>__ctor__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_IPointableCanvas_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StackFrame>_AddRange__);
    DAT_03783893 = 1;
  }
  if ((param_1 != 0) &&
     (plVar6 = (long *)thunk_FUN_00d93c64(param_1,0),
     puVar3 = Method_System_Xml_ValidateNames_SplitQName__, plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar3 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
    if (plVar6 != (long *)0x0) {
      uVar7 = FUN_0178c0dc(plVar6,0);
      if ((uVar7 & 1) != 0) {
        uVar14 = *(undefined8 *)
                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar8 = (long *)FUN_01780344(uVar14,0);
        if (plVar6 == plVar8) {
          uVar14 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
          lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
          if (lVar12 != 0) {
            uVar14 = FUN_02647b18();
            return uVar14;
          }
        }
        else {
          uVar14 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar8 = (long *)FUN_01780344(uVar14,0);
          if (plVar6 == plVar8) {
            uVar14 = *(undefined8 *)Method_System_Collections_Generic_List<EventSystem>_IndexOf__;
            lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
            if (lVar12 != 0) {
              uVar14 = FUN_02647a3c();
              return uVar14;
            }
          }
          else {
            uVar14 = *(undefined8 *)
                      Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar8 = (long *)FUN_01780344(uVar14,0);
            puVar4 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
            puVar1 = Oculus_Interaction_IPointableCanvas_TypeInfo;
            if (plVar6 == plVar8) {
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02661754(*(undefined8 *)puVar1,0);
              uVar14 = *(undefined8 *)puVar4;
              lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
              if (lVar12 != 0) {
                uVar14 = FUN_02647884();
                return uVar14;
              }
            }
            else {
              uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar8 = (long *)FUN_01780344(uVar14,0);
              if (plVar6 == plVar8) {
                uVar14 = *(undefined8 *)StringLiteral_8260;
                lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
                if (lVar12 != 0) {
                  uVar14 = FUN_02647960();
                  return uVar14;
                }
              }
              else {
                uVar14 = *(undefined8 *)StringLiteral_5228;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar8 = (long *)FUN_01780344(uVar14,0);
                if (plVar6 == plVar8) {
                  uVar14 = *(undefined8 *)System_Net_ServicePointScheduler_ConnectionGroup_TypeInfo;
                  lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
                  if (lVar12 != 0) {
                    uVar14 = FUN_026477a8();
                    return uVar14;
                  }
                }
                else {
                  uVar14 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar8 = (long *)FUN_01780344(uVar14,0);
                  if (plVar6 == plVar8) {
                    uVar14 = *(undefined8 *)PTR_DAT_033ee7f0;
                    lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
                    if (lVar12 != 0) {
                      uVar14 = FUN_026476cc();
                      return uVar14;
                    }
                  }
                  else {
                    uVar14 = *(undefined8 *)
                              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    ;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar8 = (long *)FUN_01780344(uVar14,0);
                    if (plVar6 == plVar8) {
                      uVar14 = *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                      lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
                      if (lVar12 != 0) {
                        uVar14 = FUN_026475f0();
                        return uVar14;
                      }
                    }
                    else {
                      uVar14 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      plVar8 = (long *)FUN_01780344(uVar14,0);
                      if (plVar6 == plVar8) {
                        uVar14 = *(undefined8 *)StringLiteral_5488;
                        lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
                        if (lVar12 != 0) {
                          uVar14 = FUN_02647514();
                          return uVar14;
                        }
                      }
                      else {
                        uVar14 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar8 = (long *)FUN_01780344(uVar14,0);
                        if (plVar6 != plVar8) {
                          return **(undefined8 **)(*(long *)puVar3 + 0xb8);
                        }
                        uVar14 = *(undefined8 *)
                                  Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                        ;
                        lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
                        if (lVar12 != 0) {
                          uVar14 = FUN_02647438();
                          return uVar14;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_1,uVar14);
      }
      uVar14 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar8 = (long *)FUN_01780344(uVar14,0);
      if (plVar6 == plVar8) {
        uVar14 = *(undefined8 *)PTR_DAT_033ea8a0;
        lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
        puVar2 = 
        Method_System_Collections_Generic_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>__ctor__
        ;
        if (lVar12 == 0) {
LAB_0264dd28:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_1,uVar14);
        }
        uVar5 = thunk_FUN_00d93164(param_1,0,0);
        uVar10 = FUN_02642b6c(*(undefined8 *)puVar2);
        uVar14 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        if (DAT_03783ce0 == (code *)0x0) {
          DAT_03783ce0 = (code *)FUN_00da4f14(
                                             "UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)"
                                             );
        }
        uVar14 = (*DAT_03783ce0)((ulong)uVar5,uVar10,uVar14);
        if (0 < (int)uVar5) {
          uVar7 = 0;
          do {
            if (*(uint *)(lVar12 + 0x18) <= uVar7) {
LAB_0264dd20:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar16 = FUN_02642474(*(undefined8 *)(lVar12 + 0x20 + uVar7 * 8));
            if (DAT_03783d70 == (code *)0x0) {
              DAT_03783d70 = (code *)FUN_00da4f14(&DAT_0295d8eb);
            }
            (*DAT_03783d70)(uVar14,uVar7 & 0xffffffff,uVar16);
            FUN_026423ac(uVar16);
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
        FUN_026423ac(uVar10);
      }
      else {
        uVar14 = *(undefined8 *)Method_Meta_XR_MRUtilityKit_Float3X3_get_Item__;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar8 = (long *)FUN_01780344(uVar14,0);
        puVar2 = Method_UnityEngine_Rendering_RenderPipeline_InternalRenderWithRequests__;
        if (plVar6 != plVar8) {
          thunk_FUN_00d48444(
                            Method_UnityEngine_Rendering_RenderPipeline_InternalRenderWithRequests__
                            );
          uVar14 = thunk_FUN_00d48444(puVar2);
          uVar10 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          uVar16 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                     );
          uVar14 = FUN_01600424(uVar14,uVar10,uVar16,0);
          thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
          uVar10 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017a9608(uVar10,uVar14,0);
          uVar14 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcltz_f64__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,uVar14);
        }
        uVar14 = *(undefined8 *)Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__;
        lVar12 = thunk_FUN_00d6225c(param_1,uVar14);
        puVar1 = StringLiteral_6668;
        puVar2 = Method_System_Collections_Generic_List<StackFrame>_AddRange__;
        if (lVar12 == 0) goto LAB_0264dd28;
        uVar5 = thunk_FUN_00d93164(param_1,0,0);
        lVar9 = FUN_00da4fb8(*(undefined8 *)puVar1,(ulong)uVar5);
        uVar10 = FUN_02642b6c(*(undefined8 *)puVar2);
        uVar14 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        if (0 < (int)uVar5) {
          uVar7 = 0;
          do {
            if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_0264dd20;
            lVar15 = *(long *)(lVar12 + 0x20 + uVar7 * 8);
            if (lVar15 == 0) {
              if (lVar9 == 0) goto LAB_0264dd24;
              if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_0264dd20;
              *(undefined8 *)(lVar9 + 0x20 + uVar7 * 8) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            else {
              if ((DAT_03783880 & 1) == 0) {
                thunk_FUN_00d48444(puVar3);
                DAT_03783880 = 1;
              }
              lVar15 = *(long *)(lVar15 + 0x10);
              if (lVar15 == 0) {
                puVar13 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              }
              else {
                puVar13 = (undefined8 *)(lVar15 + 0x18);
              }
              if (lVar9 == 0) goto LAB_0264dd24;
              if ((*(uint *)(lVar9 + 0x18) <= uVar7) ||
                 (*(undefined8 *)(lVar9 + 0x20 + uVar7 * 8) = *puVar13,
                 *(uint *)(lVar12 + 0x18) <= uVar7)) goto LAB_0264dd20;
              lVar15 = *(long *)(lVar12 + 0x20 + uVar7 * 8);
              if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0))
              goto LAB_0264dd24;
              uVar16 = *(undefined8 *)(lVar15 + 0x18);
              uVar11 = FUN_017bc96c(uVar14,uVar16,0);
              if (((uVar11 & 1) != 0) &&
                 (uVar11 = FUN_017b4f64(uVar14,**(undefined8 **)(*(long *)puVar3 + 0xb8),0),
                 uVar14 = uVar16, (uVar11 & 1) == 0)) {
                uVar14 = uVar10;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
        uVar14 = FUN_0264734c(lVar9,uVar14);
        FUN_026423ac(uVar10);
      }
      return uVar14;
    }
  }
LAB_0264dd24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


