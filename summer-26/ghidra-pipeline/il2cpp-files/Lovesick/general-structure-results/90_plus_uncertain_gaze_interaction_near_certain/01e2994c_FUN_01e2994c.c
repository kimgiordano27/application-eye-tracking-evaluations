/*
FUNCTION_NAME: FUN_01e2994c
ENTRY_POINT: 01e2994c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 258
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void FUN_01e2994c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  puVar3 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  if ((DAT_0377fb96 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(PTR_DAT_033f3f28);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                      );
    thunk_FUN_00d48444(Method_System_TimeSpan_Negate__);
    DAT_0377fb96 = 1;
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0x100);
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_01780344(uVar8,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_01e2a364:
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  puVar9 = (uint *)(plVar4 + 3);
  if (0x86 < *puVar9) {
    plVar4[0x8a] = lVar5;
    lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_01e2a364;
    puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (7 < *puVar9) {
      plVar4[0xb] = lVar5;
      lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_01e2a364;
      puVar1 = StringLiteral_5228;
      if (0x88 < *puVar9) {
        plVar4[0x8c] = lVar5;
        lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_01e2a364;
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        if (1 < *puVar9) {
          plVar4[5] = lVar5;
          lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_01e2a364;
          puVar1 = StringLiteral_6673;
          if (0x89 < *puVar9) {
            plVar4[0x8d] = lVar5;
            lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_01e2a364;
            puVar1 = 
            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
            if (0x8a < *puVar9) {
              plVar4[0x8e] = lVar5;
              lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_01e2a364;
              puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              if (3 < *puVar9) {
                plVar4[7] = lVar5;
                lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_01e2a364;
                puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                if (4 < *puVar9) {
                  plVar4[8] = lVar5;
                  lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)
                     ) goto LAB_01e2a364;
                  puVar1 = 
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  if (8 < *puVar9) {
                    plVar4[0xc] = lVar5;
                    lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_01e2a364;
                    puVar1 = 
                    Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                    ;
                    if (0x8b < *puVar9) {
                      plVar4[0x8f] = lVar5;
                      lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar6 == 0)) goto LAB_01e2a364;
                      puVar1 = 
                      Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                      if (0x8c < *puVar9) {
                        plVar4[0x90] = lVar5;
                        lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_01e2a364;
                        if (6 < *puVar9) {
                          plVar4[10] = lVar5;
                          if (lVar5 != 0) {
                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                            if (lVar6 == 0) goto LAB_01e2a364;
                            if (*puVar9 < 3) goto thunk_FUN_00da5194;
                          }
                          puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                          plVar4[6] = lVar5;
                          lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar6 == 0)) goto LAB_01e2a364;
                          uVar7 = *puVar9;
                          if (0x14 < uVar7) {
                            plVar4[0x18] = lVar5;
                            if (lVar5 == 0) {
                              plVar4[9] = 0;
                              plVar4[0xe] = 0;
                              plVar4[0xf] = 0;
                            }
                            else {
                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                              if (lVar6 == 0) goto LAB_01e2a364;
                              if (*puVar9 < 6) goto thunk_FUN_00da5194;
                              plVar4[9] = lVar5;
                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                              if (lVar6 == 0) goto LAB_01e2a364;
                              if (*puVar9 < 0xb) goto thunk_FUN_00da5194;
                              plVar4[0xe] = lVar5;
                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                              if (lVar6 == 0) goto LAB_01e2a364;
                              if (*puVar9 < 0xc) goto thunk_FUN_00da5194;
                              plVar4[0xf] = lVar5;
                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                              if (lVar6 == 0) goto LAB_01e2a364;
                              uVar7 = *puVar9;
                            }
                            puVar1 = Method_System_Collections_Generic_List<RendererList>_Add__;
                            if (0x87 < uVar7) {
                              plVar4[0x8b] = lVar5;
                              lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                                 lVar6 == 0)) goto LAB_01e2a364;
                              uVar7 = *puVar9;
                              if (0x13 < uVar7) {
                                plVar4[0x17] = lVar5;
                                if (lVar5 == 0) {
                                  plVar4[0x16] = 0;
                                }
                                else {
                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                                  if (lVar6 == 0) goto LAB_01e2a364;
                                  if (*puVar9 < 0x13) goto thunk_FUN_00da5194;
                                  plVar4[0x16] = lVar5;
                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                                  if (lVar6 == 0) goto LAB_01e2a364;
                                  uVar7 = *puVar9;
                                }
                                if (0x81 < uVar7) {
                                  plVar4[0x85] = lVar5;
                                  if (lVar5 != 0) {
                                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              );
                                    if (lVar6 == 0) goto LAB_01e2a364;
                                    uVar7 = *puVar9;
                                  }
                                  if (0x82 < uVar7) {
                                    plVar4[0x86] = lVar5;
                                    if (lVar5 != 0) {
                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                        (*plVar4 + 0x40));
                                      if (lVar6 == 0) goto LAB_01e2a364;
                                      uVar7 = *puVar9;
                                    }
                                    if (0x83 < uVar7) {
                                      plVar4[0x87] = lVar5;
                                      if (lVar5 == 0) {
                                        plVar4[0x83] = 0;
                                        plVar4[0x82] = 0;
                                      }
                                      else {
                                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40));
                                        if (lVar6 == 0) goto LAB_01e2a364;
                                        if (*puVar9 < 0x80) goto thunk_FUN_00da5194;
                                        plVar4[0x83] = lVar5;
                                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40));
                                        if (lVar6 == 0) goto LAB_01e2a364;
                                        if (*puVar9 < 0x7f) goto thunk_FUN_00da5194;
                                        plVar4[0x82] = lVar5;
                                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40));
                                        if (lVar6 == 0) goto LAB_01e2a364;
                                        if (*puVar9 < 0x7e) goto thunk_FUN_00da5194;
                                      }
                                      puVar1 = PTR_DAT_033f3f28;
                                      plVar4[0x81] = lVar5;
                                      lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      if ((lVar5 != 0) &&
                                         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40)),
                                         lVar6 == 0)) goto LAB_01e2a364;
                                      if (0x7c < *puVar9) {
                                        plVar4[0x80] = lVar5;
                                        if (lVar5 == 0) {
                                          plVar4[0x7f] = 0;
                                        }
                                        else {
                                          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40));
                                          if (lVar6 == 0) goto LAB_01e2a364;
                                          if (*puVar9 < 0x7c) goto thunk_FUN_00da5194;
                                          plVar4[0x7f] = lVar5;
                                          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40));
                                          if (lVar6 == 0) goto LAB_01e2a364;
                                          if (*puVar9 < 0x7b) goto thunk_FUN_00da5194;
                                        }
                                        puVar1 = StringLiteral_11159;
                                        plVar4[0x7e] = lVar5;
                                        lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                        if ((lVar5 != 0) &&
                                           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40)),
                                           lVar6 == 0)) goto LAB_01e2a364;
                                        uVar7 = *puVar9;
                                        if (0xf < uVar7) {
                                          plVar4[0x13] = lVar5;
                                          if (lVar5 == 0) {
                                            plVar4[0x10] = 0;
                                          }
                                          else {
                                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40));
                                            if (lVar6 == 0) goto LAB_01e2a364;
                                            if (*puVar9 < 0xd) goto thunk_FUN_00da5194;
                                            plVar4[0x10] = lVar5;
                                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40));
                                            if (lVar6 == 0) goto LAB_01e2a364;
                                            uVar7 = *puVar9;
                                          }
                                          if (0x17 < uVar7) {
                                            plVar4[0x1b] = lVar5;
                                            if (lVar5 != 0) {
                                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                (*plVar4 + 0x40));
                                              if (lVar6 == 0) goto LAB_01e2a364;
                                              uVar7 = *puVar9;
                                            }
                                            if (0x1b < uVar7) {
                                              plVar4[0x1f] = lVar5;
                                              if (lVar5 != 0) {
                                                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                  (*plVar4 + 0x40));
                                                if (lVar6 == 0) goto LAB_01e2a364;
                                                uVar7 = *puVar9;
                                              }
                                              if (0x84 < uVar7) {
                                                plVar4[0x88] = lVar5;
                                                if (lVar5 != 0) {
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*plVar4 + 0x40)
                                                                            );
                                                  if (lVar6 == 0) goto LAB_01e2a364;
                                                  uVar7 = *puVar9;
                                                }
                                                puVar1 = Method_System_TimeSpan_Negate__;
                                                if (0x85 < uVar7) {
                                                  plVar4[0x89] = lVar5;
                                                  lVar5 = *(long *)puVar1;
                                                  if (*(int *)(lVar5 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar5 = *(long *)puVar1;
                                                  }
                                                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40)), lVar6 == 0)) goto LAB_01e2a364;
                                                  uVar7 = *puVar9;
                                                  if (0xd < uVar7) {
                                                    plVar4[0x11] = lVar5;
                                                    lVar5 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar5 != 0) {
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01e2a364;
                                                  uVar7 = *puVar9;
                                                  }
                                                  if (0x10 < uVar7) {
                                                    plVar4[0x14] = lVar5;
                                                    lVar5 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar5 != 0) {
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01e2a364;
                                                  uVar7 = *puVar9;
                                                  }
                                                  if (0x16 < uVar7) {
                                                    plVar4[0x1a] = lVar5;
                                                    lVar5 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar5 != 0) {
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01e2a364;
                                                  uVar7 = *puVar9;
                                                  if (uVar7 < 0xf) goto thunk_FUN_00da5194;
                                                  }
                                                  plVar4[0x12] = lVar5;
                                                  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 8);
                                                  if (lVar5 != 0) {
                                                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    if (lVar6 == 0) goto LAB_01e2a364;
                                                    uVar7 = *puVar9;
                                                  }
                                                  if (0x11 < uVar7) {
                                                    plVar4[0x15] = lVar5;
                                                    lVar5 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar5 != 0) {
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01e2a364;
                                                  uVar7 = *puVar9;
                                                  }
                                                  if (0x18 < uVar7) {
                                                    plVar4[0x1c] = lVar5;
                                                    lVar5 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar5 != 0) {
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01e2a364;
                                                  if (*puVar9 < 10) goto thunk_FUN_00da5194;
                                                  }
                                                  plVar4[0xd] = lVar5;
                                                  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 0x10);
                                                  thunk_FUN_00d8e500();
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                    }
                                                    thunk_FUN_00d8e500();
                                                    *(long **)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                              0x10) = plVar4;
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


