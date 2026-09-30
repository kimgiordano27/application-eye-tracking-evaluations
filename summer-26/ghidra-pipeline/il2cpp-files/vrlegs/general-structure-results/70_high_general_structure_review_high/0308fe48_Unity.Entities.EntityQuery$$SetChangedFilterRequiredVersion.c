/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$SetChangedFilterRequiredVersion
ENTRY_POINT: 0308fe48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_9;functionality_data_collection_or_telemetry_hits_9
*/


undefined1  [16] Unity_Entities_EntityQuery__SetChangedFilterRequiredVersion(void)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int in_w8;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *in_x9;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long lVar17;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 uVar25;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack000000000000003c;
  ulong in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long *in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  do {
    lVar13 = *in_x9;
    *(int *)(unaff_x29 + 0x1c) = in_w8;
    uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(unaff_x29 + 0x18) = 0;
    }
    else {
      iVar4 = *(int *)(unaff_x29 + 0x18);
      *(undefined4 *)(unaff_x29 + 0x18) = 0;
      if (0 < iVar4) {
        FUN_02793a34(*(undefined8 *)(in_stack_00000090 + 0x10),0,iVar4,0);
      }
    }
    if (unaff_x24 == 0) goto LAB_030905b4;
    if (0 < *(int *)(unaff_x24 + 0x18)) {
                    /* try { // try from 0308fea4 to 0318feaf has its CatchHandler @ 03090038 */
      uVar6 = 0;
      do {
        if (unaff_x28 == 0) goto LAB_030905b4;
        uStack00000000000000a8 = (int)uVar6;
        uVar7 = FUN_021e4dc4(unaff_x28,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
        if ((uVar7 & 1) != 0) {
          uStack00000000000000a8 = (int)uVar6;
          FUN_01b5f01c(in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          if (*(uint *)(unaff_x24 + 0x18) <= uVar6) goto LAB_030907fc;
          if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
          lVar13 = *unaff_x21;
          lVar14 = unaff_x24 + uVar6 * unaff_x22;
          uVar21 = (ulong)*(uint *)(lVar14 + 0x24);
          uVar23 = (ulong)*(uint *)(lVar14 + 0x28);
          uVar25 = *(undefined4 *)(lVar14 + 0x20);
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x27) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0308ff54;
              }
              uVar7 = uVar7 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
          uVar18 = (*(code *)*puVar8)(uVar25,uVar21,uVar23);
          if (in_stack_00000060 == 0) goto LAB_030905b4;
          if (*(uint *)(in_stack_00000060 + 0x18) <= uVar6) goto LAB_030907fc;
          lVar13 = *unaff_x21;
          lVar14 = in_stack_00000060 + uVar6 * unaff_x22;
          uVar25 = *(undefined4 *)(lVar14 + 0x20);
          uVar22 = (ulong)*(uint *)(lVar14 + 0x24);
          uVar24 = (ulong)*(uint *)(lVar14 + 0x28);
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x27) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0308ffe8;
              }
              uVar7 = uVar7 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
          uVar19 = (*(code *)*puVar8)(uVar25,uVar22,uVar24);
          if (in_stack_00000058 == 0) goto LAB_030905b4;
          if (*(uint *)(in_stack_00000058 + 0x18) <= uVar6) goto LAB_030907fc;
          lVar13 = in_stack_00000058 + uVar6 * 8;
          uVar7 = (ulong)*(uint *)(lVar13 + 0x24);
          uVar20 = FUN_0304ece0(*(undefined4 *)(lVar13 + 0x20),uVar7,0);
          if (in_stack_00000098 == 0) goto LAB_030905b4;
          FUN_03090fac(uVar18,uVar21,uVar23,uVar19,uVar22,uVar24,uVar20,uVar7,in_stack_00000098,
                       uVar6 & 0xffffffff);
          if (in_stack_00000070 != 0) {
            if (in_stack_00000050 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000050 + 0x18) <= uVar6) goto LAB_030907fc;
            lVar13 = in_stack_00000050 + uVar6 * 0x20;
            in_stack_000000c8 = *(undefined8 *)(lVar13 + 0x28);
            in_stack_000000c0 = *(undefined8 *)(lVar13 + 0x20);
            in_stack_000000d8 = *(undefined8 *)(lVar13 + 0x38);
            in_stack_000000d0 = *(undefined8 *)(lVar13 + 0x30);
            FUN_030910e8(in_stack_00000098,&stack0x000000c0);
          }
          if ((in_stack_00000068 & 0x100000000) == 0) {
            if (in_stack_00000048 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000048 + 0x18) <= uVar6) goto LAB_030907fc;
            lVar13 = in_stack_00000048 + uVar6 * 0x10;
            FUN_03091244(*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                         *(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x2c),
                         in_stack_00000098);
          }
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(unaff_x24 + 0x18));
    }
    lVar13 = *(long *)(in_stack_00000030 + 0x18);
    if (lVar13 == 0) goto LAB_030905b4;
    if (*(uint *)(lVar13 + 0x18) <= in_stack_00000040) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar18 = *(undefined8 *)(lVar13 + in_stack_00000040 * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_036cee6c(uVar18,0,0);
    if ((uVar6 & 1) == 0) {
      uStack000000000000003c = 0xffffffff;
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_030905b4;
      uStack000000000000003c =
           FUN_02217a2c(in_stack_00000018,uVar18,
                        *(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                       );
    }
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
    Animancer_AnimancerState__OnSetIsPlaying(lVar13,*(undefined8 *)PTR_DAT_03cbe510);
    uVar10 = *(uint *)(in_stack_00000078 + 0x18);
    if (0 < (int)uVar10) {
      uVar12 = 0;
      do {
        puVar3 = PTR_DAT_03cbe508;
        if (((uVar10 <= uVar12) || (uVar10 <= uVar12 + 1)) || (uVar10 <= uVar12 + 2))
        goto LAB_030907fc;
        if (lVar13 == 0) goto LAB_030905b4;
        uVar25 = *(undefined4 *)(in_stack_00000078 + (long)(int)uVar12 * 4 + 0x20);
        uVar1 = *(undefined4 *)(in_stack_00000078 + (long)(int)(uVar12 + 1) * 4 + 0x20);
        uStack00000000000000a8 =
             *(undefined4 *)(in_stack_00000078 + (long)(int)(uVar12 + 2) * 4 + 0x20);
        FUN_01b5f01c(lVar13,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
        unaff_x22 = 0xc;
        uStack00000000000000a8 = uVar1;
        FUN_01b5f01c(lVar13,&stack0x000000a8,*(undefined8 *)puVar3);
        uStack00000000000000a8 = uVar25;
        FUN_01b5f01c(lVar13,&stack0x000000a8,*(undefined8 *)puVar3);
        uVar10 = *(uint *)(in_stack_00000078 + 0x18);
        uVar12 = uVar12 + 3;
      } while ((int)uVar12 < (int)uVar10);
    }
    if (in_stack_00000098 == 0) goto LAB_030905b4;
    lVar13 = FUN_030912cc(in_stack_00000098,in_stack_00000088,uStack000000000000003c,lVar13);
    lVar14 = *in_stack_000000a0;
    if (lVar14 == 0) goto LAB_030905b4;
    iVar4 = 0;
    while (iVar5 = FUN_036a2ca8(lVar14,0), iVar4 < iVar5) {
      uVar25 = *(undefined4 *)(in_stack_00000090 + 0x18);
      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                 );
      FUN_03091748(lVar14,uVar25);
      if (*in_stack_000000a0 == 0) goto LAB_030905b4;
      UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*in_stack_000000a0,iVar4,0);
      Animancer_FadeGroup__get_TargetWeight
                (in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
      in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_000000e8 = in_stack_000000b0;
      in_stack_000000f0 = in_stack_000000b8;
      iVar5 = 0;
      while (uVar6 = FUN_021b51c8(&stack0x000000e0,*unaff_x20), (uVar6 & 1) != 0) {
        FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*unaff_x25);
        uVar10 = in_stack_00000108._4_4_;
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar17 = (long)(int)in_stack_00000108._4_4_;
        if (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = *unaff_x21;
        lVar15 = unaff_x23 + lVar17 * unaff_x22;
        uVar7 = (ulong)*(uint *)(lVar15 + 0x24);
        uVar21 = (ulong)*(uint *)(lVar15 + 0x28);
        uVar25 = *(undefined4 *)(lVar15 + 0x20);
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03090384;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
        uVar18 = (*(code *)*puVar8)(uVar25,uVar7,uVar21);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar11 = *unaff_x21;
        lVar17 = unaff_x19 + lVar17 * unaff_x22;
        uVar25 = *(undefined4 *)(lVar17 + 0x20);
        uVar23 = (ulong)*(uint *)(lVar17 + 0x24);
        uVar22 = (ulong)*(uint *)(lVar17 + 0x28);
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03090414;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
        uVar19 = (*(code *)*puVar8)(uVar25,uVar23,uVar22);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_030917d4(uVar18,uVar7,uVar21,uVar19,uVar23,uVar22,lVar14,iVar5);
        iVar5 = iVar5 + 1;
      }
      FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
      if ((lVar13 == 0) || (lVar14 == 0)) goto LAB_030905b4;
      if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
        uVar18 = *(undefined8 *)(lVar14 + 0x18);
      }
      else {
        uVar18 = 0;
      }
      lVar17 = *(long *)(lVar13 + 0x28);
      uVar18 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar14 + 0x10),uVar18,
                            *(char *)(in_stack_00000080 + 0x15) != '\0');
      if (lVar17 == 0) goto LAB_030905b4;
      FUN_01b5f01c(lVar17,uVar18,*(undefined8 *)System_IComparable_var);
      iVar4 = iVar4 + 1;
      lVar14 = *in_stack_000000a0;
      if (lVar14 == 0) goto LAB_030905b4;
    }
    if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x18) == 0)) goto LAB_030905b4;
    FUN_01b5f01c(*(long *)(in_stack_00000020 + 0x18),lVar13,
                 *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
    in_stack_00000040 = in_stack_00000040 + 1;
    if (*in_stack_000000a0 == 0) goto LAB_030905b4;
    iVar4 = FUN_036a3768(*in_stack_000000a0,0);
    lVar13 = *in_stack_000000a0;
    if (lVar13 == 0) goto LAB_030905b4;
    if ((long)iVar4 <= (long)in_stack_00000040) {
      uVar25 = FUN_036a2ca8(lVar13,0);
      uVar18 = FUN_02b34428(0,uVar25,0);
      uVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
      FUN_021de1ac(uVar19,in_stack_00000010,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                   ,0);
      uVar18 = FUN_01f6d39c(uVar18,uVar19,*(undefined8 *)PTR_DAT_03ccb9a8);
      uVar18 = FUN_01f70920(uVar18,*(undefined8 *)PTR_DAT_03cc4ca0);
      if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
      }
      FUN_03052fb0(in_stack_00000020,uVar18,3,0);
      puVar3 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
      ;
      if (*in_stack_000000a0 != 0) {
        uVar25 = FUN_036a2ca8(*in_stack_000000a0,0);
        uVar18 = FUN_02b34428(0,uVar25,0);
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
        if (lVar14 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar13 = *(long *)puVar3;
          }
          uVar19 = **(undefined8 **)(lVar13 + 0xb8);
          lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
          FUN_021de1ac(lVar14,uVar19,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                       ,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar9 = lVar14;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar14);
          lVar13 = *(long *)puVar3;
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *(long *)puVar3;
        }
        lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        if (lVar17 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar13 = *(long *)puVar3;
          }
          uVar19 = **(undefined8 **)(lVar13 + 0xb8);
          lVar17 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
          FUN_021de1ac(lVar17,uVar19,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                       ,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar9 = lVar17;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar17);
        }
        uVar18 = FUN_01f70a5c(uVar18,lVar14,lVar17,
                              *(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                             );
        in_stack_000000f8 = 0;
        in_stack_00000100 = 0;
        FUN_020f03e8(&stack0x000000f8,in_stack_00000020,uVar18,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                    );
        auVar2._8_8_ = in_stack_00000100;
        auVar2._0_8_ = in_stack_000000f8;
        return auVar2;
      }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000078 = FUN_036a8700(lVar13,in_stack_00000040 & 0xffffffff,0);
    unaff_x28 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
    FUN_021e45c8(unaff_x28,in_stack_00000078,*(undefined8 *)PTR_DAT_03ce47a8);
    if (in_stack_00000078 == 0) goto LAB_030905b4;
    in_stack_00000098 =
         thunk_FUN_01a89e68(*(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                           );
    FUN_03090d30(in_stack_00000098,*(undefined4 *)(in_stack_00000078 + 0x18),in_stack_00000070);
    if (in_stack_00000090 == 0) goto LAB_030905b4;
    in_w8 = *(int *)(in_stack_00000090 + 0x1c) + 1;
    in_x9 = (long *)PTR_DAT_03cbfc08;
    unaff_x24 = in_stack_00000028;
    unaff_x29 = in_stack_00000090;
  } while( true );
}


