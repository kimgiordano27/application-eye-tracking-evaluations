/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$SetChangedVersionFilter
ENTRY_POINT: 0308fde0
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


undefined1  [16]
Unity_Entities_EntityQuery__SetChangedVersionFilter(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x27;
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
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
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
                    /* catch() { ... } // from try @ 0308fdb8 with catch @ 0308fde8 */
                    /* catch() { ... } // from try @ 0308fdb4 with catch @ 0308fdec */
    lVar6 = thunk_FUN_01a89e68(*param_1);
                    /* catch() { ... } // from try @ 0308fd94 with catch @ 0308fdf8
                       catch() { ... } // from try @ 0308fdd8 with catch @ 0308fdf8 */
                    /* try { // try from 0308fe00 to 0318fe03 has its CatchHandler @ 0308fe20 */
                    /* try { // try from 0308fe04 to 0318fe17 has its CatchHandler @ 0308fb4c */
    FUN_021e45c8(lVar6,param_2,*(undefined8 *)PTR_DAT_03ce47a8);
                    /* catch() { ... } // from try @ 0308fd78 with catch @ 0308fe08 */
    if (param_2 == 0) {
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 0308fe18 to 0318fe1f has its CatchHandler @ 0308fe20 */
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                              );
                    /* catch() { ... } // from try @ 0308fd1c with catch @ 0308fe20
                       catch() { ... } // from try @ 0308fe00 with catch @ 0308fe20
                       catch() { ... } // from try @ 0308fe18 with catch @ 0308fe20 */
                    /* try { // try from 0308fe24 to 0318fea3 has its CatchHandler @ 0308fe24
                       catch() { ... } // from try @ 0308fe24 with catch @ 0308fe24
                       catch() { ... } // from try @ 03090024 with catch @ 0308fe24
                       catch() { ... } // from try @ 03090068 with catch @ 0308fe24
                       catch() { ... } // from try @ 030900b4 with catch @ 0308fe24
                       catch() { ... } // from try @ 030900f4 with catch @ 0308fe24 */
    FUN_03090d30(lVar7,*(undefined4 *)(param_2 + 0x18),in_stack_00000070);
    if (in_stack_00000090 == 0) goto LAB_030905b4;
    lVar14 = *(long *)PTR_DAT_03cbfc08;
    *(int *)(in_stack_00000090 + 0x1c) = *(int *)(in_stack_00000090 + 0x1c) + 1;
    uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
    }
    else {
      iVar4 = *(int *)(in_stack_00000090 + 0x18);
      *(undefined4 *)(in_stack_00000090 + 0x18) = 0;
      if (0 < iVar4) {
        FUN_02793a34(*(undefined8 *)(in_stack_00000090 + 0x10),0,iVar4,0);
      }
    }
    if (unaff_x24 == 0) goto LAB_030905b4;
    if (0 < *(int *)(unaff_x24 + 0x18)) {
      uVar8 = 0;
      do {
        if (lVar6 == 0) goto LAB_030905b4;
        uStack00000000000000a8 = (int)uVar8;
        uVar9 = FUN_021e4dc4(lVar6,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
        if ((uVar9 & 1) != 0) {
          uStack00000000000000a8 = (int)uVar8;
          FUN_01b5f01c(in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          if (*(uint *)(unaff_x24 + 0x18) <= uVar8) goto LAB_030907fc;
          if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
          lVar14 = *unaff_x21;
          lVar15 = unaff_x24 + uVar8 * unaff_x22;
          uVar21 = (ulong)*(uint *)(lVar15 + 0x24);
          uVar23 = (ulong)*(uint *)(lVar15 + 0x28);
          uVar25 = *(undefined4 *)(lVar15 + 0x20);
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x27) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0308ff54;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
          uVar18 = (*(code *)*puVar10)(uVar25,uVar21,uVar23);
          if (in_stack_00000060 == 0) goto LAB_030905b4;
          if (*(uint *)(in_stack_00000060 + 0x18) <= uVar8) goto LAB_030907fc;
          lVar14 = *unaff_x21;
          lVar15 = in_stack_00000060 + uVar8 * unaff_x22;
          uVar25 = *(undefined4 *)(lVar15 + 0x20);
          uVar22 = (ulong)*(uint *)(lVar15 + 0x24);
          uVar24 = (ulong)*(uint *)(lVar15 + 0x28);
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x27) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0308ffe8;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
          uVar19 = (*(code *)*puVar10)(uVar25,uVar22,uVar24);
          if (in_stack_00000058 == 0) goto LAB_030905b4;
          if (*(uint *)(in_stack_00000058 + 0x18) <= uVar8) goto LAB_030907fc;
          lVar14 = in_stack_00000058 + uVar8 * 8;
          uVar9 = (ulong)*(uint *)(lVar14 + 0x24);
          uVar20 = FUN_0304ece0(*(undefined4 *)(lVar14 + 0x20),uVar9,0);
          if (lVar7 == 0) goto LAB_030905b4;
          FUN_03090fac(uVar18,uVar21,uVar23,uVar19,uVar22,uVar24,uVar20,uVar9,lVar7,
                       uVar8 & 0xffffffff);
          if (in_stack_00000070 != 0) {
            if (in_stack_00000050 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000050 + 0x18) <= uVar8) goto LAB_030907fc;
            lVar14 = in_stack_00000050 + uVar8 * 0x20;
            in_stack_000000c8 = *(undefined8 *)(lVar14 + 0x28);
            in_stack_000000c0 = *(undefined8 *)(lVar14 + 0x20);
            in_stack_000000d8 = *(undefined8 *)(lVar14 + 0x38);
            in_stack_000000d0 = *(undefined8 *)(lVar14 + 0x30);
            FUN_030910e8(lVar7,&stack0x000000c0);
          }
          if ((in_stack_00000068 & 0x100000000) == 0) {
            if (in_stack_00000048 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000048 + 0x18) <= uVar8) goto LAB_030907fc;
            lVar14 = in_stack_00000048 + uVar8 * 0x10;
            FUN_03091244(*(undefined4 *)(lVar14 + 0x20),*(undefined4 *)(lVar14 + 0x24),
                         *(undefined4 *)(lVar14 + 0x28),*(undefined4 *)(lVar14 + 0x2c),lVar7);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(unaff_x24 + 0x18));
    }
    lVar6 = *(long *)(in_stack_00000030 + 0x18);
    if (lVar6 == 0) goto LAB_030905b4;
    if (*(uint *)(lVar6 + 0x18) <= in_stack_00000040) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar18 = *(undefined8 *)(lVar6 + in_stack_00000040 * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036cee6c(uVar18,0,0);
    if ((uVar8 & 1) == 0) {
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
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
    Animancer_AnimancerState__OnSetIsPlaying(lVar6,*(undefined8 *)PTR_DAT_03cbe510);
    uVar12 = *(uint *)(param_2 + 0x18);
    if (0 < (int)uVar12) {
      uVar13 = 0;
      do {
        puVar3 = PTR_DAT_03cbe508;
        if (((uVar12 <= uVar13) || (uVar12 <= uVar13 + 1)) || (uVar12 <= uVar13 + 2))
        goto LAB_030907fc;
        if (lVar6 == 0) goto LAB_030905b4;
        uVar25 = *(undefined4 *)(param_2 + (long)(int)uVar13 * 4 + 0x20);
        uVar1 = *(undefined4 *)(param_2 + (long)(int)(uVar13 + 1) * 4 + 0x20);
        uStack00000000000000a8 = *(undefined4 *)(param_2 + (long)(int)(uVar13 + 2) * 4 + 0x20);
        FUN_01b5f01c(lVar6,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
        unaff_x22 = 0xc;
        uStack00000000000000a8 = uVar1;
        FUN_01b5f01c(lVar6,&stack0x000000a8,*(undefined8 *)puVar3);
        uStack00000000000000a8 = uVar25;
        FUN_01b5f01c(lVar6,&stack0x000000a8,*(undefined8 *)puVar3);
        uVar12 = *(uint *)(param_2 + 0x18);
        uVar13 = uVar13 + 3;
      } while ((int)uVar13 < (int)uVar12);
    }
    if (lVar7 == 0) goto LAB_030905b4;
    lVar6 = FUN_030912cc(lVar7,in_stack_00000088,uStack000000000000003c,lVar6);
    lVar7 = *in_stack_000000a0;
    if (lVar7 == 0) goto LAB_030905b4;
    iVar4 = 0;
    while (iVar5 = FUN_036a2ca8(lVar7,0), iVar4 < iVar5) {
      uVar25 = *(undefined4 *)(in_stack_00000090 + 0x18);
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                );
      FUN_03091748(lVar7,uVar25);
      if (*in_stack_000000a0 == 0) goto LAB_030905b4;
      UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*in_stack_000000a0,iVar4,0);
      Animancer_FadeGroup__get_TargetWeight
                (in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
      in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_000000e8 = in_stack_000000b0;
      in_stack_000000f0 = in_stack_000000b8;
      iVar5 = 0;
      while (uVar8 = FUN_021b51c8(&stack0x000000e0,*unaff_x20), (uVar8 & 1) != 0) {
        FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*unaff_x25);
        uVar12 = in_stack_00000108._4_4_;
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar14 = (long)(int)in_stack_00000108._4_4_;
        if (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar15 = *unaff_x21;
        lVar16 = unaff_x23 + lVar14 * unaff_x22;
        uVar9 = (ulong)*(uint *)(lVar16 + 0x24);
        uVar21 = (ulong)*(uint *)(lVar16 + 0x28);
        uVar25 = *(undefined4 *)(lVar16 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03090384;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
        uVar18 = (*(code *)*puVar10)(uVar25,uVar9,uVar21);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar15 = *unaff_x21;
        lVar14 = unaff_x19 + lVar14 * unaff_x22;
        uVar25 = *(undefined4 *)(lVar14 + 0x20);
        uVar23 = (ulong)*(uint *)(lVar14 + 0x24);
        uVar22 = (ulong)*(uint *)(lVar14 + 0x28);
        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03090414;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
        uVar19 = (*(code *)*puVar10)(uVar25,uVar23,uVar22);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_030917d4(uVar18,uVar9,uVar21,uVar19,uVar23,uVar22,lVar7,iVar5);
        iVar5 = iVar5 + 1;
      }
      FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
      if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_030905b4;
      if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
        uVar18 = *(undefined8 *)(lVar7 + 0x18);
      }
      else {
        uVar18 = 0;
      }
      lVar14 = *(long *)(lVar6 + 0x28);
      uVar18 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar7 + 0x10),uVar18,
                            *(char *)(in_stack_00000080 + 0x15) != '\0');
      if (lVar14 == 0) goto LAB_030905b4;
      FUN_01b5f01c(lVar14,uVar18,*(undefined8 *)System_IComparable_var);
      iVar4 = iVar4 + 1;
      lVar7 = *in_stack_000000a0;
      if (lVar7 == 0) goto LAB_030905b4;
    }
    if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x18) == 0)) goto LAB_030905b4;
    FUN_01b5f01c(*(long *)(in_stack_00000020 + 0x18),lVar6,
                 *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
    in_stack_00000040 = in_stack_00000040 + 1;
    if (*in_stack_000000a0 == 0) goto LAB_030905b4;
    iVar4 = FUN_036a3768(*in_stack_000000a0,0);
    lVar6 = *in_stack_000000a0;
    if (lVar6 == 0) goto LAB_030905b4;
    if ((long)iVar4 <= (long)in_stack_00000040) {
      uVar25 = FUN_036a2ca8(lVar6,0);
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
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar6);
          lVar6 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar7 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar6);
            lVar6 = *(long *)puVar3;
          }
          uVar19 = **(undefined8 **)(lVar6 + 0xb8);
          lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
          FUN_021de1ac(lVar7,uVar19,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                       ,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar11 = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar7);
          lVar6 = *(long *)puVar3;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar6);
          lVar6 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
        if (lVar14 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar6);
            lVar6 = *(long *)puVar3;
          }
          uVar19 = **(undefined8 **)(lVar6 + 0xb8);
          lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
          FUN_021de1ac(lVar14,uVar19,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                       ,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar11 = lVar14;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar14);
        }
        uVar18 = FUN_01f70a5c(uVar18,lVar7,lVar14,
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
      goto LAB_030905b4;
    }
    param_2 = FUN_036a8700(lVar6,in_stack_00000040 & 0xffffffff,0);
    param_1 = (undefined8 *)PTR_DAT_03cc8ba8;
    unaff_x24 = in_stack_00000028;
  } while( true );
}


