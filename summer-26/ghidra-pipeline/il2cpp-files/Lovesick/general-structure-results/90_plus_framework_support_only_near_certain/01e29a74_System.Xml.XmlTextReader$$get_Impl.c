/*
FUNCTION_NAME: System.Xml.XmlTextReader$$get_Impl
ENTRY_POINT: 01e29a74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 218
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Xml_XmlTextReader__get_Impl(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  uint *puVar6;
  
  uVar5 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x20);
  }
  lVar2 = FUN_01780344(uVar5,0);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0)) {
LAB_01e2a364:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  puVar6 = (uint *)(param_1 + 3);
  if (0x86 < *puVar6) {
    param_1[0x8a] = lVar2;
    lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
    goto LAB_01e2a364;
    puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (7 < *puVar6) {
      param_1[0xb] = lVar2;
      lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
      goto LAB_01e2a364;
      puVar1 = StringLiteral_5228;
      if (0x88 < *puVar6) {
        param_1[0x8c] = lVar2;
        lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
        goto LAB_01e2a364;
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        if (1 < *puVar6) {
          param_1[5] = lVar2;
          lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
          goto LAB_01e2a364;
          puVar1 = StringLiteral_6673;
          if (0x89 < *puVar6) {
            param_1[0x8d] = lVar2;
            lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
            goto LAB_01e2a364;
            puVar1 = 
            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
            if (0x8a < *puVar6) {
              param_1[0x8e] = lVar2;
              lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
              goto LAB_01e2a364;
              puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              if (3 < *puVar6) {
                param_1[7] = lVar2;
                lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
                goto LAB_01e2a364;
                puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                if (4 < *puVar6) {
                  param_1[8] = lVar2;
                  lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0
                     )) goto LAB_01e2a364;
                  puVar1 = 
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  if (8 < *puVar6) {
                    param_1[0xc] = lVar2;
                    lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)),
                       lVar3 == 0)) goto LAB_01e2a364;
                    puVar1 = 
                    Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                    ;
                    if (0x8b < *puVar6) {
                      param_1[0x8f] = lVar2;
                      lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)),
                         lVar3 == 0)) goto LAB_01e2a364;
                      puVar1 = 
                      Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                      if (0x8c < *puVar6) {
                        param_1[0x90] = lVar2;
                        lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)),
                           lVar3 == 0)) goto LAB_01e2a364;
                        if (6 < *puVar6) {
                          param_1[10] = lVar2;
                          if (lVar2 != 0) {
                            lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40));
                            if (lVar3 == 0) goto LAB_01e2a364;
                            if (*puVar6 < 3) goto thunk_FUN_00da5194;
                          }
                          puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                          param_1[6] = lVar2;
                          lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if ((lVar2 != 0) &&
                             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40)),
                             lVar3 == 0)) goto LAB_01e2a364;
                          uVar4 = *puVar6;
                          if (0x14 < uVar4) {
                            param_1[0x18] = lVar2;
                            if (lVar2 == 0) {
                              param_1[9] = 0;
                              param_1[0xe] = 0;
                              param_1[0xf] = 0;
                            }
                            else {
                              lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40));
                              if (lVar3 == 0) goto LAB_01e2a364;
                              if (*puVar6 < 6) goto thunk_FUN_00da5194;
                              param_1[9] = lVar2;
                              lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40));
                              if (lVar3 == 0) goto LAB_01e2a364;
                              if (*puVar6 < 0xb) goto thunk_FUN_00da5194;
                              param_1[0xe] = lVar2;
                              lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40));
                              if (lVar3 == 0) goto LAB_01e2a364;
                              if (*puVar6 < 0xc) goto thunk_FUN_00da5194;
                              param_1[0xf] = lVar2;
                              lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40));
                              if (lVar3 == 0) goto LAB_01e2a364;
                              uVar4 = *puVar6;
                            }
                            puVar1 = Method_System_Collections_Generic_List<RendererList>_Add__;
                            if (0x87 < uVar4) {
                              param_1[0x8b] = lVar2;
                              lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                              if ((lVar2 != 0) &&
                                 (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40))
                                 , lVar3 == 0)) goto LAB_01e2a364;
                              uVar4 = *puVar6;
                              if (0x13 < uVar4) {
                                param_1[0x17] = lVar2;
                                if (lVar2 == 0) {
                                  param_1[0x16] = 0;
                                }
                                else {
                                  lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40))
                                  ;
                                  if (lVar3 == 0) goto LAB_01e2a364;
                                  if (*puVar6 < 0x13) goto thunk_FUN_00da5194;
                                  param_1[0x16] = lVar2;
                                  lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*param_1 + 0x40))
                                  ;
                                  if (lVar3 == 0) goto LAB_01e2a364;
                                  uVar4 = *puVar6;
                                }
                                if (0x81 < uVar4) {
                                  param_1[0x85] = lVar2;
                                  if (lVar2 != 0) {
                                    lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                      (*param_1 + 0x40));
                                    if (lVar3 == 0) goto LAB_01e2a364;
                                    uVar4 = *puVar6;
                                  }
                                  if (0x82 < uVar4) {
                                    param_1[0x86] = lVar2;
                                    if (lVar2 != 0) {
                                      lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                        (*param_1 + 0x40));
                                      if (lVar3 == 0) goto LAB_01e2a364;
                                      uVar4 = *puVar6;
                                    }
                                    if (0x83 < uVar4) {
                                      param_1[0x87] = lVar2;
                                      if (lVar2 == 0) {
                                        param_1[0x83] = 0;
                                        param_1[0x82] = 0;
                                      }
                                      else {
                                        lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                          (*param_1 + 0x40));
                                        if (lVar3 == 0) goto LAB_01e2a364;
                                        if (*puVar6 < 0x80) goto thunk_FUN_00da5194;
                                        param_1[0x83] = lVar2;
                                        lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                          (*param_1 + 0x40));
                                        if (lVar3 == 0) goto LAB_01e2a364;
                                        if (*puVar6 < 0x7f) goto thunk_FUN_00da5194;
                                        param_1[0x82] = lVar2;
                                        lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                          (*param_1 + 0x40));
                                        if (lVar3 == 0) goto LAB_01e2a364;
                                        if (*puVar6 < 0x7e) goto thunk_FUN_00da5194;
                                      }
                                      puVar1 = PTR_DAT_033f3f28;
                                      param_1[0x81] = lVar2;
                                      lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      if ((lVar2 != 0) &&
                                         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                            (*param_1 + 0x40)),
                                         lVar3 == 0)) goto LAB_01e2a364;
                                      if (0x7c < *puVar6) {
                                        param_1[0x80] = lVar2;
                                        if (lVar2 == 0) {
                                          param_1[0x7f] = 0;
                                        }
                                        else {
                                          lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                            (*param_1 + 0x40));
                                          if (lVar3 == 0) goto LAB_01e2a364;
                                          if (*puVar6 < 0x7c) goto thunk_FUN_00da5194;
                                          param_1[0x7f] = lVar2;
                                          lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                            (*param_1 + 0x40));
                                          if (lVar3 == 0) goto LAB_01e2a364;
                                          if (*puVar6 < 0x7b) goto thunk_FUN_00da5194;
                                        }
                                        puVar1 = StringLiteral_11159;
                                        param_1[0x7e] = lVar2;
                                        lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                        if ((lVar2 != 0) &&
                                           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                              (*param_1 + 0x40)),
                                           lVar3 == 0)) goto LAB_01e2a364;
                                        uVar4 = *puVar6;
                                        if (0xf < uVar4) {
                                          param_1[0x13] = lVar2;
                                          if (lVar2 == 0) {
                                            param_1[0x10] = 0;
                                          }
                                          else {
                                            lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                              (*param_1 + 0x40));
                                            if (lVar3 == 0) goto LAB_01e2a364;
                                            if (*puVar6 < 0xd) goto thunk_FUN_00da5194;
                                            param_1[0x10] = lVar2;
                                            lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                              (*param_1 + 0x40));
                                            if (lVar3 == 0) goto LAB_01e2a364;
                                            uVar4 = *puVar6;
                                          }
                                          if (0x17 < uVar4) {
                                            param_1[0x1b] = lVar2;
                                            if (lVar2 != 0) {
                                              lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                (*param_1 + 0x40));
                                              if (lVar3 == 0) goto LAB_01e2a364;
                                              uVar4 = *puVar6;
                                            }
                                            if (0x1b < uVar4) {
                                              param_1[0x1f] = lVar2;
                                              if (lVar2 != 0) {
                                                lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                  (*param_1 + 0x40))
                                                ;
                                                if (lVar3 == 0) goto LAB_01e2a364;
                                                uVar4 = *puVar6;
                                              }
                                              if (0x84 < uVar4) {
                                                param_1[0x88] = lVar2;
                                                if (lVar2 != 0) {
                                                  lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                    (*param_1 + 0x40
                                                                                    ));
                                                  if (lVar3 == 0) goto LAB_01e2a364;
                                                  uVar4 = *puVar6;
                                                }
                                                puVar1 = Method_System_TimeSpan_Negate__;
                                                if (0x85 < uVar4) {
                                                  param_1[0x89] = lVar2;
                                                  lVar2 = *(long *)puVar1;
                                                  if (*(int *)(lVar2 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar2 = *(long *)puVar1;
                                                  }
                                                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                                                  if ((lVar2 != 0) &&
                                                     (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8
                                                                                         *)(*param_1
                                                                                           + 0x40)),
                                                     lVar3 == 0)) goto LAB_01e2a364;
                                                  uVar4 = *puVar6;
                                                  if (0xd < uVar4) {
                                                    param_1[0x11] = lVar2;
                                                    lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar2 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8
                                                                                         *)(*param_1
                                                                                           + 0x40));
                                                      if (lVar3 == 0) goto LAB_01e2a364;
                                                      uVar4 = *puVar6;
                                                    }
                                                    if (0x10 < uVar4) {
                                                      param_1[0x14] = lVar2;
                                                      lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                                 0xb8) + 8);
                                                      if (lVar2 != 0) {
                                                        lVar3 = thunk_FUN_00d6225c(lVar2,*(
                                                  undefined8 *)(*param_1 + 0x40));
                                                  if (lVar3 == 0) goto LAB_01e2a364;
                                                  uVar4 = *puVar6;
                                                  }
                                                  if (0x16 < uVar4) {
                                                    param_1[0x1a] = lVar2;
                                                    lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar2 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8
                                                                                         *)(*param_1
                                                                                           + 0x40));
                                                      if (lVar3 == 0) goto LAB_01e2a364;
                                                      uVar4 = *puVar6;
                                                      if (uVar4 < 0xf) goto thunk_FUN_00da5194;
                                                    }
                                                    param_1[0x12] = lVar2;
                                                    lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar2 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8
                                                                                         *)(*param_1
                                                                                           + 0x40));
                                                      if (lVar3 == 0) goto LAB_01e2a364;
                                                      uVar4 = *puVar6;
                                                    }
                                                    if (0x11 < uVar4) {
                                                      param_1[0x15] = lVar2;
                                                      lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                                 0xb8) + 8);
                                                      if (lVar2 != 0) {
                                                        lVar3 = thunk_FUN_00d6225c(lVar2,*(
                                                  undefined8 *)(*param_1 + 0x40));
                                                  if (lVar3 == 0) goto LAB_01e2a364;
                                                  uVar4 = *puVar6;
                                                  }
                                                  if (0x18 < uVar4) {
                                                    param_1[0x1c] = lVar2;
                                                    lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar2 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8
                                                                                         *)(*param_1
                                                                                           + 0x40));
                                                      if (lVar3 == 0) goto LAB_01e2a364;
                                                      if (*puVar6 < 10) goto thunk_FUN_00da5194;
                                                    }
                                                    param_1[0xd] = lVar2;
                                                    lVar2 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 0x10);
                                                    thunk_FUN_00d8e500();
                                                    if (lVar2 == 0) {
                                                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                        thunk_FUN_00d32864();
                                                      }
                                                      thunk_FUN_00d8e500();
                                                      *(long **)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                                0x10) = param_1;
                                                    }
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
thunk_FUN_00da5194:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


