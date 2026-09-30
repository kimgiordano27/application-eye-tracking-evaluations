/*
FUNCTION_NAME: FUN_05cef00c
ENTRY_POINT: 05cef00c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


ulong FUN_05cef00c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  int unaff_w23;
  undefined8 unaff_x25;
  int unaff_w27;
  uint uVar23;
  undefined8 uVar24;
  long *unaff_x28;
  undefined8 *unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  uVar13 = in_stack_00000008;
  *(int *)(param_2 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar11 = *(uint *)(param_2 + 0x18);
    if (uVar11 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar11 + 1;
      puVar17 = (undefined8 *)(param_1 + (long)(int)uVar11 * 8 + 0x20);
      *puVar17 = unaff_x25;
      thunk_FUN_02dc1ef0(puVar17);
    }
    else {
      FUN_036a5e08();
    }
LAB_05cef080:
    do {
      do {
        unaff_w23 = unaff_w23 + 1;
        if (unaff_w27 == unaff_w23) {
          if (*(long *)(unaff_x20 + 0x200) == 0) goto LAB_05cef6c0;
          if (*(int *)(*(long *)(unaff_x20 + 0x200) + 0x18) == 0) {
            *unaff_x19 = unaff_x22;
            thunk_FUN_02dc1ef0();
            uVar11 = 0;
            goto LAB_05cef108;
          }
          lVar18 = *(long *)(unaff_x20 + 0x148);
          if (lVar18 == 0) goto LAB_05cef6c0;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x150)) goto LAB_05cef6fc;
          plVar14 = *(long **)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x150) * 8 + 0x20);
          if (plVar14 == (long *)0x0) goto LAB_05cef6c0;
          iVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
          if (iVar10 < 2) {
LAB_05cef1b0:
            lVar18 = *(long *)(unaff_x20 + 0x148);
            if (lVar18 == 0) goto LAB_05cef6c0;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x150)) goto LAB_05cef6fc;
            lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x150) * 8 + 0x20);
            if (lVar18 == 0) goto LAB_05cef6c0;
            FUN_05ec0fe4(lVar18,*(undefined4 *)(unaff_x20 + 0x158),
                         *(undefined4 *)(unaff_x20 + 0x15c),0);
            lVar18 = *(long *)(unaff_x20 + 0x148);
            if (lVar18 == 0) goto LAB_05cef6c0;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x150)) goto LAB_05cef6fc;
            uVar21 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x150) * 8 + 0x20);
            if (*(int *)(*(long *)
                          Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__ +
                        0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_05f890e0(uVar21,0);
          }
          else {
            lVar18 = *(long *)(unaff_x20 + 0x148);
            if (lVar18 == 0) goto LAB_05cef6c0;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x150)) goto LAB_05cef6fc;
            plVar14 = *(long **)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x150) * 8 + 0x20);
            if (plVar14 == (long *)0x0) goto LAB_05cef6c0;
            iVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
            if (iVar10 < 2) goto LAB_05cef1b0;
          }
          lVar18 = *(long *)(unaff_x20 + 0x148);
          if (lVar18 == 0) goto LAB_05cef6c0;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x20 + 0x150)) goto LAB_05cef6fc;
          uVar21 = *(undefined8 *)(unaff_x20 + 0x168);
          uVar1 = *(undefined8 *)(unaff_x20 + 0x170);
          uVar22 = *(undefined8 *)(unaff_x20 + 0x200);
          uVar12 = *(undefined4 *)(unaff_x20 + 0x160);
          uVar2 = *(undefined4 *)(unaff_x20 + 0x164);
          uVar24 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x20 + 0x150) * 8 + 0x20);
          if (*(int *)(*(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_05f86d44(uVar22,uVar12,0,uVar1,uVar21,uVar2,uVar24,&stack0x00000018);
          puVar6 = Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__;
          puVar5 = Method_Unity_Properties_PropertyBag_Register<StyleRotate>__;
          puVar4 = PTR_DAT_0664a8b0;
          if (in_stack_00000018 == 0) goto LAB_05cef6c0;
          uVar23 = 0;
          goto LAB_05cef2c0;
        }
        uVar11 = FUN_04e7a3d8();
        if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_05cef6c0;
        uVar11 = uVar11 & 0xffff;
        uVar16 = FUN_048bddc4(*(long *)(unaff_x20 + 0x138),uVar11,*unaff_x29);
      } while ((uVar16 & 1) != 0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      iVar10 = FUN_05f861ec(uVar11,0);
      if (iVar10 == 0) {
        if ((uVar11 == 0x2011) || (uVar11 == 0xad)) {
          lVar18 = *unaff_x28;
          uVar21 = 0x2d;
LAB_05ceede8:
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          iVar10 = FUN_05f861ec(uVar21,0);
          if (iVar10 != 0) goto LAB_05ceee08;
        }
        else if (uVar11 == 0xa0) {
          lVar18 = *unaff_x28;
          uVar21 = 0x20;
          goto LAB_05ceede8;
        }
        lVar18 = *(long *)(unaff_x20 + 0x220);
        if (lVar18 == 0) goto LAB_05cef6c0;
        lVar15 = *(long *)(lVar18 + 0x10);
        lVar19 = *(long *)PTR_DAT_0664a8b0;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05cef6c0;
        uVar23 = *(uint *)(lVar18 + 0x18);
        if (uVar23 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar23 + 1;
          *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) = uVar11;
        }
        else {
          FUN_0370970c(lVar18,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        in_stack_00000008._4_4_ = 1;
        goto LAB_05cef080;
      }
LAB_05ceee08:
      lVar18 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_PlayFab_PlayFabProgressionInstanceAPI_DeleteLeaderboardDefinition__
                                 );
      FUN_05cdfcc4(lVar18,uVar11,iVar10);
      if (*(long *)(unaff_x20 + 0x128) == 0) goto LAB_05cef6c0;
      uVar16 = FUN_048bddc4(*(long *)(unaff_x20 + 0x128),iVar10,
                            *(undefined8 *)
                             Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__);
      if ((uVar16 & 1) != 0) {
        if ((*(long *)(unaff_x20 + 0x128) == 0) ||
           (uVar21 = FUN_048bdb30(*(long *)(unaff_x20 + 0x128),iVar10,
                                  *(undefined8 *)
                                   Method_Unity_Properties_PropertyBag_Register<BackgroundRepeat>__)
           , lVar18 == 0)) goto LAB_05cef6c0;
        *(undefined8 *)(lVar18 + 0x20) = uVar21;
        thunk_FUN_02dc1ef0();
        *(long *)(lVar18 + 0x18) = unaff_x20;
        thunk_FUN_02dc1ef0();
        lVar15 = *(long *)(unaff_x20 + 0x130);
        if (lVar15 == 0) goto LAB_05cef6c0;
        lVar19 = *(long *)(lVar15 + 0x10);
        lVar20 = *(long *)Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar19 == 0) goto LAB_05cef6c0;
        uVar23 = *(uint *)(lVar15 + 0x18);
        if (uVar23 < *(uint *)(lVar19 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar23 + 1;
          plVar14 = (long *)(lVar19 + (long)(int)uVar23 * 8 + 0x20);
          *plVar14 = lVar18;
          thunk_FUN_02dc1ef0(plVar14,lVar18);
        }
        else {
          FUN_036a5e08(lVar15,lVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_05cef6c0;
        System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                  (*(long *)(unaff_x20 + 0x138),uVar11,lVar18,
                   *(undefined8 *)Method_Unity_Properties_PropertyBag_Register<TextShadow>__);
        goto LAB_05cef080;
      }
      if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_05cef6c0;
      uVar16 = FUN_04cb651c(*(long *)(unaff_x20 + 0x208),iVar10,*unaff_x21);
      if ((uVar16 & 1) != 0) {
        lVar18 = *(long *)(unaff_x20 + 0x200);
        if (lVar18 == 0) goto LAB_05cef6c0;
        lVar15 = *(long *)(lVar18 + 0x10);
        lVar19 = *(long *)PTR_DAT_0664a8b0;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05cef6c0;
        uVar23 = *(uint *)(lVar18 + 0x18);
        if (uVar23 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar23 + 1;
          *(int *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) = iVar10;
        }
        else {
          FUN_0370970c(lVar18,iVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (*(long *)(unaff_x20 + 0x218) == 0) goto LAB_05cef6c0;
      uVar16 = FUN_04cb651c(*(long *)(unaff_x20 + 0x218),uVar11,*unaff_x21);
    } while ((uVar16 & 1) == 0);
    if (*(long *)(unaff_x20 + 0x210) != 0) {
      uVar13 = FUN_061fdd80(*(undefined8 *)(*(long *)(unaff_x20 + 0x210) + 0x10));
      return uVar13;
    }
  }
  goto LAB_05cef6c0;
LAB_05cef2c0:
  do {
    if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)uVar23) {
LAB_05cef438:
      lVar18 = *(long *)(unaff_x20 + 0x200);
      if (lVar18 != 0) {
        lVar15 = *(long *)(unaff_x20 + 0x210);
        *(undefined4 *)(lVar18 + 0x18) = 0;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        puVar9 = Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__;
        puVar8 = Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__;
        puVar7 = Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
        puVar6 = Method_Unity_Properties_PropertyBag_Register<Vector3>__;
        puVar5 = Method_Unity_Properties_PropertyBag_Register<TextShadow>__;
        if (lVar15 != 0) {
          iVar10 = 0;
          goto LAB_05cef480;
        }
      }
      break;
    }
    if (*(uint *)(in_stack_00000018 + 0x18) <= uVar23) {
LAB_05cef6fc:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    lVar18 = *(long *)(in_stack_00000018 + (long)(int)uVar23 * 8 + 0x20);
    if (lVar18 == 0) goto LAB_05cef438;
    uVar12 = FUN_05f84fd8(lVar18,0);
    FUN_05f8503c(lVar18,*(undefined4 *)(unaff_x20 + 0x150),0);
    lVar15 = *(long *)(unaff_x20 + 0x120);
    if (lVar15 == 0) break;
    lVar19 = *(long *)(lVar15 + 0x10);
    lVar20 = *(long *)puVar6;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar19 == 0) break;
    uVar3 = *(uint *)(lVar15 + 0x18);
    if (uVar3 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar3 + 1;
      plVar14 = (long *)(lVar19 + (long)(int)uVar3 * 8 + 0x20);
      *plVar14 = lVar18;
      thunk_FUN_02dc1ef0(plVar14,lVar18);
    }
    else {
      FUN_036a5e08(lVar15,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if (*(long *)(unaff_x20 + 0x128) == 0) break;
    System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
              (*(long *)(unaff_x20 + 0x128),uVar12,lVar18,*(undefined8 *)puVar5);
    lVar18 = *(long *)(unaff_x20 + 0x1f8);
    if (lVar18 == 0) break;
    lVar15 = *(long *)(lVar18 + 0x10);
    lVar19 = *(long *)puVar4;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    if (lVar15 == 0) break;
    uVar3 = *(uint *)(lVar18 + 0x18);
    if (uVar3 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar18 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar12;
    }
    else {
      FUN_0370970c(lVar18,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar18 = *(long *)(unaff_x20 + 0x1f0);
    if (lVar18 == 0) break;
    lVar15 = *(long *)(lVar18 + 0x10);
    lVar19 = *(long *)puVar4;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    if (lVar15 == 0) break;
    uVar3 = *(uint *)(lVar18 + 0x18);
    if (uVar3 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar18 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar12;
    }
    else {
      FUN_0370970c(lVar18,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar23 = uVar23 + 1;
  } while (in_stack_00000018 != 0);
  goto LAB_05cef6c0;
LAB_05cef480:
  if (iVar10 < *(int *)(lVar15 + 0x18)) {
    lVar18 = FUN_036a5b38(lVar15,iVar10,*(undefined8 *)puVar6);
    if ((lVar18 == 0) || (*(long *)(unaff_x20 + 0x128) == 0)) goto LAB_05cef6c0;
    uVar16 = FUN_048bf6ac(*(long *)(unaff_x20 + 0x128),*(undefined4 *)(lVar18 + 0x28),
                          &stack0x00000010,*(undefined8 *)puVar8);
    if ((uVar16 & 1) == 0) {
      lVar15 = *(long *)(unaff_x20 + 0x200);
      if (lVar15 == 0) goto LAB_05cef6c0;
      lVar19 = *(long *)(lVar15 + 0x10);
      uVar12 = *(undefined4 *)(lVar18 + 0x28);
      lVar18 = *(long *)puVar4;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05cef6c0;
      uVar23 = *(uint *)(lVar15 + 0x18);
      if (uVar23 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar23 + 1;
        *(undefined4 *)(lVar19 + (long)(int)uVar23 * 4 + 0x20) = uVar12;
      }
      else {
        FUN_0370970c(lVar15,uVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      *(undefined8 *)(lVar18 + 0x20) = in_stack_00000010;
      thunk_FUN_02dc1ef0();
      *(long *)(lVar18 + 0x18) = unaff_x20;
      thunk_FUN_02dc1ef0();
      lVar15 = *(long *)(unaff_x20 + 0x130);
      if (lVar15 == 0) goto LAB_05cef6c0;
      lVar19 = *(long *)(lVar15 + 0x10);
      lVar20 = *(long *)puVar7;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05cef6c0;
      uVar23 = *(uint *)(lVar15 + 0x18);
      if (uVar23 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar23 + 1;
        plVar14 = (long *)(lVar19 + (long)(int)uVar23 * 8 + 0x20);
        *plVar14 = lVar18;
        thunk_FUN_02dc1ef0(plVar14,lVar18);
      }
      else {
        FUN_036a5e08(lVar15,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_05cef6c0;
      System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                (*(long *)(unaff_x20 + 0x138),*(undefined4 *)(lVar18 + 0x14),lVar18,
                 *(undefined8 *)puVar5);
      if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_05cef6c0;
      FUN_036a7498(*(long *)(unaff_x20 + 0x210),iVar10,*(undefined8 *)puVar9);
      iVar10 = iVar10 + -1;
    }
    lVar15 = *(long *)(unaff_x20 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar15 == 0) goto LAB_05cef6c0;
    goto LAB_05cef480;
  }
  if (*(char *)(unaff_x20 + 0x154) != '\0' && (uVar11 & 1) == 0) {
    do {
      uVar16 = FUN_05cee5d4();
    } while ((uVar16 & 1) == 0);
    uVar11 = 1;
  }
  if ((uVar13 & 1) != 0) {
    FUN_05ceea78();
  }
  *unaff_x19 = **(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
  thunk_FUN_02dc1ef0();
  lVar18 = *(long *)(unaff_x20 + 0x210);
  if (lVar18 == 0) goto LAB_05cef6c0;
  iVar10 = 0;
  while (iVar10 < *(int *)(lVar18 + 0x18)) {
    lVar18 = FUN_036a5b38(lVar18,iVar10,*(undefined8 *)puVar6);
    if ((lVar18 == 0) || (lVar15 = *(long *)(unaff_x20 + 0x220), lVar15 == 0)) goto LAB_05cef6c0;
    lVar19 = *(long *)(lVar15 + 0x10);
    uVar12 = *(undefined4 *)(lVar18 + 0x14);
    lVar18 = *(long *)puVar4;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_05cef6c0;
    uVar23 = *(uint *)(lVar15 + 0x18);
    if (uVar23 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar23 + 1;
      *(undefined4 *)(lVar19 + (long)(int)uVar23 * 4 + 0x20) = uVar12;
    }
    else {
      FUN_0370970c(lVar15,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar18 = *(long *)(unaff_x20 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar18 == 0) goto LAB_05cef6c0;
  }
  if (*(long *)(unaff_x20 + 0x220) != 0) {
    if (0 < *(int *)(*(long *)(unaff_x20 + 0x220) + 0x18)) {
      uVar21 = FUN_05cde9c8();
      *unaff_x19 = uVar21;
      thunk_FUN_02dc1ef0();
    }
    uVar11 = uVar11 & (in_stack_00000008._4_4_ ^ 1);
LAB_05cef108:
    return (ulong)(uVar11 & 1);
  }
LAB_05cef6c0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


