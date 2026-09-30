/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$ResetFilter
ENTRY_POINT: 0308fd88
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


undefined1  [16] Unity_Entities_EntityQuery__ResetFilter(long param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar18;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack000000000000003c;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
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
  
  puVar4 = PTR_DAT_03cc8660;
  plVar19 = *(long **)(unaff_x27 + 0x3d0);
  puVar18 = *(undefined8 **)(unaff_x20 + 0x650);
                    /* try { // try from 0308fd94 to 0318fdab has its CatchHandler @ 0308fdf8 */
  uVar20 = 0;
  do {
    iVar5 = FUN_036a3768(param_1,0);
    lVar13 = *unaff_x24;
                    /* try { // try from 0308fdb4 to 0318fdb7 has its CatchHandler @ 0308fdec */
    if (lVar13 == 0) {
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 0308fdb8 to 0318fdc7 has its CatchHandler @ 0308fde8 */
    if ((long)iVar5 <= (long)uVar20) {
      uVar28 = FUN_036a2ca8(lVar13,0);
      uVar21 = FUN_02b34428(0,uVar28,0);
      uVar22 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
      FUN_021de1ac(uVar22,in_stack_00000010,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                   ,0);
      uVar21 = FUN_01f6d39c(uVar21,uVar22,*(undefined8 *)PTR_DAT_03ccb9a8);
      uVar21 = FUN_01f70920(uVar21,*(undefined8 *)PTR_DAT_03cc4ca0);
      if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
      }
      FUN_03052fb0(unaff_x26,uVar21,3,0);
      puVar4 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
      ;
      if (*unaff_x24 != 0) {
        uVar28 = FUN_036a2ca8(*unaff_x24,0);
        uVar21 = FUN_02b34428(0,uVar28,0);
        lVar13 = *(long *)puVar4;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *(long *)puVar4;
        }
        lVar7 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
        if (lVar7 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar13 = *(long *)puVar4;
          }
          uVar22 = **(undefined8 **)(lVar13 + 0xb8);
          lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
          FUN_021de1ac(lVar7,uVar22,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                       ,0);
          plVar19 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          *plVar19 = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar7);
          lVar13 = *(long *)puVar4;
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        if (lVar8 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar13 = *(long *)puVar4;
          }
          uVar22 = **(undefined8 **)(lVar13 + 0xb8);
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
          FUN_021de1ac(lVar8,uVar22,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                       ,0);
          plVar19 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
          *plVar19 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar8);
        }
        uVar21 = FUN_01f70a5c(uVar21,lVar7,lVar8,
                              *(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                             );
        in_stack_000000f8 = 0;
        in_stack_00000100 = 0;
        FUN_020f03e8(&stack0x000000f8,unaff_x26,uVar21,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                    );
        auVar2._8_8_ = in_stack_00000100;
        auVar2._0_8_ = in_stack_000000f8;
        return auVar2;
      }
      goto LAB_030905b4;
    }
                    /* try { // try from 0308fdc8 to 0318fdd7 has its CatchHandler @ 0308fb4c */
    lVar13 = FUN_036a8700(lVar13,uVar20 & 0xffffffff,0);
                    /* try { // try from 0308fdd8 to 0318fde7 has its CatchHandler @ 0308fdf8 */
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
    FUN_021e45c8(lVar7,lVar13,*(undefined8 *)PTR_DAT_03ce47a8);
    if (lVar13 == 0) goto LAB_030905b4;
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                              );
    FUN_03090d30(lVar8,*(undefined4 *)(lVar13 + 0x18),in_stack_00000070);
    if (in_stack_00000090 == 0) goto LAB_030905b4;
    lVar15 = *(long *)PTR_DAT_03cbfc08;
    *(int *)(in_stack_00000090 + 0x1c) = *(int *)(in_stack_00000090 + 0x1c) + 1;
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
    }
    else {
      iVar5 = *(int *)(in_stack_00000090 + 0x18);
      *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
      if (0 < iVar5) {
        FUN_02793a34(*(undefined8 *)(in_stack_00000090 + 0x10),0,iVar5,0);
      }
    }
    if (in_stack_00000028 == 0) goto LAB_030905b4;
    if (0 < *(int *)(in_stack_00000028 + 0x18)) {
      uVar9 = 0;
      do {
        if (lVar7 == 0) goto LAB_030905b4;
        uStack00000000000000a8 = (int)uVar9;
        uVar10 = FUN_021e4dc4(lVar7,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
        if ((uVar10 & 1) != 0) {
          uStack00000000000000a8 = (int)uVar9;
          FUN_01b5f01c(in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          if (*(uint *)(in_stack_00000028 + 0x18) <= uVar9) goto LAB_030907fc;
          if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
          lVar15 = *unaff_x21;
          lVar16 = in_stack_00000028 + uVar9 * 0xc;
          uVar24 = (ulong)*(uint *)(lVar16 + 0x24);
          uVar26 = (ulong)*(uint *)(lVar16 + 0x28);
          uVar28 = *(undefined4 *)(lVar16 + 0x20);
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0308ff54;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
          uVar21 = (*(code *)*puVar11)(uVar28,uVar24,uVar26);
          if (in_stack_00000060 == 0) goto LAB_030905b4;
          if (*(uint *)(in_stack_00000060 + 0x18) <= uVar9) goto LAB_030907fc;
          lVar15 = *unaff_x21;
          lVar16 = in_stack_00000060 + uVar9 * 0xc;
          uVar28 = *(undefined4 *)(lVar16 + 0x20);
          uVar25 = (ulong)*(uint *)(lVar16 + 0x24);
          uVar27 = (ulong)*(uint *)(lVar16 + 0x28);
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0308ffe8;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
          uVar22 = (*(code *)*puVar11)(uVar28,uVar25,uVar27);
          if (in_stack_00000058 == 0) goto LAB_030905b4;
          if (*(uint *)(in_stack_00000058 + 0x18) <= uVar9) goto LAB_030907fc;
          lVar15 = in_stack_00000058 + uVar9 * 8;
          uVar10 = (ulong)*(uint *)(lVar15 + 0x24);
          uVar23 = FUN_0304ece0(*(undefined4 *)(lVar15 + 0x20),uVar10,0);
          if (lVar8 == 0) goto LAB_030905b4;
          FUN_03090fac(uVar21,uVar24,uVar26,uVar22,uVar25,uVar27,uVar23,uVar10,lVar8,
                       uVar9 & 0xffffffff);
          if (in_stack_00000070 != 0) {
            if (in_stack_00000050 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000050 + 0x18) <= uVar9) goto LAB_030907fc;
            lVar15 = in_stack_00000050 + uVar9 * 0x20;
            in_stack_000000c8 = *(undefined8 *)(lVar15 + 0x28);
            in_stack_000000c0 = *(undefined8 *)(lVar15 + 0x20);
            in_stack_000000d8 = *(undefined8 *)(lVar15 + 0x38);
            in_stack_000000d0 = *(undefined8 *)(lVar15 + 0x30);
            FUN_030910e8(lVar8,&stack0x000000c0);
          }
          if ((in_stack_00000068 & 0x100000000) == 0) {
            if (in_stack_00000048 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000048 + 0x18) <= uVar9) goto LAB_030907fc;
            lVar15 = in_stack_00000048 + uVar9 * 0x10;
            FUN_03091244(*(undefined4 *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x24),
                         *(undefined4 *)(lVar15 + 0x28),*(undefined4 *)(lVar15 + 0x2c),lVar8);
          }
        }
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)*(int *)(in_stack_00000028 + 0x18));
    }
    lVar7 = *(long *)(in_stack_00000030 + 0x18);
    if (lVar7 == 0) goto LAB_030905b4;
    if (*(uint *)(lVar7 + 0x18) <= uVar20) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar21 = *(undefined8 *)(lVar7 + uVar20 * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_036cee6c(uVar21,0,0);
    if ((uVar9 & 1) == 0) {
      uStack000000000000003c = 0xffffffff;
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_030905b4;
      uStack000000000000003c =
           FUN_02217a2c(in_stack_00000018,uVar21,
                        *(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                       );
    }
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
    Animancer_AnimancerState__OnSetIsPlaying(lVar7,*(undefined8 *)PTR_DAT_03cbe510);
    uVar12 = *(uint *)(lVar13 + 0x18);
    if (0 < (int)uVar12) {
      uVar14 = 0;
      do {
        puVar3 = PTR_DAT_03cbe508;
        if (((uVar12 <= uVar14) || (uVar12 <= uVar14 + 1)) || (uVar12 <= uVar14 + 2))
        goto LAB_030907fc;
        if (lVar7 == 0) goto LAB_030905b4;
        uVar28 = *(undefined4 *)(lVar13 + (long)(int)uVar14 * 4 + 0x20);
        uVar1 = *(undefined4 *)(lVar13 + (long)(int)(uVar14 + 1) * 4 + 0x20);
        uStack00000000000000a8 = *(undefined4 *)(lVar13 + (long)(int)(uVar14 + 2) * 4 + 0x20);
        FUN_01b5f01c(lVar7,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
        uStack00000000000000a8 = uVar1;
        FUN_01b5f01c(lVar7,&stack0x000000a8,*(undefined8 *)puVar3);
        uStack00000000000000a8 = uVar28;
        FUN_01b5f01c(lVar7,&stack0x000000a8,*(undefined8 *)puVar3);
        uVar12 = *(uint *)(lVar13 + 0x18);
        uVar14 = uVar14 + 3;
      } while ((int)uVar14 < (int)uVar12);
    }
    if (lVar8 == 0) goto LAB_030905b4;
    lVar13 = FUN_030912cc(lVar8,in_stack_00000088,uStack000000000000003c,lVar7);
    lVar7 = *unaff_x24;
    if (lVar7 == 0) goto LAB_030905b4;
    iVar5 = 0;
    while (iVar6 = FUN_036a2ca8(lVar7,0), iVar5 < iVar6) {
      uVar28 = *(undefined4 *)(in_stack_00000090 + 0x18);
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                );
      FUN_03091748(lVar7,uVar28);
      if (*unaff_x24 == 0) goto LAB_030905b4;
      UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*unaff_x24,iVar5,0);
      Animancer_FadeGroup__get_TargetWeight
                (in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
      in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_000000e8 = in_stack_000000b0;
      in_stack_000000f0 = in_stack_000000b8;
      iVar6 = 0;
      while (uVar9 = FUN_021b51c8(&stack0x000000e0,*puVar18), (uVar9 & 1) != 0) {
        FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar4);
        uVar12 = in_stack_00000108._4_4_;
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar8 = (long)(int)in_stack_00000108._4_4_;
        if (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar15 = *unaff_x21;
        lVar16 = unaff_x23 + lVar8 * 0xc;
        uVar10 = (ulong)*(uint *)(lVar16 + 0x24);
        uVar24 = (ulong)*(uint *)(lVar16 + 0x28);
        uVar28 = *(undefined4 *)(lVar16 + 0x20);
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03090384;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
        uVar21 = (*(code *)*puVar11)(uVar28,uVar10,uVar24);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar15 = *unaff_x21;
        lVar8 = unaff_x19 + lVar8 * 0xc;
        uVar28 = *(undefined4 *)(lVar8 + 0x20);
        uVar26 = (ulong)*(uint *)(lVar8 + 0x24);
        uVar25 = (ulong)*(uint *)(lVar8 + 0x28);
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03090414;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
        uVar22 = (*(code *)*puVar11)(uVar28,uVar26,uVar25);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_030917d4(uVar21,uVar10,uVar24,uVar22,uVar26,uVar25,lVar7,iVar6);
        iVar6 = iVar6 + 1;
      }
      FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
      if ((lVar13 == 0) || (lVar7 == 0)) goto LAB_030905b4;
      if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
        uVar21 = *(undefined8 *)(lVar7 + 0x18);
      }
      else {
        uVar21 = 0;
      }
      lVar8 = *(long *)(lVar13 + 0x28);
      uVar21 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar7 + 0x10),uVar21,
                            *(char *)(in_stack_00000080 + 0x15) != '\0');
      if (lVar8 == 0) goto LAB_030905b4;
      FUN_01b5f01c(lVar8,uVar21,*(undefined8 *)System_IComparable_var);
      iVar5 = iVar5 + 1;
      lVar7 = *unaff_x24;
      if (lVar7 == 0) goto LAB_030905b4;
    }
    if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x18) == 0)) goto LAB_030905b4;
    FUN_01b5f01c(*(long *)(unaff_x26 + 0x18),lVar13,
                 *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
    uVar20 = uVar20 + 1;
    param_1 = *unaff_x24;
    if (param_1 == 0) goto LAB_030905b4;
  } while( true );
}


