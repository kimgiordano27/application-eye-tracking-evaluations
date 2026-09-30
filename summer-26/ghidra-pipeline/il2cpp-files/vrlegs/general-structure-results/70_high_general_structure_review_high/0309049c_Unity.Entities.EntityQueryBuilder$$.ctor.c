/*
FUNCTION_NAME: Unity.Entities.EntityQueryBuilder$$.ctor
ENTRY_POINT: 0309049c
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
Unity_Entities_EntityQueryBuilder___ctor(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_x9;
  int *piVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long lVar17;
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
  
  while( true ) {
    lVar17 = *(long *)(in_stack_00000098 + 0x28);
    uVar8 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(unaff_x28 + 0x10),param_3,
                         *(char *)(in_x9 + 0x15) != '\0');
                    /* try { // try from 030904bc to 031904e3 has its CatchHandler @ 0309069c */
    if (lVar17 == 0) break;
    FUN_01b5f01c(lVar17,uVar8,*(undefined8 *)System_IComparable_var);
    unaff_w24 = unaff_w24 + 1;
    lVar17 = *in_stack_000000a0;
    if (lVar17 == 0) break;
    while (iVar4 = FUN_036a2ca8(lVar17,0), iVar4 <= unaff_w24) {
      if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x18) == 0)) goto LAB_030905b4;
      FUN_01b5f01c(*(long *)(in_stack_00000020 + 0x18),in_stack_00000098,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      in_stack_00000040 = in_stack_00000040 + 1;
                    /* try { // try from 030905ac to 031905d3 has its CatchHandler @ 0309067c */
      if (*in_stack_000000a0 == 0) goto LAB_030905b4;
      iVar4 = FUN_036a3768(*in_stack_000000a0,0);
      lVar17 = *in_stack_000000a0;
      if (lVar17 == 0) goto LAB_030905b4;
      if ((long)iVar4 <= (long)in_stack_00000040) {
        uVar24 = FUN_036a2ca8(lVar17,0);
        uVar8 = FUN_02b34428(0,uVar24,0);
                    /* try { // try from 030905d4 to 031905fb has its CatchHandler @ 0309040c */
        uVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
                    /* try { // try from 030905fc to 031905ff has its CatchHandler @ 03090688 */
        FUN_021de1ac(uVar19,in_stack_00000010,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
                    /* try { // try from 03090610 to 03190613 has its CatchHandler @ 03090668 */
                    /* try { // try from 03090614 to 0319061b has its CatchHandler @ 03090674 */
        uVar8 = FUN_01f6d39c(uVar8,uVar19,*(undefined8 *)PTR_DAT_03ccb9a8);
                    /* try { // try from 03090620 to 03190663 has its CatchHandler @ 0309066c */
        uVar8 = FUN_01f70920(uVar8,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(in_stack_00000020,uVar8,3,0);
        puVar3 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
                    /* try { // try from 03090664 to 03190667 has its CatchHandler @ 03090684 */
                    /* catch() { ... } // from try @ 03090610 with catch @ 03090668
                       try { // try from 03090668 to 031906bf has its CatchHandler @ 0309040c */
                    /* catch() { ... } // from try @ 03090620 with catch @ 0309066c */
        if (*in_stack_000000a0 != 0) {
                    /* catch() { ... } // from try @ 03090614 with catch @ 03090674 */
                    /* catch() { ... } // from try @ 0309056c with catch @ 03090678 */
          uVar24 = FUN_036a2ca8(*in_stack_000000a0,0);
                    /* catch() { ... } // from try @ 030905ac with catch @ 0309067c */
                    /* catch() { ... } // from try @ 03090518 with catch @ 03090680 */
                    /* catch() { ... } // from try @ 03090554 with catch @ 03090684
                       catch() { ... } // from try @ 03090664 with catch @ 03090684 */
                    /* catch() { ... } // from try @ 030905fc with catch @ 03090688 */
          uVar8 = FUN_02b34428(0,uVar24,0);
                    /* catch() { ... } // from try @ 03090470 with catch @ 0309068c */
          lVar17 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 03090450 with catch @ 03090690 */
          if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 030904bc with catch @ 0309069c */
            thunk_FUN_01a58e78(lVar17);
            lVar17 = *(long *)puVar3;
          }
          lVar11 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
          if (lVar11 == 0) {
            if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* try { // try from 030906c0 to 031906c3 has its CatchHandler @ 03090750 */
              thunk_FUN_01a58e78(lVar17);
                    /* try { // try from 030906c4 to 031906db has its CatchHandler @ 0309040c */
              lVar17 = *(long *)puVar3;
            }
            uVar19 = **(undefined8 **)(lVar17 + 0xb8);
                    /* try { // try from 030906dc to 031906f3 has its CatchHandler @ 0309073c */
            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar11,uVar19,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
                    /* try { // try from 030906fc to 031906ff has its CatchHandler @ 03090734 */
                    /* try { // try from 03090700 to 0319070f has its CatchHandler @ 03090730 */
            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar9 = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
                    /* try { // try from 03090710 to 0319071f has its CatchHandler @ 0309040c */
            lVar17 = *(long *)puVar3;
          }
          if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* try { // try from 03090720 to 0319072f has its CatchHandler @ 0309073c */
            thunk_FUN_01a58e78(lVar17);
            lVar17 = *(long *)puVar3;
          }
          lVar15 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
                    /* catch() { ... } // from try @ 03090700 with catch @ 03090730 */
          if (lVar15 == 0) {
                    /* catch() { ... } // from try @ 030906fc with catch @ 03090734 */
            if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 030906dc with catch @ 0309073c
                       catch() { ... } // from try @ 03090720 with catch @ 0309073c */
              thunk_FUN_01a58e78(lVar17);
                    /* try { // try from 03090744 to 03190747 has its CatchHandler @ 03090768 */
              lVar17 = *(long *)puVar3;
            }
                    /* try { // try from 03090748 to 0319075f has its CatchHandler @ 0309040c */
                    /* catch() { ... } // from try @ 030906c0 with catch @ 03090750 */
            uVar19 = **(undefined8 **)(lVar17 + 0xb8);
            lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
                    /* try { // try from 03090760 to 03190767 has its CatchHandler @ 03090768 */
                    /* catch() { ... } // from try @ 03090744 with catch @ 03090768
                       catch() { ... } // from try @ 03090760 with catch @ 03090768 */
                    /* try { // try from 0309076c to 0319083b has its CatchHandler @ 0309076c
                       catch() { ... } // from try @ 0309076c with catch @ 0309076c
                       catch() { ... } // from try @ 03090884 with catch @ 0309076c
                       catch() { ... } // from try @ 030908c8 with catch @ 0309076c
                       catch() { ... } // from try @ 03090904 with catch @ 0309076c
                       catch() { ... } // from try @ 03090988 with catch @ 0309076c */
            FUN_021de1ac(lVar15,uVar19,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *plVar9 = lVar15;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar15);
          }
          uVar8 = FUN_01f70a5c(uVar8,lVar11,lVar15,
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                              );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,in_stack_00000020,uVar8,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        goto LAB_030905b4;
      }
      lVar17 = FUN_036a8700(lVar17,in_stack_00000040 & 0xffffffff,0);
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar11,lVar17,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar17 == 0) goto LAB_030905b4;
      lVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar15,*(undefined4 *)(lVar17 + 0x18),in_stack_00000070);
      if (in_stack_00000090 == 0) goto LAB_030905b4;
      lVar13 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(in_stack_00000090 + 0x1c) = *(int *)(in_stack_00000090 + 0x1c) + 1;
      uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
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
      if (0 < *(int *)(in_stack_00000028 + 0x18)) {
        uVar6 = 0;
        do {
          if (lVar11 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar6;
          uVar5 = FUN_021e4dc4(lVar11,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar5 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar6;
            FUN_01b5f01c(in_stack_00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(in_stack_00000028 + 0x18) <= uVar6) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar13 = *unaff_x21;
            lVar14 = in_stack_00000028 + uVar6 * unaff_x22;
            uVar20 = (ulong)*(uint *)(lVar14 + 0x24);
            uVar22 = (ulong)*(uint *)(lVar14 + 0x28);
            uVar24 = *(undefined4 *)(lVar14 + 0x20);
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x27) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar8 = (*(code *)*puVar7)(uVar24,uVar20,uVar22);
            if (in_stack_00000060 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar6) goto LAB_030907fc;
            lVar13 = *unaff_x21;
            lVar14 = in_stack_00000060 + uVar6 * unaff_x22;
            uVar24 = *(undefined4 *)(lVar14 + 0x20);
            uVar21 = (ulong)*(uint *)(lVar14 + 0x24);
            uVar23 = (ulong)*(uint *)(lVar14 + 0x28);
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x27) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar19 = (*(code *)*puVar7)(uVar24,uVar21,uVar23);
            if (in_stack_00000058 == 0) goto LAB_030905b4;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar6) goto LAB_030907fc;
            lVar13 = in_stack_00000058 + uVar6 * 8;
            uVar5 = (ulong)*(uint *)(lVar13 + 0x24);
            uVar18 = FUN_0304ece0(*(undefined4 *)(lVar13 + 0x20),uVar5,0);
            if (lVar15 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar8,uVar20,uVar22,uVar19,uVar21,uVar23,uVar18,uVar5,lVar15,
                         uVar6 & 0xffffffff);
            if (in_stack_00000070 != 0) {
              if (in_stack_00000050 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000050 + 0x18) <= uVar6) goto LAB_030907fc;
              lVar13 = in_stack_00000050 + uVar6 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar13 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar13 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar13 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar13 + 0x30);
              FUN_030910e8(lVar15,&stack0x000000c0);
            }
            if ((in_stack_00000068 & 0x100000000) == 0) {
              if (in_stack_00000048 == 0) goto LAB_030905b4;
              if (*(uint *)(in_stack_00000048 + 0x18) <= uVar6) goto LAB_030907fc;
              lVar13 = in_stack_00000048 + uVar6 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                           *(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x2c),lVar15);
            }
          }
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)*(int *)(in_stack_00000028 + 0x18));
      }
      lVar11 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar11 == 0) goto LAB_030905b4;
      if (*(uint *)(lVar11 + 0x18) <= in_stack_00000040) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar8 = *(undefined8 *)(lVar11 + in_stack_00000040 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036cee6c(uVar8,0,0);
      if ((uVar6 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) goto LAB_030905b4;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar8,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)PTR_DAT_03cbe510);
      uVar10 = *(uint *)(lVar17 + 0x18);
      if (0 < (int)uVar10) {
        uVar12 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar10 <= uVar12) || (uVar10 <= uVar12 + 1)) || (uVar10 <= uVar12 + 2))
          goto LAB_030907fc;
          if (lVar11 == 0) goto LAB_030905b4;
          uVar24 = *(undefined4 *)(lVar17 + (long)(int)uVar12 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar17 + (long)(int)(uVar12 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar17 + (long)(int)(uVar12 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar11,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          unaff_x22 = 0xc;
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar11,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar24;
          FUN_01b5f01c(lVar11,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar10 = *(uint *)(lVar17 + 0x18);
          uVar12 = uVar12 + 3;
        } while ((int)uVar12 < (int)uVar10);
      }
      if (lVar15 == 0) goto LAB_030905b4;
      in_stack_00000098 = FUN_030912cc(lVar15,in_stack_00000088,uStack000000000000003c,lVar11);
      lVar17 = *in_stack_000000a0;
      if (lVar17 == 0) goto LAB_030905b4;
      unaff_x26 = in_stack_00000090;
      unaff_w24 = 0;
    }
    uVar24 = *(undefined4 *)(unaff_x26 + 0x18);
    unaff_x28 = thunk_FUN_01a89e68(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                  );
    FUN_03091748(unaff_x28,uVar24);
    if (*in_stack_000000a0 == 0) break;
    UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(*in_stack_000000a0,unaff_w24,0);
    Animancer_FadeGroup__get_TargetWeight
              (unaff_x26,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
    in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    in_stack_000000e8 = in_stack_000000b0;
    in_stack_000000f0 = in_stack_000000b8;
    iVar4 = 0;
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
      uVar5 = (ulong)*(uint *)(lVar15 + 0x24);
      uVar20 = (ulong)*(uint *)(lVar15 + 0x28);
      uVar24 = *(undefined4 *)(lVar15 + 0x20);
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03090384;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
      uVar8 = (*(code *)*puVar7)(uVar24,uVar5,uVar20);
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
      uVar24 = *(undefined4 *)(lVar17 + 0x20);
      uVar22 = (ulong)*(uint *)(lVar17 + 0x24);
      uVar21 = (ulong)*(uint *)(lVar17 + 0x28);
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03090414;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
      uVar19 = (*(code *)*puVar7)(uVar24,uVar22,uVar21);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_030917d4(uVar8,uVar5,uVar20,uVar19,uVar22,uVar21,unaff_x28,iVar4);
      iVar4 = iVar4 + 1;
    }
    FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
    if ((in_stack_00000098 == 0) || (unaff_x28 == 0)) break;
    in_x9 = in_stack_00000080;
    if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
      param_3 = *(undefined8 *)(unaff_x28 + 0x18);
      unaff_x26 = in_stack_00000090;
    }
    else {
      param_3 = 0;
      unaff_x26 = in_stack_00000090;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


