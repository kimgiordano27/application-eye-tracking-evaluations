/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$GatherEntitiesToArray
ENTRY_POINT: 0308fc08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


undefined1  [16] Unity_Entities_EntityQuery__GatherEntitiesToArray(undefined8 param_1)

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
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack000000000000003c;
  long in_stack_00000058;
  long in_stack_00000060;
  long lStack0000000000000070;
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
  
  lVar11 = FUN_036a4d24(param_1,0);
  if (unaff_x19 == 0) {
LAB_0308fc60:
                    /* try { // try from 0308fc60 to 0318fc7f has its CatchHandler @ 0308fd40 */
    lStack0000000000000070 = 0;
  }
  else {
    if (in_stack_00000028 == 0) goto LAB_030905b4;
    if (*(int *)(unaff_x19 + 0x18) != *(int *)(in_stack_00000028 + 0x18)) goto LAB_0308fc60;
    lStack0000000000000070 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
                    /* try { // try from 0308fc40 to 0318fc47 has its CatchHandler @ 0308fce0 */
    FUN_021de1ac(lStack0000000000000070,in_stack_00000030,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_0000097A_PostfixBurstDelegate_var
                 ,0);
  }
  puVar4 = PTR_DAT_03cbeb90;
  if (*unaff_x25 == 0) goto LAB_030905b4;
  uVar8 = FUN_036a3408(*unaff_x25,0);
  lVar12 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar8);
  if (*unaff_x25 == 0) goto LAB_030905b4;
  uVar8 = FUN_036a3408(*unaff_x25,0);
  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar8);
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
    lVar14 = FUN_036a4d24(*unaff_x25,0);
    if (lVar14 == 0) goto LAB_0308fd34;
    if (((*unaff_x25 == 0) || (lVar14 = FUN_036a4d24(*unaff_x25,0), lVar14 == 0)) ||
       (*unaff_x25 == 0)) goto LAB_030905b4;
    iVar10 = FUN_036a3408(*unaff_x25,0);
    bVar7 = false;
    if ((iVar9 != 1) && (iVar10 != *(int *)(lVar14 + 0x18))) goto LAB_0308fd44;
  }
  puVar4 = PTR_DAT_03cbe510;
  lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
  Animancer_AnimancerState__OnSetIsPlaying(lVar14,*(undefined8 *)puVar4);
  puVar6 = System_Text_EncoderFallback_var;
  puVar5 = PTR_DAT_03cc8660;
  puVar4 = PTR_DAT_03cc8650;
  lVar15 = *unaff_x25;
  if (lVar15 != 0) {
    uVar27 = 0;
    while( true ) {
      iVar9 = FUN_036a3768(lVar15,0);
      lVar15 = *unaff_x25;
      if (lVar15 == 0) break;
      if ((long)iVar9 <= (long)uVar27) {
        uVar8 = FUN_036a2ca8(lVar15,0);
        uVar28 = FUN_02b34428(0,uVar8,0);
        uVar29 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
        FUN_021de1ac(uVar29,unaff_x27,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
        uVar28 = FUN_01f6d39c(uVar28,uVar29,*(undefined8 *)PTR_DAT_03ccb9a8);
        uVar28 = FUN_01f70920(uVar28,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(unaff_x26,uVar28,3,0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
        if (*unaff_x25 != 0) {
          uVar8 = FUN_036a2ca8(*unaff_x25,0);
          uVar28 = FUN_02b34428(0,uVar8,0);
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
            uVar29 = **(undefined8 **)(lVar11 + 0xb8);
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar12,uVar29,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
            *plVar21 = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar12);
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
            uVar29 = **(undefined8 **)(lVar11 + 0xb8);
            lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar13,uVar29,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar21 = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar13);
          }
          uVar28 = FUN_01f70a5c(uVar28,lVar12,lVar13,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                               );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,unaff_x26,uVar28,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        break;
      }
      lVar15 = FUN_036a8700(lVar15,uVar27 & 0xffffffff,0);
      lVar16 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar16,lVar15,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar15 == 0) break;
      lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar17,*(undefined4 *)(lVar15 + 0x18),lStack0000000000000070);
      if (lVar14 == 0) break;
      lVar24 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar18 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 200));
      if ((uVar18 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_02793a34(*(undefined8 *)(lVar14 + 0x10),0,iVar9,0);
        }
      }
      if (in_stack_00000028 == 0) break;
      if (0 < *(int *)(in_stack_00000028 + 0x18)) {
        uVar18 = 0;
        do {
          if (lVar16 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar18;
          uVar19 = FUN_021e4dc4(lVar16,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar19 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar18;
            FUN_01b5f01c(lVar14,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(in_stack_00000028 + 0x18) <= uVar18) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar24 = *unaff_x21;
            lVar25 = in_stack_00000028 + uVar18 * 0xc;
            uVar31 = (ulong)*(uint *)(lVar25 + 0x24);
            uVar33 = (ulong)*(uint *)(lVar25 + 0x28);
            uVar8 = *(undefined4 *)(lVar25 + 0x20);
            uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar19 != 0) {
              piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)puVar6) {
                  puVar20 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar19 = uVar19 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar19 != 0);
            }
            puVar20 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar28 = (*(code *)*puVar20)(uVar8,uVar31,uVar33);
            if (in_stack_00000060 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar18) goto LAB_030907fc;
            lVar24 = *unaff_x21;
            lVar25 = in_stack_00000060 + uVar18 * 0xc;
            uVar8 = *(undefined4 *)(lVar25 + 0x20);
            uVar32 = (ulong)*(uint *)(lVar25 + 0x24);
            uVar34 = (ulong)*(uint *)(lVar25 + 0x28);
            uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar19 != 0) {
              piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)puVar6) {
                  puVar20 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar19 = uVar19 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar19 != 0);
            }
            puVar20 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar29 = (*(code *)*puVar20)(uVar8,uVar32,uVar34);
            if (in_stack_00000058 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar18) goto LAB_030907fc;
            lVar24 = in_stack_00000058 + uVar18 * 8;
            uVar19 = (ulong)*(uint *)(lVar24 + 0x24);
            uVar30 = FUN_0304ece0(*(undefined4 *)(lVar24 + 0x20),uVar19,0);
            if (lVar17 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar28,uVar31,uVar33,uVar29,uVar32,uVar34,uVar30,uVar19,lVar17,
                         uVar18 & 0xffffffff);
            if (lStack0000000000000070 != 0) {
              if (unaff_x19 == 0) goto LAB_030905b4;
              if (*(uint *)(unaff_x19 + 0x18) <= uVar18) goto LAB_030907fc;
              lVar24 = unaff_x19 + uVar18 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar24 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar24 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar24 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar24 + 0x30);
              FUN_030910e8(lVar17,&stack0x000000c0);
            }
            if (!bVar7) {
              if (lVar11 == 0) goto LAB_030905b4;
              if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_030907fc;
              lVar24 = lVar11 + uVar18 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar24 + 0x20),*(undefined4 *)(lVar24 + 0x24),
                           *(undefined4 *)(lVar24 + 0x28),*(undefined4 *)(lVar24 + 0x2c),lVar17);
            }
          }
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)*(int *)(in_stack_00000028 + 0x18));
      }
      lVar16 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar27) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar28 = *(undefined8 *)(lVar16 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_036cee6c(uVar28,0,0);
      if ((uVar18 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) break;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar28,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar16 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar16,*(undefined8 *)PTR_DAT_03cbe510);
      uVar22 = *(uint *)(lVar15 + 0x18);
      if (0 < (int)uVar22) {
        uVar23 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar22 <= uVar23) || (uVar22 <= uVar23 + 1)) || (uVar22 <= uVar23 + 2))
          goto LAB_030907fc;
          if (lVar16 == 0) goto LAB_030905b4;
          uVar8 = *(undefined4 *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar15 + (long)(int)(uVar23 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar15 + (long)(int)(uVar23 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar16,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar16,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar8;
          FUN_01b5f01c(lVar16,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar22 = *(uint *)(lVar15 + 0x18);
          uVar23 = uVar23 + 3;
        } while ((int)uVar23 < (int)uVar22);
      }
      if (lVar17 == 0) break;
      lVar15 = FUN_030912cc(lVar17,in_stack_00000088,uStack000000000000003c,lVar16);
      lVar16 = *unaff_x25;
      if (lVar16 == 0) break;
      iVar9 = 0;
      while (iVar10 = FUN_036a2ca8(lVar16,0), iVar9 < iVar10) {
        uVar8 = *(undefined4 *)(lVar14 + 0x18);
        lVar16 = thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                   );
        FUN_03091748(lVar16,uVar8);
        if (*unaff_x25 == 0) goto LAB_030905b4;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                  (*unaff_x25,iVar9,0,lVar12,lVar13,0,0);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar14,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
        in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_000000e8 = in_stack_000000b0;
        in_stack_000000f0 = in_stack_000000b8;
        iVar10 = 0;
        while (uVar18 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar4), (uVar18 & 1) != 0) {
          FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar5);
          uVar22 = in_stack_00000108._4_4_;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar17 = (long)(int)in_stack_00000108._4_4_;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar24 = *unaff_x21;
          lVar25 = lVar12 + lVar17 * 0xc;
          uVar19 = (ulong)*(uint *)(lVar25 + 0x24);
          uVar31 = (ulong)*(uint *)(lVar25 + 0x28);
          uVar8 = *(undefined4 *)(lVar25 + 0x20);
          uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar18 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar6) {
                puVar20 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_03090384;
              }
              uVar18 = uVar18 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar18 != 0);
          }
          puVar20 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
          uVar28 = (*(code *)*puVar20)(uVar8,uVar19,uVar31);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar24 = *unaff_x21;
          lVar17 = lVar13 + lVar17 * 0xc;
          uVar8 = *(undefined4 *)(lVar17 + 0x20);
          uVar33 = (ulong)*(uint *)(lVar17 + 0x24);
          uVar32 = (ulong)*(uint *)(lVar17 + 0x28);
          uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar18 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar6) {
                puVar20 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_03090414;
              }
              uVar18 = uVar18 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar18 != 0);
          }
          puVar20 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
          uVar29 = (*(code *)*puVar20)(uVar8,uVar33,uVar32);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_030917d4(uVar28,uVar19,uVar31,uVar29,uVar33,uVar32,lVar16,iVar10);
          iVar10 = iVar10 + 1;
        }
        FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
        if ((lVar15 == 0) || (lVar16 == 0)) goto LAB_030905b4;
        if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
          uVar28 = *(undefined8 *)(lVar16 + 0x18);
        }
        else {
          uVar28 = 0;
        }
        lVar17 = *(long *)(lVar15 + 0x28);
        uVar28 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar16 + 0x10),uVar28,
                              *(char *)(in_stack_00000080 + 0x15) != '\0');
        if (lVar17 == 0) goto LAB_030905b4;
        FUN_01b5f01c(lVar17,uVar28,*(undefined8 *)System_IComparable_var);
        iVar9 = iVar9 + 1;
        lVar16 = *unaff_x25;
        if (lVar16 == 0) goto LAB_030905b4;
      }
      if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x18) == 0)) break;
      FUN_01b5f01c(*(long *)(unaff_x26 + 0x18),lVar15,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      uVar27 = uVar27 + 1;
      lVar15 = *unaff_x25;
      if (lVar15 == 0) break;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


