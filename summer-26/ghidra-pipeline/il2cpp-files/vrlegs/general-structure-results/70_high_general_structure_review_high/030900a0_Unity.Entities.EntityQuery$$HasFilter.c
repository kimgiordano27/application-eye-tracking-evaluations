/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$HasFilter
ENTRY_POINT: 030900a0
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


undefined1  [16] Unity_Entities_EntityQuery__HasFilter(void)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long in_x9;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar16;
  long *unaff_x27;
  long unaff_x28;
  undefined8 uVar17;
  ulong unaff_x29;
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
                    /* try { // try from 030900a0 to 031900a3 has its CatchHandler @ 030900e0 */
    if (in_x9 == 0) {
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 030900a4 to 031900b3 has its CatchHandler @ 030900dc */
    if (*(uint *)(in_x9 + 0x18) <= unaff_x29) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar10 = in_x9 + unaff_x29 * 0x10;
                    /* try { // try from 030900b4 to 031900cb has its CatchHandler @ 0308fe24 */
    FUN_03091244(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                 *(undefined4 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x2c),in_stack_00000098);
    do {
      do {
        unaff_x29 = unaff_x29 + 1;
                    /* try { // try from 030900cc to 031900db has its CatchHandler @ 030900e8 */
        if ((long)*(int *)(unaff_x24 + 0x18) <= (long)unaff_x29) {
          do {
            lVar10 = *(long *)(in_stack_00000030 + 0x18);
                    /* catch() { ... } // from try @ 030900a4 with catch @ 030900dc */
            if (lVar10 == 0) goto LAB_030905b4;
                    /* catch() { ... } // from try @ 030900a0 with catch @ 030900e0 */
                    /* catch() { ... } // from try @ 03090080 with catch @ 030900e8
                       catch() { ... } // from try @ 030900cc with catch @ 030900e8 */
                    /* try { // try from 030900f0 to 031900f3 has its CatchHandler @ 03090114 */
            if (*(uint *)(lVar10 + 0x18) <= in_stack_00000040) goto LAB_030907fc;
                    /* try { // try from 030900f4 to 0319010b has its CatchHandler @ 0308fe24 */
                    /* catch() { ... } // from try @ 03090064 with catch @ 030900fc */
            uVar17 = *(undefined8 *)(lVar10 + in_stack_00000040 * 8 + 0x20);
                    /* try { // try from 0309010c to 03190113 has its CatchHandler @ 03090114 */
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
                    /* catch() { ... } // from try @ 030900f0 with catch @ 03090114
                       catch() { ... } // from try @ 0309010c with catch @ 03090114 */
            uVar6 = FUN_036cee6c(uVar17,0,0);
            if ((uVar6 & 1) == 0) {
              uStack000000000000003c = 0xffffffff;
            }
            else {
              if (in_stack_00000018 == 0) goto LAB_030905b4;
              uStack000000000000003c =
                   FUN_02217a2c(in_stack_00000018,uVar17,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                               );
            }
            lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
            Animancer_AnimancerState__OnSetIsPlaying(lVar10,*(undefined8 *)PTR_DAT_03cbe510);
            uVar9 = *(uint *)(in_stack_00000078 + 0x18);
            if (0 < (int)uVar9) {
              uVar13 = 0;
              do {
                puVar3 = PTR_DAT_03cbe508;
                if (((uVar9 <= uVar13) || (uVar9 <= uVar13 + 1)) || (uVar9 <= uVar13 + 2))
                goto LAB_030907fc;
                if (lVar10 == 0) goto LAB_030905b4;
                uVar24 = *(undefined4 *)(in_stack_00000078 + (long)(int)uVar13 * 4 + 0x20);
                uVar1 = *(undefined4 *)(in_stack_00000078 + (long)(int)(uVar13 + 1) * 4 + 0x20);
                uStack00000000000000a8 =
                     *(undefined4 *)(in_stack_00000078 + (long)(int)(uVar13 + 2) * 4 + 0x20);
                FUN_01b5f01c(lVar10,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
                unaff_x22 = 0xc;
                uStack00000000000000a8 = uVar1;
                FUN_01b5f01c(lVar10,&stack0x000000a8,*(undefined8 *)puVar3);
                uStack00000000000000a8 = uVar24;
                FUN_01b5f01c(lVar10,&stack0x000000a8,*(undefined8 *)puVar3);
                uVar9 = *(uint *)(in_stack_00000078 + 0x18);
                uVar13 = uVar13 + 3;
                unaff_x26 = in_stack_00000090;
              } while ((int)uVar13 < (int)uVar9);
            }
            if (in_stack_00000098 == 0) goto LAB_030905b4;
            lVar10 = FUN_030912cc(in_stack_00000098,in_stack_00000088,uStack000000000000003c,lVar10)
            ;
            lVar11 = *in_stack_000000a0;
            if (lVar11 == 0) goto LAB_030905b4;
            iVar4 = 0;
            while (iVar5 = FUN_036a2ca8(lVar11,0), iVar4 < iVar5) {
              uVar24 = *(undefined4 *)(unaff_x26 + 0x18);
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                         );
              FUN_03091748(lVar11,uVar24);
              if (*in_stack_000000a0 == 0) goto LAB_030905b4;
              UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                        (*in_stack_000000a0,iVar4,0);
              Animancer_FadeGroup__get_TargetWeight
                        (unaff_x26,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
              in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
              in_stack_000000e8 = in_stack_000000b0;
              in_stack_000000f0 = in_stack_000000b8;
              iVar5 = 0;
              while (uVar6 = FUN_021b51c8(&stack0x000000e0,*unaff_x20), (uVar6 & 1) != 0) {
                FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*unaff_x25);
                uVar9 = in_stack_00000108._4_4_;
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
                lVar14 = unaff_x23 + lVar16 * unaff_x22;
                uVar20 = (ulong)*(uint *)(lVar14 + 0x24);
                uVar22 = (ulong)*(uint *)(lVar14 + 0x28);
                uVar24 = *(undefined4 *)(lVar14 + 0x20);
                uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar6 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *unaff_x27) {
                      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_03090384;
                    }
                    uVar6 = uVar6 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
                uVar17 = (*(code *)*puVar7)(uVar24,uVar20,uVar22);
                if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(uint *)(unaff_x19 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                lVar12 = *unaff_x21;
                lVar16 = unaff_x19 + lVar16 * unaff_x22;
                uVar24 = *(undefined4 *)(lVar16 + 0x20);
                uVar21 = (ulong)*(uint *)(lVar16 + 0x24);
                uVar23 = (ulong)*(uint *)(lVar16 + 0x28);
                uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar6 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *unaff_x27) {
                      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_03090414;
                    }
                    uVar6 = uVar6 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
                uVar19 = (*(code *)*puVar7)(uVar24,uVar21,uVar23);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                FUN_030917d4(uVar17,uVar20,uVar22,uVar19,uVar21,uVar23,lVar11,iVar5);
                iVar5 = iVar5 + 1;
              }
              FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
              if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_030905b4;
              if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
                uVar17 = *(undefined8 *)(lVar11 + 0x18);
              }
              else {
                uVar17 = 0;
              }
              lVar16 = *(long *)(lVar10 + 0x28);
              uVar17 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar11 + 0x10),uVar17,
                                    *(char *)(in_stack_00000080 + 0x15) != '\0');
              if (lVar16 == 0) goto LAB_030905b4;
              FUN_01b5f01c(lVar16,uVar17,*(undefined8 *)System_IComparable_var);
              iVar4 = iVar4 + 1;
              lVar11 = *in_stack_000000a0;
              unaff_x26 = in_stack_00000090;
              if (lVar11 == 0) goto LAB_030905b4;
            }
            if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x18) == 0))
            goto LAB_030905b4;
            FUN_01b5f01c(*(long *)(in_stack_00000020 + 0x18),lVar10,
                         *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
            in_stack_00000040 = in_stack_00000040 + 1;
            if (*in_stack_000000a0 == 0) goto LAB_030905b4;
            iVar4 = FUN_036a3768(*in_stack_000000a0,0);
            lVar10 = *in_stack_000000a0;
            if (lVar10 == 0) goto LAB_030905b4;
            if ((long)iVar4 <= (long)in_stack_00000040) {
              uVar24 = FUN_036a2ca8(lVar10,0);
              uVar17 = FUN_02b34428(0,uVar24,0);
              uVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
              FUN_021de1ac(uVar19,in_stack_00000010,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                           ,0);
              uVar17 = FUN_01f6d39c(uVar17,uVar19,*(undefined8 *)PTR_DAT_03ccb9a8);
              uVar17 = FUN_01f70920(uVar17,*(undefined8 *)PTR_DAT_03cc4ca0);
              if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0)
                  == 0) {
                thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
              }
              FUN_03052fb0(in_stack_00000020,uVar17,3,0);
              puVar3 = 
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
              ;
              if (*in_stack_000000a0 != 0) {
                uVar24 = FUN_036a2ca8(*in_stack_000000a0,0);
                uVar17 = FUN_02b34428(0,uVar24,0);
                lVar10 = *(long *)puVar3;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar10);
                  lVar10 = *(long *)puVar3;
                }
                lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                if (lVar11 == 0) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar10);
                    lVar10 = *(long *)puVar3;
                  }
                  uVar19 = **(undefined8 **)(lVar10 + 0xb8);
                  lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
                  FUN_021de1ac(lVar11,uVar19,
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                               ,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                  *plVar8 = lVar11;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar11);
                  lVar10 = *(long *)puVar3;
                }
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar10);
                  lVar10 = *(long *)puVar3;
                }
                lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
                if (lVar16 == 0) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar10);
                    lVar10 = *(long *)puVar3;
                  }
                  uVar19 = **(undefined8 **)(lVar10 + 0xb8);
                  lVar16 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
                  FUN_021de1ac(lVar16,uVar19,
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                               ,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                  *plVar8 = lVar16;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar16);
                }
                uVar17 = FUN_01f70a5c(uVar17,lVar11,lVar16,
                                      *(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                                     );
                in_stack_000000f8 = 0;
                in_stack_00000100 = 0;
                FUN_020f03e8(&stack0x000000f8,in_stack_00000020,uVar17,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                            );
                auVar2._8_8_ = in_stack_00000100;
                auVar2._0_8_ = in_stack_000000f8;
                return auVar2;
              }
              goto LAB_030905b4;
            }
            in_stack_00000078 = FUN_036a8700(lVar10,in_stack_00000040 & 0xffffffff,0);
            unaff_x28 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
            FUN_021e45c8(unaff_x28,in_stack_00000078,*(undefined8 *)PTR_DAT_03ce47a8);
            if (in_stack_00000078 == 0) goto LAB_030905b4;
            in_stack_00000098 =
                 thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                   );
            FUN_03090d30(in_stack_00000098,*(undefined4 *)(in_stack_00000078 + 0x18),
                         in_stack_00000070);
            if (in_stack_00000090 == 0) goto LAB_030905b4;
            lVar10 = *(long *)PTR_DAT_03cbfc08;
            *(int *)(in_stack_00000090 + 0x1c) = *(int *)(in_stack_00000090 + 0x1c) + 1;
            uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
            if ((uVar6 & 1) == 0) {
              *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
            }
            else {
              iVar4 = *(int *)(in_stack_00000090 + 0x18);
              *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
              if (0 < iVar4) {
                FUN_02793a34(*(undefined8 *)(in_stack_00000090 + 0x10),0,iVar4,0);
              }
            }
            if (in_stack_00000028 == 0) goto LAB_030905b4;
            unaff_x26 = in_stack_00000090;
          } while (*(int *)(in_stack_00000028 + 0x18) < 1);
          unaff_x29 = 0;
          unaff_x24 = in_stack_00000028;
        }
        if (unaff_x28 == 0) goto LAB_030905b4;
        uStack00000000000000a8 = (int)unaff_x29;
        uVar6 = FUN_021e4dc4(unaff_x28,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
      } while ((uVar6 & 1) == 0);
      uStack00000000000000a8 = (int)unaff_x29;
      FUN_01b5f01c(unaff_x26,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x29) goto LAB_030907fc;
      if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
      lVar10 = *unaff_x21;
      lVar11 = unaff_x24 + unaff_x29 * unaff_x22;
      uVar20 = (ulong)*(uint *)(lVar11 + 0x24);
      uVar22 = (ulong)*(uint *)(lVar11 + 0x28);
      uVar24 = *(undefined4 *)(lVar11 + 0x20);
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0308ff54;
          }
          uVar6 = uVar6 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
      uVar17 = (*(code *)*puVar7)(uVar24,uVar20,uVar22);
      if (in_stack_00000060 == 0) goto LAB_030905b4;
      if (*(uint *)(in_stack_00000060 + 0x18) <= unaff_x29) goto LAB_030907fc;
      lVar10 = *unaff_x21;
      lVar11 = in_stack_00000060 + unaff_x29 * unaff_x22;
      uVar24 = *(undefined4 *)(lVar11 + 0x20);
      uVar21 = (ulong)*(uint *)(lVar11 + 0x24);
      uVar23 = (ulong)*(uint *)(lVar11 + 0x28);
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0308ffe8;
          }
          uVar6 = uVar6 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
      uVar19 = (*(code *)*puVar7)(uVar24,uVar21,uVar23);
      if (in_stack_00000058 == 0) goto LAB_030905b4;
      if (*(uint *)(in_stack_00000058 + 0x18) <= unaff_x29) goto LAB_030907fc;
      lVar10 = in_stack_00000058 + unaff_x29 * 8;
      uVar6 = (ulong)*(uint *)(lVar10 + 0x24);
      uVar18 = FUN_0304ece0(*(undefined4 *)(lVar10 + 0x20),uVar6,0);
      if (in_stack_00000098 == 0) goto LAB_030905b4;
      FUN_03090fac(uVar17,uVar20,uVar22,uVar19,uVar21,uVar23,uVar18,uVar6,in_stack_00000098,
                   unaff_x29 & 0xffffffff);
      if (in_stack_00000070 != 0) {
        if (in_stack_00000050 == 0) goto LAB_030905b4;
        if (*(uint *)(in_stack_00000050 + 0x18) <= unaff_x29) goto LAB_030907fc;
        lVar10 = in_stack_00000050 + unaff_x29 * 0x20;
        in_stack_000000c8 = *(undefined8 *)(lVar10 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar10 + 0x20);
        in_stack_000000d8 = *(undefined8 *)(lVar10 + 0x38);
        in_stack_000000d0 = *(undefined8 *)(lVar10 + 0x30);
        FUN_030910e8(in_stack_00000098,&stack0x000000c0);
      }
      in_x9 = in_stack_00000048;
    } while ((in_stack_00000068 & 0x100000000) != 0);
  } while( true );
}


