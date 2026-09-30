/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$CompareQuery
ENTRY_POINT: 0308fd20
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


undefined1  [16] Unity_Entities_EntityQuery__CompareQuery(int param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined4 uVar30;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack000000000000003c;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
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
  
  puVar4 = PTR_DAT_03cbe510;
  if ((!in_ZR) && (param_1 != *(int *)(unaff_x24 + 0x18))) {
    in_stack_00000068._4_1_ = unaff_w22 != 3;
                    /* catch() { ... } // from try @ 0308fbd0 with catch @ 0308fd4c
                       catch() { ... } // from try @ 0308fcd0 with catch @ 0308fd4c */
  }
                    /* catch() { ... } // from try @ 0308fbec with catch @ 0308fd50 */
  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
  Animancer_AnimancerState__OnSetIsPlaying(lVar9,*(undefined8 *)puVar4);
  puVar6 = System_Text_EncoderFallback_var;
  puVar5 = PTR_DAT_03cc8660;
  puVar4 = PTR_DAT_03cc8650;
  lVar10 = *unaff_x25;
                    /* try { // try from 0308fd78 to 0318fd7b has its CatchHandler @ 0308fe08 */
  if (lVar10 != 0) {
                    /* try { // try from 0308fd7c to 0318fd93 has its CatchHandler @ 0308fb4c */
    uVar22 = 0;
    while( true ) {
      iVar7 = FUN_036a3768(lVar10,0);
      lVar10 = *unaff_x25;
      if (lVar10 == 0) break;
      if ((long)iVar7 <= (long)uVar22) {
        uVar30 = FUN_036a2ca8(lVar10,0);
        uVar23 = FUN_02b34428(0,uVar30,0);
        uVar24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
        FUN_021de1ac(uVar24,in_stack_00000010,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
        uVar23 = FUN_01f6d39c(uVar23,uVar24,*(undefined8 *)PTR_DAT_03ccb9a8);
        uVar23 = FUN_01f70920(uVar23,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(unaff_x26,uVar23,3,0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
        if (*unaff_x25 != 0) {
          uVar30 = FUN_036a2ca8(*unaff_x25,0);
          uVar23 = FUN_02b34428(0,uVar30,0);
          lVar9 = *(long *)puVar4;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar9);
            lVar9 = *(long *)puVar4;
          }
          lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
          if (lVar10 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar9);
              lVar9 = *(long *)puVar4;
            }
            uVar24 = **(undefined8 **)(lVar9 + 0xb8);
            lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar10,uVar24,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
            plVar16 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
            *plVar16 = lVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar10);
            lVar9 = *(long *)puVar4;
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar9);
            lVar9 = *(long *)puVar4;
          }
          lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
          if (lVar11 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar9);
              lVar9 = *(long *)puVar4;
            }
            uVar24 = **(undefined8 **)(lVar9 + 0xb8);
            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar11,uVar24,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar16 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar16 = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar11);
          }
          uVar23 = FUN_01f70a5c(uVar23,lVar10,lVar11,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                               );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,unaff_x26,uVar23,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        break;
      }
      lVar10 = FUN_036a8700(lVar10,uVar22 & 0xffffffff,0);
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar11,lVar10,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar10 == 0) break;
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar12,*(undefined4 *)(lVar10 + 0x18),in_stack_00000070);
      if (lVar9 == 0) break;
      lVar19 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      uVar13 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
      if ((uVar13 & 1) == 0) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
      }
      else {
        iVar7 = *(int *)(lVar9 + 0x18);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        if (0 < iVar7) {
          FUN_02793a34(*(undefined8 *)(lVar9 + 0x10),0,iVar7,0);
        }
      }
      if (in_stack_00000028 == 0) break;
      if (0 < *(int *)(in_stack_00000028 + 0x18)) {
        uVar13 = 0;
        do {
          if (lVar11 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar13;
          uVar14 = FUN_021e4dc4(lVar11,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar14 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar13;
            FUN_01b5f01c(lVar9,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(in_stack_00000028 + 0x18) <= uVar13) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar19 = *unaff_x21;
            lVar20 = in_stack_00000028 + uVar13 * 0xc;
            uVar26 = (ulong)*(uint *)(lVar20 + 0x24);
            uVar28 = (ulong)*(uint *)(lVar20 + 0x28);
            uVar30 = *(undefined4 *)(lVar20 + 0x20);
            uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar14 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
                  puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar14 = uVar14 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar14 != 0);
            }
            puVar15 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar23 = (*(code *)*puVar15)(uVar30,uVar26,uVar28);
            if (in_stack_00000060 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar13) goto LAB_030907fc;
            lVar19 = *unaff_x21;
            lVar20 = in_stack_00000060 + uVar13 * 0xc;
            uVar30 = *(undefined4 *)(lVar20 + 0x20);
            uVar27 = (ulong)*(uint *)(lVar20 + 0x24);
            uVar29 = (ulong)*(uint *)(lVar20 + 0x28);
            uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar14 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
                  puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar14 = uVar14 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar14 != 0);
            }
            puVar15 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar24 = (*(code *)*puVar15)(uVar30,uVar27,uVar29);
            if (in_stack_00000058 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar13) goto LAB_030907fc;
            lVar19 = in_stack_00000058 + uVar13 * 8;
            uVar14 = (ulong)*(uint *)(lVar19 + 0x24);
            uVar25 = FUN_0304ece0(*(undefined4 *)(lVar19 + 0x20),uVar14,0);
            if (lVar12 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar23,uVar26,uVar28,uVar24,uVar27,uVar29,uVar25,uVar14,lVar12,
                         uVar13 & 0xffffffff);
            if (in_stack_00000070 != 0) {
              if (in_stack_00000050 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000050 + 0x18) <= uVar13) goto LAB_030907fc;
              lVar19 = in_stack_00000050 + uVar13 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar19 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar19 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar19 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar19 + 0x30);
              FUN_030910e8(lVar12,&stack0x000000c0);
            }
            if ((in_stack_00000068._4_1_ & 1) == 0) {
              if (in_stack_00000048 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000048 + 0x18) <= uVar13) goto LAB_030907fc;
              lVar19 = in_stack_00000048 + uVar13 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar19 + 0x20),*(undefined4 *)(lVar19 + 0x24),
                           *(undefined4 *)(lVar19 + 0x28),*(undefined4 *)(lVar19 + 0x2c),lVar12);
            }
          }
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)*(int *)(in_stack_00000028 + 0x18));
      }
      lVar11 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar22) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar23 = *(undefined8 *)(lVar11 + uVar22 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036cee6c(uVar23,0,0);
      if ((uVar13 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) break;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar23,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)PTR_DAT_03cbe510);
      uVar17 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar17) {
        uVar18 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar17 <= uVar18) || (uVar17 <= uVar18 + 1)) || (uVar17 <= uVar18 + 2))
          goto LAB_030907fc;
          if (lVar11 == 0) goto LAB_030905b4;
          uVar30 = *(undefined4 *)(lVar10 + (long)(int)uVar18 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar10 + (long)(int)(uVar18 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar10 + (long)(int)(uVar18 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar11,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar11,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar30;
          FUN_01b5f01c(lVar11,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar17 = *(uint *)(lVar10 + 0x18);
          uVar18 = uVar18 + 3;
        } while ((int)uVar18 < (int)uVar17);
      }
      if (lVar12 == 0) break;
      lVar10 = FUN_030912cc(lVar12,in_stack_00000088,uStack000000000000003c,lVar11);
      lVar11 = *unaff_x25;
      if (lVar11 == 0) break;
      iVar7 = 0;
      while (iVar8 = FUN_036a2ca8(lVar11,0), iVar7 < iVar8) {
        uVar30 = *(undefined4 *)(lVar9 + 0x18);
        lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                   );
        FUN_03091748(lVar11,uVar30);
        if (*unaff_x25 == 0) goto LAB_030905b4;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*unaff_x25,iVar7,0);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar9,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
        in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_000000e8 = in_stack_000000b0;
        in_stack_000000f0 = in_stack_000000b8;
        iVar8 = 0;
        while (uVar13 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
          FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar5);
          uVar17 = in_stack_00000108._4_4_;
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar12 = (long)(int)in_stack_00000108._4_4_;
          if (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar19 = *unaff_x21;
          lVar20 = unaff_x23 + lVar12 * 0xc;
          uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
          uVar26 = (ulong)*(uint *)(lVar20 + 0x28);
          uVar30 = *(undefined4 *)(lVar20 + 0x20);
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_03090384;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
          uVar23 = (*(code *)*puVar15)(uVar30,uVar14,uVar26);
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(unaff_x19 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar19 = *unaff_x21;
          lVar12 = unaff_x19 + lVar12 * 0xc;
          uVar30 = *(undefined4 *)(lVar12 + 0x20);
          uVar28 = (ulong)*(uint *)(lVar12 + 0x24);
          uVar27 = (ulong)*(uint *)(lVar12 + 0x28);
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_03090414;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
          uVar24 = (*(code *)*puVar15)(uVar30,uVar28,uVar27);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_030917d4(uVar23,uVar14,uVar26,uVar24,uVar28,uVar27,lVar11,iVar8);
          iVar8 = iVar8 + 1;
        }
        FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
        if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_030905b4;
        if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
          uVar23 = *(undefined8 *)(lVar11 + 0x18);
        }
        else {
          uVar23 = 0;
        }
        lVar12 = *(long *)(lVar10 + 0x28);
        uVar23 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar11 + 0x10),uVar23,
                              *(char *)(in_stack_00000080 + 0x15) != '\0');
        if (lVar12 == 0) goto LAB_030905b4;
        FUN_01b5f01c(lVar12,uVar23,*(undefined8 *)System_IComparable_var);
        iVar7 = iVar7 + 1;
        lVar11 = *unaff_x25;
        if (lVar11 == 0) goto LAB_030905b4;
      }
      if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x18) == 0)) break;
      FUN_01b5f01c(*(long *)(unaff_x26 + 0x18),lVar10,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      uVar22 = uVar22 + 1;
      lVar10 = *unaff_x25;
      if (lVar10 == 0) break;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


