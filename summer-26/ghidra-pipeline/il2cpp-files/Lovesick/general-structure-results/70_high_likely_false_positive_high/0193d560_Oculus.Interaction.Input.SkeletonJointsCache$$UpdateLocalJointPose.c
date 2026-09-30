/*
FUNCTION_NAME: Oculus.Interaction.Input.SkeletonJointsCache$$UpdateLocalJointPose
ENTRY_POINT: 0193d560
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x0193da74) */
/* WARNING: Removing unreachable block (ram,0x0193da78) */
/* WARNING: Removing unreachable block (ram,0x0193df84) */

undefined4
Oculus_Interaction_Input_SkeletonJointsCache__UpdateLocalJointPose
          (undefined1 param_1 [16],float param_2,ulong param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  uint uVar18;
  undefined8 *unaff_x21;
  int iVar19;
  float *pfVar20;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float unaff_s8;
  float fVar28;
  float unaff_s9;
  float unaff_s10;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_000000a8;
  
  fStack000000000000001c = param_4;
  uVar21 = FUN_02698858();
  *(undefined4 *)(unaff_x20 + 0x2b) = uVar21;
  *(float *)((long)unaff_x20 + 0x15c) = param_2;
  *(int *)(unaff_x20 + 0x2c) = (int)param_3;
  *(float *)((long)unaff_x20 + 0x164) = param_4;
  lVar7 = thunk_FUN_00d62348(*unaff_x21);
  puVar14 = (undefined8 *)Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__;
  if (lVar7 == 0) goto LAB_0193e6c8;
  FUN_013752a0(lVar7,*(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_Process__);
  FUN_013757d8(lVar7,unaff_x20[0x22],*puVar14);
  if (unaff_x20[0x25] == 0) goto LAB_0193e6c8;
  FUN_00ac20f0(unaff_x20[0x25],0xffffffff,*(undefined8 *)StringLiteral_4747);
  if (unaff_x20[0x26] == 0) goto LAB_0193e6c8;
  fVar26 = 0.0;
  FUN_00ac1d04(unaff_x20[0x26],*(undefined8 *)Method_System_Numerics_Vector<ushort>_get_Zero__);
  puVar3 = Method_PaperCyclone_<>c__DisplayClass6_0_<Reverse>b__1__;
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar10 = (undefined8 *)StringLiteral_9928;
  fStack0000000000000014 = unaff_s9;
  if (0 < *(int *)(lVar7 + 0x20)) {
LAB_0193d618:
    FUN_01375c70(lVar7,&stack0x00000020,*(undefined8 *)puVar3);
    lVar12 = CONCAT44(fStack0000000000000024,fStack0000000000000020);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_02681b9c(lVar12,0,0);
    if ((uVar8 & 1) == 0) goto LAB_0193d668;
    lVar9 = FUN_0193ca30();
    fVar28 = (float)param_3;
    if (lVar9 == 0) {
      if ((unaff_x20[0x23] != 0) &&
         (FUN_00acdfa0(unaff_x20[0x23],lVar12,
                       *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo),
         lVar12 != 0)) {
        lVar9 = unaff_x20[0x24];
        FUN_0269f910(lVar12,0);
        if (lVar9 != 0) {
          FUN_00acfdbc(lVar9,*(undefined8 *)StringLiteral_9785);
          lVar9 = *(long *)(unaff_x19 + 0x28);
          FUN_0269f578(lVar12,0);
          FUN_02692df0(&stack0x00000060,0);
          if (lVar9 != 0) {
            FUN_00ac4f98(lVar9,*(undefined8 *)StringLiteral_1006);
            lVar9 = *(long *)(unaff_x19 + 0x30);
            fVar22 = (float)FUN_0269f810(lVar12,0);
            if (lVar9 != 0) {
              fVar24 = unaff_s8 * param_2;
              fVar23 = unaff_s9 * param_2;
              param_2 = (unaff_s10 * fVar22 + fStack000000000000001c * param_2 + unaff_s9 * param_4)
                        - unaff_s8 * fVar28;
              param_3 = (ulong)(uint)((fVar24 + fStack000000000000001c * fVar28 +
                                                unaff_s10 * param_4) - unaff_s9 * fVar22);
              param_4 = ((fStack000000000000001c * param_4 - unaff_s8 * fVar22) - fVar23) -
                        unaff_s10 * fVar28;
              FUN_00acfdbc(lVar9,*(undefined8 *)StringLiteral_9785);
LAB_0193d798:
              plVar13 = (long *)FUN_026a13c0(lVar12,0);
              do {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar9 = *plVar13;
                uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *unaff_x28) {
                      puVar10 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0193d7fc;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar13,*unaff_x28,0);
LAB_0193d7fc:
                uVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
                if ((uVar8 & 1) == 0) goto LAB_0193d9d0;
                lVar9 = *plVar13;
                uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *unaff_x28) {
                      puVar10 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_0193d85c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar13,*unaff_x28,1);
LAB_0193d85c:
                plVar11 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
                if (plVar11 != (long *)0x0) {
                  bVar2 = *(byte *)(*(long *)StringLiteral_5840 + 300);
                  if ((*(byte *)(*plVar11 + 300) < bVar2) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)StringLiteral_5840)) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar11);
                  }
                }
                lVar9 = FUN_0193ca30();
                fVar28 = (float)param_3;
                if (lVar9 == 0) {
                  if (unaff_x20[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (unaff_x20[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  iVar19 = *(int *)(unaff_x20[0x23] + 0x18) + -1;
                  FUN_00ac20f0(unaff_x20[0x25],iVar19,*(undefined8 *)StringLiteral_4747);
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  fVar24 = (float)FUN_0269f578(plVar11,0);
                  fVar22 = param_2;
                  fVar23 = fVar28;
                  fVar25 = (float)FUN_0269f578(lVar12,0);
                  if (DAT_03774e1a == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_03774e1a = '\x01';
                  }
                  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0)
                  {
                    thunk_FUN_00d32864();
                  }
                  if (unaff_x20[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_0132138c(unaff_x20[0x26],iVar19,(long)&stack0x000000a8 + 4,*unaff_x29);
                  puVar14 = (undefined8 *)
                            Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__;
                  param_2 = (param_2 - fVar22) * (param_2 - fVar22);
                  fVar28 = (fVar28 - fVar23) * (fVar28 - fVar23);
                  param_3 = (ulong)(uint)fVar28;
                  fVar28 = SQRT(fVar28 + (fVar24 - fVar25) * (fVar24 - fVar25) + param_2) +
                           in_stack_000000a8._4_4_;
                  if (fVar26 <= fVar28) {
                    fVar26 = fVar28;
                  }
                  if (unaff_x20[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  param_4 = in_stack_000000a8._4_4_;
                  FUN_00ac1d04(unaff_x20[0x26],
                               *(undefined8 *)Method_System_Numerics_Vector<ushort>_get_Zero__);
                }
                FUN_013757d8(lVar7,plVar11,*puVar14);
              } while( true );
            }
          }
        }
      }
      goto LAB_0193e6c8;
    }
    if (*(char *)(lVar9 + 0x18) == '\0') {
      if (lVar12 != 0) goto LAB_0193d798;
      goto LAB_0193e6c8;
    }
    goto LAB_0193d668;
  }
  goto LAB_0193db90;
LAB_0193d9d0:
  plVar13 = (long *)thunk_FUN_00d6225c(plVar13,*(undefined8 *)StringLiteral_10310);
  unaff_s9 = fStack0000000000000014;
  puVar10 = (undefined8 *)StringLiteral_9928;
  if (plVar13 != (long *)0x0) {
    lVar12 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0193da54;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_10310,0);
LAB_0193da54:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
    puVar10 = (undefined8 *)StringLiteral_9928;
  }
LAB_0193d668:
  if (*(int *)(lVar7 + 0x20) < 1) goto code_r0x0193db30;
  goto LAB_0193d618;
LAB_0193dcdc:
  do {
    if (lVar12 == 0) goto LAB_0193e6c8;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0193e6cc;
    iVar19 = *(int *)(lVar12 + 0x20 + uVar8 * 4);
    if (iVar19 < 1) {
      FUN_0132138c(lVar9,uVar8 & 0xffffffff,&stack0x00000020,*(undefined8 *)puVar5);
      if (-1 < (int)fStack0000000000000020) {
        if (unaff_x20[0x25] != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x30);
          FUN_0132138c(unaff_x20[0x25],uVar8 & 0xffffffff,&stack0x00000020,*(undefined8 *)puVar5);
          if (lVar9 != 0) {
            FUN_0132138c(lVar9,fStack0000000000000020,&stack0x00000020,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                        );
            uVar15 = *(undefined8 *)puVar3;
            goto LAB_0193dda4;
          }
        }
        goto LAB_0193e6c8;
      }
    }
    else {
      if (lVar7 == 0) goto LAB_0193e6c8;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_0193e6cc;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      param_4 = (float)iVar19;
      param_2 = pfVar20[-1] / param_4;
      param_3 = (ulong)(uint)(*pfVar20 / param_4);
      fVar26 = (float)FUN_02698ebc(0);
      if (lVar9 == 0) goto LAB_0193e6c8;
      uVar15 = *(undefined8 *)puVar3;
      fStack0000000000000028 = (float)param_3;
      fStack0000000000000020 = fVar26;
      fStack0000000000000024 = param_2;
      fStack000000000000002c = param_4;
LAB_0193dda4:
      FUN_0132149c(lVar9,uVar8 & 0xffffffff,&stack0x00000020,uVar15);
    }
    lVar9 = unaff_x20[0x25];
    if (lVar9 == 0) goto LAB_0193e6c8;
    uVar8 = uVar8 + 1;
    pfVar20 = pfVar20 + 3;
  } while ((long)uVar8 < (long)*(int *)(lVar9 + 0x18));
LAB_0193ddd0:
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(undefined4 *)((long)unaff_x20 + 0x24) = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
    puVar3 = 
    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                        );
    unaff_x20[9] = lVar7;
    puVar5 = StringLiteral_6246;
    lVar7 = FUN_00da4fb8(*(undefined8 *)StringLiteral_6246,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xb] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xd] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xe] = lVar7;
    puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                         *(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xf] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x10] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x12] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x11] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                         ,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[10] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xc] = lVar7;
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__,
                         *(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x13] = lVar7;
    *(undefined4 *)(unaff_x19 + 0x50) = 0;
    puVar5 = 
    Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
    ;
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = PTR_DAT_033f3e18;
    uVar18 = 0;
    while (unaff_x20 != (long *)0x0) {
      iVar19 = *(int *)((long)unaff_x20 + 0x24);
      if (iVar19 <= (int)uVar18) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentsInChildren<SkinnedMeshRenderer>__
                                  );
        if (lVar7 != 0) {
          FUN_01902800(lVar7,iVar19,0);
          unaff_x20[0x2d] = lVar7;
          FUN_0193cbc4();
          plVar13 = (long *)(**(code **)(*unaff_x20 + 600))();
          *(long **)(unaff_x19 + 0x38) = plVar13;
          if (plVar13 != (long *)0x0) {
            lVar7 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 == 0) goto LAB_0193e394;
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_0193e37c;
          }
        }
        break;
      }
      lVar7 = unaff_x20[0x28];
      lVar12 = unaff_x20[0xf];
      fVar26 = DAT_028aa040;
      if (lVar7 != 0) {
        if (unaff_x20[0x26] == 0) break;
        FUN_0132138c(unaff_x20[0x26],uVar18,&stack0x00000020,*unaff_x29);
        fVar26 = (float)FUN_0193755c(lVar7);
      }
      puVar6 = StringLiteral_645;
      if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar28 = DAT_028aa038;
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar18) {
LAB_0193e6cc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (fVar26 <= DAT_028aa038) {
        fVar26 = DAT_028aa038;
      }
      *(float *)(lVar12 + (long)(int)uVar18 * 4 + 0x20) = 1.0 / fVar26;
      lVar12 = unaff_x20[0x10];
      lVar7 = unaff_x20[0x29];
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      fVar26 = DAT_028aa040;
      if (lVar7 != 0) {
        if (unaff_x20[0x26] == 0) break;
        FUN_0132138c(unaff_x20[0x26],uVar18,&stack0x00000020,*unaff_x29);
        fVar26 = (float)FUN_0193755c(lVar7);
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_0193e6cc;
      if (fVar26 <= fVar28) {
        fVar26 = fVar28;
      }
      *(float *)(lVar12 + (long)(int)uVar18 * 4 + 0x20) = 1.0 / fVar26;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      lVar7 = unaff_x20[9];
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar18,&stack0x00000020,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
      *(ulong *)(lVar7 + 0x20) = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      *(float *)(lVar7 + 0x28) = fStack0000000000000028;
      lVar7 = unaff_x20[9];
      if (lVar7 == 0) break;
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      lVar12 = unaff_x20[10];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_0193e6cc;
      lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
      uVar21 = *(undefined4 *)(lVar7 + 0x28);
      lVar12 = lVar12 + (long)(int)uVar18 * 0x10;
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
      *(undefined4 *)(lVar12 + 0x28) = uVar21;
      *(undefined4 *)(lVar12 + 0x2c) = 0;
      lVar7 = unaff_x20[10];
      if (lVar7 == 0) break;
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      *(undefined4 *)(lVar7 + (long)(int)uVar18 * 0x10 + 0x2c) = 0x3f800000;
      if (*(long *)(unaff_x19 + 0x30) == 0) break;
      lVar7 = unaff_x20[0xb];
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),uVar18,&stack0x00000020,*(undefined8 *)puVar5);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      auVar27._8_4_ = fStack0000000000000028;
      auVar27._0_8_ = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      auVar27._12_4_ = fStack000000000000002c;
      lVar7 = lVar7 + (long)(int)uVar18 * 0x10;
      *(long *)(lVar7 + 0x28) = auVar27._8_8_;
      *(ulong *)(lVar7 + 0x20) = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      if (unaff_x20[0x23] == 0) break;
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      lVar7 = unaff_x20[0xc];
      FUN_0132138c(unaff_x20[0x23],uVar18,&stack0x00000020,*(undefined8 *)PTR_DAT_033f3d78);
      if ((CONCAT44(fStack0000000000000024,fStack0000000000000020) == 0) ||
         (uVar21 = FUN_0269f810(CONCAT44(fStack0000000000000024,fStack0000000000000020),0),
         lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      lVar7 = lVar7 + (long)(int)uVar18 * 0x10;
      *(undefined4 *)(lVar7 + 0x20) = uVar21;
      *(float *)(lVar7 + 0x24) = param_2;
      *(int *)(lVar7 + 0x28) = (int)param_3;
      *(float *)(lVar7 + 0x2c) = param_4;
      lVar7 = unaff_x20[0x12];
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      lVar12 = unaff_x20[0x2a];
      uVar15 = *(undefined8 *)
                (*(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 0xc);
      fVar28 = *(float *)(*(long *)(*(long *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                   + 0xb8) + 0x14);
      fVar26 = DAT_028aa298;
      if (lVar12 != 0) {
        if (unaff_x20[0x26] == 0) break;
        FUN_0132138c(unaff_x20[0x26],*(undefined4 *)(unaff_x19 + 0x50),&stack0x00000020,*unaff_x29);
        fVar26 = (float)FUN_0193755c(lVar12);
      }
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      param_2 = (float)uVar15 * fVar26;
      lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
      *(ulong *)(lVar7 + 0x20) = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar26,param_2);
      *(float *)(lVar7 + 0x28) = fVar28 * fVar26;
      lVar7 = unaff_x20[0x11];
      uVar18 = *(uint *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_0193e6cc;
      *(undefined4 *)(lVar7 + (long)(int)uVar18 * 4 + 0x20) = 0xffff0001;
      lVar7 = unaff_x20[0x13];
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0x50)) goto LAB_0193e6cc;
      lVar7 = lVar7 + (long)(int)*(uint *)(unaff_x19 + 0x50) * 0x10;
      auVar27 = NEON_fmov(0x3f800000,4);
      *(long *)(lVar7 + 0x28) = auVar27._8_8_;
      *(long *)(lVar7 + 0x20) = auVar27._0_8_;
      iVar19 = *(int *)(unaff_x19 + 0x50);
      if (iVar19 % 100 == 0) {
        iVar1 = *(int *)((long)unaff_x20 + 0x24);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar7 != 0) {
          FUN_01919300((float)iVar19 / (float)iVar1,(float)iVar1,lVar7,
                       *(undefined8 *)StringLiteral_13935,0);
          *(long *)(unaff_x19 + 0x18) = lVar7;
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        break;
      }
      uVar18 = iVar19 + 1;
      *(uint *)(unaff_x19 + 0x50) = uVar18;
    }
  }
  goto LAB_0193e6c8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_0193e37c:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0193e3f4;
    }
  }
LAB_0193e394:
  puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,0);
LAB_0193e3f4:
  uVar8 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if ((uVar8 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar13 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x40) = plVar13;
      if (plVar13 != (long *)0x0) {
        lVar7 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar14 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0193e4c0;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,0);
LAB_0193e4c0:
        uVar8 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar8 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar13 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x48) = plVar13;
            if (plVar13 != (long *)0x0) {
              lVar7 = *plVar13;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                    puVar14 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0193e58c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,0);
LAB_0193e58c:
              uVar8 = (*(code *)*puVar14)(plVar13,puVar14[1]);
              if ((uVar8 & 1) == 0) {
                lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (lVar7 != 0) {
                  FUN_01919300(lVar7,*(undefined8 *)
                                      Method_System_Net_AuthenticationManager_PreAuthenticate__,0);
                  *(long *)(unaff_x19 + 0x18) = lVar7;
                  uVar21 = 5;
                  goto LAB_0193e68c;
                }
              }
              else {
                plVar13 = *(long **)(unaff_x19 + 0x48);
                if (plVar13 != (long *)0x0) {
                  lVar7 = *plVar13;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar8 != 0) {
                    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                        puVar14 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_0193e678;
                      }
                      uVar8 = uVar8 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,1);
LAB_0193e678:
                  uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
                  uVar21 = 4;
LAB_0193e68c:
                  *(undefined4 *)(unaff_x19 + 0x10) = uVar21;
                  return 1;
                }
              }
            }
          }
        }
        else {
          plVar13 = *(long **)(unaff_x19 + 0x40);
          if (plVar13 != (long *)0x0) {
            lVar7 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_0193e650;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,1);
LAB_0193e650:
            uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
            uVar21 = 3;
            goto LAB_0193e68c;
          }
        }
      }
    }
  }
  else {
    plVar13 = *(long **)(unaff_x19 + 0x38);
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0193e628;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,1);
LAB_0193e628:
      uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      uVar21 = 2;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
      goto LAB_0193e68c;
    }
  }
  goto LAB_0193e6c8;
code_r0x0193db30:
  if (0.0 < fVar26) {
    lVar7 = unaff_x20[0x26];
    if (lVar7 != 0) {
      iVar19 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar19) goto LAB_0193db90;
        FUN_0132138c(lVar7,iVar19,&stack0x00000020,*unaff_x29);
        fStack0000000000000020 = fStack0000000000000020 / fVar26;
        FUN_0132149c(lVar7,iVar19,&stack0x00000020,*puVar10);
        lVar7 = unaff_x20[0x26];
        iVar19 = iVar19 + 1;
      } while (lVar7 != 0);
    }
    goto LAB_0193e6c8;
  }
LAB_0193db90:
  if (unaff_x20[0x25] != 0) {
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                         ,*(undefined4 *)(unaff_x20[0x25] + 0x18));
    puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
    if (unaff_x20[0x25] != 0) {
      lVar12 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(unaff_x20[0x25] + 0x18));
      puVar5 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
      puVar3 = PTR_DAT_033f0958;
      lVar9 = unaff_x20[0x25];
      if (lVar9 != 0) {
        iVar19 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar19) {
            if (*(int *)(lVar9 + 0x18) < 1) goto LAB_0193ddd0;
            uVar8 = 0;
            pfVar20 = (float *)(lVar7 + 0x28);
            goto LAB_0193dcdc;
          }
          FUN_0132138c(lVar9,iVar19,&stack0x00000020,*(undefined8 *)puVar5);
          fVar26 = fStack0000000000000020;
          lVar9 = (long)(int)fStack0000000000000020;
          if (-1 < (int)fStack0000000000000020) {
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            FUN_0132138c(*(long *)(unaff_x19 + 0x28),iVar19,&stack0x00000020,*(undefined8 *)puVar4);
            fVar23 = fStack0000000000000028;
            fVar22 = fStack0000000000000024;
            fVar28 = fStack0000000000000020;
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x28),fVar26,&stack0x00000020,
                             *(undefined8 *)puVar4), lVar7 == 0)) break;
            if ((uint)*(float *)(lVar7 + 0x18) <= (uint)fVar26) goto LAB_0193e6cc;
            lVar16 = lVar7 + lVar9 * 0xc;
            param_3 = *(ulong *)(lVar16 + 0x20);
            param_4 = *(float *)(lVar16 + 0x28);
            param_2 = (fVar23 - fStack0000000000000028) + param_4;
            *(ulong *)(lVar16 + 0x20) =
                 CONCAT44((fVar22 - fStack0000000000000024) + (float)(param_3 >> 0x20),
                          (fVar28 - fStack0000000000000020) + (float)param_3);
            *(float *)(lVar16 + 0x28) = param_2;
            if (lVar12 == 0) break;
            if ((uint)*(float *)(lVar12 + 0x18) <= (uint)fVar26) goto LAB_0193e6cc;
            lVar9 = lVar12 + lVar9 * 4;
            *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + 1;
          }
          lVar9 = unaff_x20[0x25];
          iVar19 = iVar19 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_0193e6c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


