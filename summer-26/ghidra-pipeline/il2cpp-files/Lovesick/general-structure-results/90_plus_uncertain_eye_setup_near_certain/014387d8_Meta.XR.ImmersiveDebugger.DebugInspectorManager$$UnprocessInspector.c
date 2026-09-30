/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$UnprocessInspector
ENTRY_POINT: 014387d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_DebugInspectorManager__UnprocessInspector
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 in_ZR;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  int in_w8;
  uint uVar25;
  uint uVar26;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w23;
  long lVar27;
  long unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  float fVar28;
  float unaff_s8;
  long in_stack_00000000;
  int in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  int in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  ulong in_stack_00000038;
  long in_stack_00000068;
  
  while( true ) {
    iVar4 = unaff_w23;
    if (!(bool)in_ZR) {
      iVar4 = in_w8;
    }
    FUN_0132138c(unaff_x22,unaff_x27 & 0xffffffff,param_3,param_4);
    puVar15 = StringLiteral_4419;
    iVar5 = unaff_w23;
    if (fStack0000000000000034 != unaff_s8) {
      iVar5 = (int)fStack0000000000000034;
    }
    if (unaff_x25 == 0) goto LAB_014394c0;
    FUN_0132138c(unaff_x25,unaff_x27 & 0xffffffff,&stack0x00000030,*(undefined8 *)StringLiteral_4419
                );
    uVar20 = _fStack0000000000000030;
    FUN_0132138c(unaff_x25,unaff_x27 & 0xffffffff,&stack0x00000030,*(undefined8 *)puVar15);
    iVar9 = (int)fStack0000000000000030;
    FUN_0132138c(unaff_x25,unaff_x27 & 0xffffffff,&stack0x00000030,*(undefined8 *)puVar15);
    uVar17 = _fStack0000000000000030;
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
    if (lVar18 == 0) goto LAB_014394c0;
    iVar8 = unaff_w21 - ((uint)(uVar20 >> 0x1f) & 0xfffffffe);
    iVar9 = in_stack_00000028._4_4_ + iVar9 * -2;
    if (iVar9 <= iVar5) {
      iVar5 = iVar9;
    }
    if (iVar8 <= iVar4) {
      iVar4 = iVar8;
    }
    FUN_017b46ec(lVar18,0);
    iVar4 = ((uint)(uVar17 >> 0x1f) & 0xfffffffe) + iVar4;
    if (iVar4 <= in_stack_00000008) {
      iVar4 = in_stack_00000008;
    }
    iVar5 = iVar5 + (int)uVar17 * 2;
    *(int *)(lVar18 + 0x10) = (int)unaff_x27;
    *(int *)(lVar18 + 0x14) = iVar4;
    if (iVar5 <= in_stack_00000020) {
      iVar5 = in_stack_00000020;
    }
    *(int *)(lVar18 + 0x18) = iVar5;
    lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*unaff_x26 + 0x40));
    if (lVar19 == 0) goto LAB_014394c8;
    uVar25 = *(uint *)(unaff_x26 + 3);
    if (uVar25 <= unaff_x27) goto LAB_014394c4;
    *(long *)(in_stack_00000000 + unaff_x27 * 8) = lVar18;
    puVar16 = Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_interactionIndex__;
    puVar15 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
    unaff_x27 = unaff_x27 + 1;
    if ((long)(int)uVar25 <= (long)unaff_x27) break;
    FUN_0132138c(unaff_x22,unaff_x27 & 0xffffffff,&stack0x00000030,
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
    param_4 = *(undefined8 *)puVar15;
    unaff_s8 = INFINITY;
    in_w8 = (int)fStack0000000000000030;
    in_ZR = fStack0000000000000030 == INFINITY;
    param_3 = (undefined8 *)&stack0x00000030;
    unaff_x25 = in_stack_00000010;
  }
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    FUN_01435de0(in_stack_00000028._4_4_);
    FUN_01435de0(unaff_w21);
  }
  lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar16);
  puVar15 = StringLiteral_4789;
  if (lVar18 != 0) {
    FUN_017b46ec(lVar18,0);
    lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
    puVar15 = PTR_DAT_033f5f38;
    if (lVar19 != 0) {
      FUN_017b46ec(lVar19,0);
      FUN_010b0550();
      uVar20 = FUN_01437bbc(in_stack_00000018);
      if ((uVar20 & 1) != 0) {
        *(long *)(in_stack_00000018 + 0x18) = lVar18;
      }
      lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
      if (lVar19 != 0) {
        FUN_017b46ec(lVar19,0);
        FUN_010b0550();
        uVar20 = FUN_01437bbc(in_stack_00000018);
        if ((uVar20 & 1) != 0) {
          if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
          if (*(float *)(lVar18 + 0x34) < *(float *)(*(long *)(in_stack_00000018 + 0x18) + 0x34)) {
            *(long *)(in_stack_00000018 + 0x18) = lVar18;
          }
        }
        lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
                                   );
        if (lVar19 != 0) {
          FUN_017b46ec(lVar19,0);
          FUN_010b0550();
          uVar20 = FUN_01437bbc(in_stack_00000018);
          lVar19 = *(long *)(in_stack_00000018 + 0x18);
          if ((uVar20 & 1) == 0) {
            if (lVar19 == 0) {
              return 0;
            }
          }
          else {
            if (lVar19 == 0) goto LAB_014394c0;
            if (*(float *)(lVar18 + 0x34) < *(float *)(lVar19 + 0x34)) {
              *(long *)(in_stack_00000018 + 0x18) = lVar18;
            }
          }
          if (3 < *(int *)(in_stack_00000018 + 0x10)) {
            plVar21 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
            puVar15 = StringLiteral_12545;
            if (plVar21 == (long *)0x0) goto LAB_014394c0;
            if ((*(long *)StringLiteral_12545 != 0) &&
               (lVar18 = thunk_FUN_00d6225c(*(long *)StringLiteral_12545,
                                            *(undefined8 *)(*plVar21 + 0x40)), lVar18 == 0)) {
LAB_014394c8:
              uVar22 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar22,0);
            }
            if ((int)plVar21[3] == 0) goto LAB_014394c4;
            plVar21[4] = *(long *)puVar15;
            if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
            lVar18 = FUN_0176eb1c(*(long *)(in_stack_00000018 + 0x18) + 0x10,0);
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40)), lVar19 == 0))
            goto LAB_014394c8;
            puVar15 = Method_MedleyBossPushPhase_StartPhase__;
            uVar25 = *(uint *)(plVar21 + 3);
            if (uVar25 < 2) {
LAB_014394c4:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar21[5] = lVar18;
            lVar18 = *(long *)puVar15;
            if (lVar18 != 0) {
              lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40));
              if (lVar18 == 0) goto LAB_014394c8;
              uVar25 = *(uint *)(plVar21 + 3);
            }
            if (uVar25 < 3) goto LAB_014394c4;
            plVar21[6] = *(long *)puVar15;
            if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
            lVar18 = FUN_0176eb1c(*(long *)(in_stack_00000018 + 0x18) + 0x14,0);
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40)), lVar19 == 0))
            goto LAB_014394c8;
            puVar15 = StringLiteral_10387;
            uVar25 = *(uint *)(plVar21 + 3);
            if (uVar25 < 4) goto LAB_014394c4;
            plVar21[7] = lVar18;
            lVar18 = *(long *)puVar15;
            if (lVar18 != 0) {
              lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40));
              if (lVar18 == 0) goto LAB_014394c8;
              uVar25 = *(uint *)(plVar21 + 3);
            }
            if (uVar25 < 5) goto LAB_014394c4;
            plVar21[8] = *(long *)puVar15;
            if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
            lVar18 = FUN_017840ac(*(long *)(in_stack_00000018 + 0x18) + 0x2c,0);
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40)), lVar19 == 0))
            goto LAB_014394c8;
            puVar15 = 
            Method_System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>__ctor__
            ;
            uVar25 = *(uint *)(plVar21 + 3);
            if (uVar25 < 6) goto LAB_014394c4;
            plVar21[9] = lVar18;
            lVar18 = *(long *)puVar15;
            if (lVar18 != 0) {
              lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40));
              if (lVar18 == 0) goto LAB_014394c8;
              uVar25 = *(uint *)(plVar21 + 3);
            }
            if (uVar25 < 7) goto LAB_014394c4;
            plVar21[10] = *(long *)puVar15;
            if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_014394c0;
            lVar18 = FUN_017840ac(*(long *)(in_stack_00000018 + 0x18) + 0x30,0);
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40)), lVar19 == 0))
            goto LAB_014394c8;
            puVar15 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
            uVar25 = *(uint *)(plVar21 + 3);
            if (uVar25 < 8) goto LAB_014394c4;
            plVar21[0xb] = lVar18;
            lVar18 = *(long *)puVar15;
            if (lVar18 != 0) {
              lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40));
              if (lVar18 == 0) goto LAB_014394c8;
              uVar25 = *(uint *)(plVar21 + 3);
            }
            if (uVar25 < 9) goto LAB_014394c4;
            plVar21[0xc] = *(long *)puVar15;
            puVar15 = StringLiteral_302;
            lVar18 = *(long *)(in_stack_00000018 + 0x18);
            if (lVar18 == 0) goto LAB_014394c0;
            if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar18 = FUN_016f5f58(lVar18 + 0x28,0);
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar21 + 0x40)), lVar19 == 0))
            goto LAB_014394c8;
            if (*(uint *)(plVar21 + 3) < 10) goto LAB_014394c4;
            plVar21[0xd] = lVar18;
            uVar22 = FUN_01600844(plVar21,0);
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar15);
            }
            FUN_02660dac(uVar22,0);
          }
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__
                                     );
          puVar15 = Oculus_Platform_Models_SystemVoipState_TypeInfo;
          if (lVar18 != 0) {
            FUN_01320e50(lVar18,*(undefined8 *)Method_System_Data_ConstraintConverter_ConvertTo__);
            lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
            puVar15 = Method_System_Boolean_Parse__;
            if (lVar19 != 0) {
              FUN_01320e50(lVar19,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_TryGetValue__
                          );
              lVar23 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
              if (lVar23 != 0) {
                FUN_013b0f04(lVar23,*(undefined8 *)
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
                  for (lVar27 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
                      Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
                           = (undefined *)puVar11,
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
                           = (undefined *)puVar12, lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x20)) {
                    FUN_013b1b6c(lVar23,lVar27,*(undefined8 *)puVar15);
                    lVar27 = *(long *)(lVar27 + 0x18);
                    if (lVar27 == 0) goto LAB_014394c0;
                    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_014394c4;
                    puVar11 = (undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>_set_Item__
                    ;
                    puVar12 = (undefined8 *)
                              Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Color32>__
                    ;
                  }
                  iVar4 = *(int *)(lVar23 + 0x18);
                  fVar13 = DAT_0293f7bc;
                  puVar14 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
                  while (DAT_0293f7bc = fVar13,
                        System_Data_AutoIncrementBigInteger_TypeInfo = (undefined *)puVar14,
                        0 < iVar4) {
                    FUN_013b1910(lVar23,&stack0x00000030,*puVar11);
                    uVar20 = _fStack0000000000000030;
                    if (_fStack0000000000000030 == 0) goto LAB_014394c0;
                    if (*(int *)(_fStack0000000000000030 + 0x10) == 1) {
                      FUN_00bbfad8(lVar19,_fStack0000000000000030,*puVar12);
                    }
                    lVar27 = *(long *)(uVar20 + 0x18);
                    if (lVar27 == 0) goto LAB_014394c0;
                    if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_014394c4;
                    for (lVar27 = *(long *)(lVar27 + 0x28); lVar27 != 0;
                        lVar27 = *(long *)(lVar27 + 0x20)) {
                      FUN_013b1b6c(lVar23,lVar27,*(undefined8 *)puVar15);
                      lVar27 = *(long *)(lVar27 + 0x18);
                      if (lVar27 == 0) goto LAB_014394c0;
                      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_014394c4;
                    }
                    fVar13 = DAT_0293f7bc;
                    puVar14 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
                    iVar4 = *(int *)(lVar23 + 0x18);
                  }
                  if (0 < *(int *)(lVar19 + 0x18)) {
                    in_stack_00000028._4_4_ = 0;
                    do {
                      lVar23 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
                      if (lVar23 == 0) goto LAB_014394c0;
                      FUN_01320e50(lVar23,*(undefined8 *)StringLiteral_8754);
                      FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                   *(undefined8 *)
                                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                  );
                      FUN_01436c38(_fStack0000000000000030,lVar23);
                      lVar27 = FUN_00da4fb8(*(undefined8 *)
                                             Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                            *(undefined4 *)(lVar23 + 0x18));
                      lVar24 = FUN_00da4fb8(*(undefined8 *)
                                             Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                            *(undefined4 *)(lVar23 + 0x18));
                      if (0 < *(int *)(lVar23 + 0x18)) {
                        uVar20 = 0;
                        do {
                          FUN_0132138c(lVar23,uVar20 & 0xffffffff,&stack0x00000030,*puVar14);
                          if (_fStack0000000000000030 == 0) goto LAB_014394c0;
                          iVar4 = *(int *)(_fStack0000000000000030 + 0x1c);
                          FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                       *(undefined8 *)
                                        Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                      );
                          if ((_fStack0000000000000030 == 0) ||
                             (*(long *)(_fStack0000000000000030 + 0x20) == 0)) goto LAB_014394c0;
                          iVar5 = *(int *)(*(long *)(_fStack0000000000000030 + 0x20) + 0x10);
                          FUN_0132138c(lVar23,uVar20 & 0xffffffff,&stack0x00000030,*puVar14);
                          if (_fStack0000000000000030 == 0) goto LAB_014394c0;
                          iVar9 = *(int *)(_fStack0000000000000030 + 0x20);
                          FUN_0132138c(lVar23,uVar20 & 0xffffffff,&stack0x00000030,*puVar14);
                          if (_fStack0000000000000030 == 0) goto LAB_014394c0;
                          iVar8 = *(int *)(_fStack0000000000000030 + 0x14);
                          FUN_0132138c(lVar23,uVar20 & 0xffffffff,&stack0x00000030,*puVar14);
                          if (_fStack0000000000000030 == 0) goto LAB_014394c0;
                          piVar1 = (int *)(_fStack0000000000000030 + 0x18);
                          _fStack0000000000000030 = 0;
                          in_stack_00000038 = 0;
                          FUN_0268834c((float)(iVar4 - iVar5),(float)iVar9,(float)iVar8,
                                       (float)*piVar1,&stack0x00000030,0);
                          if (lVar27 == 0) goto LAB_014394c0;
                          if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_014394c4;
                          puVar10 = (ulong *)(lVar27 + 0x20 + uVar20 * 0x10);
                          puVar10[1] = in_stack_00000038;
                          *puVar10 = _fStack0000000000000030;
                          FUN_0132138c(lVar23,uVar20 & 0xffffffff,&stack0x00000068,*puVar14);
                          if ((in_stack_00000068 == 0) || (lVar24 == 0)) goto LAB_014394c0;
                          if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_014394c4;
                          *(undefined4 *)(lVar24 + 0x20 + uVar20 * 4) =
                               *(undefined4 *)(in_stack_00000068 + 0x10);
                          uVar20 = uVar20 + 1;
                        } while ((long)uVar20 < (long)*(int *)(lVar23 + 0x18));
                      }
                      if (in_stack_00000010 == 0) goto LAB_014394c0;
                      uVar22 = FUN_01325140(in_stack_00000010,*(undefined8 *)StringLiteral_9168);
                      lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__
                                                 );
                      if (lVar23 == 0) goto LAB_014394c0;
                      FUN_017b46ec(lVar23,0);
                      *(undefined8 *)(lVar23 + 0x28) = uVar22;
                      puVar15 = 
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                      ;
                      FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                   *(undefined8 *)
                                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                  );
                      puVar2 = (uint *)(lVar23 + 0x18);
                      puVar3 = (uint *)(lVar23 + 0x1c);
                      FUN_01437adc(in_stack_00000018,_fStack0000000000000030,puVar2,puVar3);
                      iVar4 = *(int *)(lVar23 + 0x18);
                      FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                   *(undefined8 *)puVar15);
                      if ((_fStack0000000000000030 == 0) ||
                         (*(long *)(_fStack0000000000000030 + 0x20) == 0)) goto LAB_014394c0;
                      *puVar2 = iVar4 - *(int *)(*(long *)(_fStack0000000000000030 + 0x20) + 0x10);
                      FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                   *(undefined8 *)
                                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                  );
                      if ((_fStack0000000000000030 == 0) ||
                         (((*(long *)(_fStack0000000000000030 + 0x20) == 0 ||
                           (FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                         *(undefined8 *)
                                          Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                        ), _fStack0000000000000030 == 0)) ||
                          (*(long *)(_fStack0000000000000030 + 0x20) == 0)))) goto LAB_014394c0;
                      if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
                        uVar25 = *puVar3;
                        uVar26 = *puVar2;
                      }
                      else {
                        fVar28 = logf((float)(int)*puVar2);
                        fVar28 = exp2f((float)(int)(fVar28 / fVar13));
                        uVar7 = 0x80000000;
                        if (fVar28 != INFINITY) {
                          uVar7 = (int)fVar28;
                        }
                        if (uVar7 < 3) {
                          uVar7 = 2;
                        }
                        FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                     *(undefined8 *)
                                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                    );
                        if ((_fStack0000000000000030 == 0) ||
                           (*(long *)(_fStack0000000000000030 + 0x20) == 0)) goto LAB_014394c0;
                        uVar25 = *(uint *)(*(long *)(_fStack0000000000000030 + 0x20) + 0x18);
                        if ((int)uVar25 <= (int)uVar7) {
                          uVar7 = uVar25;
                        }
                        fVar28 = logf((float)(int)*puVar3);
                        fVar28 = exp2f((float)(int)(fVar28 / fVar13));
                        uVar26 = 0x80000000;
                        if (fVar28 != INFINITY) {
                          uVar26 = (int)fVar28;
                        }
                        if (uVar26 < 3) {
                          uVar26 = 2;
                        }
                        FUN_0132138c(lVar19,in_stack_00000028._4_4_,&stack0x00000030,
                                     *(undefined8 *)
                                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__
                                    );
                        if ((_fStack0000000000000030 == 0) ||
                           (*(long *)(_fStack0000000000000030 + 0x20) == 0)) goto LAB_014394c0;
                        uVar25 = *(uint *)(*(long *)(_fStack0000000000000030 + 0x20) + 0x1c);
                        if ((int)uVar25 <= (int)uVar26) {
                          uVar26 = uVar25;
                        }
                        uVar6 = uVar7;
                        if ((int)uVar7 < 0) {
                          uVar6 = uVar7 + 1;
                        }
                        uVar25 = (int)uVar6 >> 1;
                        if ((int)uVar6 >> 1 <= (int)uVar26) {
                          uVar25 = uVar26;
                        }
                        uVar6 = uVar25;
                        if ((int)uVar25 < 0) {
                          uVar6 = uVar25 + 1;
                        }
                        uVar26 = (int)uVar6 >> 1;
                        if ((int)uVar6 >> 1 <= (int)uVar7) {
                          uVar26 = uVar7;
                        }
                      }
                      *(uint *)(lVar23 + 0x10) = uVar26;
                      *(uint *)(lVar23 + 0x14) = uVar25;
                      *(long *)(lVar23 + 0x20) = lVar27;
                      *(long *)(lVar23 + 0x30) = lVar24;
                      FUN_014359a0(lVar23);
                      FUN_00bbfcc8(lVar18,lVar23,*(undefined8 *)PTR_DAT_033f3448);
                      uVar22 = FUN_0132138c(in_stack_00000010,in_stack_00000028._4_4_,
                                            &stack0x00000030,*(undefined8 *)StringLiteral_4419);
                      FUN_01436444(uVar22,lVar23,_fStack0000000000000030);
                      if (3 < *(int *)(in_stack_00000018 + 0x10)) {
                        lVar27 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                        lVar23 = *(long *)(lVar27 + 0x38);
                        if (lVar23 == 0) {
                          FUN_00d59478(lVar27);
                          lVar23 = *(long *)(lVar27 + 0x38);
                        }
                        lVar23 = *(long *)(lVar23 + 0x10);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar23 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        uVar22 = FUN_01600be4(*(undefined8 *)PTR_DAT_033ee248,
                                              **(undefined8 **)(lVar23 + 0xb8),0);
                        lVar27 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                        lVar23 = *(long *)(lVar27 + 0x38);
                        if (lVar23 == 0) {
                          FUN_00d59478(lVar27);
                          lVar23 = *(long *)(lVar27 + 0x38);
                        }
                        lVar23 = *(long *)(lVar23 + 0x10);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar23 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
                        if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                          lVar23 = FUN_00d5941c();
                        }
                        FUN_013f38b0(uVar22,**(undefined8 **)(lVar23 + 0xb8),0);
                      }
                      in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
                    } while (in_stack_00000028._4_4_ < *(int *)(lVar19 + 0x18));
                  }
                  uVar22 = FUN_01325140(lVar18,*(undefined8 *)
                                                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                                       );
                  return uVar22;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014394c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


