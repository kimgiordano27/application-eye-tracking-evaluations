/*
FUNCTION_NAME: Newtonsoft.Json.JsonPosition$$BuildPath
ENTRY_POINT: 0170338c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 264
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonPosition__BuildPath(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  lVar5 = FUN_01780344(*param_1,0);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0)) {
LAB_01703868:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  puVar1 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
  if (2 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[6] = lVar5;
    lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
    goto LAB_01703868;
    puVar1 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
    if (3 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[7] = lVar5;
      lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
      goto LAB_01703868;
      puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      if (4 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[8] = lVar5;
        lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
        goto LAB_01703868;
        puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (5 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[9] = lVar5;
          lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
          goto LAB_01703868;
          puVar1 = StringLiteral_5228;
          if (6 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[10] = lVar5;
            lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
            goto LAB_01703868;
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
            if (7 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xb] = lVar5;
              lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
              goto LAB_01703868;
              puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
              if (8 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xc] = lVar5;
                lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0
                   )) goto LAB_01703868;
                puVar1 = StringLiteral_6673;
                if (9 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xd] = lVar5;
                  lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar6 == 0)) goto LAB_01703868;
                  puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                  if (10 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xe] = lVar5;
                    lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar6 == 0)) goto LAB_01703868;
                    puVar1 = 
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    ;
                    if (0xb < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0xf] = lVar5;
                      lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar6 == 0)) goto LAB_01703868;
                      puVar1 = 
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      ;
                      if (0xc < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x10] = lVar5;
                        lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar6 == 0)) goto LAB_01703868;
                        puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                        if (0xd < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x11] = lVar5;
                          lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar6 == 0)) goto LAB_01703868;
                          puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                          if (0xe < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x12] = lVar5;
                            lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar6 == 0)) goto LAB_01703868;
                            puVar1 = Method_System_Collections_Generic_List<RendererList>_Add__;
                            if (0xf < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x13] = lVar5;
                              lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar6 == 0
                                 )) goto LAB_01703868;
                              if (0x10 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x14] = lVar5;
                                lVar5 = FUN_01780344(*unaff_x22,0);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar6 == 0)) goto LAB_01703868;
                                puVar1 = 
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                                ;
                                if (0x11 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x15] = lVar5;
                                  lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                  if ((lVar5 != 0) &&
                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar6 == 0)) goto LAB_01703868;
                                  if (0x12 < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x16] = lVar5;
                                    puVar1 = PTR_DAT_033ed430;
                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
                                    puVar4 = 
                                    Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                                    ;
                                    puVar3 = 
                                    Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                    ;
                                    puVar2 = 
                                    UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_TypeInfo
                                    ;
                                    uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
                                    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = uVar7;
                                    uVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,0x41);
                                    FUN_016a34e8(uVar7,*(undefined8 *)puVar2,0);
                                    lVar6 = *(long *)(*unaff_x21 + 0xb8);
                                    *(undefined8 *)(lVar6 + 0x18) = uVar7;
                                    lVar5 = *(long *)puVar4;
                                    if (*(int *)(lVar5 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar5 = *(long *)puVar4;
                                      lVar6 = *(long *)(*unaff_x21 + 0xb8);
                                    }
                                    *(undefined8 *)(lVar6 + 0x20) = **(undefined8 **)(lVar5 + 0xb8);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


