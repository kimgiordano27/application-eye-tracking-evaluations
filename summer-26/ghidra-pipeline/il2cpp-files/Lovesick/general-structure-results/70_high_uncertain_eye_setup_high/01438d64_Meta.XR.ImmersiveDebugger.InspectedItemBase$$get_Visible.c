/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedItemBase$$get_Visible
ENTRY_POINT: 01438d64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_InspectedItemBase__get_Visible(void)

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
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long *unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  long in_stack_00000010;
  long in_stack_00000018;
  int iStack000000000000002c;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000068;
  
  if (!in_CY || in_ZR) {
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(undefined8 *)(unaff_x21 + 0x68) = unaff_x22;
  uVar17 = FUN_01600844();
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x19);
  }
  FUN_02660dac(uVar17,0);
  lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__
                             );
  puVar16 = Oculus_Platform_Models_SystemVoipState_TypeInfo;
  if (lVar18 != 0) {
    FUN_01320e50(lVar18,*(undefined8 *)Method_System_Data_ConstraintConverter_ConvertTo__);
    lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar16);
    puVar16 = Method_System_Boolean_Parse__;
    if (lVar19 != 0) {
      FUN_01320e50(lVar19,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_TryGetValue__
                  );
      lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar16);
      if (lVar20 != 0) {
        FUN_013b0f04(lVar20,*(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnCycleDevicesPerformed__
                    );
        puVar16 = Method_UnityEngine_Component_GetComponent<OVRRayTransformer>__;
        if (*(long *)(in_stack_00000018 + 0x18) != 0) {
          puVar12 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
          ;
          puVar13 = (undefined8 *)
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
          ;
          for (lVar23 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
              Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
                   = (undefined *)puVar12,
              Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
                   = (undefined *)puVar13, lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x20)) {
            FUN_013b1b6c(lVar20,lVar23,*(undefined8 *)puVar16);
            lVar23 = *(long *)(lVar23 + 0x18);
            if (lVar23 == 0) goto LAB_014394c0;
            if (*(int *)(lVar23 + 0x18) == 0) goto LAB_014394c4;
            puVar12 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
            ;
            puVar13 = (undefined8 *)
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
            ;
          }
          iVar6 = *(int *)(lVar20 + 0x18);
          fVar14 = DAT_0293f7bc;
          puVar15 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
          while (DAT_0293f7bc = fVar14,
                System_Data_AutoIncrementBigInteger_TypeInfo = (undefined *)puVar15, 0 < iVar6) {
            FUN_013b1910(lVar20,&stack0x00000030,*puVar12);
            lVar23 = in_stack_00000030;
            if (in_stack_00000030 == 0) goto LAB_014394c0;
            if (*(int *)(in_stack_00000030 + 0x10) == 1) {
              FUN_00bbfad8(lVar19,in_stack_00000030,*puVar13);
            }
            lVar23 = *(long *)(lVar23 + 0x18);
            if (lVar23 == 0) goto LAB_014394c0;
            if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_014394c4;
            for (lVar23 = *(long *)(lVar23 + 0x28); lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x20))
            {
              FUN_013b1b6c(lVar20,lVar23,*(undefined8 *)puVar16);
              lVar23 = *(long *)(lVar23 + 0x18);
              if (lVar23 == 0) goto LAB_014394c0;
              if (*(int *)(lVar23 + 0x18) == 0) goto LAB_014394c4;
            }
            fVar14 = DAT_0293f7bc;
            puVar15 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
            iVar6 = *(int *)(lVar20 + 0x18);
          }
          if (0 < *(int *)(lVar19 + 0x18)) {
            iStack000000000000002c = 0;
            do {
              lVar20 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
              if (lVar20 == 0) goto LAB_014394c0;
              FUN_01320e50(lVar20,*(undefined8 *)StringLiteral_8754);
              FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                           *(undefined8 *)
                            Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                          );
              FUN_01436c38(in_stack_00000030,lVar20);
              lVar23 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                    *(undefined4 *)(lVar20 + 0x18));
              lVar21 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                    *(undefined4 *)(lVar20 + 0x18));
              if (0 < *(int *)(lVar20 + 0x18)) {
                uVar24 = 0;
                do {
                  FUN_0132138c(lVar20,uVar24 & 0xffffffff,&stack0x00000030,*puVar15);
                  if (in_stack_00000030 == 0) goto LAB_014394c0;
                  iVar6 = *(int *)(in_stack_00000030 + 0x1c);
                  FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                               *(undefined8 *)
                                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                              );
                  if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
                  goto LAB_014394c0;
                  iVar7 = *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
                  FUN_0132138c(lVar20,uVar24 & 0xffffffff,&stack0x00000030,*puVar15);
                  if (in_stack_00000030 == 0) goto LAB_014394c0;
                  iVar8 = *(int *)(in_stack_00000030 + 0x20);
                  FUN_0132138c(lVar20,uVar24 & 0xffffffff,&stack0x00000030,*puVar15);
                  if (in_stack_00000030 == 0) goto LAB_014394c0;
                  iVar9 = *(int *)(in_stack_00000030 + 0x14);
                  FUN_0132138c(lVar20,uVar24 & 0xffffffff,&stack0x00000030,*puVar15);
                  if (in_stack_00000030 == 0) goto LAB_014394c0;
                  piVar1 = (int *)(in_stack_00000030 + 0x18);
                  in_stack_00000030 = 0;
                  in_stack_00000038 = 0;
                  FUN_0268834c((float)(iVar6 - iVar7),(float)iVar8,(float)iVar9,(float)*piVar1,
                               &stack0x00000030,0);
                  if (lVar23 == 0) goto LAB_014394c0;
                  if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_014394c4;
                  plVar11 = (long *)(lVar23 + 0x20 + uVar24 * 0x10);
                  plVar11[1] = in_stack_00000038;
                  *plVar11 = in_stack_00000030;
                  FUN_0132138c(lVar20,uVar24 & 0xffffffff,&stack0x00000068,*puVar15);
                  if ((in_stack_00000068 == 0) || (lVar21 == 0)) goto LAB_014394c0;
                  if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_014394c4;
                  *(undefined4 *)(lVar21 + 0x20 + uVar24 * 4) =
                       *(undefined4 *)(in_stack_00000068 + 0x10);
                  uVar24 = uVar24 + 1;
                } while ((long)uVar24 < (long)*(int *)(lVar20 + 0x18));
              }
              if (in_stack_00000010 == 0) goto LAB_014394c0;
              uVar17 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
              lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__
                                         );
              if (lVar20 == 0) goto LAB_014394c0;
              FUN_017b46ec(lVar20,0);
              *(undefined8 *)(lVar20 + 0x28) = uVar17;
              puVar16 = 
              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
              ;
              FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                           *(undefined8 *)
                            Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                          );
              puVar2 = (uint *)(lVar20 + 0x18);
              puVar3 = (uint *)(lVar20 + 0x1c);
              FUN_01437adc(in_stack_00000018,in_stack_00000030,puVar2,puVar3);
              iVar6 = *(int *)(lVar20 + 0x18);
              FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,*(undefined8 *)puVar16);
              if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
              goto LAB_014394c0;
              *puVar2 = iVar6 - *(int *)(*(long *)(in_stack_00000030 + 0x20) + 0x10);
              FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                           *(undefined8 *)
                            Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                          );
              if ((in_stack_00000030 == 0) ||
                 (((*(long *)(in_stack_00000030 + 0x20) == 0 ||
                   (FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                                 *(undefined8 *)
                                  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                ), in_stack_00000030 == 0)) ||
                  (*(long *)(in_stack_00000030 + 0x20) == 0)))) goto LAB_014394c0;
              if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
                uVar10 = *puVar3;
                uVar22 = *puVar2;
              }
              else {
                fVar25 = logf((float)(int)*puVar2);
                fVar25 = exp2f((float)(int)(fVar25 / fVar14));
                uVar5 = 0x80000000;
                if (fVar25 != INFINITY) {
                  uVar5 = (int)fVar25;
                }
                if (uVar5 < 3) {
                  uVar5 = 2;
                }
                FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                             *(undefined8 *)
                              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                            );
                if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
                goto LAB_014394c0;
                uVar10 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x18);
                if ((int)uVar10 <= (int)uVar5) {
                  uVar5 = uVar10;
                }
                fVar25 = logf((float)(int)*puVar3);
                fVar25 = exp2f((float)(int)(fVar25 / fVar14));
                uVar22 = 0x80000000;
                if (fVar25 != INFINITY) {
                  uVar22 = (int)fVar25;
                }
                if (uVar22 < 3) {
                  uVar22 = 2;
                }
                FUN_0132138c(lVar19,iStack000000000000002c,&stack0x00000030,
                             *(undefined8 *)
                              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                            );
                if ((in_stack_00000030 == 0) || (*(long *)(in_stack_00000030 + 0x20) == 0))
                goto LAB_014394c0;
                uVar10 = *(uint *)(*(long *)(in_stack_00000030 + 0x20) + 0x1c);
                if ((int)uVar10 <= (int)uVar22) {
                  uVar22 = uVar10;
                }
                uVar4 = uVar5;
                if ((int)uVar5 < 0) {
                  uVar4 = uVar5 + 1;
                }
                uVar10 = (int)uVar4 >> 1;
                if ((int)uVar4 >> 1 <= (int)uVar22) {
                  uVar10 = uVar22;
                }
                uVar4 = uVar10;
                if ((int)uVar10 < 0) {
                  uVar4 = uVar10 + 1;
                }
                uVar22 = (int)uVar4 >> 1;
                if ((int)uVar4 >> 1 <= (int)uVar5) {
                  uVar22 = uVar5;
                }
              }
              *(uint *)(lVar20 + 0x10) = uVar22;
              *(uint *)(lVar20 + 0x14) = uVar10;
              *(long *)(lVar20 + 0x20) = lVar23;
              *(long *)(lVar20 + 0x30) = lVar21;
              FUN_014359a0(lVar20);
              FUN_00bbfcc8(lVar18,lVar20,*(undefined8 *)PTR_DAT_033f3448);
              uVar17 = FUN_0132138c(in_stack_00000010,iStack000000000000002c,&stack0x00000030,
                                    *(undefined8 *)StringLiteral_4419);
              FUN_01436444(uVar17,lVar20,in_stack_00000030);
              if (3 < *(int *)(in_stack_00000018 + 0x10)) {
                lVar23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                lVar20 = *(long *)(lVar23 + 0x38);
                if (lVar20 == 0) {
                  FUN_00d59478(lVar23);
                  lVar20 = *(long *)(lVar23 + 0x38);
                }
                lVar20 = *(long *)(lVar20 + 0x10);
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar20 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                uVar17 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,
                                      **(undefined8 **)(lVar20 + 0xb8),0);
                lVar23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                lVar20 = *(long *)(lVar23 + 0x38);
                if (lVar20 == 0) {
                  FUN_00d59478(lVar23);
                  lVar20 = *(long *)(lVar23 + 0x38);
                }
                lVar20 = *(long *)(lVar20 + 0x10);
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar20 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                  lVar20 = FUN_00d5941c();
                }
                FUN_013f38b0(uVar17,**(undefined8 **)(lVar20 + 0xb8),0);
              }
              iStack000000000000002c = iStack000000000000002c + 1;
            } while (iStack000000000000002c < *(int *)(lVar19 + 0x18));
          }
          FUN_01325140(lVar18,*(undefined8 *)
                               Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                      );
          return;
        }
      }
    }
  }
LAB_014394c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


