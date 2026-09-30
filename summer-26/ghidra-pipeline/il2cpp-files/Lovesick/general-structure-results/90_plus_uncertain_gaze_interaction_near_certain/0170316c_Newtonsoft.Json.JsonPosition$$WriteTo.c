/*
FUNCTION_NAME: Newtonsoft.Json.JsonPosition$$WriteTo
ENTRY_POINT: 0170316c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 291
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonPosition__WriteTo(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<LookAtCamera>__);
    thunk_FUN_00d48444(
                      Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(Method_System_Enum_Parse<__Il2CppFullySharedGenericStructType>__);
    thunk_FUN_00d48444(PTR_DAT_033ed430);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(StringLiteral_8260);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_Internal_CopyColorPass_OnCameraCleanup__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    *(undefined1 *)(unaff_x24 + 0x998) = 1;
  }
  uVar5 = FUN_00da4fb8(*unaff_x25,0x100);
  FUN_016a34e8(uVar5,*unaff_x19,0);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar5;
  plVar6 = (long *)FUN_00da4fb8(*unaff_x23,0x13);
  uVar5 = *unaff_x20;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x22);
  }
  lVar7 = FUN_01780344(uVar5,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_01703868:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  puVar1 = Method_SoccerBlocker_HideCrowd__;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    lVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_01703868;
    puVar2 = Method_UnityEngine_GameObject_GetComponentInChildren<LookAtCamera>__;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_01703868;
      puVar2 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_01703868;
        puVar2 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_01703868;
          puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_01703868;
            puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_01703868;
              puVar2 = StringLiteral_5228;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_01703868;
                puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar7;
                  lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_01703868;
                  puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar7;
                    lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_01703868;
                    puVar2 = StringLiteral_6673;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar7;
                      lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_01703868;
                      puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar7;
                        lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_01703868;
                        puVar2 = 
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                        ;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar7;
                          lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                          if ((lVar7 != 0) &&
                             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar8 == 0)) goto LAB_01703868;
                          puVar2 = 
                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                          ;
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar7;
                            lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                            if ((lVar7 != 0) &&
                               (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_01703868;
                            puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                            if (0xd < *(uint *)(plVar6 + 3)) {
                              plVar6[0x11] = lVar7;
                              lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                              if ((lVar7 != 0) &&
                                 (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar8 == 0)) goto LAB_01703868;
                              puVar2 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                              if (0xe < *(uint *)(plVar6 + 3)) {
                                plVar6[0x12] = lVar7;
                                lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                                if ((lVar7 != 0) &&
                                   (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_01703868;
                                puVar2 = Method_System_Collections_Generic_List<RendererList>_Add__;
                                if (0xf < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x13] = lVar7;
                                  lVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                                  if ((lVar7 != 0) &&
                                     (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)
                                                                        (*plVar6 + 0x40)),
                                     lVar8 == 0)) goto LAB_01703868;
                                  if (0x10 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x14] = lVar7;
                                    lVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_01703868;
                                    puVar1 = 
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                                    ;
                                    if (0x11 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x15] = lVar7;
                                      lVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      if ((lVar7 != 0) &&
                                         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar8 == 0)) goto LAB_01703868;
                                      if (0x12 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x16] = lVar7;
                                        puVar1 = PTR_DAT_033ed430;
                                        *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = plVar6;
                                        puVar4 = 
                                        Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                                        ;
                                        puVar3 = 
                                        Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                        ;
                                        puVar2 = 
                                        UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_TypeInfo
                                        ;
                                        uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = uVar5
                                        ;
                                        uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,0x41);
                                        FUN_016a34e8(uVar5,*(undefined8 *)puVar2,0);
                                        lVar8 = *(long *)(*unaff_x21 + 0xb8);
                                        *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                        lVar7 = *(long *)puVar4;
                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar7 = *(long *)puVar4;
                                          lVar8 = *(long *)(*unaff_x21 + 0xb8);
                                        }
                                        *(undefined8 *)(lVar8 + 0x20) =
                                             **(undefined8 **)(lVar7 + 0xb8);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_00da5194();
}


