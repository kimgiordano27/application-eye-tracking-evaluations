/*
FUNCTION_NAME: MedleyBoss$$Start
ENTRY_POINT: 00f2718c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void MedleyBoss__Start(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  long unaff_x20;
  uint uVar17;
  uint unaff_w27;
  undefined8 in_stack_00000018;
  
  puVar7 = StringLiteral_10110;
  puVar6 = Method_UnityEngine_UIElements_PanelEventHandler_OnPanelDestroyed__;
  puVar5 = Meta_Voice_Logging_LoggerRegistry_<>c__DisplayClass34_0_TypeInfo;
  puVar4 = Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_TypeInfo;
  puVar3 = PTR_DAT_033ea8a0;
  FUN_0160aa4c(param_1,0);
  lVar10 = FUN_00f34e74();
  lVar11 = FUN_00f35494();
  FUN_0160c8e8(param_1,*(undefined8 *)puVar6,0);
  FUN_0160c8e8(param_1,*(undefined8 *)puVar4,0);
  FUN_0160c8c8(param_1,0);
  FUN_0160c8e8(param_1,*(undefined8 *)puVar7,0);
  FUN_0160c8e8(param_1,*(undefined8 *)puVar5,0);
  plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,5);
  puVar3 = System_Data_LikeNode_TypeInfo;
  if (plVar12 == (long *)0x0) {
LAB_00f27dc0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)System_Data_LikeNode_TypeInfo != 0) &&
     (lVar13 = thunk_FUN_00d6225c(*(long *)System_Data_LikeNode_TypeInfo,
                                  *(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
  goto LAB_00f27db4;
  uVar16 = *(uint *)(plVar12 + 3);
  if (uVar16 != 0) {
    plVar12[4] = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar13 == 0) goto LAB_00f27db4;
      uVar16 = *(uint *)(plVar12 + 3);
    }
    puVar3 = System_Linq_Expressions_TypedConstantExpression_TypeInfo;
    if (1 < uVar16) {
      plVar12[5] = lVar11;
      lVar13 = *(long *)puVar3;
      if (lVar13 != 0) {
        lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40));
        if (lVar13 == 0) goto LAB_00f27db4;
        uVar16 = *(uint *)(plVar12 + 3);
      }
      if (2 < uVar16) {
        plVar12[6] = *(long *)puVar3;
        if (lVar11 != 0) {
          lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
          if (lVar13 == 0) goto LAB_00f27db4;
          uVar16 = *(uint *)(plVar12 + 3);
        }
        puVar3 = UnityEngine_UIElements_DefaultEventSystem_Input_TypeInfo;
        if (3 < uVar16) {
          plVar12[7] = lVar11;
          if (*(long *)puVar3 != 0) {
            lVar13 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar12 + 0x40));
            if (lVar13 == 0) goto LAB_00f27db4;
            uVar16 = *(uint *)(plVar12 + 3);
          }
          puVar6 = StringLiteral_2542;
          puVar5 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ParseCommentAsync>d__16>__
          ;
          puVar4 = System_Func<STMAutoDelayData,_string>_TypeInfo;
          if (4 < uVar16) {
            plVar12[8] = *(long *)puVar3;
            uVar14 = FUN_01600844(plVar12,0);
            FUN_0160c8e8(param_1,uVar14,0);
            FUN_0160c8e8(param_1,*(undefined8 *)puVar6,0);
            FUN_0160c8e8(param_1,*(undefined8 *)puVar4,0);
            FUN_0160c8c8(param_1,0);
            FUN_0160c8e8(param_1,*(undefined8 *)puVar5,0);
            plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
            puVar4 = StringLiteral_10578;
            if (plVar12 == (long *)0x0) goto LAB_00f27dc0;
            if ((*(long *)StringLiteral_10578 != 0) &&
               (lVar13 = thunk_FUN_00d6225c(*(long *)StringLiteral_10578,
                                            *(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
LAB_00f27db4:
              uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar14,0);
            }
            uVar16 = *(uint *)(plVar12 + 3);
            if (uVar16 != 0) {
              plVar12[4] = *(long *)puVar4;
              if (lVar11 != 0) {
                lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar13 == 0) goto LAB_00f27db4;
                uVar16 = *(uint *)(plVar12 + 3);
              }
              puVar4 = 
              System_Collections_Generic_IEnumerator<KeyValuePair<string,_Variant>>_TypeInfo;
              if (1 < uVar16) {
                plVar12[5] = lVar11;
                lVar11 = *(long *)puVar4;
                if (lVar11 != 0) {
                  lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                  if (lVar11 == 0) goto LAB_00f27db4;
                  uVar16 = *(uint *)(plVar12 + 3);
                }
                if (2 < uVar16) {
                  plVar12[6] = *(long *)puVar4;
                  if (lVar10 != 0) {
                    lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar11 == 0) goto LAB_00f27db4;
                    uVar16 = *(uint *)(plVar12 + 3);
                  }
                  puVar4 = 
                  Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_EffectMesh_EffectMeshObject>_MoveNext__
                  ;
                  if (3 < uVar16) {
                    plVar12[7] = lVar10;
                    lVar11 = *(long *)puVar4;
                    if (lVar11 != 0) {
                      lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                      if (lVar11 == 0) goto LAB_00f27db4;
                      uVar16 = *(uint *)(plVar12 + 3);
                    }
                    puVar9 = StringLiteral_6104;
                    puVar8 = StringLiteral_4745;
                    puVar7 = StringLiteral_1342;
                    puVar6 = OVRVirtualKeyboard_KeyboardEventListener_TypeInfo;
                    puVar5 = Oculus_Platform_Request<PlatformInitialize>_TypeInfo;
                    if (4 < uVar16) {
                      plVar12[8] = *(long *)puVar4;
                      uVar14 = FUN_01600844(plVar12,0);
                      FUN_0160c8e8(param_1,uVar14,0);
                      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar14 = FUN_00f27dc4(*(undefined8 *)puVar9);
                      uVar14 = FUN_01600424(*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar3,0);
                      FUN_0160c8e8(param_1,uVar14,0);
                      FUN_0160c8e8(param_1,*(undefined8 *)puVar5,0);
                      FUN_0160c8c8(param_1,0);
                      uVar14 = FUN_01600424(*(undefined8 *)
                                             Method_System_Linq_Enumerable_OrderBy<SpriteGlyph,_uint>__
                                            ,lVar10,*(undefined8 *)
                                                     FullSerializer_fsAotCompilationManager_TypeInfo
                                            ,0);
                      FUN_0160c8e8(param_1,uVar14,0);
                      FUN_0160c8e8(param_1,*(undefined8 *)puVar7,0);
                      FUN_0160c8c8(param_1,0);
                      puVar7 = Method_UnityEngine_Component_GetComponent<Camera>__;
                      puVar6 = System_Security_SecurityElement_SecurityAttribute_TypeInfo;
                      puVar5 = System_Collections_Generic_List<DFNode>_TypeInfo;
                      puVar4 = System_Func<EnumMemberAttribute,_string>_TypeInfo;
                      if (unaff_x20 != 0) {
                        uVar16 = *(uint *)(unaff_x20 + 0x18);
                        if (0 < (int)uVar16) {
                          uVar17 = 0;
                          do {
                            if (uVar16 <= uVar17) goto LAB_00f27db0;
                            lVar11 = *(long *)(unaff_x20 + (long)(int)uVar17 * 8 + 0x20);
                            plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                            if (plVar12 == (long *)0x0) goto LAB_00f27dc0;
                            lVar13 = *(long *)puVar6;
                            if ((lVar13 != 0) &&
                               (lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar13 == 0)) goto LAB_00f27db4;
                            if ((int)plVar12[3] == 0) goto LAB_00f27db0;
                            plVar12[4] = *(long *)puVar6;
                            if (*(int *)(*(long *)StringLiteral_4745 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            lVar13 = FUN_00f28198(lVar11);
                            if ((lVar13 != 0) &&
                               (lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar15 == 0)) goto LAB_00f27db4;
                            uVar16 = *(uint *)(plVar12 + 3);
                            if (uVar16 < 2) goto LAB_00f27db0;
                            plVar12[5] = lVar13;
                            if (*(long *)puVar7 != 0) {
                              lVar13 = thunk_FUN_00d6225c(*(long *)puVar7,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 3) goto LAB_00f27db0;
                            plVar12[6] = *(long *)puVar7;
                            if (lVar11 == 0) goto LAB_00f27dc0;
                            lVar13 = *(long *)(lVar11 + 0x30);
                            if (lVar13 != 0) {
                              lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar15 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 4) goto LAB_00f27db0;
                            plVar12[7] = lVar13;
                            lVar13 = *(long *)puVar5;
                            if (lVar13 != 0) {
                              lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 5) goto LAB_00f27db0;
                            plVar12[8] = *(long *)puVar5;
                            lVar11 = *(long *)(lVar11 + 0x38);
                            if (lVar11 != 0) {
                              lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 6) goto LAB_00f27db0;
                            plVar12[9] = lVar11;
                            if (*(long *)puVar4 != 0) {
                              lVar11 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar11 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 7) goto LAB_00f27db0;
                            plVar12[10] = *(long *)puVar4;
                            uVar14 = FUN_01600844(plVar12,0);
                            FUN_0160c8e8(param_1,uVar14,0);
                            uVar16 = *(uint *)(unaff_x20 + 0x18);
                            uVar17 = uVar17 + 1;
                          } while ((int)uVar17 < (int)uVar16);
                        }
                        puVar9 = StringLiteral_10706;
                        puVar8 = StringLiteral_3951;
                        puVar6 = Method_System_Security_Cryptography_Oid_FromOidValue__;
                        puVar5 = System_Xml_Serialization_XmlEnumAttribute_TypeInfo;
                        FUN_0160c8c8(param_1,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)puVar5,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)puVar6,0);
                        FUN_0160c8c8(param_1,0);
                        uVar14 = FUN_01600424(*(undefined8 *)puVar9,lVar10,*(undefined8 *)puVar8,0);
                        FUN_0160c8e8(param_1,uVar14,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)StringLiteral_1342,0);
                        FUN_0160c8c8(param_1,0);
                        puVar8 = StringLiteral_7861;
                        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_u8__;
                        puVar5 = 
                        Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                        ;
                        in_stack_00000018._4_4_ = 0;
                        uVar16 = *(uint *)(unaff_x20 + 0x18);
                        if (0 < (int)uVar16) {
                          do {
                            if (uVar16 <= in_stack_00000018._4_4_) goto LAB_00f27db0;
                            lVar11 = *(long *)(unaff_x20 + (long)(int)in_stack_00000018._4_4_ * 8 +
                                              0x20);
                            plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                            if (plVar12 == (long *)0x0) goto LAB_00f27dc0;
                            lVar13 = *(long *)puVar8;
                            if ((lVar13 != 0) &&
                               (lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar13 == 0)) goto LAB_00f27db4;
                            if ((int)plVar12[3] == 0) goto LAB_00f27db0;
                            plVar12[4] = *(long *)puVar8;
                            lVar13 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
                            if ((lVar13 != 0) &&
                               (lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar15 == 0)) goto LAB_00f27db4;
                            uVar16 = *(uint *)(plVar12 + 3);
                            if (uVar16 < 2) goto LAB_00f27db0;
                            plVar12[5] = lVar13;
                            if (*(long *)Method_Unity_Collections_NativeArray<Vector3>_Copy__ != 0)
                            {
                              lVar13 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Collections_NativeArray<Vector3>_Copy__
                                                  ,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 3) goto LAB_00f27db0;
                            plVar12[6] = *(long *)
                                          Method_Unity_Collections_NativeArray<Vector3>_Copy__;
                            if (lVar11 == 0) goto LAB_00f27dc0;
                            lVar13 = *(long *)(lVar11 + 0x38);
                            if (lVar13 != 0) {
                              lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar15 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 4) goto LAB_00f27db0;
                            plVar12[7] = lVar13;
                            if (*(long *)puVar3 != 0) {
                              lVar13 = thunk_FUN_00d6225c(*(long *)puVar3,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 5) goto LAB_00f27db0;
                            plVar12[8] = *(long *)puVar3;
                            uVar14 = FUN_01600844(plVar12,0);
                            FUN_0160c8e8(param_1,uVar14,0);
                            plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                            if (plVar12 == (long *)0x0) goto LAB_00f27dc0;
                            if ((*(long *)PTR_DAT_033f3c10 != 0) &&
                               (lVar13 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f3c10,
                                                            *(undefined8 *)(*plVar12 + 0x40)),
                               lVar13 == 0)) goto LAB_00f27db4;
                            if ((int)plVar12[3] == 0) goto LAB_00f27db0;
                            plVar12[4] = *(long *)PTR_DAT_033f3c10;
                            if (*(int *)(*(long *)StringLiteral_4745 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            lVar13 = FUN_00f28198(lVar11);
                            if ((lVar13 != 0) &&
                               (lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar15 == 0)) goto LAB_00f27db4;
                            uVar16 = *(uint *)(plVar12 + 3);
                            if (uVar16 < 2) goto LAB_00f27db0;
                            plVar12[5] = lVar13;
                            if (*(long *)puVar7 != 0) {
                              lVar13 = thunk_FUN_00d6225c(*(long *)puVar7,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 3) goto LAB_00f27db0;
                            plVar12[6] = *(long *)puVar7;
                            lVar13 = *(long *)(lVar11 + 0x30);
                            if (lVar13 != 0) {
                              lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar15 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 4) goto LAB_00f27db0;
                            plVar12[7] = lVar13;
                            if (*(long *)
                                 Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                                != 0) {
                              lVar13 = thunk_FUN_00d6225c(*(long *)
                                                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                                                  ,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 5) goto LAB_00f27db0;
                            plVar12[8] = *(long *)
                                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                            ;
                            lVar13 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
                            if ((lVar13 != 0) &&
                               (lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar15 == 0)) goto LAB_00f27db4;
                            uVar16 = *(uint *)(plVar12 + 3);
                            if (uVar16 < 6) goto LAB_00f27db0;
                            plVar12[9] = lVar13;
                            if (*(long *)puVar4 != 0) {
                              lVar13 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 7) goto LAB_00f27db0;
                            plVar12[10] = *(long *)puVar4;
                            uVar14 = FUN_01600844(plVar12,0);
                            FUN_0160c8e8(param_1,uVar14,0);
                            plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                            if (plVar12 == (long *)0x0) goto LAB_00f27dc0;
                            lVar13 = *(long *)puVar6;
                            if ((lVar13 != 0) &&
                               (lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar13 == 0)) goto LAB_00f27db4;
                            uVar16 = *(uint *)(plVar12 + 3);
                            if (uVar16 == 0) goto LAB_00f27db0;
                            plVar12[4] = *(long *)puVar6;
                            lVar11 = *(long *)(lVar11 + 0x38);
                            if (lVar11 != 0) {
                              lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 2) goto LAB_00f27db0;
                            plVar12[5] = lVar11;
                            lVar11 = *(long *)puVar5;
                            if (lVar11 != 0) {
                              lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar11 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 3) goto LAB_00f27db0;
                            plVar12[6] = *(long *)puVar5;
                            lVar11 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
                            if ((lVar11 != 0) &&
                               (lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar13 == 0)) goto LAB_00f27db4;
                            uVar16 = *(uint *)(plVar12 + 3);
                            if (uVar16 < 4) goto LAB_00f27db0;
                            plVar12[7] = lVar11;
                            if (*(long *)puVar3 != 0) {
                              lVar11 = thunk_FUN_00d6225c(*(long *)puVar3,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar11 == 0) goto LAB_00f27db4;
                              uVar16 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar16 < 5) goto LAB_00f27db0;
                            plVar12[8] = *(long *)puVar3;
                            uVar14 = FUN_01600844(plVar12,0);
                            FUN_0160c8e8(param_1,uVar14,0);
                            FUN_0160c8c8(param_1,0);
                            in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
                            uVar16 = *(uint *)(unaff_x20 + 0x18);
                          } while ((int)in_stack_00000018._4_4_ < (int)uVar16);
                        }
                        puVar1 = (undefined8 *)StringLiteral_14253;
                        puVar2 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f32__;
                        puVar5 = 
                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRReferencePoint,_ARReferencePoint>_get_trackableId__
                        ;
                        puVar4 = 
                        System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo
                        ;
                        puVar3 = 
                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                        ;
                        FUN_0160c8e8(param_1,*(undefined8 *)
                                              System_Xml_Serialization_XmlEnumAttribute_TypeInfo,0);
                        puVar6 = Method_System_Security_Cryptography_Oid_FromOidValue__;
                        FUN_0160c8e8(param_1,*(undefined8 *)
                                              Method_System_Security_Cryptography_Oid_FromOidValue__
                                     ,0);
                        FUN_0160c8c8(param_1,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)puVar3,0);
                        if ((unaff_w27 & 1) == 0) {
                          puVar1 = (undefined8 *)puVar5;
                          puVar2 = (undefined8 *)puVar4;
                        }
                        uVar14 = FUN_01600424(*puVar2,lVar10,*puVar1,0);
                        FUN_0160c8e8(param_1,uVar14,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)puVar6,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)StringLiteral_2542,0);
                        FUN_0160c8e8(param_1,*(undefined8 *)
                                              System_Func<STMAutoDelayData,_string>_TypeInfo,0);
                        (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
                        return;
                      }
                      goto LAB_00f27dc0;
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
LAB_00f27db0:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


