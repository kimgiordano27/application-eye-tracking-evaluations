/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$ToArchetypeChunkArray
ENTRY_POINT: 0308fba0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_11;functionality_data_collection_or_telemetry_hits_11
*/


undefined1  [16] Unity_Entities_EntityQuery__ToArchetypeChunkArray(long param_1)

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
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  long in_x9;
  long lVar27;
  long lVar28;
  int *piVar29;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar30;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
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
  
                    /* try { // try from 0308fba4 to 0318fbb3 has its CatchHandler @ 0308fce4 */
  uVar30 = **(undefined8 **)(param_1 + 0xb8);
  uVar11 = thunk_FUN_01a89e68(**(undefined8 **)(in_x9 + 0xb48));
  FUN_021de1ac(uVar11,uVar30,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000977_PostfixBurstDelegate_var
               ,0);
                    /* try { // try from 0308fbd0 to 0318fbdb has its CatchHandler @ 0308fd4c */
  puVar12 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
                    /* try { // try from 0308fbec to 0318fc2f has its CatchHandler @ 0308fd50 */
  uVar13 = FUN_01f645bc();
  lVar25 = 0;
  if ((uVar13 & 1) == 0) {
    lVar25 = unaff_x19;
  }
  if (*unaff_x25 == 0) goto LAB_030905b4;
  lVar14 = FUN_036a4d24(*unaff_x25,0);
  if (lVar25 == 0) {
LAB_0308fc60:
    lStack0000000000000070 = 0;
  }
  else {
    if (in_stack_00000028 == 0) goto LAB_030905b4;
    if (*(int *)(lVar25 + 0x18) != *(int *)(in_stack_00000028 + 0x18)) goto LAB_0308fc60;
    lStack0000000000000070 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
    FUN_021de1ac(lStack0000000000000070,in_stack_00000030,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_0000097A_PostfixBurstDelegate_var
                 ,0);
  }
  puVar4 = PTR_DAT_03cbeb90;
  if (*unaff_x25 == 0) goto LAB_030905b4;
  uVar8 = FUN_036a3408(*unaff_x25,0);
  lVar15 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar8);
  if (*unaff_x25 == 0) goto LAB_030905b4;
  uVar8 = FUN_036a3408(*unaff_x25,0);
  lVar16 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar8);
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
    lVar17 = FUN_036a4d24(*unaff_x25,0);
    if (lVar17 == 0) goto LAB_0308fd34;
    if (((*unaff_x25 == 0) || (lVar17 = FUN_036a4d24(*unaff_x25,0), lVar17 == 0)) ||
       (*unaff_x25 == 0)) goto LAB_030905b4;
    iVar10 = FUN_036a3408(*unaff_x25,0);
    bVar7 = false;
    if ((iVar9 != 1) && (iVar10 != *(int *)(lVar17 + 0x18))) goto LAB_0308fd44;
  }
  puVar4 = PTR_DAT_03cbe510;
  lVar17 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
  Animancer_AnimancerState__OnSetIsPlaying(lVar17,*(undefined8 *)puVar4);
  puVar6 = System_Text_EncoderFallback_var;
  puVar5 = PTR_DAT_03cc8660;
  puVar4 = PTR_DAT_03cc8650;
  lVar18 = *unaff_x25;
  if (lVar18 != 0) {
    uVar13 = 0;
    while( true ) {
      iVar9 = FUN_036a3768(lVar18,0);
      lVar18 = *unaff_x25;
      if (lVar18 == 0) break;
      if ((long)iVar9 <= (long)uVar13) {
        uVar8 = FUN_036a2ca8(lVar18,0);
        uVar11 = FUN_02b34428(0,uVar8,0);
        uVar30 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
        FUN_021de1ac(uVar30,unaff_x27,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
        uVar11 = FUN_01f6d39c(uVar11,uVar30,*(undefined8 *)PTR_DAT_03ccb9a8);
        uVar11 = FUN_01f70920(uVar11,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(unaff_x26,uVar11,3,0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
        if (*unaff_x25 != 0) {
          uVar8 = FUN_036a2ca8(*unaff_x25,0);
          uVar11 = FUN_02b34428(0,uVar8,0);
          lVar25 = *(long *)puVar4;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar25);
            lVar25 = *(long *)puVar4;
          }
          lVar14 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x10);
          if (lVar14 == 0) {
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar25);
              lVar25 = *(long *)puVar4;
            }
            uVar30 = **(undefined8 **)(lVar25 + 0xb8);
            lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar14,uVar30,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
            plVar23 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
            *plVar23 = lVar14;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23,lVar14);
            lVar25 = *(long *)puVar4;
          }
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar25);
            lVar25 = *(long *)puVar4;
          }
          lVar15 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x18);
          if (lVar15 == 0) {
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar25);
              lVar25 = *(long *)puVar4;
            }
            uVar30 = **(undefined8 **)(lVar25 + 0xb8);
            lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar15,uVar30,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar23 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar23 = lVar15;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23,lVar15);
          }
          uVar11 = FUN_01f70a5c(uVar11,lVar14,lVar15,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                               );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,unaff_x26,uVar11,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        break;
      }
      lVar18 = FUN_036a8700(lVar18,uVar13 & 0xffffffff,0);
      lVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar19,lVar18,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar18 == 0) break;
      lVar20 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar20,*(undefined4 *)(lVar18 + 0x18),lStack0000000000000070);
      if (lVar17 == 0) break;
      lVar27 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      uVar21 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 200));
      if ((uVar21 & 1) == 0) {
        *(undefined4 *)(lVar17 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar17 + 0x18);
        *(undefined4 *)(lVar17 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_02793a34(*(undefined8 *)(lVar17 + 0x10),0,iVar9,0);
        }
      }
      if (in_stack_00000028 == 0) break;
      if (0 < *(int *)(in_stack_00000028 + 0x18)) {
        uVar21 = 0;
        do {
          if (lVar19 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar21;
          uVar22 = FUN_021e4dc4(lVar19,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar22 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar21;
            FUN_01b5f01c(lVar17,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(in_stack_00000028 + 0x18) <= uVar21) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar27 = *unaff_x21;
            lVar28 = in_stack_00000028 + uVar21 * 0xc;
            uVar32 = (ulong)*(uint *)(lVar28 + 0x24);
            uVar34 = (ulong)*(uint *)(lVar28 + 0x28);
            uVar8 = *(undefined4 *)(lVar28 + 0x20);
            uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar22 != 0) {
              piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar22 = uVar22 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar11 = (*(code *)*puVar12)(uVar8,uVar32,uVar34);
            if (in_stack_00000060 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar21) goto LAB_030907fc;
            lVar27 = *unaff_x21;
            lVar28 = in_stack_00000060 + uVar21 * 0xc;
            uVar8 = *(undefined4 *)(lVar28 + 0x20);
            uVar33 = (ulong)*(uint *)(lVar28 + 0x24);
            uVar35 = (ulong)*(uint *)(lVar28 + 0x28);
            uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar22 != 0) {
              piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar22 = uVar22 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar30 = (*(code *)*puVar12)(uVar8,uVar33,uVar35);
            if (in_stack_00000058 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar21) goto LAB_030907fc;
            lVar27 = in_stack_00000058 + uVar21 * 8;
            uVar22 = (ulong)*(uint *)(lVar27 + 0x24);
            uVar31 = FUN_0304ece0(*(undefined4 *)(lVar27 + 0x20),uVar22,0);
            if (lVar20 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar11,uVar32,uVar34,uVar30,uVar33,uVar35,uVar31,uVar22,lVar20,
                         uVar21 & 0xffffffff);
            if (lStack0000000000000070 != 0) {
              if (lVar25 == 0) goto LAB_030905b4;
              if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_030907fc;
              lVar27 = lVar25 + uVar21 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar27 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar27 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar27 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar27 + 0x30);
              FUN_030910e8(lVar20,&stack0x000000c0);
            }
            if (!bVar7) {
              if (lVar14 == 0) goto LAB_030905b4;
              if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_030907fc;
              lVar27 = lVar14 + uVar21 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar27 + 0x20),*(undefined4 *)(lVar27 + 0x24),
                           *(undefined4 *)(lVar27 + 0x28),*(undefined4 *)(lVar27 + 0x2c),lVar20);
            }
          }
          uVar21 = uVar21 + 1;
        } while ((long)uVar21 < (long)*(int *)(in_stack_00000028 + 0x18));
      }
      lVar19 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar13) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar11 = *(undefined8 *)(lVar19 + uVar13 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_036cee6c(uVar11,0,0);
      if ((uVar21 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) break;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar11,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar19,*(undefined8 *)PTR_DAT_03cbe510);
      uVar24 = *(uint *)(lVar18 + 0x18);
      if (0 < (int)uVar24) {
        uVar26 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar24 <= uVar26) || (uVar24 <= uVar26 + 1)) || (uVar24 <= uVar26 + 2))
          goto LAB_030907fc;
          if (lVar19 == 0) goto LAB_030905b4;
          uVar8 = *(undefined4 *)(lVar18 + (long)(int)uVar26 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar18 + (long)(int)(uVar26 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar18 + (long)(int)(uVar26 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar19,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar19,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar8;
          FUN_01b5f01c(lVar19,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar24 = *(uint *)(lVar18 + 0x18);
          uVar26 = uVar26 + 3;
        } while ((int)uVar26 < (int)uVar24);
      }
      if (lVar20 == 0) break;
      lVar18 = FUN_030912cc(lVar20,in_stack_00000088,uStack000000000000003c,lVar19);
      lVar19 = *unaff_x25;
      if (lVar19 == 0) break;
      iVar9 = 0;
      while (iVar10 = FUN_036a2ca8(lVar19,0), iVar9 < iVar10) {
        uVar8 = *(undefined4 *)(lVar17 + 0x18);
        lVar19 = thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                   );
        FUN_03091748(lVar19,uVar8);
        if (*unaff_x25 == 0) goto LAB_030905b4;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                  (*unaff_x25,iVar9,0,lVar15,lVar16,0,0);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar17,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
        in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_000000e8 = in_stack_000000b0;
        in_stack_000000f0 = in_stack_000000b8;
        iVar10 = 0;
        while (uVar21 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar4), (uVar21 & 1) != 0) {
          FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar5);
          uVar24 = in_stack_00000108._4_4_;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar20 = (long)(int)in_stack_00000108._4_4_;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar27 = *unaff_x21;
          lVar28 = lVar15 + lVar20 * 0xc;
          uVar22 = (ulong)*(uint *)(lVar28 + 0x24);
          uVar32 = (ulong)*(uint *)(lVar28 + 0x28);
          uVar8 = *(undefined4 *)(lVar28 + 0x20);
          uVar21 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar21 != 0) {
            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)puVar6) {
                puVar12 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_03090384;
              }
              uVar21 = uVar21 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar21 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
          uVar11 = (*(code *)*puVar12)(uVar8,uVar22,uVar32);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar27 = *unaff_x21;
          lVar20 = lVar16 + lVar20 * 0xc;
          uVar8 = *(undefined4 *)(lVar20 + 0x20);
          uVar34 = (ulong)*(uint *)(lVar20 + 0x24);
          uVar33 = (ulong)*(uint *)(lVar20 + 0x28);
          uVar21 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar21 != 0) {
            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)puVar6) {
                puVar12 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_03090414;
              }
              uVar21 = uVar21 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar21 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
          uVar30 = (*(code *)*puVar12)(uVar8,uVar34,uVar33);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_030917d4(uVar11,uVar22,uVar32,uVar30,uVar34,uVar33,lVar19,iVar10);
          iVar10 = iVar10 + 1;
        }
        FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
        if ((lVar18 == 0) || (lVar19 == 0)) goto LAB_030905b4;
        if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
          uVar11 = *(undefined8 *)(lVar19 + 0x18);
        }
        else {
          uVar11 = 0;
        }
        lVar20 = *(long *)(lVar18 + 0x28);
        uVar11 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar19 + 0x10),uVar11,
                              *(char *)(in_stack_00000080 + 0x15) != '\0');
        if (lVar20 == 0) goto LAB_030905b4;
        FUN_01b5f01c(lVar20,uVar11,*(undefined8 *)System_IComparable_var);
        iVar9 = iVar9 + 1;
        lVar19 = *unaff_x25;
        if (lVar19 == 0) goto LAB_030905b4;
      }
      if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x18) == 0)) break;
      FUN_01b5f01c(*(long *)(unaff_x26 + 0x18),lVar18,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      uVar13 = uVar13 + 1;
      lVar18 = *unaff_x25;
      if (lVar18 == 0) break;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


