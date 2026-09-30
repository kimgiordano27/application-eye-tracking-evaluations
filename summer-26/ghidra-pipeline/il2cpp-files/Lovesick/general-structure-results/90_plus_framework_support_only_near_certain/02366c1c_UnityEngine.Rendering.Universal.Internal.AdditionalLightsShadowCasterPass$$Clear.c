/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$Clear
ENTRY_POINT: 02366c1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 195
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02367f94) */
/* WARNING: Removing unreachable block (ram,0x02367f98) */
/* WARNING: Removing unreachable block (ram,0x02368330) */
/* WARNING: Removing unreachable block (ram,0x02367544) */
/* WARNING: Removing unreachable block (ram,0x02367fe0) */
/* WARNING: Removing unreachable block (ram,0x02367900) */
/* WARNING: Removing unreachable block (ram,0x0236834c) */

undefined8
UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__Clear(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  float *pfVar22;
  long unaff_x21;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fStack0000000000000018;
  float fStack0000000000000044;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  
  puVar3 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if ((param_1 & 1) == 0) {
    return 0;
  }
  if (unaff_x21 != 0) {
    uVar8 = FUN_0230bd48();
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if ((lVar9 != 0) &&
       (FUN_01320f6c(lVar9,uVar8,*(undefined8 *)StringLiteral_9754),
       puVar3 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo,
       *(long *)(unaff_x21 + 0x28) != 0)) {
      lVar10 = FUN_0230fea8();
      lVar11 = FUN_0230ffd0();
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_033f5aa8;
      if (lVar12 != 0) {
        FUN_01320e50(lVar12,*(undefined8 *)
                             Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__
                    );
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar6 = Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__;
        if (lVar13 != 0) {
          FUN_01298da0(lVar13,*(undefined8 *)
                               Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                      );
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar14 != 0) {
            FUN_01298da0(lVar14,*(undefined8 *)puVar6);
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar3 = 
            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__;
            if (lVar15 != 0) {
              FUN_01298da0(lVar15,*(undefined8 *)puVar6);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              puVar3 = Method_System_Decimal_DecCalc_VarDecFromR4__;
              if (lVar16 != 0) {
                FUN_01298da0(lVar16,*(undefined8 *)
                                     Method_DG_Tweening_Core_DOTweenComponent_<WaitForKill>d__19_System_Collections_IEnumerator_Reset__
                            );
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_0233e5f4(unaff_x21);
                lVar17 = FUN_0236a0f0();
                puVar23 = (undefined8 *)StringLiteral_6171;
                if (lVar17 != 0) {
                  FUN_01323390(lVar17,&stack0x00000070,
                               *(undefined8 *)System_Xml_Schema_XmlSchemaPatternFacet_TypeInfo);
                  fStack0000000000000044 = 0.0;
                  do {
                    uVar18 = FUN_012b894c(&stack0x000002c0,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary_Enumerator<InternedString,_string>_Dispose__
                                         );
                    if ((uVar18 & 1) == 0) {
                      FUN_012b8948(&stack0x000002c0,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<ARSessionOrigin>__);
                      puVar23 = (undefined8 *)
                                Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
                      ;
                      FUN_0129b5d0(lVar16,&stack0x00000070,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance_OnTransformTweenableVariableUpdated__
                                  );
                      puVar6 = 
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      ;
                      puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
                      fVar25 = DAT_028aa5c8;
                      fVar29 = DAT_028aa158;
                      fVar24 = DAT_028aa038;
                      fStack0000000000000044 = DAT_028aa044;
                      uVar18 = in_stack_000000a0;
                      while( true ) {
                        fVar34 = (float)uVar18;
                        uVar18 = FUN_012bf140(&stack0x000001f0,*(undefined8 *)StringLiteral_4029);
                        if ((uVar18 & 1) == 0) {
                          uVar8 = FUN_0237cafc(Method_UnityEngine_UIElements_UQueryBuilder<VisualElement>_Name__
                                               ,&stack0x000001f0);
                          return uVar8;
                        }
                        FUN_00ca499c(&stack0x00000070,&stack0x000001f0,
                                     *(undefined8 *)StringLiteral_5096);
                        in_stack_000001c8 = in_stack_00000078;
                        in_stack_000001c0 = in_stack_00000070;
                        in_stack_000001d8 = in_stack_00000088;
                        in_stack_000001d0 = in_stack_00000080;
                        in_stack_000001e0 = in_stack_00000090;
                        FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar23);
                        in_stack_000001a8 = in_stack_00000078;
                        in_stack_000001a0 = in_stack_00000070;
                        in_stack_000001b8 = in_stack_00000088;
                        in_stack_000001b0 = in_stack_00000080;
                        uVar8 = in_stack_00000080;
                        fVar26 = (float)FUN_00ca464c(&stack0x000001a0,
                                                     *(undefined8 *)StringLiteral_6171);
                        FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar23);
                        in_stack_000001a8 = in_stack_00000078;
                        in_stack_000001a0 = in_stack_00000070;
                        in_stack_000001b8 = in_stack_00000088;
                        in_stack_000001b0 = in_stack_00000080;
                        lVar10 = FUN_00ca4894(&stack0x000001a0,
                                              *(undefined8 *)
                                               System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo
                                             );
                        if (lVar10 == 0) break;
                        iVar36 = *(int *)(lVar10 + 0x18);
                        if (DAT_0377518c == '\0') {
                          thunk_FUN_00d48444(puVar3);
                          DAT_0377518c = '\x01';
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        fVar33 = (float)iVar36;
                        fVar26 = fVar26 / fVar33;
                        fVar30 = (float)uVar8 / fVar33;
                        fVar34 = fVar34 / fVar33;
                        uVar18 = (ulong)(uint)fVar34;
                        fVar33 = SQRT(fVar34 * fVar34 + fVar26 * fVar26 + fVar30 * fVar30);
                        if (fVar33 <= fVar24) {
                          if (DAT_03774d76 == '\0') {
                            thunk_FUN_00d48444(puVar6);
                            DAT_03774d76 = '\x01';
                          }
                          pfVar22 = *(float **)(*(long *)puVar6 + 0xb8);
                          fVar26 = *pfVar22;
                          fVar30 = pfVar22[1];
                          fVar34 = pfVar22[2];
                        }
                        else {
                          fVar26 = fVar26 / fVar33;
                          fVar30 = fVar30 / fVar33;
                          fVar34 = fVar34 / fVar33;
                        }
                        fVar35 = (float)uVar18;
                        fVar33 = 1.0;
                        if ((_fStack0000000000000018 & 0x100000000) != 0) {
                          FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar23);
                          in_stack_000001a8 = in_stack_00000078;
                          in_stack_000001a0 = in_stack_00000070;
                          in_stack_000001b8 = in_stack_00000088;
                          in_stack_000001b0 = in_stack_00000080;
                          uVar8 = in_stack_00000080;
                          fVar33 = (float)FUN_00ca4b9c(&stack0x000001a0,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulh_laneq_s32__
                                                  );
                          if (DAT_03775508 == '\0') {
                            thunk_FUN_00d48444(puVar3);
                            DAT_03775508 = '\x01';
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          fVar37 = (float)uVar8;
                          uVar18 = (ulong)(uint)(fVar34 * fVar34);
                          fVar27 = SQRT((fVar34 * fVar34 + fVar26 * fVar26 + fVar30 * fVar30) *
                                        (fVar35 * fVar35 + fVar33 * fVar33 + fVar37 * fVar37));
                          fVar31 = 0.0;
                          if (fVar25 <= fVar27) {
                            fVar27 = (fVar34 * fVar35 + fVar26 * fVar33 + fVar30 * fVar37) / fVar27;
                            uVar18 = 0xbf800000;
                            fVar33 = fVar27;
                            if (1.0 < fVar27) {
                              fVar33 = 1.0;
                            }
                            if (fVar27 < -1.0) {
                              fVar33 = -1.0;
                            }
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            dVar28 = acos((double)fVar33);
                            fVar31 = (float)dVar28 * fVar29;
                          }
                          fVar33 = (float)FUN_02302334(fVar31 * fStack0000000000000044,0);
                        }
                        FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar23);
                        in_stack_000001a8 = in_stack_00000078;
                        in_stack_000001a0 = in_stack_00000070;
                        in_stack_000001b8 = in_stack_00000088;
                        in_stack_000001b0 = in_stack_00000080;
                        lVar10 = FUN_00ca4894(&stack0x000001a0,
                                              *(undefined8 *)
                                               System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo
                                             );
                        puVar5 = Method_System_Data_SqlTypes_SqlBoolean_CompareTo__;
                        puVar4 = 
                        Method_UnityEngine_ProBuilder_ProBuilderMesh_GetCoincidentVertices__;
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01323390(lVar10,&stack0x00000070,
                                     *(undefined8 *)
                                      System_Xml_Schema_AllElementsContentValidator_TypeInfo);
                        fVar33 = fVar33 * fStack0000000000000018;
                        in_stack_00000188 = in_stack_00000078;
                        in_stack_00000180 = in_stack_00000070;
                        in_stack_00000190 = in_stack_00000080;
                        while (uVar20 = FUN_012b894c(&stack0x00000180,*(undefined8 *)puVar4),
                              (uVar20 & 1) != 0) {
                          uVar7 = FUN_00ad838c(&stack0x00000180,*(undefined8 *)puVar5);
                          FUN_0132138c(lVar9,uVar7,&stack0x00000130,
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                      );
                          if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          uVar18 = (ulong)(uint)(fVar34 * fVar33 +
                                                *(float *)(in_stack_00000130 + 0x18));
                          FUN_02338f44(fVar26 * fVar33 + *(float *)(in_stack_00000130 + 0x10),
                                       fVar30 * fVar33 + *(float *)(in_stack_00000130 + 0x14),
                                       in_stack_00000130,0);
                        }
                        FUN_012b8948(&stack0x00000180,*(undefined8 *)StringLiteral_2313);
                        puVar23 = (undefined8 *)
                                  Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
                        ;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar17 = FUN_00ca4130(&stack0x000002c0,
                                          *(undefined8 *)
                                           Meta_WitAi_WitRequest_<>c__DisplayClass99_0_TypeInfo);
                    lVar19 = FUN_0236a514(lVar17,lVar10);
                    puVar3 = StringLiteral_6798;
                    FUN_0129a9f4(lVar14,*(undefined8 *)StringLiteral_6798);
                    FUN_0129a9f4(lVar13,*(undefined8 *)puVar3);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_0129b5d0(lVar19,&stack0x00000070,*(undefined8 *)StringLiteral_7364);
                    uVar8 = in_stack_00000070;
                    while (uVar18 = FUN_012bf140(&stack0x00000290,*(undefined8 *)PTR_DAT_033ecec8),
                          (uVar18 & 1) != 0) {
                      FUN_00ca4238(&stack0x00000070,&stack0x00000290,
                                   *(undefined8 *)System_Runtime_Remoting_TypeEntry_TypeInfo);
                      uVar18 = FUN_00ca4338(&stack0x00000270,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                                           );
                      lVar19 = FUN_00ca443c(&stack0x00000270,
                                            *(undefined8 *)
                                             Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider>_get_descriptor__
                                           );
                      iVar36 = *(int *)(lVar9 + 0x18);
                      uVar20 = FUN_0129aa60(lVar13,&stack0x000002d8,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                           );
                      if ((uVar20 & 1) == 0) {
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01299bc0(lVar10,&stack0x000002e0,&stack0x000002dc,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        FUN_0129a054(lVar13,&stack0x000002e8,&stack0x000002e4,
                                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__
                                    );
                        FUN_01299bc0(lVar10,&stack0x000002f0,&stack0x000002ec,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        uVar20 = FUN_0129eff4(lVar14,&stack0x000002f4,&stack0x0000026c,
                                              *(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                        if ((uVar20 & 1) == 0) {
                          iVar1 = (int)fStack0000000000000044 + 1;
                          FUN_01299bc0(lVar10,&stack0x00000304,&stack0x00000300,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          FUN_0129a054(lVar14,&stack0x0000030c,&stack0x00000308,
                                       *(undefined8 *)
                                        Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                          FUN_01299e64(lVar10,&stack0x00000314,&stack0x00000310,
                                       *(undefined8 *)
                                        System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                      );
                          fStack0000000000000044 = (float)iVar1;
                        }
                        else {
                          FUN_01299e64(lVar10,&stack0x000002fc,&stack0x000002f8,
                                       *(undefined8 *)
                                        System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                      );
                        }
                      }
                      uVar20 = FUN_0129aa60(lVar13,&stack0x00000318,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                           );
                      if ((uVar20 & 1) == 0) {
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01299bc0(lVar10,&stack0x00000320,&stack0x0000031c,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        FUN_0129a054(lVar13,&stack0x00000328,&stack0x00000324,
                                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__
                                    );
                        FUN_01299bc0(lVar10,&stack0x00000330,&stack0x0000032c,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        uVar20 = FUN_0129eff4(lVar14,&stack0x00000334,&stack0x00000268,
                                              *(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                        if ((uVar20 & 1) == 0) {
                          iVar1 = (int)fStack0000000000000044 + 1;
                          FUN_01299bc0(lVar10,&stack0x00000344,&stack0x00000340,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          FUN_0129a054(lVar14,&stack0x0000034c,&stack0x00000348,
                                       *(undefined8 *)
                                        Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                          FUN_01299e64(lVar10,&stack0x00000354,&stack0x00000350,
                                       *(undefined8 *)
                                        System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                      );
                          fStack0000000000000044 = (float)iVar1;
                        }
                        else {
                          FUN_01299e64(lVar10,&stack0x0000033c,&stack0x00000338,
                                       *(undefined8 *)
                                        System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                      );
                        }
                      }
                      FUN_01299bc0(lVar13,&stack0x0000035c,&stack0x00000358,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_0129a054(lVar10,&stack0x00000364,&stack0x00000360,
                                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                      FUN_01299bc0(lVar13,&stack0x0000036c,&stack0x00000368,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      FUN_0129a054(lVar10,&stack0x00000374,&stack0x00000370,
                                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                      FUN_01299bc0(lVar10,&stack0x0000037c,&stack0x00000378,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      FUN_0129a054(lVar10,&stack0x0000038c,&stack0x00000388,
                                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                      puVar3 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                      FUN_01299bc0(lVar10,&stack0x00000394,&stack0x00000390,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      FUN_0129a054(lVar10,&stack0x0000039c,&stack0x00000398,*(undefined8 *)puVar3);
                      FUN_0129a054(lVar15,&stack0x000003a4,&stack0x000003a0,*(undefined8 *)puVar3);
                      FUN_0129a054(lVar15,&stack0x000003ac,&stack0x000003a8,*(undefined8 *)puVar3);
                      FUN_0132138c(lVar9,uVar18 & 0xffffffff,&stack0x000003b0,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                  );
                      lVar21 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
                      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_02339644(lVar21,in_stack_000003b0,0);
                      FUN_00ca0af8(lVar9,lVar21,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                      FUN_0132138c(lVar9,uVar18 >> 0x20,&stack0x000003b8,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                  );
                      lVar21 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
                      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_02339644(lVar21,in_stack_000003b8,0);
                      FUN_00ca0af8(lVar9,lVar21,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                      puVar3 = OVRManager_XrApi_TypeInfo;
                      FUN_00ca0af8(lVar9,0,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                      FUN_00ca0af8(lVar9,0,*(undefined8 *)puVar3);
                      lVar21 = FUN_00da4fb8(*(undefined8 *)
                                             Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,6)
                      ;
                      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar2 = *(uint *)(lVar21 + 0x18);
                      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(int *)(lVar21 + 0x20) = iVar36;
                      if (uVar2 == 1) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(int *)(lVar21 + 0x24) = iVar36 + 1;
                      puVar23 = (undefined8 *)StringLiteral_6171;
                      if (uVar2 < 3) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(int *)(lVar21 + 0x28) = iVar36 + 2;
                      if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(int *)(lVar21 + 0x2c) = iVar36 + 1;
                      if (uVar2 < 5) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(int *)(lVar21 + 0x30) = iVar36 + 3;
                      if (uVar2 == 5) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(int *)(lVar21 + 0x34) = iVar36 + 2;
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar7 = *(undefined4 *)(lVar19 + 0x48);
                      in_stack_00000088 = *(undefined8 *)(lVar19 + 0x34);
                      in_stack_00000080 = *(undefined8 *)(lVar19 + 0x2c);
                      in_stack_00000078 = *(undefined8 *)(lVar19 + 0x24);
                      in_stack_00000070 = *(undefined8 *)(lVar19 + 0x1c);
                      in_stack_00000138 = 0;
                      in_stack_00000130 = 0;
                      in_stack_00000148 = 0;
                      in_stack_00000140 = 0;
                      in_stack_00000110 = in_stack_00000070;
                      in_stack_00000118 = in_stack_00000078;
                      in_stack_00000120 = in_stack_00000080;
                      in_stack_00000128 = in_stack_00000088;
                      FUN_022eff30(&stack0x00000130,&stack0x00000110,0);
                      lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                 );
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      in_stack_000000f8 = in_stack_00000138;
                      in_stack_000000f0 = in_stack_00000130;
                      in_stack_00000108 = in_stack_00000148;
                      in_stack_00000100 = in_stack_00000140;
                      uVar8 = in_stack_00000140;
                      FUN_022f986c(lVar19,lVar21,uVar7,&stack0x000000f0,0,0xffffffff,0xffffffff,0);
                      FUN_00c9e4d8(lVar12,lVar19,
                                   *(undefined8 *)
                                    Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
                    }
                    FUN_012bf83c(&stack0x00000290,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                                );
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_012de890(lVar17,&stack0x00000070,
                                 *(undefined8 *)Method_System_Activator_CreateInstance__);
                    while (uVar32 = uVar8,
                          uVar18 = FUN_012b69b4(&stack0x00000250,
                                                *(undefined8 *)
                                                 Oculus_Platform_MessageWithUserProof_TypeInfo),
                          (uVar18 & 1) != 0) {
                      lVar17 = FUN_00ca4544(&stack0x00000250,*(undefined8 *)StringLiteral_2036);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      *(undefined4 *)(lVar17 + 0x54) = 0xffffffff;
                      fVar24 = (float)FUN_02302c7c(unaff_x21,lVar17,0);
                      lVar19 = 8;
                      uVar8 = uVar32;
                      while( true ) {
                        lVar21 = FUN_022f8990(lVar17,0);
                        fVar29 = (float)uVar8;
                        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar18 = lVar19 - 8;
                        if ((long)*(int *)(lVar21 + 0x18) <= (long)uVar18) break;
                        lVar21 = FUN_022f8990(lVar17,0);
                        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(uint *)(lVar21 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        uVar7 = *(undefined4 *)(lVar21 + lVar19 * 4);
                        uVar20 = FUN_0129aa60(lVar13,&stack0x000003c0,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                             );
                        if ((uVar20 & 1) == 0) {
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299bc0(lVar10,&stack0x000003c8,&stack0x000003c4,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          uVar20 = FUN_0129aa60(lVar14,&stack0x000003cc,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                               );
                          puVar3 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                          if ((uVar20 & 1) != 0) {
                            FUN_01299bc0(lVar10,&stack0x000003d4,&stack0x000003d0,
                                         *(undefined8 *)
                                          Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                            FUN_01299bc0(lVar14,&stack0x000003dc,&stack0x000003d8,
                                         *(undefined8 *)puVar3);
                            FUN_01299e64(lVar10,&stack0x000003e4,&stack0x000003e0,
                                         *(undefined8 *)
                                          System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                        );
                          }
                        }
                        else if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01299bc0(lVar10,&stack0x000003ec,&stack0x000003e8,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        if (lVar11 != 0) {
                          lVar21 = FUN_022f8990(lVar17,0);
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (*(uint *)(lVar21 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          uVar20 = FUN_0129aa60(lVar11,&stack0x000003f0,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                               );
                          if ((uVar20 & 1) != 0) {
                            lVar21 = FUN_022f8990(lVar17,0);
                            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar21 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            FUN_0129de0c(lVar11,&stack0x000003f4,
                                         *(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_s8__);
                          }
                        }
                        uVar18 = FUN_0129eff4(lVar16,&stack0x000003f8,&stack0x00000230,
                                              *(undefined8 *)
                                               Method_UnityEngine_Events_UnityEvent<string,_Texture2D>_Invoke__
                                             );
                        if ((uVar18 & 1) == 0) {
                          lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320e50(lVar21,*(undefined8 *)PTR_DAT_033f6e48);
                          FUN_00ac20f0(lVar21,uVar7,*(undefined8 *)StringLiteral_4747);
                          in_stack_00000078 = 0;
                          in_stack_00000070 = 0;
                          in_stack_00000088 = 0;
                          in_stack_00000080 = 0;
                          FUN_013a3088(&stack0x00000070,&stack0x00000410,&stack0x00000400,lVar21,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_get_Item__
                                      );
                          in_stack_000000b8 = in_stack_00000078;
                          in_stack_000000b0 = in_stack_00000070;
                          in_stack_000000c8 = in_stack_00000088;
                          in_stack_000000c0 = in_stack_00000080;
                          uVar8 = in_stack_00000080;
                          FUN_0129a054(lVar16,&stack0x0000041c,&stack0x000000b0,
                                       *(undefined8 *)StringLiteral_10932);
                        }
                        else {
                          fVar25 = (float)FUN_00ca464c(&stack0x00000230,*puVar23);
                          FUN_00ca4754(fVar24 + fVar25,(float)uVar32 + fVar29,&stack0x00000230,
                                       *(undefined8 *)StringLiteral_12923);
                          lVar21 = FUN_00ca4894(&stack0x00000230,
                                                *(undefined8 *)
                                                 System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo
                                               );
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_00ac20f0(lVar21,uVar7,*(undefined8 *)StringLiteral_4747);
                          uVar8 = in_stack_00000240;
                          in_stack_000000d0 = in_stack_00000230;
                          in_stack_000000d8 = in_stack_00000238;
                          in_stack_000000e0 = in_stack_00000240;
                          in_stack_000000e8 = in_stack_00000248;
                          FUN_01299e64(lVar16,&stack0x000003fc,&stack0x000000d0,
                                       *(undefined8 *)
                                        Field_<PrivateImplementationDetails>_F603F94B1D517D5138CDEAE0C125779455D596B548A58E5CB4D941F97A1A242A
                                      );
                        }
                        lVar19 = lVar19 + 1;
                      }
                    }
                    FUN_012b69b0(&stack0x00000250,*(undefined8 *)System_Text_DecoderNLS_TypeInfo);
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


