/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 01438c0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 122
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long *unaff_x19;
  long *unaff_x21;
  long lVar23;
  ulong uVar24;
  float fVar25;
  long in_stack_00000010;
  long in_stack_00000018;
  int iStack000000000000002c;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000068;
  
  unaff_x21[8] = *unaff_x19;
  if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
  lVar16 = FUN_017840ac(*(long *)(in_stack_00000018 + 0x18) + 0x2c,0);
  if ((lVar16 != 0) &&
     (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*unaff_x21 + 0x40)), lVar17 == 0))
  goto LAB_014394c8;
  puVar15 = 
  Method_System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>__ctor__;
  uVar21 = *(uint *)(unaff_x21 + 3);
  if (5 < uVar21) {
    unaff_x21[9] = lVar16;
    lVar16 = *(long *)puVar15;
    if (lVar16 != 0) {
      lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar16 == 0) goto LAB_014394c8;
      uVar21 = *(uint *)(unaff_x21 + 3);
    }
    if (6 < uVar21) {
      unaff_x21[10] = *(long *)puVar15;
      if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
      lVar16 = FUN_017840ac(*(long *)(in_stack_00000018 + 0x18) + 0x30,0);
      if ((lVar16 != 0) &&
         (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*unaff_x21 + 0x40)), lVar17 == 0)) {
LAB_014394c8:
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      puVar15 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
      uVar21 = *(uint *)(unaff_x21 + 3);
      if (7 < uVar21) {
        unaff_x21[0xb] = lVar16;
        lVar16 = *(long *)puVar15;
        if (lVar16 != 0) {
          lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar16 == 0) goto LAB_014394c8;
          uVar21 = *(uint *)(unaff_x21 + 3);
        }
        if (8 < uVar21) {
          unaff_x21[0xc] = *(long *)puVar15;
          puVar15 = StringLiteral_302;
          lVar16 = *(long *)(in_stack_00000018 + 0x18);
          if (lVar16 != 0) {
            if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar16 = FUN_016f5f58(lVar16 + 0x28,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*unaff_x21 + 0x40)), lVar17 == 0)
               ) goto LAB_014394c8;
            if (*(uint *)(unaff_x21 + 3) < 10) goto LAB_014394c4;
            unaff_x21[0xd] = lVar16;
            uVar18 = FUN_01600844();
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar15);
            }
            FUN_02660dac(uVar18,0);
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__
                                       );
            puVar15 = Oculus_Platform_Models_SystemVoipState_TypeInfo;
            if (lVar16 != 0) {
              FUN_01320e50(lVar16,*(undefined8 *)Method_System_Data_ConstraintConverter_ConvertTo__)
              ;
              lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
              puVar15 = Method_System_Boolean_Parse__;
              if (lVar17 != 0) {
                FUN_01320e50(lVar17,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_TryGetValue__
                            );
                lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
                if (lVar19 != 0) {
                  FUN_013b0f04(lVar19,*(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnCycleDevicesPerformed__
                              );
                  puVar15 = Method_UnityEngine_Component_GetComponent<OVRRayTransformer>__;
                  if (*(long *)(in_stack_00000018 + 0x18) != 0) {
                    puVar11 = (undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
                    ;
                    puVar12 = (undefined8 *)
                              Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
                    ;
                    for (lVar23 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
                        Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
                             = (undefined *)puVar11,
                        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
                             = (undefined *)puVar12, lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x20))
                    {
                      FUN_013b1b6c(lVar19,lVar23,*(undefined8 *)puVar15);
                      lVar23 = *(long *)(lVar23 + 0x18);
                      if (lVar23 == 0) goto LAB_014394c0;
                      if (*(int *)(lVar23 + 0x18) == 0) goto LAB_014394c4;
                      puVar11 = (undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
                      ;
                      puVar12 = (undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
                      ;
                    }
                    iVar6 = *(int *)(lVar19 + 0x18);
                    fVar13 = DAT_0293f7bc;
                    puVar14 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
                    while (DAT_0293f7bc = fVar13,
                          System_Data_AutoIncrementBigInteger_TypeInfo = (undefined *)puVar14,
                          0 < iVar6) {
                      FUN_013b1910(lVar19,&stack0x00000030,*puVar11);
                      lVar23 = in_stack_00000030;
                      if (in_stack_00000030 == 0) goto LAB_014394c0;
                      if (*(int *)(in_stack_00000030 + 0x10) == 1) {
                        FUN_00bbfad8(lVar17,in_stack_00000030,*puVar12);
                      }
                      lVar23 = *(long *)(lVar23 + 0x18);
                      if (lVar23 == 0) goto LAB_014394c0;
                      if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_014394c4;
                      for (lVar23 = *(long *)(lVar23 + 0x28); lVar23 != 0;
                          lVar23 = *(long *)(lVar23 + 0x20)) {
                        FUN_013b1b6c(lVar19,lVar23,*(undefined8 *)puVar15);
                        lVar23 = *(long *)(lVar23 + 0x18);
                        if (lVar23 == 0) goto LAB_014394c0;
                        if (*(int *)(lVar23 + 0x18) == 0) goto LAB_014394c4;
                      }
                      fVar13 = DAT_0293f7bc;
                      puVar14 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
                      iVar6 = *(int *)(lVar19 + 0x18);
                    }
                    if (0 < *(int *)(lVar17 + 0x18)) {
                      iStack000000000000002c = 0;
                      do {
                        lVar19 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
                        if (lVar19 == 0) goto LAB_014394c0;
                        FUN_01320e50(lVar19,*(undefined8 *)StringLiteral_8754);
                        FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                     *(undefined8 *)
                                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                    );
                        FUN_01436c38(in_stack_00000030,lVar19);
                        lVar23 = FUN_00da4fb8(*(undefined8 *)
                                               Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                              *(undefined4 *)(lVar19 + 0x18));
                        lVar20 = FUN_00da4fb8(*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                              *(undefined4 *)(lVar19 + 0x18));
                        if (0 < *(int *)(lVar19 + 0x18)) {
                          uVar24 = 0;
                          do {
                            FUN_0132138c(lVar19,uVar24 & 0xffffffff,&stack0x00000030,*puVar14);
                            if (in_stack_00000030 == 0) goto LAB_014394c0;
                            iVar6 = *(int *)(in_stack_00000030 + 0x1c);
                            FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                         *(undefined8 *)
                                          Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                        );
                            if ((in_stack_00000030 == 0) ||
                               (*(long *)(in_stack_00000030 + 0x20) == 0)) goto LAB_014394c0;
                            iVar7 = *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
                            FUN_0132138c(lVar19,uVar24 & 0xffffffff,&stack0x00000030,*puVar14);
                            if (in_stack_00000030 == 0) goto LAB_014394c0;
                            iVar8 = *(int *)(in_stack_00000030 + 0x20);
                            FUN_0132138c(lVar19,uVar24 & 0xffffffff,&stack0x00000030,*puVar14);
                            if (in_stack_00000030 == 0) goto LAB_014394c0;
                            iVar9 = *(int *)(in_stack_00000030 + 0x14);
                            FUN_0132138c(lVar19,uVar24 & 0xffffffff,&stack0x00000030,*puVar14);
                            if (in_stack_00000030 == 0) goto LAB_014394c0;
                            piVar1 = (int *)(in_stack_00000030 + 0x18);
                            in_stack_00000030 = 0;
                            in_stack_00000038 = 0;
                            FUN_0268834c((float)(iVar6 - iVar7),(float)iVar8,(float)iVar9,
                                         (float)*piVar1,&stack0x00000030,0);
                            if (lVar23 == 0) goto LAB_014394c0;
                            if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_014394c4;
                            plVar10 = (long *)(lVar23 + 0x20 + uVar24 * 0x10);
                            plVar10[1] = in_stack_00000038;
                            *plVar10 = in_stack_00000030;
                            FUN_0132138c(lVar19,uVar24 & 0xffffffff,&stack0x00000068,*puVar14);
                            if ((in_stack_00000068 == 0) || (lVar20 == 0)) goto LAB_014394c0;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_014394c4;
                            *(undefined4 *)(lVar20 + 0x20 + uVar24 * 4) =
                                 *(undefined4 *)(in_stack_00000068 + 0x10);
                            uVar24 = uVar24 + 1;
                          } while ((long)uVar24 < (long)*(int *)(lVar19 + 0x18));
                        }
                        if (in_stack_00000010 == 0) goto LAB_014394c0;
                        uVar18 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
                        lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__
                                                  );
                        if (lVar19 == 0) goto LAB_014394c0;
                        FUN_017b46ec(lVar19,0);
                        *(undefined8 *)(lVar19 + 0x28) = uVar18;
                        puVar15 = 
                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                        ;
                        FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                     *(undefined8 *)
                                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                    );
                        puVar2 = (uint *)(lVar19 + 0x18);
                        puVar3 = (uint *)(lVar19 + 0x1c);
                        FUN_01437adc(in_stack_00000018,in_stack_00000030,puVar2,puVar3);
                        iVar6 = *(int *)(lVar19 + 0x18);
                        FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                     *(undefined8 *)puVar15);
                        if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
                        goto LAB_014394c0;
                        *puVar2 = iVar6 - *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
                        FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                     *(undefined8 *)
                                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                    );
                        if ((in_stack_00000030 == 0) ||
                           (((*(long *)(in_stack_00000030 + 0x20) == 0 ||
                             (FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                           *(undefined8 *)
                                            Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                          ), in_stack_00000030 == 0)) ||
                            (*(long *)(in_stack_00000030 + 0x20) == 0)))) goto LAB_014394c0;
                        if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
                          uVar21 = *puVar3;
                          uVar22 = *puVar2;
                        }
                        else {
                          fVar25 = logf((float)(int)*puVar2);
                          fVar25 = exp2f((float)(int)(fVar25 / fVar13));
                          uVar5 = 0x80000000;
                          if (fVar25 != INFINITY) {
                            uVar5 = (int)fVar25;
                          }
                          if (uVar5 < 3) {
                            uVar5 = 2;
                          }
                          FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                       *(undefined8 *)
                                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                      );
                          if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)
                             ) goto LAB_014394c0;
                          uVar21 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x18);
                          if ((int)uVar21 <= (int)uVar5) {
                            uVar5 = uVar21;
                          }
                          fVar25 = logf((float)(int)*puVar3);
                          fVar25 = exp2f((float)(int)(fVar25 / fVar13));
                          uVar22 = 0x80000000;
                          if (fVar25 != INFINITY) {
                            uVar22 = (int)fVar25;
                          }
                          if (uVar22 < 3) {
                            uVar22 = 2;
                          }
                          FUN_0132138c(lVar17,iStack000000000000002c,&stack0x00000030,
                                       *(undefined8 *)
                                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                      );
                          if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0)
                             ) goto LAB_014394c0;
                          uVar21 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x1c);
                          if ((int)uVar21 <= (int)uVar22) {
                            uVar22 = uVar21;
                          }
                          uVar4 = uVar5;
                          if ((int)uVar5 < 0) {
                            uVar4 = uVar5 + 1;
                          }
                          uVar21 = (int)uVar4 >> 1;
                          if ((int)uVar4 >> 1 <= (int)uVar22) {
                            uVar21 = uVar22;
                          }
                          uVar4 = uVar21;
                          if ((int)uVar21 < 0) {
                            uVar4 = uVar21 + 1;
                          }
                          uVar22 = (int)uVar4 >> 1;
                          if ((int)uVar4 >> 1 <= (int)uVar5) {
                            uVar22 = uVar5;
                          }
                        }
                        *(uint *)(lVar19 + 0x10) = uVar22;
                        *(uint *)(lVar19 + 0x14) = uVar21;
                        *(long *)(lVar19 + 0x20) = lVar23;
                        *(long *)(lVar19 + 0x30) = lVar20;
                        FUN_014359a0(lVar19);
                        FUN_00bbfcc8(lVar16,lVar19,*(undefined8 *)PTR_DAT_033f3448);
                        uVar18 = FUN_0132138c(in_stack_00000010,iStack000000000000002c,
                                              &stack0x00000030,*(undefined8 *)StringLiteral_4419);
                        FUN_01436444(uVar18,lVar19,in_stack_00000030);
                        if (3 < *(int *)(in_stack_00000018 + 0x10)) {
                          lVar23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                          lVar19 = *(long *)(lVar23 + 0x38);
                          if (lVar19 == 0) {
                            FUN_00d59478(lVar23);
                            lVar19 = *(long *)(lVar23 + 0x38);
                          }
                          lVar19 = *(long *)(lVar19 + 0x10);
                          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                            lVar19 = FUN_00d5941c();
                          }
                          if (*(int *)(lVar19 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar19 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                            lVar19 = FUN_00d5941c();
                          }
                          uVar18 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,
                                                **(undefined8 **)(lVar19 + 0xb8),0);
                          lVar23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                          lVar19 = *(long *)(lVar23 + 0x38);
                          if (lVar19 == 0) {
                            FUN_00d59478(lVar23);
                            lVar19 = *(long *)(lVar23 + 0x38);
                          }
                          lVar19 = *(long *)(lVar19 + 0x10);
                          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                            lVar19 = FUN_00d5941c();
                          }
                          if (*(int *)(lVar19 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar19 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                            lVar19 = FUN_00d5941c();
                          }
                          FUN_013f38b0(uVar18,**(undefined8 **)(lVar19 + 0xb8),0);
                        }
                        iStack000000000000002c = iStack000000000000002c + 1;
                      } while (iStack000000000000002c < *(int *)(lVar17 + 0x18));
                    }
                    FUN_01325140(lVar16,*(undefined8 *)
                                         Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                                );
                    return;
                  }
                }
              }
            }
          }
LAB_014394c0:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
  }
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


