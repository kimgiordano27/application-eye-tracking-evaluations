/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$<GetEntitlementInformation>g__InitializeComplete|0
ENTRY_POINT: 07766db8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__InitializeComplete_0
               (void)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 *puVar12;
  long unaff_x21;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  long unaff_x23;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  long unaff_x26;
  float *pfVar19;
  long unaff_x27;
  int iVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  long in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  
  puVar12 = *(undefined8 **)(unaff_x19 + 0xe40);
  puVar13 = *(undefined8 **)(unaff_x21 + 0xe28);
  puVar16 = *(undefined8 **)(unaff_x23 + 0xba8);
  FUN_05baf864();
  lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar3,*(undefined8 *)PTR_DAT_09f32ce0);
  lVar4 = thunk_FUN_0448520c(*puVar12);
  FUN_05c211ac(lVar4,*puVar13);
  iVar17 = 0;
  iVar14 = 0;
  uVar18 = in_stack_00000088._4_4_;
LAB_07766e24:
  fVar1 = DAT_01c7661c;
  if (*(int *)(in_stack_00000070 + 0x18) < 1) {
    if (lVar3 == 0) goto LAB_07767440;
    if (*(int *)(lVar3 + 0x18) < 1) {
      if (unaff_x27 != 0) {
        iVar14 = *(int *)(unaff_x27 + 0x18);
        if (iVar14 < 1) goto LAB_0776738c;
        iVar17 = 0;
        goto LAB_07767220;
      }
      goto LAB_07767440;
    }
  }
  else if (lVar3 == 0) goto LAB_07767440;
  lVar5 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                    (in_stack_00000090,in_stack_00000070,uVar18,in_stack_00000088._4_4_,
                     *(int *)(lVar3 + 0x18) == 0);
  if (lVar5 == 0) {
    if (3 < *(int *)(in_stack_00000090 + 0x10)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
    }
    if (unaff_x26 == 0) goto LAB_07767440;
    uVar6 = FUN_05a2ad3c(unaff_x26,*(undefined8 *)PTR_DAT_09f32cc8);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
    FUN_07a80df4(lVar5,0);
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x28),uVar6);
    *(int *)(lVar5 + 0x10) = iVar17;
    *(int *)(lVar5 + 0x14) = iVar14;
    lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar3 + 0x18));
    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar3 + 0x18));
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar15 = 0;
      pfVar19 = (float *)(lVar7 + 0x2c);
      do {
        lVar9 = FUN_05badb74(lVar3,uVar15 & 0xffffffff,*puVar16);
        if (lVar9 == 0) goto LAB_07767440;
        iVar14 = *(int *)(lVar9 + 0x1c);
        lVar9 = FUN_05badb74(lVar3,uVar15 & 0xffffffff,*puVar16);
        if (lVar9 == 0) goto LAB_07767440;
        iVar23 = *(int *)(lVar9 + 0x20);
        iVar20 = iVar17;
        if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
          lVar9 = FUN_05badb74(lVar3,uVar15 & 0xffffffff,*puVar16);
          if (lVar9 == 0) goto LAB_07767440;
          iVar20 = *(int *)(lVar9 + 0x14);
        }
        lVar9 = FUN_05badb74(lVar3,uVar15 & 0xffffffff,*puVar16);
        if ((lVar9 == 0) || (lVar7 == 0)) goto LAB_07767440;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar22 = *(int *)(lVar9 + 0x18);
        pfVar19[-3] = (float)iVar14;
        pfVar19[-2] = (float)iVar23;
        pfVar19[-1] = (float)iVar20;
        *pfVar19 = (float)iVar22;
        lVar9 = FUN_05badb74(lVar3,uVar15 & 0xffffffff,*puVar16);
        if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_07767440;
        if (*(uint *)(lVar8 + 0x18) <= uVar15)
        goto 
        Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
        ;
        pfVar19 = pfVar19 + 4;
        *(undefined4 *)(lVar8 + 0x20 + uVar15 * 4) = *(undefined4 *)(lVar9 + 0x10);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)*(int *)(lVar3 + 0x18));
    }
    *(long *)(lVar5 + 0x20) = lVar7;
    thunk_FUN_044bb4b4((long *)(lVar5 + 0x20),lVar7);
    *(long *)(lVar5 + 0x30) = lVar8;
    thunk_FUN_044bb4b4((long *)(lVar5 + 0x30),lVar8);
    iVar14 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar14) {
      FUN_07a61000(*(undefined8 *)(lVar3 + 0x10),0,iVar14,0);
    }
    if (lVar4 == 0) goto LAB_07767440;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (unaff_x27 == 0) goto LAB_07767440;
    lVar7 = *(long *)(unaff_x27 + 0x10);
    lVar8 = *(long *)PTR_DAT_09f32cb8;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07767440;
    uVar18 = *(uint *)(unaff_x27 + 0x18);
    if (uVar18 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar18 + 1;
      plVar10 = (long *)(lVar7 + (long)(int)uVar18 * 8 + 0x20);
      *plVar10 = lVar5;
      thunk_FUN_044bb4b4(plVar10,lVar5);
    }
    else {
      FUN_05bade44(unaff_x27,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    iVar14 = 0;
    unaff_x26 = in_stack_00000080;
    uVar18 = in_stack_00000088._4_4_;
  }
  else {
    *(undefined4 *)(lVar5 + 0x1c) = 0;
    *(int *)(lVar5 + 0x20) = iVar14;
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_09f32bf0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07767440;
    uVar18 = *(uint *)(lVar3 + 0x18);
    if (uVar18 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar18 + 1;
      plVar10 = (long *)(lVar7 + (long)(int)uVar18 * 8 + 0x20);
      *plVar10 = lVar5;
      thunk_FUN_044bb4b4(plVar10,lVar5);
    }
    else {
      FUN_05bade44(lVar3,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar4 == 0) goto LAB_07767440;
    iVar20 = *(int *)(lVar5 + 0x14);
    iVar23 = *(int *)(lVar5 + 0x18);
    lVar7 = *(long *)(lVar4 + 0x10);
    lVar8 = *(long *)PTR_DAT_09f32e10;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07767440;
    uVar18 = *(uint *)(lVar4 + 0x18);
    if (uVar18 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar18 * 0x10;
      *(uint *)(lVar4 + 0x18) = uVar18 + 1;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      *(float *)(lVar7 + 0x24) = (float)iVar14;
      *(float *)(lVar7 + 0x28) = (float)iVar20;
      *(float *)(lVar7 + 0x2c) = (float)iVar23;
    }
    else {
      FUN_05c21a38(0,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    iVar14 = *(int *)(lVar5 + 0x18) + iVar14;
    if (iVar17 <= *(int *)(lVar5 + 0x14)) {
      iVar17 = *(int *)(lVar5 + 0x14);
    }
    uVar18 = in_stack_00000088._4_4_ - iVar14;
  }
  goto LAB_07766e24;
  while( true ) {
    uVar18 = *(uint *)(lVar4 + 0x14);
    lVar4 = FUN_05badb74(unaff_x27,iVar17,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_07767440;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar21 = logf((float)(int)uVar18);
      fVar21 = exp2f((float)(int)(fVar21 / fVar1));
      uVar18 = 0x80000000;
      if (fVar21 != INFINITY) {
        uVar18 = (int)fVar21;
      }
      if (uVar18 < 3) {
        uVar18 = 2;
      }
    }
    puVar2 = PTR_DAT_09f32e38;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar18) {
      uVar18 = in_stack_00000088._4_4_;
    }
    lVar4 = FUN_05badb74(unaff_x27,iVar17,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar4 == 0) goto LAB_07767440;
    *(uint *)(lVar4 + 0x14) = uVar18;
    lVar4 = FUN_05badb74(unaff_x27,iVar17,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_07767440;
    iVar14 = *(int *)(lVar4 + 0x10);
    lVar4 = FUN_05badb74(unaff_x27,iVar17,*(undefined8 *)puVar2);
    if ((lVar4 == 0) || (in_stack_00000080 == 0)) goto LAB_07767440;
    iVar20 = *(int *)(lVar4 + 0x14);
    uVar6 = FUN_05a28f70(in_stack_00000080,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar14,(float)iVar20,in_stack_00000090,lVar3,uStack000000000000005c,
                 in_stack_00000088._4_4_,uVar6,uStack0000000000000060,uStack0000000000000064,
                 uStack0000000000000058);
    iVar17 = iVar17 + 1;
    iVar14 = *(int *)(unaff_x27 + 0x18);
    unaff_x26 = in_stack_00000080;
    if (iVar14 <= iVar17) break;
LAB_07767220:
    puVar2 = PTR_DAT_09f32e38;
    lVar4 = FUN_05badb74(unaff_x27,iVar17,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar4 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar2 = PTR_DAT_09f32e38;
  if (0 < iVar14) {
    iVar14 = 0;
    do {
      uVar6 = FUN_05badb74(unaff_x27,iVar14,*(undefined8 *)puVar2);
      if (unaff_x26 == 0) {
LAB_07767440:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar11 = FUN_05a28f70(unaff_x26,iVar14,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar11,uVar6,uVar11);
      lVar3 = FUN_05badb74(unaff_x27,iVar14,*(undefined8 *)puVar2);
      if (lVar3 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(unaff_x27 + 0x18));
  }
  FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


