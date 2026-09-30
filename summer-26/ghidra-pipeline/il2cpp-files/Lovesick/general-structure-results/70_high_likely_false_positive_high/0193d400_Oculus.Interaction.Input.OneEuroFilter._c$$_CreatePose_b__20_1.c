/*
FUNCTION_NAME: Oculus.Interaction.Input.OneEuroFilter.<>c$$<CreatePose>b__20_1
ENTRY_POINT: 0193d400
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x0193da74) */
/* WARNING: Removing unreachable block (ram,0x0193da78) */
/* WARNING: Removing unreachable block (ram,0x0193df84) */

undefined4 Oculus_Interaction_Input_OneEuroFilter_<>c__<CreatePose>b__20_1(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long in_x9;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long *unaff_x20;
  uint uVar20;
  long unaff_x21;
  int iVar21;
  float *pfVar22;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  ulong uVar31;
  float fVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 in_stack_00000040 [16];
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a8;
  
  lVar16 = **(long **)(in_x9 + 0xd98);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
  }
  else {
    iVar21 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    if (0 < iVar21) {
      FUN_0179519c(*(undefined8 *)(unaff_x21 + 0x10),0,iVar21,0);
    }
  }
  lVar16 = unaff_x20[0x26];
  if (lVar16 == 0) goto LAB_0193e6c8;
  lVar17 = *(long *)Method_System_Collections_Generic_Dictionary<int,_short>__ctor__;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
  uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(lVar16 + 0x18) = 0;
  }
  else {
    iVar21 = *(int *)(lVar16 + 0x18);
    *(undefined4 *)(lVar16 + 0x18) = 0;
    if (0 < iVar21) {
      FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar21,0);
    }
  }
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = StringLiteral_12714;
  if (lVar16 == 0) goto LAB_0193e6c8;
  FUN_01320e50(lVar16,*(undefined8 *)StringLiteral_79);
  *(long *)(unaff_x19 + 0x28) = lVar16;
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if (lVar16 == 0) goto LAB_0193e6c8;
  FUN_01320e50(lVar16,*(undefined8 *)Polenter_Serialization_Core_DeserializingException_TypeInfo);
  *(long *)(unaff_x19 + 0x30) = lVar16;
  if ((unaff_x20[0x22] == 0) ||
     (lVar16 = FUN_0268fd10(unaff_x20[0x22],0), puVar4 = StringLiteral_12902, lVar16 == 0))
  goto LAB_0193e6c8;
  FUN_026a0094(&stack0x00000020,lVar16,0);
  in_stack_00000068 = CONCAT44(uStack000000000000002c,fStack0000000000000028);
  uVar7 = CONCAT44(fStack0000000000000024,fStack0000000000000020);
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000070 = in_stack_00000030;
  in_stack_00000088 = in_stack_00000040._8_8_;
  in_stack_00000080 = in_stack_00000040._0_8_;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  uVar33 = in_stack_00000030;
  uVar36 = in_stack_00000050;
  in_stack_00000060 = uVar7;
  fVar23 = (float)thunk_FUN_02693554(&stack0x00000060,0);
  fVar37 = (float)uVar36;
  uVar31 = uVar7;
  uVar34 = uVar33;
  uVar24 = FUN_02698858(0);
  *(undefined4 *)(unaff_x20 + 0x2b) = uVar24;
  *(int *)((long)unaff_x20 + 0x15c) = (int)uVar31;
  *(int *)(unaff_x20 + 0x2c) = (int)uVar34;
  *(int *)((long)unaff_x20 + 0x164) = (int)uVar36;
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar13 = (undefined8 *)Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__;
  if (lVar16 == 0) goto LAB_0193e6c8;
  FUN_013752a0(lVar16,*(undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_Process__)
  ;
  FUN_013757d8(lVar16,unaff_x20[0x22],*puVar13);
  if (unaff_x20[0x25] == 0) goto LAB_0193e6c8;
  FUN_00ac20f0(unaff_x20[0x25],0xffffffff,*(undefined8 *)StringLiteral_4747);
  if (unaff_x20[0x26] == 0) goto LAB_0193e6c8;
  fVar39 = 0.0;
  FUN_00ac1d04(unaff_x20[0x26],*(undefined8 *)Method_System_Numerics_Vector<ushort>_get_Zero__);
  puVar3 = Method_PaperCyclone_<>c__DisplayClass6_0_<Reverse>b__1__;
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar10 = (undefined8 *)StringLiteral_9928;
  uVar18 = uVar7;
  uVar38 = uVar33;
  if (0 < *(int *)(lVar16 + 0x20)) {
LAB_0193d618:
    FUN_01375c70(lVar16,&stack0x00000020,*(undefined8 *)puVar3);
    lVar17 = CONCAT44(fStack0000000000000024,fStack0000000000000020);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_02681b9c(lVar17,0,0);
    if ((uVar8 & 1) == 0) goto LAB_0193d668;
    lVar9 = FUN_0193ca30();
    fVar32 = (float)uVar34;
    fVar30 = (float)uVar31;
    fVar35 = (float)uVar36;
    if (lVar9 == 0) {
      if ((unaff_x20[0x23] != 0) &&
         (FUN_00acdfa0(unaff_x20[0x23],lVar17,
                       *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo),
         lVar17 != 0)) {
        lVar9 = unaff_x20[0x24];
        FUN_0269f910(lVar17,0);
        if (lVar9 != 0) {
          FUN_00acfdbc(lVar9,*(undefined8 *)StringLiteral_9785);
          lVar9 = *(long *)(unaff_x19 + 0x28);
          FUN_0269f578(lVar17,0);
          FUN_02692df0(&stack0x00000060,0);
          if (lVar9 != 0) {
            FUN_00ac4f98(lVar9,*(undefined8 *)StringLiteral_1006);
            lVar9 = *(long *)(unaff_x19 + 0x30);
            fVar25 = (float)FUN_0269f810(lVar17,0);
            if (lVar9 != 0) {
              fVar26 = (float)uVar18;
              fVar27 = (float)uVar38;
              uVar31 = (ulong)(uint)((fVar27 * fVar25 + fVar37 * fVar30 + fVar26 * fVar35) -
                                    fVar23 * fVar32);
              uVar34 = (ulong)(uint)((fVar23 * fVar30 + fVar37 * fVar32 + fVar27 * fVar35) -
                                    fVar26 * fVar25);
              uVar36 = (ulong)(uint)(((fVar37 * fVar35 - fVar23 * fVar25) - fVar26 * fVar30) -
                                    fVar27 * fVar32);
              FUN_00acfdbc(lVar9,*(undefined8 *)StringLiteral_9785);
LAB_0193d798:
              plVar12 = (long *)FUN_026a13c0(lVar17,0);
              do {
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar9 = *plVar12;
                uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *unaff_x28) {
                      puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0193d7fc;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x28,0);
LAB_0193d7fc:
                uVar18 = (*(code *)*puVar10)(plVar12,puVar10[1]);
                if ((uVar18 & 1) == 0) goto LAB_0193d9d0;
                lVar9 = *plVar12;
                uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *unaff_x28) {
                      puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_0193d85c;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x28,1);
LAB_0193d85c:
                plVar11 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
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
                fVar32 = (float)uVar34;
                fVar30 = (float)uVar31;
                if (lVar9 == 0) {
                  if (unaff_x20[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (unaff_x20[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  iVar21 = *(int *)(unaff_x20[0x23] + 0x18) + -1;
                  FUN_00ac20f0(unaff_x20[0x25],iVar21,*(undefined8 *)StringLiteral_4747);
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  fVar26 = (float)FUN_0269f578(plVar11,0);
                  fVar35 = fVar30;
                  fVar25 = fVar32;
                  fVar27 = (float)FUN_0269f578(lVar17,0);
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
                  FUN_0132138c(unaff_x20[0x26],iVar21,(long)&stack0x000000a8 + 4,*unaff_x29);
                  puVar13 = (undefined8 *)
                            Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__;
                  uVar36 = (ulong)(uint)in_stack_000000a8._4_4_;
                  fVar30 = (fVar30 - fVar35) * (fVar30 - fVar35);
                  uVar31 = (ulong)(uint)fVar30;
                  fVar32 = (fVar32 - fVar25) * (fVar32 - fVar25);
                  uVar34 = (ulong)(uint)fVar32;
                  fVar30 = SQRT(fVar32 + (fVar26 - fVar27) * (fVar26 - fVar27) + fVar30) +
                           in_stack_000000a8._4_4_;
                  if (fVar39 <= fVar30) {
                    fVar39 = fVar30;
                  }
                  if (unaff_x20[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_00ac1d04(unaff_x20[0x26],
                               *(undefined8 *)Method_System_Numerics_Vector<ushort>_get_Zero__);
                }
                FUN_013757d8(lVar16,plVar11,*puVar13);
              } while( true );
            }
          }
        }
      }
      goto LAB_0193e6c8;
    }
    if (*(char *)(lVar9 + 0x18) == '\0') {
      if (lVar17 != 0) goto LAB_0193d798;
      goto LAB_0193e6c8;
    }
    goto LAB_0193d668;
  }
LAB_0193db90:
  if (unaff_x20[0x25] != 0) {
    lVar16 = FUN_00da4fb8(*(undefined8 *)
                           Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                          ,*(undefined4 *)(unaff_x20[0x25] + 0x18));
    puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
    if (unaff_x20[0x25] != 0) {
      lVar17 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(unaff_x20[0x25] + 0x18));
      puVar5 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
      puVar3 = PTR_DAT_033f0958;
      lVar9 = unaff_x20[0x25];
      if (lVar9 != 0) {
        iVar21 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar21) {
            if (*(int *)(lVar9 + 0x18) < 1) goto LAB_0193ddd0;
            uVar7 = 0;
            pfVar22 = (float *)(lVar16 + 0x28);
            goto LAB_0193dcdc;
          }
          FUN_0132138c(lVar9,iVar21,&stack0x00000020,*(undefined8 *)puVar5);
          fVar23 = fStack0000000000000020;
          lVar9 = (long)(int)fStack0000000000000020;
          if (-1 < (int)fStack0000000000000020) {
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            FUN_0132138c(*(long *)(unaff_x19 + 0x28),iVar21,&stack0x00000020,*(undefined8 *)puVar4);
            fVar30 = fStack0000000000000028;
            fVar39 = fStack0000000000000024;
            fVar37 = fStack0000000000000020;
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x28),fVar23,&stack0x00000020,
                             *(undefined8 *)puVar4), lVar16 == 0)) break;
            if ((uint)*(float *)(lVar16 + 0x18) <= (uint)fVar23) goto LAB_0193e6cc;
            lVar15 = lVar16 + lVar9 * 0xc;
            uVar34 = *(ulong *)(lVar15 + 0x20);
            uVar36 = (ulong)(uint)*(float *)(lVar15 + 0x28);
            fVar30 = (fVar30 - fStack0000000000000028) + *(float *)(lVar15 + 0x28);
            uVar31 = (ulong)(uint)fVar30;
            *(ulong *)(lVar15 + 0x20) =
                 CONCAT44((fVar39 - fStack0000000000000024) + (float)(uVar34 >> 0x20),
                          (fVar37 - fStack0000000000000020) + (float)uVar34);
            *(float *)(lVar15 + 0x28) = fVar30;
            if (lVar17 == 0) break;
            if ((uint)*(float *)(lVar17 + 0x18) <= (uint)fVar23) goto LAB_0193e6cc;
            lVar9 = lVar17 + lVar9 * 4;
            *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + 1;
          }
          lVar9 = unaff_x20[0x25];
          iVar21 = iVar21 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_0193e6c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0193d9d0:
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
  uVar18 = uVar7 & 0xffffffff;
  uVar38 = uVar33 & 0xffffffff;
  puVar10 = (undefined8 *)StringLiteral_9928;
  if (plVar12 != (long *)0x0) {
    lVar17 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar8 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
          puVar10 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0193da54;
        }
        uVar8 = uVar8 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_0193da54:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
    puVar10 = (undefined8 *)StringLiteral_9928;
  }
LAB_0193d668:
  if (*(int *)(lVar16 + 0x20) < 1) goto code_r0x0193db30;
  goto LAB_0193d618;
code_r0x0193db30:
  if (0.0 < fVar39) {
    lVar16 = unaff_x20[0x26];
    if (lVar16 != 0) {
      iVar21 = 0;
      do {
        if (*(int *)(lVar16 + 0x18) <= iVar21) goto LAB_0193db90;
        FUN_0132138c(lVar16,iVar21,&stack0x00000020,*unaff_x29);
        fStack0000000000000020 = fStack0000000000000020 / fVar39;
        FUN_0132149c(lVar16,iVar21,&stack0x00000020,*puVar10);
        lVar16 = unaff_x20[0x26];
        iVar21 = iVar21 + 1;
      } while (lVar16 != 0);
    }
    goto LAB_0193e6c8;
  }
  goto LAB_0193db90;
LAB_0193dcdc:
  do {
    if (lVar17 == 0) goto LAB_0193e6c8;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0193e6cc;
    iVar21 = *(int *)(lVar17 + 0x20 + uVar7 * 4);
    if (iVar21 < 1) {
      FUN_0132138c(lVar9,uVar7 & 0xffffffff,&stack0x00000020,*(undefined8 *)puVar5);
      if (-1 < (int)fStack0000000000000020) {
        if (unaff_x20[0x25] != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x30);
          FUN_0132138c(unaff_x20[0x25],uVar7 & 0xffffffff,&stack0x00000020,*(undefined8 *)puVar5);
          if (lVar9 != 0) {
            FUN_0132138c(lVar9,fStack0000000000000020,&stack0x00000020,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                        );
            uVar14 = *(undefined8 *)puVar3;
            goto LAB_0193dda4;
          }
        }
        goto LAB_0193e6c8;
      }
    }
    else {
      if (lVar16 == 0) goto LAB_0193e6c8;
      if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0193e6cc;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      fVar23 = (float)iVar21;
      uVar36 = (ulong)(uint)fVar23;
      uVar31 = (ulong)(uint)(pfVar22[-1] / fVar23);
      uVar34 = (ulong)(uint)(*pfVar22 / fVar23);
      fVar23 = (float)FUN_02698ebc(0);
      if (lVar9 == 0) goto LAB_0193e6c8;
      uVar14 = *(undefined8 *)puVar3;
      fStack0000000000000024 = (float)uVar31;
      fStack0000000000000028 = (float)uVar34;
      uStack000000000000002c = (undefined4)uVar36;
      fStack0000000000000020 = fVar23;
LAB_0193dda4:
      FUN_0132149c(lVar9,uVar7 & 0xffffffff,&stack0x00000020,uVar14);
    }
    lVar9 = unaff_x20[0x25];
    if (lVar9 == 0) goto LAB_0193e6c8;
    uVar7 = uVar7 + 1;
    pfVar22 = pfVar22 + 3;
  } while ((long)uVar7 < (long)*(int *)(lVar9 + 0x18));
LAB_0193ddd0:
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(undefined4 *)((long)unaff_x20 + 0x24) = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
    puVar3 = 
    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
    lVar16 = FUN_00da4fb8(*(undefined8 *)
                           Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                         );
    unaff_x20[9] = lVar16;
    puVar5 = StringLiteral_6246;
    lVar16 = FUN_00da4fb8(*(undefined8 *)StringLiteral_6246,*(undefined4 *)((long)unaff_x20 + 0x24))
    ;
    unaff_x20[0xb] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xd] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xe] = lVar16;
    puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    lVar16 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                          *(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xf] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x10] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x12] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                          *(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x11] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                          ,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[10] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0xc] = lVar16;
    lVar16 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__,
                          *(undefined4 *)((long)unaff_x20 + 0x24));
    unaff_x20[0x13] = lVar16;
    *(undefined4 *)(unaff_x19 + 0x50) = 0;
    puVar5 = 
    Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
    ;
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = PTR_DAT_033f3e18;
    uVar20 = 0;
    while (unaff_x20 != (long *)0x0) {
      uVar24 = (undefined4)uVar31;
      iVar21 = *(int *)((long)unaff_x20 + 0x24);
      if (iVar21 <= (int)uVar20) {
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<SkinnedMeshRenderer>__
                                   );
        if (lVar16 != 0) {
          FUN_01902800(lVar16,iVar21,0);
          unaff_x20[0x2d] = lVar16;
          FUN_0193cbc4();
          plVar12 = (long *)(**(code **)(*unaff_x20 + 600))();
          *(long **)(unaff_x19 + 0x38) = plVar12;
          if (plVar12 != (long *)0x0) {
            lVar16 = *plVar12;
            uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar7 == 0) goto LAB_0193e394;
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_0193e37c;
          }
        }
        break;
      }
      lVar16 = unaff_x20[0x28];
      lVar17 = unaff_x20[0xf];
      fVar23 = DAT_028aa040;
      if (lVar16 != 0) {
        if (unaff_x20[0x26] == 0) break;
        FUN_0132138c(unaff_x20[0x26],uVar20,&stack0x00000020,*unaff_x29);
        fVar23 = (float)FUN_0193755c(lVar16);
      }
      puVar6 = StringLiteral_645;
      if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar37 = DAT_028aa038;
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar20) {
LAB_0193e6cc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (fVar23 <= DAT_028aa038) {
        fVar23 = DAT_028aa038;
      }
      *(float *)(lVar17 + (long)(int)uVar20 * 4 + 0x20) = 1.0 / fVar23;
      lVar17 = unaff_x20[0x10];
      lVar16 = unaff_x20[0x29];
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      fVar23 = DAT_028aa040;
      if (lVar16 != 0) {
        if (unaff_x20[0x26] == 0) break;
        FUN_0132138c(unaff_x20[0x26],uVar20,&stack0x00000020,*unaff_x29);
        fVar23 = (float)FUN_0193755c(lVar16);
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_0193e6cc;
      if (fVar23 <= fVar37) {
        fVar23 = fVar37;
      }
      *(float *)(lVar17 + (long)(int)uVar20 * 4 + 0x20) = 1.0 / fVar23;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      lVar16 = unaff_x20[9];
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar20,&stack0x00000020,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      lVar16 = lVar16 + (long)(int)uVar20 * 0xc;
      *(ulong *)(lVar16 + 0x20) = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      *(float *)(lVar16 + 0x28) = fStack0000000000000028;
      lVar16 = unaff_x20[9];
      if (lVar16 == 0) break;
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      lVar17 = unaff_x20[10];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_0193e6cc;
      lVar16 = lVar16 + (long)(int)uVar20 * 0xc;
      uVar28 = *(undefined4 *)(lVar16 + 0x28);
      lVar17 = lVar17 + (long)(int)uVar20 * 0x10;
      *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
      *(undefined4 *)(lVar17 + 0x28) = uVar28;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      lVar16 = unaff_x20[10];
      if (lVar16 == 0) break;
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      *(undefined4 *)(lVar16 + (long)(int)uVar20 * 0x10 + 0x2c) = 0x3f800000;
      if (*(long *)(unaff_x19 + 0x30) == 0) break;
      lVar16 = unaff_x20[0xb];
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),uVar20,&stack0x00000020,*(undefined8 *)puVar5);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      auVar29._8_4_ = fStack0000000000000028;
      auVar29._0_8_ = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      auVar29._12_4_ = uStack000000000000002c;
      lVar16 = lVar16 + (long)(int)uVar20 * 0x10;
      *(long *)(lVar16 + 0x28) = auVar29._8_8_;
      *(ulong *)(lVar16 + 0x20) = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      if (unaff_x20[0x23] == 0) break;
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      lVar16 = unaff_x20[0xc];
      FUN_0132138c(unaff_x20[0x23],uVar20,&stack0x00000020,*(undefined8 *)PTR_DAT_033f3d78);
      if ((CONCAT44(fStack0000000000000024,fStack0000000000000020) == 0) ||
         (uVar28 = FUN_0269f810(CONCAT44(fStack0000000000000024,fStack0000000000000020),0),
         lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      lVar16 = lVar16 + (long)(int)uVar20 * 0x10;
      *(undefined4 *)(lVar16 + 0x20) = uVar28;
      *(undefined4 *)(lVar16 + 0x24) = uVar24;
      *(int *)(lVar16 + 0x28) = (int)uVar34;
      *(int *)(lVar16 + 0x2c) = (int)uVar36;
      lVar16 = unaff_x20[0x12];
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      lVar17 = unaff_x20[0x2a];
      uVar14 = *(undefined8 *)
                (*(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 0xc);
      fVar37 = *(float *)(*(long *)(*(long *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                   + 0xb8) + 0x14);
      fVar23 = DAT_028aa298;
      if (lVar17 != 0) {
        if (unaff_x20[0x26] == 0) break;
        FUN_0132138c(unaff_x20[0x26],*(undefined4 *)(unaff_x19 + 0x50),&stack0x00000020,*unaff_x29);
        fVar23 = (float)FUN_0193755c(lVar17);
      }
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      uVar31 = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar23,(float)uVar14 * fVar23);
      lVar16 = lVar16 + (long)(int)uVar20 * 0xc;
      *(ulong *)(lVar16 + 0x20) = uVar31;
      *(float *)(lVar16 + 0x28) = fVar37 * fVar23;
      lVar16 = unaff_x20[0x11];
      uVar20 = *(uint *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0193e6cc;
      *(undefined4 *)(lVar16 + (long)(int)uVar20 * 4 + 0x20) = 0xffff0001;
      lVar16 = unaff_x20[0x13];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x50)) goto LAB_0193e6cc;
      lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x50) * 0x10;
      auVar29 = NEON_fmov(0x3f800000,4);
      *(long *)(lVar16 + 0x28) = auVar29._8_8_;
      *(long *)(lVar16 + 0x20) = auVar29._0_8_;
      iVar21 = *(int *)(unaff_x19 + 0x50);
      if (iVar21 % 100 == 0) {
        iVar1 = *(int *)((long)unaff_x20 + 0x24);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar16 != 0) {
          FUN_01919300((float)iVar21 / (float)iVar1,(float)iVar1,lVar16,
                       *(undefined8 *)StringLiteral_13935,0);
          *(long *)(unaff_x19 + 0x18) = lVar16;
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        break;
      }
      uVar20 = iVar21 + 1;
      *(uint *)(unaff_x19 + 0x50) = uVar20;
    }
  }
  goto LAB_0193e6c8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar19 = piVar19 + 4;
    if (uVar7 == 0) break;
LAB_0193e37c:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0193e3f4;
    }
  }
LAB_0193e394:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0193e3f4:
  uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
  if ((uVar7 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x40) = plVar12;
      if (plVar12 != (long *)0x0) {
        lVar16 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar7 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0193e4c0;
            }
            uVar7 = uVar7 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0193e4c0:
        uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar7 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar12 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x48) = plVar12;
            if (plVar12 != (long *)0x0) {
              lVar16 = *plVar12;
              uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar7 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                    puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_0193e58c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar7 != 0);
              }
              puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0193e58c:
              uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if ((uVar7 & 1) == 0) {
                lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (lVar16 != 0) {
                  FUN_01919300(lVar16,*(undefined8 *)
                                       Method_System_Net_AuthenticationManager_PreAuthenticate__,0);
                  *(long *)(unaff_x19 + 0x18) = lVar16;
                  uVar24 = 5;
                  goto LAB_0193e68c;
                }
              }
              else {
                plVar12 = *(long **)(unaff_x19 + 0x48);
                if (plVar12 != (long *)0x0) {
                  lVar16 = *plVar12;
                  uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar7 != 0) {
                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                        puVar13 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto LAB_0193e678;
                      }
                      uVar7 = uVar7 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_0193e678:
                  uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
                  uVar24 = 4;
LAB_0193e68c:
                  *(undefined4 *)(unaff_x19 + 0x10) = uVar24;
                  return 1;
                }
              }
            }
          }
        }
        else {
          plVar12 = *(long **)(unaff_x19 + 0x40);
          if (plVar12 != (long *)0x0) {
            lVar16 = *plVar12;
            uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar7 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_0193e650;
                }
                uVar7 = uVar7 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar7 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_0193e650:
            uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
            uVar24 = 3;
            goto LAB_0193e68c;
          }
        }
      }
    }
  }
  else {
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 != (long *)0x0) {
      lVar16 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar7 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0193e628;
          }
          uVar7 = uVar7 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_0193e628:
      uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      uVar24 = 2;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
      goto LAB_0193e68c;
    }
  }
  goto LAB_0193e6c8;
}


