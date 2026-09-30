/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$GetSingletonEntity
ENTRY_POINT: 0308fcc8
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


undefined1  [16] Unity_Entities_EntityQuery__GetSingletonEntity(int param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined4 uVar31;
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
  
                    /* try { // try from 0308fcd0 to 0318fcd7 has its CatchHandler @ 0308fd4c */
                    /* catch() { ... } // from try @ 0308fc98 with catch @ 0308fcd8
                       try { // try from 0308fcd8 to 0318fcff has its CatchHandler @ 0308fb4c */
  if (*(char *)(in_stack_00000080 + 0x18) == '\0') {
LAB_0308fd34:
    if (param_1 == 1) {
      bVar7 = false;
    }
    else {
LAB_0308fd44:
      bVar7 = param_1 != 3;
    }
  }
  else {
                    /* catch() { ... } // from try @ 0308fc80 with catch @ 0308fcdc */
                    /* catch() { ... } // from try @ 0308fc40 with catch @ 0308fce0 */
    if (*unaff_x25 == 0) goto LAB_030905b4;
                    /* catch() { ... } // from try @ 0308fba4 with catch @ 0308fce4 */
    lVar10 = FUN_036a4d24(*unaff_x25,0);
    if (lVar10 == 0) goto LAB_0308fd34;
                    /* try { // try from 0308fd00 to 0318fd03 has its CatchHandler @ 0308fd38 */
    if (((*unaff_x25 == 0) || (lVar10 = FUN_036a4d24(*unaff_x25,0), lVar10 == 0)) ||
       (*unaff_x25 == 0)) goto LAB_030905b4;
    iVar8 = FUN_036a3408(*unaff_x25,0);
                    /* try { // try from 0308fd1c to 0318fd37 has its CatchHandler @ 0308fe20 */
    bVar7 = false;
    if ((param_1 != 1) && (iVar8 != *(int *)(lVar10 + 0x18))) goto LAB_0308fd44;
  }
  puVar4 = PTR_DAT_03cbe510;
  lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
  Animancer_AnimancerState__OnSetIsPlaying(lVar10,*(undefined8 *)puVar4);
  puVar6 = System_Text_EncoderFallback_var;
  puVar5 = PTR_DAT_03cc8660;
  puVar4 = PTR_DAT_03cc8650;
  lVar11 = *unaff_x25;
  if (lVar11 != 0) {
    uVar23 = 0;
    while( true ) {
      iVar8 = FUN_036a3768(lVar11,0);
      lVar11 = *unaff_x25;
      if (lVar11 == 0) break;
      if ((long)iVar8 <= (long)uVar23) {
        uVar31 = FUN_036a2ca8(lVar11,0);
        uVar24 = FUN_02b34428(0,uVar31,0);
        uVar25 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
        FUN_021de1ac(uVar25,unaff_x27,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
        uVar24 = FUN_01f6d39c(uVar24,uVar25,*(undefined8 *)PTR_DAT_03ccb9a8);
        uVar24 = FUN_01f70920(uVar24,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(unaff_x26,uVar24,3,0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
        if (*unaff_x25 != 0) {
          uVar31 = FUN_036a2ca8(*unaff_x25,0);
          uVar24 = FUN_02b34428(0,uVar31,0);
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar10);
            lVar10 = *(long *)puVar4;
          }
          lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar11 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar10);
              lVar10 = *(long *)puVar4;
            }
            uVar25 = **(undefined8 **)(lVar10 + 0xb8);
            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar11,uVar25,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
            plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
            *plVar17 = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar11);
            lVar10 = *(long *)puVar4;
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar10);
            lVar10 = *(long *)puVar4;
          }
          lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
          if (lVar12 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar10);
              lVar10 = *(long *)puVar4;
            }
            uVar25 = **(undefined8 **)(lVar10 + 0xb8);
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar12,uVar25,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar17 = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar12);
          }
          uVar24 = FUN_01f70a5c(uVar24,lVar11,lVar12,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                               );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,unaff_x26,uVar24,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        break;
      }
      lVar11 = FUN_036a8700(lVar11,uVar23 & 0xffffffff,0);
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar12,lVar11,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar11 == 0) break;
      lVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar13,*(undefined4 *)(lVar11 + 0x18),in_stack_00000070);
      if (lVar10 == 0) break;
      lVar20 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uVar14 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
      if ((uVar14 & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
      }
      else {
        iVar8 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (0 < iVar8) {
          FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar8,0);
        }
      }
      if (in_stack_00000028 == 0) break;
      if (0 < *(int *)(in_stack_00000028 + 0x18)) {
        uVar14 = 0;
        do {
          if (lVar12 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar14;
          uVar15 = FUN_021e4dc4(lVar12,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar15 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar14;
            FUN_01b5f01c(lVar10,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(in_stack_00000028 + 0x18) <= uVar14) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar20 = *unaff_x21;
            lVar21 = in_stack_00000028 + uVar14 * 0xc;
            uVar27 = (ulong)*(uint *)(lVar21 + 0x24);
            uVar29 = (ulong)*(uint *)(lVar21 + 0x28);
            uVar31 = *(undefined4 *)(lVar21 + 0x20);
            uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar15 != 0) {
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar6) {
                  puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar15 = uVar15 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar15 != 0);
            }
            puVar16 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar24 = (*(code *)*puVar16)(uVar31,uVar27,uVar29);
            if (in_stack_00000060 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar14) goto LAB_030907fc;
            lVar20 = *unaff_x21;
            lVar21 = in_stack_00000060 + uVar14 * 0xc;
            uVar31 = *(undefined4 *)(lVar21 + 0x20);
            uVar28 = (ulong)*(uint *)(lVar21 + 0x24);
            uVar30 = (ulong)*(uint *)(lVar21 + 0x28);
            uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar15 != 0) {
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar6) {
                  puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar15 = uVar15 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar15 != 0);
            }
            puVar16 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar25 = (*(code *)*puVar16)(uVar31,uVar28,uVar30);
            if (in_stack_00000058 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar14) goto LAB_030907fc;
            lVar20 = in_stack_00000058 + uVar14 * 8;
            uVar15 = (ulong)*(uint *)(lVar20 + 0x24);
            uVar26 = FUN_0304ece0(*(undefined4 *)(lVar20 + 0x20),uVar15,0);
            if (lVar13 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar24,uVar27,uVar29,uVar25,uVar28,uVar30,uVar26,uVar15,lVar13,
                         uVar14 & 0xffffffff);
            if (in_stack_00000070 != 0) {
              if (in_stack_00000050 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000050 + 0x18) <= uVar14) goto LAB_030907fc;
              lVar20 = in_stack_00000050 + uVar14 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar20 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar20 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar20 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar20 + 0x30);
              FUN_030910e8(lVar13,&stack0x000000c0);
            }
            if (!bVar7) {
              if (in_stack_00000048 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000048 + 0x18) <= uVar14) goto LAB_030907fc;
              lVar20 = in_stack_00000048 + uVar14 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),
                           *(undefined4 *)(lVar20 + 0x28),*(undefined4 *)(lVar20 + 0x2c),lVar13);
            }
          }
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)*(int *)(in_stack_00000028 + 0x18));
      }
      lVar12 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar23) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar24 = *(undefined8 *)(lVar12 + uVar23 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036cee6c(uVar24,0,0);
      if ((uVar14 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) break;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar24,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar12,*(undefined8 *)PTR_DAT_03cbe510);
      uVar18 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar18) {
        uVar19 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar18 <= uVar19) || (uVar18 <= uVar19 + 1)) || (uVar18 <= uVar19 + 2))
          goto LAB_030907fc;
          if (lVar12 == 0) goto LAB_030905b4;
          uVar31 = *(undefined4 *)(lVar11 + (long)(int)uVar19 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar11 + (long)(int)(uVar19 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar11 + (long)(int)(uVar19 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar12,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar12,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar31;
          FUN_01b5f01c(lVar12,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar18 = *(uint *)(lVar11 + 0x18);
          uVar19 = uVar19 + 3;
        } while ((int)uVar19 < (int)uVar18);
      }
      if (lVar13 == 0) break;
      lVar11 = FUN_030912cc(lVar13,in_stack_00000088,uStack000000000000003c,lVar12);
      lVar12 = *unaff_x25;
      if (lVar12 == 0) break;
      iVar8 = 0;
      while (iVar9 = FUN_036a2ca8(lVar12,0), iVar8 < iVar9) {
        uVar31 = *(undefined4 *)(lVar10 + 0x18);
        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                   );
        FUN_03091748(lVar12,uVar31);
        if (*unaff_x25 == 0) goto LAB_030905b4;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*unaff_x25,iVar8,0);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar10,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
        in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_000000e8 = in_stack_000000b0;
        in_stack_000000f0 = in_stack_000000b8;
        iVar9 = 0;
        while (uVar14 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
          FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar5);
          uVar18 = in_stack_00000108._4_4_;
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar13 = (long)(int)in_stack_00000108._4_4_;
          if (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar20 = *unaff_x21;
          lVar21 = unaff_x23 + lVar13 * 0xc;
          uVar15 = (ulong)*(uint *)(lVar21 + 0x24);
          uVar27 = (ulong)*(uint *)(lVar21 + 0x28);
          uVar31 = *(undefined4 *)(lVar21 + 0x20);
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar6) {
                puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_03090384;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          puVar16 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
          uVar24 = (*(code *)*puVar16)(uVar31,uVar15,uVar27);
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(unaff_x19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar20 = *unaff_x21;
          lVar13 = unaff_x19 + lVar13 * 0xc;
          uVar31 = *(undefined4 *)(lVar13 + 0x20);
          uVar29 = (ulong)*(uint *)(lVar13 + 0x24);
          uVar28 = (ulong)*(uint *)(lVar13 + 0x28);
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar6) {
                puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_03090414;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          puVar16 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
          uVar25 = (*(code *)*puVar16)(uVar31,uVar29,uVar28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_030917d4(uVar24,uVar15,uVar27,uVar25,uVar29,uVar28,lVar12,iVar9);
          iVar9 = iVar9 + 1;
        }
        FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
        if ((lVar11 == 0) || (lVar12 == 0)) goto LAB_030905b4;
        if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
          uVar24 = *(undefined8 *)(lVar12 + 0x18);
        }
        else {
          uVar24 = 0;
        }
        lVar13 = *(long *)(lVar11 + 0x28);
        uVar24 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar12 + 0x10),uVar24,
                              *(char *)(in_stack_00000080 + 0x15) != '\0');
        if (lVar13 == 0) goto LAB_030905b4;
        FUN_01b5f01c(lVar13,uVar24,*(undefined8 *)System_IComparable_var);
        iVar8 = iVar8 + 1;
        lVar12 = *unaff_x25;
        if (lVar12 == 0) goto LAB_030905b4;
      }
      if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x18) == 0)) break;
      FUN_01b5f01c(*(long *)(unaff_x26 + 0x18),lVar11,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      uVar23 = uVar23 + 1;
      lVar11 = *unaff_x25;
      if (lVar11 == 0) break;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


