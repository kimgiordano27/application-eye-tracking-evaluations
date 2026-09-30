/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$OnCameraCleanup
ENTRY_POINT: 023678c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 186
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02368330) */
/* WARNING: Removing unreachable block (ram,0x02367544) */
/* WARNING: Removing unreachable block (ram,0x02367fe0) */
/* WARNING: Removing unreachable block (ram,0x0236834c) */
/* WARNING: Removing unreachable block (ram,0x02367f94) */
/* WARNING: Removing unreachable block (ram,0x02367f98) */
/* WARNING: Removing unreachable block (ram,0x02367900) */

void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__OnCameraCleanup
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar14;
  long unaff_x24;
  undefined8 unaff_x27;
  undefined8 *puVar15;
  undefined8 *unaff_x28;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float unaff_s9;
  undefined8 unaff_d10;
  float fVar28;
  float fStack0000000000000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
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
  
  uStack00000000000000c8 = param_2._8_8_;
  uVar23 = param_2._0_8_;
  uStack00000000000000b8 = param_1._8_8_;
  uStack00000000000000b0 = param_1._0_8_;
  do {
    uStack00000000000000c0 = uVar23;
    FUN_0129a054();
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      while( true ) {
        lVar11 = FUN_022f8990(unaff_x24,0);
        fVar20 = (float)uVar23;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar14 = unaff_x21 - 8;
        if ((long)uVar14 < (long)*(int *)(lVar11 + 0x18)) break;
        while (uVar14 = FUN_012b69b4(&stack0x00000250,
                                     *(undefined8 *)Oculus_Platform_MessageWithUserProof_TypeInfo),
              (uVar14 & 1) == 0) {
          FUN_012b69b0(&stack0x00000250,*(undefined8 *)System_Text_DecoderNLS_TypeInfo);
          uVar14 = FUN_012b894c(&stack0x000002c0,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<InternedString,_string>_Dispose__
                               );
          if ((uVar14 & 1) == 0) {
            FUN_012b8948(&stack0x000002c0,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<ARSessionOrigin>__
                        );
            puVar15 = (undefined8 *)
                      Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
            ;
            FUN_0129b5d0();
            puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
            fVar3 = DAT_028aa5c8;
            fVar2 = DAT_028aa158;
            fVar16 = DAT_028aa044;
            fVar20 = DAT_028aa038;
            uVar14 = in_stack_000000a0;
            while( true ) {
              fVar25 = (float)uVar14;
              uVar14 = FUN_012bf140(&stack0x000001f0,*(undefined8 *)StringLiteral_4029);
              if ((uVar14 & 1) == 0) {
                FUN_0237cafc(Method_UnityEngine_UIElements_UQueryBuilder<VisualElement>_Name__,
                             &stack0x000001f0);
                return;
              }
              FUN_00ca499c(&stack0x00000070,&stack0x000001f0,*(undefined8 *)StringLiteral_5096);
              in_stack_000001c8 = in_stack_00000078;
              in_stack_000001c0 = in_stack_00000070;
              in_stack_000001d8 = in_stack_00000088;
              in_stack_000001d0 = in_stack_00000080;
              in_stack_000001e0 = in_stack_00000090;
              FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar15);
              in_stack_000001a8 = in_stack_00000078;
              in_stack_000001a0 = in_stack_00000070;
              in_stack_000001b8 = in_stack_00000088;
              in_stack_000001b0 = in_stack_00000080;
              uVar23 = in_stack_00000080;
              fVar17 = (float)FUN_00ca464c(&stack0x000001a0,*(undefined8 *)StringLiteral_6171);
              FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar15);
              in_stack_000001a8 = in_stack_00000078;
              in_stack_000001a0 = in_stack_00000070;
              in_stack_000001b8 = in_stack_00000088;
              in_stack_000001b0 = in_stack_00000080;
              lVar11 = FUN_00ca4894(&stack0x000001a0,
                                    *(undefined8 *)
                                     System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
              if (lVar11 == 0) break;
              iVar27 = *(int *)(lVar11 + 0x18);
              if (DAT_0377518c == '\0') {
                thunk_FUN_00d48444(puVar4);
                DAT_0377518c = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              fVar24 = (float)iVar27;
              fVar17 = fVar17 / fVar24;
              fVar21 = (float)uVar23 / fVar24;
              fVar25 = fVar25 / fVar24;
              uVar14 = (ulong)(uint)fVar25;
              fVar24 = SQRT(fVar25 * fVar25 + fVar17 * fVar17 + fVar21 * fVar21);
              if (fVar24 <= fVar20) {
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(puVar7);
                  DAT_03774d76 = '\x01';
                }
                pfVar13 = *(float **)(*(long *)puVar7 + 0xb8);
                fVar17 = *pfVar13;
                fVar21 = pfVar13[1];
                fVar25 = pfVar13[2];
              }
              else {
                fVar17 = fVar17 / fVar24;
                fVar21 = fVar21 / fVar24;
                fVar25 = fVar25 / fVar24;
              }
              fVar26 = (float)uVar14;
              fVar24 = 1.0;
              if ((_fStack0000000000000018 & 0x100000000) != 0) {
                FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar15);
                in_stack_000001a8 = in_stack_00000078;
                in_stack_000001a0 = in_stack_00000070;
                in_stack_000001b8 = in_stack_00000088;
                in_stack_000001b0 = in_stack_00000080;
                uVar23 = in_stack_00000080;
                fVar24 = (float)FUN_00ca4b9c(&stack0x000001a0,
                                             *(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulh_laneq_s32__
                                            );
                if (DAT_03775508 == '\0') {
                  thunk_FUN_00d48444(puVar4);
                  DAT_03775508 = '\x01';
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar28 = (float)uVar23;
                uVar14 = (ulong)(uint)(fVar25 * fVar25);
                fVar18 = SQRT((fVar25 * fVar25 + fVar17 * fVar17 + fVar21 * fVar21) *
                              (fVar26 * fVar26 + fVar24 * fVar24 + fVar28 * fVar28));
                fVar22 = 0.0;
                if (fVar3 <= fVar18) {
                  fVar18 = (fVar25 * fVar26 + fVar17 * fVar24 + fVar21 * fVar28) / fVar18;
                  uVar14 = 0xbf800000;
                  fVar24 = fVar18;
                  if (1.0 < fVar18) {
                    fVar24 = 1.0;
                  }
                  if (fVar18 < -1.0) {
                    fVar24 = -1.0;
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  dVar19 = acos((double)fVar24);
                  fVar22 = (float)dVar19 * fVar2;
                }
                fVar24 = (float)FUN_02302334(fVar22 * fVar16,0);
              }
              FUN_00ca4a9c(&stack0x00000070,&stack0x000001c0,*puVar15);
              in_stack_000001a8 = in_stack_00000078;
              in_stack_000001a0 = in_stack_00000070;
              in_stack_000001b8 = in_stack_00000088;
              in_stack_000001b0 = in_stack_00000080;
              lVar11 = FUN_00ca4894(&stack0x000001a0,
                                    *(undefined8 *)
                                     System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
              puVar6 = Method_System_Data_SqlTypes_SqlBoolean_CompareTo__;
              puVar5 = Method_UnityEngine_ProBuilder_ProBuilderMesh_GetCoincidentVertices__;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01323390(lVar11,&stack0x00000070,
                           *(undefined8 *)System_Xml_Schema_AllElementsContentValidator_TypeInfo);
              fVar24 = fVar24 * fStack0000000000000018;
              in_stack_00000188 = in_stack_00000078;
              in_stack_00000180 = in_stack_00000070;
              in_stack_00000190 = in_stack_00000080;
              while (uVar12 = FUN_012b894c(&stack0x00000180,*(undefined8 *)puVar5),
                    (uVar12 & 1) != 0) {
                uVar8 = FUN_00ad838c(&stack0x00000180,*(undefined8 *)puVar6);
                FUN_0132138c(in_stack_00000060,uVar8,&stack0x00000130,
                             *(undefined8 *)
                              Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                            );
                if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar14 = (ulong)(uint)(fVar25 * fVar24 + *(float *)(in_stack_00000130 + 0x18));
                FUN_02338f44(fVar17 * fVar24 + *(float *)(in_stack_00000130 + 0x10),
                             fVar21 * fVar24 + *(float *)(in_stack_00000130 + 0x14),
                             in_stack_00000130,0);
              }
              FUN_012b8948(&stack0x00000180,*(undefined8 *)StringLiteral_2313);
              puVar15 = (undefined8 *)
                        Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
              ;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar11 = FUN_00ca4130(&stack0x000002c0,
                                *(undefined8 *)Meta_WitAi_WitRequest_<>c__DisplayClass99_0_TypeInfo)
          ;
          lVar9 = FUN_0236a514();
          puVar4 = StringLiteral_6798;
          FUN_0129a9f4(in_stack_00000068,*(undefined8 *)StringLiteral_6798);
          FUN_0129a9f4(unaff_x27,*(undefined8 *)puVar4);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0129b5d0(lVar9,&stack0x00000070,*(undefined8 *)StringLiteral_7364);
          uVar23 = in_stack_00000070;
          while (uVar14 = FUN_012bf140(&stack0x00000290,*(undefined8 *)PTR_DAT_033ecec8),
                (uVar14 & 1) != 0) {
            FUN_00ca4238(&stack0x00000070,&stack0x00000290,
                         *(undefined8 *)System_Runtime_Remoting_TypeEntry_TypeInfo);
            uVar14 = FUN_00ca4338(&stack0x00000270,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                                 );
            lVar9 = FUN_00ca443c(&stack0x00000270,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider>_get_descriptor__
                                );
            iVar27 = *(int *)(in_stack_00000060 + 0x18);
            uVar12 = FUN_0129aa60(unaff_x27,&stack0x000002d8,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                 );
            if ((uVar12 & 1) == 0) {
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01299bc0();
              FUN_0129a054(unaff_x27,&stack0x000002e8,&stack0x000002e4,
                           *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
              FUN_01299bc0();
              uVar12 = FUN_0129eff4(in_stack_00000068,&stack0x000002f4,&stack0x0000026c,
                                    *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__
                                   );
              if ((uVar12 & 1) == 0) {
                FUN_01299bc0();
                FUN_0129a054(in_stack_00000068,&stack0x0000030c,&stack0x00000308,
                             *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                FUN_01299e64();
              }
              else {
                FUN_01299e64();
              }
            }
            uVar12 = FUN_0129aa60(unaff_x27,&stack0x00000318,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                 );
            if ((uVar12 & 1) == 0) {
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01299bc0();
              FUN_0129a054(unaff_x27,&stack0x00000328,&stack0x00000324,
                           *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
              FUN_01299bc0();
              uVar12 = FUN_0129eff4(in_stack_00000068,&stack0x00000334,&stack0x00000268,
                                    *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__
                                   );
              if ((uVar12 & 1) == 0) {
                FUN_01299bc0();
                FUN_0129a054(in_stack_00000068,&stack0x0000034c,&stack0x00000348,
                             *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                FUN_01299e64();
              }
              else {
                FUN_01299e64();
              }
            }
            FUN_01299bc0(unaff_x27,&stack0x0000035c,&stack0x00000358,
                         *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0129a054();
            FUN_01299bc0(unaff_x27,&stack0x0000036c,&stack0x00000368,
                         *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
            FUN_0129a054();
            FUN_01299bc0();
            FUN_0129a054();
            puVar4 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
            FUN_01299bc0();
            FUN_0129a054();
            FUN_0129a054(in_stack_00000050,&stack0x000003a4,&stack0x000003a0,*(undefined8 *)puVar4);
            FUN_0129a054(in_stack_00000050,&stack0x000003ac,&stack0x000003a8,*(undefined8 *)puVar4);
            FUN_0132138c(in_stack_00000060,uVar14 & 0xffffffff,&stack0x000003b0,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_02339644(lVar10,in_stack_000003b0,0);
            FUN_00ca0af8(in_stack_00000060,lVar10,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_0132138c(in_stack_00000060,uVar14 >> 0x20,&stack0x000003b8,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_02339644(lVar10,in_stack_000003b8,0);
            FUN_00ca0af8(in_stack_00000060,lVar10,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            puVar4 = OVRManager_XrApi_TypeInfo;
            FUN_00ca0af8(in_stack_00000060,0,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_00ca0af8(in_stack_00000060,0,*(undefined8 *)puVar4);
            lVar10 = FUN_00da4fb8(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,6);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(int *)(lVar10 + 0x20) = iVar27;
            if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(int *)(lVar10 + 0x24) = iVar27 + 1;
            unaff_x28 = (undefined8 *)StringLiteral_6171;
            if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(int *)(lVar10 + 0x28) = iVar27 + 2;
            if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(int *)(lVar10 + 0x2c) = iVar27 + 1;
            if (uVar1 < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(int *)(lVar10 + 0x30) = iVar27 + 3;
            if (uVar1 == 5) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(int *)(lVar10 + 0x34) = iVar27 + 2;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar8 = *(undefined4 *)(lVar9 + 0x48);
            in_stack_00000088 = *(undefined8 *)(lVar9 + 0x34);
            in_stack_00000080 = *(undefined8 *)(lVar9 + 0x2c);
            in_stack_00000078 = *(undefined8 *)(lVar9 + 0x24);
            in_stack_00000070 = *(undefined8 *)(lVar9 + 0x1c);
            in_stack_00000138 = 0;
            in_stack_00000130 = 0;
            in_stack_00000148 = 0;
            in_stack_00000140 = 0;
            in_stack_00000110 = in_stack_00000070;
            in_stack_00000118 = in_stack_00000078;
            in_stack_00000120 = in_stack_00000080;
            in_stack_00000128 = in_stack_00000088;
            FUN_022eff30(&stack0x00000130,&stack0x00000110,0);
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            in_stack_000000f8 = in_stack_00000138;
            in_stack_000000f0 = in_stack_00000130;
            in_stack_00000108 = in_stack_00000148;
            in_stack_00000100 = in_stack_00000140;
            uVar23 = in_stack_00000140;
            FUN_022f986c(lVar9,lVar10,uVar8,&stack0x000000f0,0,0xffffffff,0xffffffff,0);
            FUN_00c9e4d8(in_stack_00000048,lVar9,
                         *(undefined8 *)
                          Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
            unaff_x22 = in_stack_00000058;
            unaff_x27 = in_stack_00000038;
          }
          FUN_012bf83c(&stack0x00000290,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                      );
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012de890(lVar11,&stack0x00000070,
                       *(undefined8 *)Method_System_Activator_CreateInstance__);
        }
        unaff_x24 = FUN_00ca4544(&stack0x00000250,*(undefined8 *)StringLiteral_2036);
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined4 *)(unaff_x24 + 0x54) = 0xffffffff;
        unaff_s9 = (float)FUN_02302c7c(in_stack_00000030,unaff_x24,0);
        unaff_x21 = 8;
        unaff_d10 = uVar23;
      }
      lVar11 = FUN_022f8990(unaff_x24,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar8 = *(undefined4 *)(lVar11 + unaff_x21 * 4);
      uVar12 = FUN_0129aa60(unaff_x27,&stack0x000003c0,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                           );
      if ((uVar12 & 1) == 0) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01299bc0();
        uVar12 = FUN_0129aa60(in_stack_00000068,&stack0x000003cc,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                             );
        puVar4 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
        if ((uVar12 & 1) != 0) {
          FUN_01299bc0();
          FUN_01299bc0(in_stack_00000068,&stack0x000003dc,&stack0x000003d8,*(undefined8 *)puVar4);
          FUN_01299e64();
        }
      }
      else if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01299bc0();
      if (unaff_x22 != 0) {
        lVar11 = FUN_022f8990(unaff_x24,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar12 = FUN_0129aa60(unaff_x22,&stack0x000003f0,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                             );
        if ((uVar12 & 1) != 0) {
          lVar11 = FUN_022f8990(unaff_x24,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_0129de0c(unaff_x22,&stack0x000003f4,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_s8__);
        }
      }
      uVar14 = FUN_0129eff4();
      if ((uVar14 & 1) == 0) break;
      fVar16 = (float)FUN_00ca464c(&stack0x00000230,*unaff_x28);
      FUN_00ca4754(unaff_s9 + fVar16,(float)unaff_d10 + fVar20,&stack0x00000230,
                   *(undefined8 *)StringLiteral_12923);
      lVar11 = FUN_00ca4894(&stack0x00000230,
                            *(undefined8 *)
                             System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac20f0(lVar11,uVar8,*(undefined8 *)StringLiteral_4747);
      uVar23 = in_stack_00000240;
      in_stack_000000d0 = in_stack_00000230;
      in_stack_000000d8 = in_stack_00000238;
      in_stack_000000e0 = in_stack_00000240;
      in_stack_000000e8 = in_stack_00000248;
      FUN_01299e64();
    }
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                 UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f6e48);
    FUN_00ac20f0(lVar11,uVar8,*(undefined8 *)StringLiteral_4747);
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    FUN_013a3088(&stack0x00000070,&stack0x00000410,&stack0x00000400,lVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_get_Item__)
    ;
    uStack00000000000000b0 = in_stack_00000070;
    uStack00000000000000b8 = in_stack_00000078;
    uVar23 = in_stack_00000080;
    uStack00000000000000c8 = in_stack_00000088;
  } while( true );
}


