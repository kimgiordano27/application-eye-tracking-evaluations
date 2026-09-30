/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$_GetImpl
ENTRY_POINT: 030901d8
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


undefined1  [16] Unity_Entities_EntityQuery___GetImpl(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  undefined4 in_w8;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *in_x9;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined4 unaff_w26;
  long lVar16;
  long *unaff_x27;
  uint unaff_w28;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
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
  
  uStack00000000000000a8 = in_w8;
  do {
    FUN_01b5f01c(param_1,param_2,*in_x9);
    uStack00000000000000a8 = unaff_w22;
    FUN_01b5f01c(unaff_x24,&stack0x000000a8,*in_x9);
    uStack00000000000000a8 = unaff_w26;
    FUN_01b5f01c(unaff_x24,&stack0x000000a8,*in_x9);
    uVar10 = *(uint *)(in_stack_00000078 + 0x18);
    uVar13 = unaff_w28 + 1;
    param_1 = unaff_x24;
    if ((int)uVar10 <= (int)uVar13) {
      do {
        if (in_stack_00000098 == 0) goto LAB_030905b4;
        lVar6 = FUN_030912cc(in_stack_00000098,in_stack_00000088,in_stack_00000038._4_4_,unaff_x24);
        lVar11 = *in_stack_000000a0;
        if (lVar11 == 0) goto LAB_030905b4;
        iVar3 = 0;
        while (iVar4 = FUN_036a2ca8(lVar11,0), iVar3 < iVar4) {
          uVar24 = *(undefined4 *)(in_stack_00000090 + 0x18);
          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                     );
          FUN_03091748(lVar11,uVar24);
          if (*in_stack_000000a0 == 0) goto LAB_030905b4;
          UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*in_stack_000000a0,iVar3,0);
          Animancer_FadeGroup__get_TargetWeight
                    (in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
          in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          in_stack_000000e8 = in_stack_000000b0;
          in_stack_000000f0 = in_stack_000000b8;
          iVar4 = 0;
          while (uVar7 = FUN_021b51c8(&stack0x000000e0,*unaff_x20), (uVar7 & 1) != 0) {
            FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*unaff_x25);
            uVar13 = in_stack_00000108._4_4_;
            if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar16 = (long)(int)in_stack_00000108._4_4_;
            if (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar12 = *unaff_x21;
            lVar14 = unaff_x23 + lVar16 * 0xc;
            uVar5 = (ulong)*(uint *)(lVar14 + 0x24);
            uVar20 = (ulong)*(uint *)(lVar14 + 0x28);
            uVar24 = *(undefined4 *)(lVar14 + 0x20);
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *unaff_x27) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_03090384;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
            uVar18 = (*(code *)*puVar8)(uVar24,uVar5,uVar20);
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            lVar12 = *unaff_x21;
            lVar16 = unaff_x19 + lVar16 * 0xc;
            uVar24 = *(undefined4 *)(lVar16 + 0x20);
            uVar22 = (ulong)*(uint *)(lVar16 + 0x24);
            uVar21 = (ulong)*(uint *)(lVar16 + 0x28);
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *unaff_x27) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_03090414;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
            uVar19 = (*(code *)*puVar8)(uVar24,uVar22,uVar21);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_030917d4(uVar18,uVar5,uVar20,uVar19,uVar22,uVar21,lVar11,iVar4);
            iVar4 = iVar4 + 1;
          }
          FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
          if ((lVar6 == 0) || (lVar11 == 0)) goto LAB_030905b4;
          if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
            uVar18 = *(undefined8 *)(lVar11 + 0x18);
          }
          else {
            uVar18 = 0;
          }
          lVar16 = *(long *)(lVar6 + 0x28);
          uVar18 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar11 + 0x10),uVar18,
                                *(char *)(in_stack_00000080 + 0x15) != '\0');
          if (lVar16 == 0) goto LAB_030905b4;
          FUN_01b5f01c(lVar16,uVar18,*(undefined8 *)System_IComparable_var);
          iVar3 = iVar3 + 1;
          lVar11 = *in_stack_000000a0;
          if (lVar11 == 0) goto LAB_030905b4;
        }
        if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x18) == 0))
        goto LAB_030905b4;
        FUN_01b5f01c(*(long *)(in_stack_00000020 + 0x18),lVar6,
                     *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
        in_stack_00000040 = in_stack_00000040 + 1;
        if (*in_stack_000000a0 == 0) goto LAB_030905b4;
        iVar3 = FUN_036a3768(*in_stack_000000a0,0);
        lVar6 = *in_stack_000000a0;
        if (lVar6 == 0) goto LAB_030905b4;
        if ((long)iVar3 <= (long)in_stack_00000040) {
          uVar24 = FUN_036a2ca8(lVar6,0);
          uVar18 = FUN_02b34428(0,uVar24,0);
          uVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
          FUN_021de1ac(uVar19,in_stack_00000010,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                       ,0);
          uVar18 = FUN_01f6d39c(uVar18,uVar19,*(undefined8 *)PTR_DAT_03ccb9a8);
          uVar18 = FUN_01f70920(uVar18,*(undefined8 *)PTR_DAT_03cc4ca0);
          if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0)
          {
            thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
          }
          FUN_03052fb0(in_stack_00000020,uVar18,3,0);
          puVar2 = 
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
          ;
          if (*in_stack_000000a0 != 0) {
            uVar24 = FUN_036a2ca8(*in_stack_000000a0,0);
            uVar18 = FUN_02b34428(0,uVar24,0);
            lVar6 = *(long *)puVar2;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar6);
              lVar6 = *(long *)puVar2;
            }
            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar11 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar6);
                lVar6 = *(long *)puVar2;
              }
              uVar19 = **(undefined8 **)(lVar6 + 0xb8);
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
              FUN_021de1ac(lVar11,uVar19,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                           ,0);
              plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *plVar9 = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
              lVar6 = *(long *)puVar2;
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar6);
              lVar6 = *(long *)puVar2;
            }
            lVar16 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
            if (lVar16 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar6);
                lVar6 = *(long *)puVar2;
              }
              uVar19 = **(undefined8 **)(lVar6 + 0xb8);
              lVar16 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
              FUN_021de1ac(lVar16,uVar19,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                           ,0);
              plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
              *plVar9 = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar16);
            }
            uVar18 = FUN_01f70a5c(uVar18,lVar11,lVar16,
                                  *(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                                 );
            in_stack_000000f8 = 0;
            in_stack_00000100 = 0;
            FUN_020f03e8(&stack0x000000f8,in_stack_00000020,uVar18,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                        );
            auVar1._8_8_ = in_stack_00000100;
            auVar1._0_8_ = in_stack_000000f8;
            return auVar1;
          }
          goto LAB_030905b4;
        }
        in_stack_00000078 = FUN_036a8700(lVar6,in_stack_00000040 & 0xffffffff,0);
        lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
        FUN_021e45c8(lVar6,in_stack_00000078,*(undefined8 *)PTR_DAT_03ce47a8);
        if (in_stack_00000078 == 0) goto LAB_030905b4;
        in_stack_00000098 =
             thunk_FUN_01a89e68(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                               );
        FUN_03090d30(in_stack_00000098,*(undefined4 *)(in_stack_00000078 + 0x18),in_stack_00000070);
        if (in_stack_00000090 == 0) goto LAB_030905b4;
        lVar11 = *(long *)PTR_DAT_03cbfc08;
        *(int *)(in_stack_00000090 + 0x1c) = *(int *)(in_stack_00000090 + 0x1c) + 1;
        uVar7 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
        if ((uVar7 & 1) == 0) {
          *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
        }
        else {
          iVar3 = *(int *)(in_stack_00000090 + 0x18);
          *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
          if (0 < iVar3) {
            FUN_02793a34(*(undefined8 *)(in_stack_00000090 + 0x10),0,iVar3,0);
          }
        }
        if (in_stack_00000028 == 0) goto LAB_030905b4;
        if (0 < *(int *)(in_stack_00000028 + 0x18)) {
          uVar7 = 0;
          do {
            if (lVar6 == 0) goto LAB_030905b4;
            uStack00000000000000a8 = (int)uVar7;
            uVar5 = FUN_021e4dc4(lVar6,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
            if ((uVar5 & 1) != 0) {
              uStack00000000000000a8 = (int)uVar7;
              FUN_01b5f01c(in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
              if (*(uint *)(in_stack_00000028 + 0x18) <= uVar7) goto LAB_030907fc;
              if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
              lVar11 = *unaff_x21;
              lVar16 = in_stack_00000028 + uVar7 * 0xc;
              uVar20 = (ulong)*(uint *)(lVar16 + 0x24);
              uVar22 = (ulong)*(uint *)(lVar16 + 0x28);
              uVar24 = *(undefined4 *)(lVar16 + 0x20);
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x27) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0308ff54;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar8 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
              uVar18 = (*(code *)*puVar8)(uVar24,uVar20,uVar22);
              if (in_stack_00000060 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000060 + 0x18) <= uVar7) goto LAB_030907fc;
              lVar11 = *unaff_x21;
              lVar16 = in_stack_00000060 + uVar7 * 0xc;
              uVar24 = *(undefined4 *)(lVar16 + 0x20);
              uVar21 = (ulong)*(uint *)(lVar16 + 0x24);
              uVar23 = (ulong)*(uint *)(lVar16 + 0x28);
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x27) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0308ffe8;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar8 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
              uVar19 = (*(code *)*puVar8)(uVar24,uVar21,uVar23);
              if (in_stack_00000058 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000058 + 0x18) <= uVar7) goto LAB_030907fc;
              lVar11 = in_stack_00000058 + uVar7 * 8;
              uVar5 = (ulong)*(uint *)(lVar11 + 0x24);
              uVar17 = FUN_0304ece0(*(undefined4 *)(lVar11 + 0x20),uVar5,0);
              if (in_stack_00000098 == 0) goto LAB_030905b4;
              FUN_03090fac(uVar18,uVar20,uVar22,uVar19,uVar21,uVar23,uVar17,uVar5,in_stack_00000098,
                           uVar7 & 0xffffffff);
              if (in_stack_00000070 != 0) {
                if (in_stack_00000050 == 0) goto LAB_030905b4;
                if (*(uint *)(in_stack_00000050 + 0x18) <= uVar7) goto LAB_030907fc;
                lVar11 = in_stack_00000050 + uVar7 * 0x20;
                in_stack_000000c8 = *(undefined8 *)(lVar11 + 0x28);
                in_stack_000000c0 = *(undefined8 *)(lVar11 + 0x20);
                in_stack_000000d8 = *(undefined8 *)(lVar11 + 0x38);
                in_stack_000000d0 = *(undefined8 *)(lVar11 + 0x30);
                FUN_030910e8(in_stack_00000098,&stack0x000000c0);
              }
              if ((in_stack_00000068 & 0x100000000) == 0) {
                if (in_stack_00000048 == 0) goto LAB_030905b4;
                if (*(uint *)(in_stack_00000048 + 0x18) <= uVar7) goto LAB_030907fc;
                lVar11 = in_stack_00000048 + uVar7 * 0x10;
                FUN_03091244(*(undefined4 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x24),
                             *(undefined4 *)(lVar11 + 0x28),*(undefined4 *)(lVar11 + 0x2c),
                             in_stack_00000098);
              }
            }
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)*(int *)(in_stack_00000028 + 0x18));
        }
        lVar6 = *(long *)(in_stack_00000030 + 0x18);
        if (lVar6 == 0) goto LAB_030905b4;
        if (*(uint *)(lVar6 + 0x18) <= in_stack_00000040) goto LAB_030907fc;
        uVar18 = *(undefined8 *)(lVar6 + in_stack_00000040 * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036cee6c(uVar18,0,0);
        if ((uVar7 & 1) == 0) {
          in_stack_00000038._4_4_ = 0xffffffff;
        }
        else {
          if (in_stack_00000018 == 0) goto LAB_030905b4;
          in_stack_00000038._4_4_ =
               FUN_02217a2c(in_stack_00000018,uVar18,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                           );
        }
        unaff_x24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
        Animancer_AnimancerState__OnSetIsPlaying(unaff_x24,*(undefined8 *)PTR_DAT_03cbe510);
        uVar10 = *(uint *)(in_stack_00000078 + 0x18);
      } while ((int)uVar10 < 1);
      uVar13 = 0;
      param_1 = unaff_x24;
    }
    if (((uVar10 <= uVar13) || (uVar10 <= uVar13 + 1)) ||
       (unaff_w28 = uVar13 + 2, uVar10 <= unaff_w28)) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (param_1 == 0) {
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_w26 = *(undefined4 *)(in_stack_00000078 + (long)(int)uVar13 * 4 + 0x20);
    unaff_w22 = *(undefined4 *)(in_stack_00000078 + (long)(int)(uVar13 + 1) * 4 + 0x20);
    uStack00000000000000a8 = *(undefined4 *)(in_stack_00000078 + (long)(int)(uVar13 + 2) * 4 + 0x20)
    ;
    param_2 = (undefined8 *)&stack0x000000a8;
    in_x9 = (undefined8 *)PTR_DAT_03cbe508;
    unaff_x24 = param_1;
  } while( true );
}


