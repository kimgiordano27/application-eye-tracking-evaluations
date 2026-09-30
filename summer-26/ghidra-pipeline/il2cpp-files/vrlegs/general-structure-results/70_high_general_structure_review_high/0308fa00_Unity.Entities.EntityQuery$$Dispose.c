/*
FUNCTION_NAME: Unity.Entities.EntityQuery$$Dispose
ENTRY_POINT: 0308fa00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_20;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_20
*/


undefined1  [16] Unity_Entities_EntityQuery__Dispose(void)

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
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long in_stack_00000018;
  long in_stack_00000030;
  undefined4 uStack000000000000003c;
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
  
  FUN_01ab69ac();
                    /* catch() { ... } // from try @ 0308f7c4 with catch @ 0308fa04
                       catch() { ... } // from try @ 0308f970 with catch @ 0308fa04 */
                    /* catch() { ... } // from try @ 0308f7ec with catch @ 0308fa08 */
  FUN_01ab69ac(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_00000983_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
              );
                    /* try { // try from 0308fa30 to 0318fa33 has its CatchHandler @ 0308fac0 */
  FUN_01ab69ac(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
              );
                    /* try { // try from 0308fa34 to 0318fa4b has its CatchHandler @ 0308f728 */
  FUN_01ab69ac(PTR_DAT_03cbeb90);
  FUN_01ab69ac(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
              );
                    /* try { // try from 0308fa4c to 0318fa63 has its CatchHandler @ 0308fab0 */
  FUN_01ab69ac(System_Runtime_Remoting_Channels_IChannelReceiver_var);
  FUN_01ab69ac(System_Runtime_CompilerServices_ExtensionAttribute_var);
  *(undefined1 *)(unaff_x20 + 0x4fa) = 1;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  lVar11 = thunk_FUN_01a89e68(*unaff_x19);
  FUN_027b3d9c(lVar11,0);
  if ((in_stack_00000030 == 0) || (lVar11 == 0)) goto LAB_030905b4;
  plVar35 = (long *)(lVar11 + 0x10);
  *plVar35 = *(long *)(in_stack_00000030 + 0x10);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar35);
  puVar4 = System_Runtime_Remoting_Channels_IChannelReceiver_var;
  if (*plVar35 == 0) goto LAB_030905b4;
  uVar12 = FUN_036d3824(*plVar35,0);
  lVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_0306b594(lVar13,uVar12,0);
  if (in_stack_00000080 == 0) goto LAB_030905b4;
  if (*(char *)(in_stack_00000080 + 0x17) != '\0') {
    thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
    uVar12 = thunk_FUN_01a89e68();
    FUN_0276e954(uVar12,0);
    uVar36 = thunk_FUN_01a6ca08(
                               UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_0000098A_PostfixBurstDelegate_var
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar12,uVar36);
  }
  if (*plVar35 == 0) goto LAB_030905b4;
  lVar14 = FUN_036a45c0(*plVar35,0);
  if (*plVar35 == 0) goto LAB_030905b4;
  lVar15 = FUN_036a466c(*plVar35,0);
  if (*plVar35 == 0) goto LAB_030905b4;
  lVar16 = FUN_036a47c4(*plVar35,0);
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
  ;
  if (*plVar35 == 0) goto LAB_030905b4;
  lVar17 = FUN_036aa140(*plVar35,0);
  lVar29 = *(long *)puVar4;
  if (*(int *)(lVar29 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar29);
    lVar29 = *(long *)puVar4;
  }
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000981_PostfixBurstDelegate_var
  ;
  lVar34 = *(long *)(*(long *)(lVar29 + 0xb8) + 8);
  if (lVar34 == 0) {
    if (*(int *)(lVar29 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar29);
      lVar29 = *(long *)puVar4;
    }
    uVar12 = **(undefined8 **)(lVar29 + 0xb8);
    lVar34 = thunk_FUN_01a89e68(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097E_PostfixBurstDelegate_var
                               );
    FUN_021de1ac(lVar34,uVar12,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000977_PostfixBurstDelegate_var
                 ,0);
    plVar18 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar18 = lVar34;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18,lVar34);
  }
  uVar19 = FUN_01f645bc(lVar17,lVar34,*(undefined8 *)puVar5);
  lVar29 = 0;
  if ((uVar19 & 1) == 0) {
    lVar29 = lVar17;
  }
  if (*plVar35 == 0) goto LAB_030905b4;
  lVar17 = FUN_036a4d24(*plVar35,0);
  if (lVar29 == 0) {
LAB_0308fc60:
    lStack0000000000000070 = 0;
  }
  else {
    if (lVar14 == 0) goto LAB_030905b4;
    if (*(int *)(lVar29 + 0x18) != *(int *)(lVar14 + 0x18)) goto LAB_0308fc60;
    lStack0000000000000070 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
    FUN_021de1ac(lStack0000000000000070,in_stack_00000030,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_0000097A_PostfixBurstDelegate_var
                 ,0);
  }
  puVar4 = PTR_DAT_03cbeb90;
  if (*plVar35 == 0) goto LAB_030905b4;
  uVar8 = FUN_036a3408(*plVar35,0);
  lVar34 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar8);
  if (*plVar35 == 0) goto LAB_030905b4;
  uVar8 = FUN_036a3408(*plVar35,0);
  lVar20 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar8);
  iVar9 = FUN_0309087c(*plVar35,in_stack_00000018);
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
    if (*plVar35 == 0) goto LAB_030905b4;
    lVar21 = FUN_036a4d24(*plVar35,0);
    if (lVar21 == 0) goto LAB_0308fd34;
    if (((*plVar35 == 0) || (lVar21 = FUN_036a4d24(*plVar35,0), lVar21 == 0)) || (*plVar35 == 0))
    goto LAB_030905b4;
    iVar10 = FUN_036a3408(*plVar35,0);
    bVar7 = false;
    if ((iVar9 != 1) && (iVar10 != *(int *)(lVar21 + 0x18))) goto LAB_0308fd44;
  }
  puVar4 = PTR_DAT_03cbe510;
  lVar21 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
  Animancer_AnimancerState__OnSetIsPlaying(lVar21,*(undefined8 *)puVar4);
  puVar6 = System_Text_EncoderFallback_var;
  puVar5 = PTR_DAT_03cc8660;
  puVar4 = PTR_DAT_03cc8650;
  lVar22 = *plVar35;
  if (lVar22 != 0) {
    uVar19 = 0;
    while( true ) {
      iVar9 = FUN_036a3768(lVar22,0);
      lVar22 = *plVar35;
      if (lVar22 == 0) break;
      if ((long)iVar9 <= (long)uVar19) {
        uVar8 = FUN_036a2ca8(lVar22,0);
        uVar12 = FUN_02b34428(0,uVar8,0);
        uVar36 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
        FUN_021de1ac(uVar36,lVar11,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097B_PostfixBurstDelegate_var
                     ,0);
        uVar12 = FUN_01f6d39c(uVar12,uVar36,*(undefined8 *)PTR_DAT_03ccb9a8);
        uVar12 = FUN_01f70920(uVar12,*(undefined8 *)PTR_DAT_03cc4ca0);
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var);
        }
        FUN_03052fb0(lVar13,uVar12,3,0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_0000097C_PostfixBurstDelegate_var
        ;
        if (*plVar35 != 0) {
          uVar8 = FUN_036a2ca8(*plVar35,0);
          uVar12 = FUN_02b34428(0,uVar8,0);
          lVar11 = *(long *)puVar4;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar11 = *(long *)puVar4;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
          if (lVar14 == 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar11);
              lVar11 = *(long *)puVar4;
            }
            uVar36 = **(undefined8 **)(lVar11 + 0xb8);
            lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar14,uVar36,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000978_PostfixBurstDelegate_var
                         ,0);
            plVar35 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
            *plVar35 = lVar14;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar35,lVar14);
            lVar11 = *(long *)puVar4;
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar11 = *(long *)puVar4;
          }
          lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
          if (lVar15 == 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar11);
              lVar11 = *(long *)puVar4;
            }
            uVar36 = **(undefined8 **)(lVar11 + 0xb8);
            lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d075f0);
            FUN_021de1ac(lVar15,uVar36,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_00000987_PostfixBurstDelegate_var
                         ,0);
            plVar35 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar35 = lVar15;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar35,lVar15);
          }
          uVar12 = FUN_01f70a5c(uVar12,lVar14,lVar15,
                                *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_0000097D_PostfixBurstDelegate_var
                               );
          in_stack_000000f8 = 0;
          in_stack_00000100 = 0;
          FUN_020f03e8(&stack0x000000f8,lVar13,uVar12,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar2._8_8_ = in_stack_00000100;
          auVar2._0_8_ = in_stack_000000f8;
          return auVar2;
        }
        break;
      }
      lVar22 = FUN_036a8700(lVar22,uVar19 & 0xffffffff,0);
      lVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e45c8(lVar23,lVar22,*(undefined8 *)PTR_DAT_03ce47a8);
      if (lVar22 == 0) break;
      lVar24 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000985_PostfixBurstDelegate_var
                                 );
      FUN_03090d30(lVar24,*(undefined4 *)(lVar22 + 0x18),lStack0000000000000070);
      if (lVar21 == 0) break;
      lVar31 = *(long *)PTR_DAT_03cbfc08;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      uVar25 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 200));
      if ((uVar25 & 1) == 0) {
        *(undefined4 *)(lVar21 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar21 + 0x18);
        *(undefined4 *)(lVar21 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar9,0);
        }
      }
      if (lVar14 == 0) break;
      if (0 < *(int *)(lVar14 + 0x18)) {
        uVar25 = 0;
        do {
          if (lVar23 == 0) goto LAB_030905b4;
          uStack00000000000000a8 = (int)uVar25;
          uVar26 = FUN_021e4dc4(lVar23,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8e98);
          if ((uVar26 & 1) != 0) {
            uStack00000000000000a8 = (int)uVar25;
            FUN_01b5f01c(lVar21,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
            if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_030907fc;
            if (unaff_x21 == (long *)0x0) goto LAB_030905b4;
            lVar31 = *unaff_x21;
            lVar32 = lVar14 + uVar25 * 0xc;
            uVar38 = (ulong)*(uint *)(lVar32 + 0x24);
            uVar40 = (ulong)*(uint *)(lVar32 + 0x28);
            uVar8 = *(undefined4 *)(lVar32 + 0x20);
            uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar26 != 0) {
              piVar33 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)puVar6) {
                  puVar27 = (undefined8 *)(lVar31 + (long)*piVar33 * 0x10 + 0x138);
                  goto LAB_0308ff54;
                }
                uVar26 = uVar26 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar26 != 0);
            }
            puVar27 = (undefined8 *)FUN_01a472ec();
LAB_0308ff54:
            uVar12 = (*(code *)*puVar27)(uVar8,uVar38,uVar40);
            if (lVar15 == 0) goto LAB_030905b4;
            if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_030907fc;
            lVar31 = *unaff_x21;
            lVar32 = lVar15 + uVar25 * 0xc;
            uVar8 = *(undefined4 *)(lVar32 + 0x20);
            uVar39 = (ulong)*(uint *)(lVar32 + 0x24);
            uVar41 = (ulong)*(uint *)(lVar32 + 0x28);
            uVar26 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar26 != 0) {
              piVar33 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)puVar6) {
                  puVar27 = (undefined8 *)(lVar31 + (long)*piVar33 * 0x10 + 0x138);
                  goto LAB_0308ffe8;
                }
                uVar26 = uVar26 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar26 != 0);
            }
            puVar27 = (undefined8 *)FUN_01a472ec();
LAB_0308ffe8:
            uVar36 = (*(code *)*puVar27)(uVar8,uVar39,uVar41);
            if (lVar16 == 0) goto LAB_030905b4;
            if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_030907fc;
            lVar31 = lVar16 + uVar25 * 8;
            uVar26 = (ulong)*(uint *)(lVar31 + 0x24);
            uVar37 = FUN_0304ece0(*(undefined4 *)(lVar31 + 0x20),uVar26,0);
            if (lVar24 == 0) goto LAB_030905b4;
            FUN_03090fac(uVar12,uVar38,uVar40,uVar36,uVar39,uVar41,uVar37,uVar26,lVar24,
                         uVar25 & 0xffffffff);
            if (lStack0000000000000070 != 0) {
              if (lVar29 == 0) goto LAB_030905b4;
              if (*(uint *)(lVar29 + 0x18) <= uVar25) goto LAB_030907fc;
              lVar31 = lVar29 + uVar25 * 0x20;
              in_stack_000000c8 = *(undefined8 *)(lVar31 + 0x28);
              in_stack_000000c0 = *(undefined8 *)(lVar31 + 0x20);
              in_stack_000000d8 = *(undefined8 *)(lVar31 + 0x38);
              in_stack_000000d0 = *(undefined8 *)(lVar31 + 0x30);
              FUN_030910e8(lVar24,&stack0x000000c0);
            }
            if (!bVar7) {
              if (lVar17 == 0) goto LAB_030905b4;
              if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_030907fc;
              lVar31 = lVar17 + uVar25 * 0x10;
              FUN_03091244(*(undefined4 *)(lVar31 + 0x20),*(undefined4 *)(lVar31 + 0x24),
                           *(undefined4 *)(lVar31 + 0x28),*(undefined4 *)(lVar31 + 0x2c),lVar24);
            }
          }
          uVar25 = uVar25 + 1;
        } while ((long)uVar25 < (long)*(int *)(lVar14 + 0x18));
      }
      lVar23 = *(long *)(in_stack_00000030 + 0x18);
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar19) {
LAB_030907fc:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar12 = *(undefined8 *)(lVar23 + uVar19 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_036cee6c(uVar12,0,0);
      if ((uVar25 & 1) == 0) {
        uStack000000000000003c = 0xffffffff;
      }
      else {
        if (in_stack_00000018 == 0) break;
        uStack000000000000003c =
             FUN_02217a2c(in_stack_00000018,uVar12,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                         );
      }
      lVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar23,*(undefined8 *)PTR_DAT_03cbe510);
      uVar28 = *(uint *)(lVar22 + 0x18);
      if (0 < (int)uVar28) {
        uVar30 = 0;
        do {
          puVar3 = PTR_DAT_03cbe508;
          if (((uVar28 <= uVar30) || (uVar28 <= uVar30 + 1)) || (uVar28 <= uVar30 + 2))
          goto LAB_030907fc;
          if (lVar23 == 0) goto LAB_030905b4;
          uVar8 = *(undefined4 *)(lVar22 + (long)(int)uVar30 * 4 + 0x20);
          uVar1 = *(undefined4 *)(lVar22 + (long)(int)(uVar30 + 1) * 4 + 0x20);
          uStack00000000000000a8 = *(undefined4 *)(lVar22 + (long)(int)(uVar30 + 2) * 4 + 0x20);
          FUN_01b5f01c(lVar23,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbe508);
          uStack00000000000000a8 = uVar1;
          FUN_01b5f01c(lVar23,&stack0x000000a8,*(undefined8 *)puVar3);
          uStack00000000000000a8 = uVar8;
          FUN_01b5f01c(lVar23,&stack0x000000a8,*(undefined8 *)puVar3);
          uVar28 = *(uint *)(lVar22 + 0x18);
          uVar30 = uVar30 + 3;
        } while ((int)uVar30 < (int)uVar28);
      }
      if (lVar24 == 0) break;
      lVar22 = FUN_030912cc(lVar24,in_stack_00000088,uStack000000000000003c,lVar23);
      lVar23 = *plVar35;
      if (lVar23 == 0) break;
      iVar9 = 0;
      while (iVar10 = FUN_036a2ca8(lVar23,0), iVar9 < iVar10) {
        uVar8 = *(undefined4 *)(lVar21 + 0x18);
        lVar23 = thunk_FUN_01a89e68(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate_var
                                   );
        FUN_03091748(lVar23,uVar8);
        if (*plVar35 == 0) goto LAB_030905b4;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                  (*plVar35,iVar9,0,lVar34,lVar20,0,0);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar21,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc8678);
        in_stack_000000e0 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_000000e8 = in_stack_000000b0;
        in_stack_000000f0 = in_stack_000000b8;
        iVar10 = 0;
        while (uVar25 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar4), (uVar25 & 1) != 0) {
          FUN_01b7a454(&stack0x000000e0,(long)&stack0x00000108 + 4,*(undefined8 *)puVar5);
          uVar28 = in_stack_00000108._4_4_;
          if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar24 = (long)(int)in_stack_00000108._4_4_;
          if (*(uint *)(lVar34 + 0x18) <= in_stack_00000108._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar31 = *unaff_x21;
          lVar32 = lVar34 + lVar24 * 0xc;
          uVar26 = (ulong)*(uint *)(lVar32 + 0x24);
          uVar38 = (ulong)*(uint *)(lVar32 + 0x28);
          uVar8 = *(undefined4 *)(lVar32 + 0x20);
          uVar25 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar25 != 0) {
            piVar33 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)puVar6) {
                puVar27 = (undefined8 *)(lVar31 + (long)*piVar33 * 0x10 + 0x138);
                goto LAB_03090384;
              }
              uVar25 = uVar25 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar25 != 0);
          }
          puVar27 = (undefined8 *)FUN_01a472ec();
LAB_03090384:
          uVar12 = (*(code *)*puVar27)(uVar8,uVar26,uVar38);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar20 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar31 = *unaff_x21;
          lVar24 = lVar20 + lVar24 * 0xc;
          uVar8 = *(undefined4 *)(lVar24 + 0x20);
          uVar40 = (ulong)*(uint *)(lVar24 + 0x24);
          uVar39 = (ulong)*(uint *)(lVar24 + 0x28);
          uVar25 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar25 != 0) {
            piVar33 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)puVar6) {
                puVar27 = (undefined8 *)(lVar31 + (long)*piVar33 * 0x10 + 0x138);
                goto LAB_03090414;
              }
              uVar25 = uVar25 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar25 != 0);
          }
          puVar27 = (undefined8 *)FUN_01a472ec();
LAB_03090414:
          uVar36 = (*(code *)*puVar27)(uVar8,uVar40,uVar39);
          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_030917d4(uVar12,uVar26,uVar38,uVar36,uVar40,uVar39,lVar23,iVar10);
          iVar10 = iVar10 + 1;
        }
        FUN_021b51c4(&stack0x000000e0,*(undefined8 *)PTR_DAT_03cc8648);
        if ((lVar22 == 0) || (lVar23 == 0)) goto LAB_030905b4;
        if (*(char *)(in_stack_00000080 + 0x16) == '\0') {
          uVar12 = *(undefined8 *)(lVar23 + 0x18);
        }
        else {
          uVar12 = 0;
        }
        lVar24 = *(long *)(lVar22 + 0x28);
        uVar12 = FUN_0308a31c(in_stack_00000088,*(undefined8 *)(lVar23 + 0x10),uVar12,
                              *(char *)(in_stack_00000080 + 0x15) != '\0');
        if (lVar24 == 0) goto LAB_030905b4;
        FUN_01b5f01c(lVar24,uVar12,*(undefined8 *)System_IComparable_var);
        iVar9 = iVar9 + 1;
        lVar23 = *plVar35;
        if (lVar23 == 0) goto LAB_030905b4;
      }
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) break;
      FUN_01b5f01c(*(long *)(lVar13 + 0x18),lVar22,
                   *(undefined8 *)Unity_Entities_ICleanupComponentData_var);
      uVar19 = uVar19 + 1;
      lVar22 = *plVar35;
      if (lVar22 == 0) break;
    }
  }
LAB_030905b4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


