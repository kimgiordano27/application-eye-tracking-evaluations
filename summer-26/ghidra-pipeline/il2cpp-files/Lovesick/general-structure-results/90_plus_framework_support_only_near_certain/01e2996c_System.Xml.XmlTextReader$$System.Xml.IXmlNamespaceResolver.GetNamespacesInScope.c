/*
FUNCTION_NAME: System.Xml.XmlTextReader$$System.Xml.IXmlNamespaceResolver.GetNamespacesInScope
ENTRY_POINT: 01e2996c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 258
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void System_Xml_XmlTextReader__System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x21;
  uint *puVar9;
  long unaff_x22;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(unaff_x22 + 0x100);
  puVar6 = *(undefined8 **)(unaff_x19 + 0x6f8);
  plVar7 = *(long **)(unaff_x20 + 0xf98);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0xb96) = 1;
  }
  plVar2 = (long *)FUN_00da4fb8(*puVar10,0x100);
  uVar8 = *puVar6;
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(*plVar7);
  }
  lVar3 = FUN_01780344(uVar8,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_01e2a364:
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  puVar9 = (uint *)(plVar2 + 3);
  if (0x86 < *puVar9) {
    plVar2[0x8a] = lVar3;
    lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_01e2a364;
    puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (7 < *puVar9) {
      plVar2[0xb] = lVar3;
      lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_01e2a364;
      puVar1 = StringLiteral_5228;
      if (0x88 < *puVar9) {
        plVar2[0x8c] = lVar3;
        lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_01e2a364;
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        if (1 < *puVar9) {
          plVar2[5] = lVar3;
          lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_01e2a364;
          puVar1 = StringLiteral_6673;
          if (0x89 < *puVar9) {
            plVar2[0x8d] = lVar3;
            lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_01e2a364;
            puVar1 = 
            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
            if (0x8a < *puVar9) {
              plVar2[0x8e] = lVar3;
              lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_01e2a364;
              puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              if (3 < *puVar9) {
                plVar2[7] = lVar3;
                lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_01e2a364;
                puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                if (4 < *puVar9) {
                  plVar2[8] = lVar3;
                  lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_01e2a364;
                  puVar1 = 
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  if (8 < *puVar9) {
                    plVar2[0xc] = lVar3;
                    lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) goto LAB_01e2a364;
                    puVar1 = 
                    Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                    ;
                    if (0x8b < *puVar9) {
                      plVar2[0x8f] = lVar3;
                      lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar4 == 0)) goto LAB_01e2a364;
                      puVar1 = 
                      Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                      if (0x8c < *puVar9) {
                        plVar2[0x90] = lVar3;
                        lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0)) goto LAB_01e2a364;
                        if (6 < *puVar9) {
                          plVar2[10] = lVar3;
                          if (lVar3 != 0) {
                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                            if (lVar4 == 0) goto LAB_01e2a364;
                            if (*puVar9 < 3) goto thunk_FUN_00da5194;
                          }
                          puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                          plVar2[6] = lVar3;
                          lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar4 == 0)) goto LAB_01e2a364;
                          uVar5 = *puVar9;
                          if (0x14 < uVar5) {
                            plVar2[0x18] = lVar3;
                            if (lVar3 == 0) {
                              plVar2[9] = 0;
                              plVar2[0xe] = 0;
                              plVar2[0xf] = 0;
                            }
                            else {
                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                              if (lVar4 == 0) goto LAB_01e2a364;
                              if (*puVar9 < 6) goto thunk_FUN_00da5194;
                              plVar2[9] = lVar3;
                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                              if (lVar4 == 0) goto LAB_01e2a364;
                              if (*puVar9 < 0xb) goto thunk_FUN_00da5194;
                              plVar2[0xe] = lVar3;
                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                              if (lVar4 == 0) goto LAB_01e2a364;
                              if (*puVar9 < 0xc) goto thunk_FUN_00da5194;
                              plVar2[0xf] = lVar3;
                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                              if (lVar4 == 0) goto LAB_01e2a364;
                              uVar5 = *puVar9;
                            }
                            puVar1 = Method_System_Collections_Generic_List<RendererList>_Add__;
                            if (0x87 < uVar5) {
                              plVar2[0x8b] = lVar3;
                              lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                                 lVar4 == 0)) goto LAB_01e2a364;
                              uVar5 = *puVar9;
                              if (0x13 < uVar5) {
                                plVar2[0x17] = lVar3;
                                if (lVar3 == 0) {
                                  plVar2[0x16] = 0;
                                }
                                else {
                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                                  if (lVar4 == 0) goto LAB_01e2a364;
                                  if (*puVar9 < 0x13) goto thunk_FUN_00da5194;
                                  plVar2[0x16] = lVar3;
                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                                  if (lVar4 == 0) goto LAB_01e2a364;
                                  uVar5 = *puVar9;
                                }
                                if (0x81 < uVar5) {
                                  plVar2[0x85] = lVar3;
                                  if (lVar3 != 0) {
                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)
                                                              );
                                    if (lVar4 == 0) goto LAB_01e2a364;
                                    uVar5 = *puVar9;
                                  }
                                  if (0x82 < uVar5) {
                                    plVar2[0x86] = lVar3;
                                    if (lVar3 != 0) {
                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                        (*plVar2 + 0x40));
                                      if (lVar4 == 0) goto LAB_01e2a364;
                                      uVar5 = *puVar9;
                                    }
                                    if (0x83 < uVar5) {
                                      plVar2[0x87] = lVar3;
                                      if (lVar3 == 0) {
                                        plVar2[0x83] = 0;
                                        plVar2[0x82] = 0;
                                      }
                                      else {
                                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*plVar2 + 0x40));
                                        if (lVar4 == 0) goto LAB_01e2a364;
                                        if (*puVar9 < 0x80) goto thunk_FUN_00da5194;
                                        plVar2[0x83] = lVar3;
                                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*plVar2 + 0x40));
                                        if (lVar4 == 0) goto LAB_01e2a364;
                                        if (*puVar9 < 0x7f) goto thunk_FUN_00da5194;
                                        plVar2[0x82] = lVar3;
                                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*plVar2 + 0x40));
                                        if (lVar4 == 0) goto LAB_01e2a364;
                                        if (*puVar9 < 0x7e) goto thunk_FUN_00da5194;
                                      }
                                      puVar1 = PTR_DAT_033f3f28;
                                      plVar2[0x81] = lVar3;
                                      lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      if ((lVar3 != 0) &&
                                         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                            (*plVar2 + 0x40)),
                                         lVar4 == 0)) goto LAB_01e2a364;
                                      if (0x7c < *puVar9) {
                                        plVar2[0x80] = lVar3;
                                        if (lVar3 == 0) {
                                          plVar2[0x7f] = 0;
                                        }
                                        else {
                                          lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                            (*plVar2 + 0x40));
                                          if (lVar4 == 0) goto LAB_01e2a364;
                                          if (*puVar9 < 0x7c) goto thunk_FUN_00da5194;
                                          plVar2[0x7f] = lVar3;
                                          lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                            (*plVar2 + 0x40));
                                          if (lVar4 == 0) goto LAB_01e2a364;
                                          if (*puVar9 < 0x7b) goto thunk_FUN_00da5194;
                                        }
                                        puVar1 = StringLiteral_11159;
                                        plVar2[0x7e] = lVar3;
                                        lVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                                        if ((lVar3 != 0) &&
                                           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*plVar2 + 0x40)),
                                           lVar4 == 0)) goto LAB_01e2a364;
                                        uVar5 = *puVar9;
                                        if (0xf < uVar5) {
                                          plVar2[0x13] = lVar3;
                                          if (lVar3 == 0) {
                                            plVar2[0x10] = 0;
                                          }
                                          else {
                                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*plVar2 + 0x40));
                                            if (lVar4 == 0) goto LAB_01e2a364;
                                            if (*puVar9 < 0xd) goto thunk_FUN_00da5194;
                                            plVar2[0x10] = lVar3;
                                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*plVar2 + 0x40));
                                            if (lVar4 == 0) goto LAB_01e2a364;
                                            uVar5 = *puVar9;
                                          }
                                          if (0x17 < uVar5) {
                                            plVar2[0x1b] = lVar3;
                                            if (lVar3 != 0) {
                                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                (*plVar2 + 0x40));
                                              if (lVar4 == 0) goto LAB_01e2a364;
                                              uVar5 = *puVar9;
                                            }
                                            if (0x1b < uVar5) {
                                              plVar2[0x1f] = lVar3;
                                              if (lVar3 != 0) {
                                                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                  (*plVar2 + 0x40));
                                                if (lVar4 == 0) goto LAB_01e2a364;
                                                uVar5 = *puVar9;
                                              }
                                              if (0x84 < uVar5) {
                                                plVar2[0x88] = lVar3;
                                                if (lVar3 != 0) {
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar2 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01e2a364;
                                                  uVar5 = *puVar9;
                                                }
                                                puVar1 = Method_System_TimeSpan_Negate__;
                                                if (0x85 < uVar5) {
                                                  plVar2[0x89] = lVar3;
                                                  lVar3 = *(long *)puVar1;
                                                  if (*(int *)(lVar3 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar3 = *(long *)puVar1;
                                                  }
                                                  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40)), lVar4 == 0)) goto LAB_01e2a364;
                                                  uVar5 = *puVar9;
                                                  if (0xd < uVar5) {
                                                    plVar2[0x11] = lVar3;
                                                    lVar3 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar3 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01e2a364;
                                                  uVar5 = *puVar9;
                                                  }
                                                  if (0x10 < uVar5) {
                                                    plVar2[0x14] = lVar3;
                                                    lVar3 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar3 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01e2a364;
                                                  uVar5 = *puVar9;
                                                  }
                                                  if (0x16 < uVar5) {
                                                    plVar2[0x1a] = lVar3;
                                                    lVar3 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar3 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01e2a364;
                                                  uVar5 = *puVar9;
                                                  if (uVar5 < 0xf) goto thunk_FUN_00da5194;
                                                  }
                                                  plVar2[0x12] = lVar3;
                                                  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 8);
                                                  if (lVar3 != 0) {
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar2 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01e2a364;
                                                    uVar5 = *puVar9;
                                                  }
                                                  if (0x11 < uVar5) {
                                                    plVar2[0x15] = lVar3;
                                                    lVar3 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar3 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01e2a364;
                                                  uVar5 = *puVar9;
                                                  }
                                                  if (0x18 < uVar5) {
                                                    plVar2[0x1c] = lVar3;
                                                    lVar3 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if (lVar3 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01e2a364;
                                                  if (*puVar9 < 10) goto thunk_FUN_00da5194;
                                                  }
                                                  plVar2[0xd] = lVar3;
                                                  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 0x10);
                                                  thunk_FUN_00d8e500();
                                                  if (lVar3 == 0) {
                                                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                    }
                                                    thunk_FUN_00d8e500();
                                                    *(long **)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                              0x10) = plVar2;
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


