/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$ReleaseGatheredEntities
ENTRY_POINT: 0308fc74
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


undefined1  [16] Unity_Entities_EntityQuery__ReleaseGatheredEntities(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack000000000000003c;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
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
  
  uVar8 = FUN_036a3408(param_1,0);
                    /* try { // try from 0308fc80 to 0318fc93 has its CatchHandler @ 0308fcdc */
  lVar11 = FUN_01ab6a94(*unaff_x19,uVar8);
  if (*unaff_x25 == 0) goto LAB_030905b4;
                    /* try { // try from 0308fc98 to 0318fccf has its CatchHandler @ 0308fcd8 */
  uVar8 = FUN_036a3408(*unaff_x25,0);
  lVar12 = FUN_01ab6a94(*unaff_x19,uVar8);
  iVar9 = FUN_0309087c(*unaff_x25,in_stack_00000018);
  if (*(char *)(in_stack_00000080 + 0x18) == '\0') {
LAB_0308fd34:
    if (iVar9 == 1) {
      bVar7 = false;
    }
    else {
LAB_0308fd44:
      bVar7 = iVar9 != 3;
    }
  }
  else {
    if (*unaff_x25 == 0) goto LAB_030905b4;
    lVar13 = FUN_036a4d24(*unaff_x25,0);
    if (lVar13 == 0) goto LAB_0308fd34;
    if (((*unaff_x25 == 0) || (lVar13 = FUN_036a4d24(*unaff_x25,0), lVar13 == 0)) ||
       (*unaff_x25 == 0)) goto LAB_030905b4;
    iVar10 = FUN_036a3408(*unaff_x25,0);
    bVar7 = false;
    if ((iVar9 != 1) && (iVar10 != *(int *)(lVar13 + 0x18))) goto LAB_0308fd44;
  }
  puVar4 = PTR_DAT_03cbe510;
  lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
  Animancer_AnimancerState__OnSetIsPlaying(lVar13,*(undefined8 *)puVar4);
  puVar6 = System_Text_EncoderFallback_var;
  puVar5 = PTR_DAT_03cc8660;
  puVar4 = PTR_DAT_03cc8650;
  lVar14 = *unaff_x25;
  if (lVar14 != 0) {
    uVar26 = 0;
    while( true ) {
      iVar9 = FUN_036a3768(lVar14,0);
      lVar14 = *unaff_x25;
      if (lVar14 == 0) break;
      if ((long)iVar9 <= (long)uVar26) {
        uVar8 = FUN_036a2ca8(lVar14,0);
        uVar27 = FUN_02b34428(0,uVar8,0);
        uVar28 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
        FUN_021de1ac(uVar28,unaff_x27,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
        uVar27 = FUN_01f6d39c(uVar27,uVar28,*(undefined8 *)PTR_DAT_03ccb9a8);
        uVar27 = FUN_01f70920(uVar27,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(unaff_x26,uVar27,3,0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
        if (*unaff_x25 != 0) {
          uVar8 = FUN_036a2ca8(*unaff_x25,0);
          uVar27 = FUN_02b34428(0,uVar8,0);
          lVar11 = *(long *)puVar4;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar11 = *(long *)puVar4;
          }
          lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
          if (lVar12 == 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar11);
              lVar11 = *(long *)puVar4;
            }
            uVar28 = **(undefined8 **)(lVar11 + 0xb8);
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar12,uVar28,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
            plVar20 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
            *plVar20 = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20,lVar12);
            lVar11 = *(long *)puVar4;
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar11 = *(long *)puVar4;
          }
          lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
          if (lVar13 == 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar11);
              lVar11 = *(long *)puVar4;
            }
            uVar28 = **(undefined8 **)(lVar11 + 0xb8);
            lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar13,uVar28,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar20 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar20 = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20,lVar13);
          }
          uVar27 = FUN_01f70a5c(uVar27,lVar12,lVar13,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                               );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,unaff_x26,uVar27,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        break;
      }
      lVar14 = FUN_036a8700(lVar14,uVar26 & 0xffffffff,0);
      lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar15,lVar14,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar14 == 0) break;
      lVar16 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar16,*(undefined4 *)(lVar14 + 0x18),in_stack_00000070);
      if (lVar13 == 0) break;
      lVar23 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      uVar17 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 200));
      if ((uVar17 & 1) == 0) {
        *(undefined4 *)(lVar13 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar9,0);
        }
      }
      if (in_stack_00000028 == 0) break;
      if (0 < *(int *)(in_stack_00000028 + 0x18)) {
        uVar17 = 0;
        do {
          if (lVar15 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar17;
          uVar18 = FUN_021e4dc4(lVar15,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar18 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar17;
            FUN_01b5f01c(lVar13,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(in_stack_00000028 + 0x18) <= uVar17) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar23 = *unaff_x21;
            lVar24 = in_stack_00000028 + uVar17 * 0xc;
            uVar30 = (ulong)*(uint *)(lVar24 + 0x24);
            uVar32 = (ulong)*(uint *)(lVar24 + 0x28);
            uVar8 = *(undefined4 *)(lVar24 + 0x20);
            uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar18 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar6) {
                  puVar19 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar18 = uVar18 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar27 = (*(code *)*puVar19)(uVar8,uVar30,uVar32);
            if (in_stack_00000060 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar17) goto LAB_030907fc;
            lVar23 = *unaff_x21;
            lVar24 = in_stack_00000060 + uVar17 * 0xc;
            uVar8 = *(undefined4 *)(lVar24 + 0x20);
            uVar31 = (ulong)*(uint *)(lVar24 + 0x24);
            uVar33 = (ulong)*(uint *)(lVar24 + 0x28);
            uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar18 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar6) {
                  puVar19 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar18 = uVar18 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar28 = (*(code *)*puVar19)(uVar8,uVar31,uVar33);
            if (in_stack_00000058 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar17) goto LAB_030907fc;
            lVar23 = in_stack_00000058 + uVar17 * 8;
            uVar18 = (ulong)*(uint *)(lVar23 + 0x24);
            uVar29 = FUN_0304ece0(*(undefined4 *)(lVar23 + 0x20),uVar18,0);
            if (lVar16 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar27,uVar30,uVar32,uVar28,uVar31,uVar33,uVar29,uVar18,lVar16,
                         uVar17 & 0xffffffff);
            if (in_stack_00000070 != 0) {
              if (in_stack_00000050 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000050 + 0x18) <= uVar17) goto LAB_030907fc;
              lVar23 = in_stack_00000050 + uVar17 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar23 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar23 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar23 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar23 + 0x30);
              FUN_030910e8(lVar16,&stack0x000000c0);
            }
            if (!bVar7) {
              if (in_stack_00000048 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000048 + 0x18) <= uVar17) goto LAB_030907fc;
              lVar23 = in_stack_00000048 + uVar17 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar23 + 0x20),*(undefined4 *)(lVar23 + 0x24),
                           *(undefined4 *)(lVar23 + 0x28),*(undefined4 *)(lVar23 + 0x2c),lVar16);
            }
          }
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)*(int *)(in_stack_00000028 + 0x18));
      }
      lVar15 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar26) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar27 = *(undefined8 *)(lVar15 + uVar26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_036cee6c(uVar27,0,0);
      if ((uVar17 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) break;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar27,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar15,*(undefined8 *)PTR_DAT_03cbe510);
      uVar21 = *(uint *)(lVar14 + 0x18);
      if (0 < (int)uVar21) {
        uVar22 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar21 <= uVar22) || (uVar21 <= uVar22 + 1)) || (uVar21 <= uVar22 + 2))
          goto LAB_030907fc;
          if (lVar15 == 0) goto LAB_030905b4;
          uVar8 = *(undefined4 *)(lVar14 + (long)(int)uVar22 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar14 + (long)(int)(uVar22 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar14 + (long)(int)(uVar22 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar15,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar15,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar8;
          FUN_01b5f01c(lVar15,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar21 = *(uint *)(lVar14 + 0x18);
          uVar22 = uVar22 + 3;
        } while ((int)uVar22 < (int)uVar21);
      }
      if (lVar16 == 0) break;
      lVar14 = FUN_030912cc(lVar16,in_stack_00000088,uStack000000000000003c,lVar15);
      lVar15 = *unaff_x25;
      if (lVar15 == 0) break;
      iVar9 = 0;
      while (iVar10 = FUN_036a2ca8(lVar15,0), iVar9 < iVar10) {
        uVar8 = *(undefined4 *)(lVar13 + 0x18);
        lVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                   );
        FUN_03091748(lVar15,uVar8);
        if (*unaff_x25 == 0) goto LAB_030905b4;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                  (*unaff_x25,iVar9,0,lVar11,lVar12,0,0);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar13,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
        in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_000000e8 = in_stack_000000b0;
        in_stack_000000f0 = in_stack_000000b8;
        iVar10 = 0;
        while (uVar17 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar4), (uVar17 & 1) != 0) {
          FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar5);
          uVar21 = in_stack_00000108._4_4_;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar16 = (long)(int)in_stack_00000108._4_4_;
          if (*(uint *)(lVar11 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar23 = *unaff_x21;
          lVar24 = lVar11 + lVar16 * 0xc;
          uVar18 = (ulong)*(uint *)(lVar24 + 0x24);
          uVar30 = (ulong)*(uint *)(lVar24 + 0x28);
          uVar8 = *(undefined4 *)(lVar24 + 0x20);
          uVar17 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar17 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)puVar6) {
                puVar19 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_03090384;
              }
              uVar17 = uVar17 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar17 != 0);
          }
          puVar19 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
          uVar27 = (*(code *)*puVar19)(uVar8,uVar18,uVar30);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar23 = *unaff_x21;
          lVar16 = lVar12 + lVar16 * 0xc;
          uVar8 = *(undefined4 *)(lVar16 + 0x20);
          uVar32 = (ulong)*(uint *)(lVar16 + 0x24);
          uVar31 = (ulong)*(uint *)(lVar16 + 0x28);
          uVar17 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar17 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)puVar6) {
                puVar19 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_03090414;
              }
              uVar17 = uVar17 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar17 != 0);
          }
          puVar19 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
          uVar28 = (*(code *)*puVar19)(uVar8,uVar32,uVar31);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_030917d4(uVar27,uVar18,uVar30,uVar28,uVar32,uVar31,lVar15,iVar10);
          iVar10 = iVar10 + 1;
        }
        FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
        if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_030905b4;
        if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
          uVar27 = *(undefined8 *)(lVar15 + 0x18);
        }
        else {
          uVar27 = 0;
        }
        lVar16 = *(long *)(lVar14 + 0x28);
        uVar27 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar15 + 0x10),uVar27,
                              *(char *)(in_stack_00000080 + 0x15) != '\0');
        if (lVar16 == 0) goto LAB_030905b4;
        FUN_01b5f01c(lVar16,uVar27,*(undefined8 *)System_IComparable_var);
        iVar9 = iVar9 + 1;
        lVar15 = *unaff_x25;
        if (lVar15 == 0) goto LAB_030905b4;
      }
      if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x18) == 0)) break;
      FUN_01b5f01c(*(long *)(unaff_x26 + 0x18),lVar14,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      uVar26 = uVar26 + 1;
      lVar14 = *unaff_x25;
      if (lVar14 == 0) break;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


