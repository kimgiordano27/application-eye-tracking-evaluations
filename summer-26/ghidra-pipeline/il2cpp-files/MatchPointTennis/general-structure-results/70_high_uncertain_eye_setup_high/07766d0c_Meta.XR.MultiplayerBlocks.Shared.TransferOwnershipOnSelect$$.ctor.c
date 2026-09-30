/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$.ctor
ENTRY_POINT: 07766d0c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect___ctor
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **in_x9;
  long lVar12;
  long in_x12;
  float unaff_w19;
  int unaff_w20;
  long unaff_x21;
  int iVar13;
  ulong uVar14;
  int unaff_w24;
  int iVar15;
  uint uVar16;
  long unaff_x26;
  float *pfVar17;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  long in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  
  while( true ) {
    lVar11 = *(long *)(in_x12 + 0x10);
    lVar12 = *(long *)in_x9[0x17e];
    *(int *)(in_x12 + 0x1c) = *(int *)(in_x12 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar16 = *(uint *)(in_x12 + 0x18);
    if (uVar16 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(in_x12 + 0x18) = uVar16 + 1;
      plVar4 = (long *)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
      *plVar4 = unaff_x21;
      thunk_FUN_044bb4b4(plVar4,unaff_x21);
      uVar5 = param_2;
    }
    else {
      FUN_05bade44(in_x12,unaff_x21,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      uVar5 = param_2;
    }
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x28 + 0x18) <= unaff_w20) {
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c98);
      FUN_07a80df4(uVar5,0);
      puVar3 = PTR_DAT_09f32e40;
      puVar2 = PTR_DAT_09f32e28;
      puVar1 = PTR_DAT_09f32ba8;
      if (in_stack_00000070 != 0) {
        FUN_05baf864(in_stack_00000070,uVar5,*(undefined8 *)PTR_DAT_09f32d88);
        lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
        FUN_05bad610(lVar11,*(undefined8 *)PTR_DAT_09f32ce0);
        lVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
        FUN_05c211ac(lVar12,*(undefined8 *)puVar2);
        iVar15 = 0;
        iVar13 = 0;
        uVar16 = in_stack_00000088._4_4_;
        goto LAB_07766e24;
      }
      break;
    }
    fVar18 = (float)FUN_05d0cfbc();
    FUN_05d0cfbc();
    if (unaff_x26 == 0) break;
    param_2 = uVar5;
    uVar14 = FUN_05a28f70(unaff_x26,unaff_w20,*unaff_x29);
    unaff_x21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    iVar13 = unaff_w24;
    if (fVar18 != unaff_w19) {
      iVar13 = (int)fVar18;
    }
    iVar15 = unaff_w24;
    if ((float)uVar5 != unaff_w19) {
      iVar15 = (int)(float)uVar5;
    }
    FUN_07a80df4(unaff_x21,0);
    iVar13 = ((uint)(uVar14 >> 0x1f) & 0xfffffffe) + iVar13;
    iVar15 = iVar15 + (int)uVar14 * 2;
    if (iVar13 <= iStack0000000000000060) {
      iVar13 = iStack0000000000000060;
    }
    *(int *)(unaff_x21 + 0x10) = unaff_w20;
    *(int *)(unaff_x21 + 0x14) = iVar13;
    if (iVar15 <= iStack0000000000000064) {
      iVar15 = iStack0000000000000064;
    }
    *(int *)(unaff_x21 + 0x18) = iVar15;
    uVar14 = FUN_05a28f70(in_stack_00000080,unaff_w20,*unaff_x29);
    *(uint *)(unaff_x21 + 0x14) = iVar13 - ((uint)(uVar14 >> 0x1f) & 0xfffffffe);
    if (in_stack_00000070 == 0) break;
    in_x9 = &PTR_DAT_09f32000;
    in_x12 = in_stack_00000070;
    unaff_x26 = in_stack_00000080;
  }
LAB_07767440:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07766e24:
  fVar18 = DAT_01c7661c;
  if (*(int *)(in_stack_00000070 + 0x18) < 1) {
    if (lVar11 == 0) goto LAB_07767440;
    if (*(int *)(lVar11 + 0x18) < 1) {
      if (unaff_x27 != 0) {
        iVar13 = *(int *)(unaff_x27 + 0x18);
        if (iVar13 < 1) goto LAB_0776738c;
        iVar15 = 0;
        goto LAB_07767220;
      }
      goto LAB_07767440;
    }
  }
  else if (lVar11 == 0) goto LAB_07767440;
  lVar6 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                    (in_stack_00000090,in_stack_00000070,uVar16,in_stack_00000088._4_4_,
                     *(int *)(lVar11 + 0x18) == 0);
  if (lVar6 == 0) {
    if (3 < *(int *)(in_stack_00000090 + 0x10)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
    }
    if (unaff_x26 == 0) goto LAB_07767440;
    uVar5 = FUN_05a2ad3c(unaff_x26,*(undefined8 *)PTR_DAT_09f32cc8);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
    FUN_07a80df4(lVar6,0);
    *(undefined8 *)(lVar6 + 0x28) = uVar5;
    thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x28),uVar5);
    *(int *)(lVar6 + 0x10) = iVar15;
    *(int *)(lVar6 + 0x14) = iVar13;
    lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar11 + 0x18));
    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar11 + 0x18));
    if (0 < *(int *)(lVar11 + 0x18)) {
      uVar14 = 0;
      pfVar17 = (float *)(lVar7 + 0x2c);
      do {
        lVar9 = FUN_05badb74(lVar11,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if (lVar9 == 0) goto LAB_07767440;
        iVar13 = *(int *)(lVar9 + 0x1c);
        lVar9 = FUN_05badb74(lVar11,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if (lVar9 == 0) goto LAB_07767440;
        iVar22 = *(int *)(lVar9 + 0x20);
        iVar19 = iVar15;
        if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
          lVar9 = FUN_05badb74(lVar11,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
          if (lVar9 == 0) goto LAB_07767440;
          iVar19 = *(int *)(lVar9 + 0x14);
        }
        lVar9 = FUN_05badb74(lVar11,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if ((lVar9 == 0) || (lVar7 == 0)) goto LAB_07767440;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar21 = *(int *)(lVar9 + 0x18);
        pfVar17[-3] = (float)iVar13;
        pfVar17[-2] = (float)iVar22;
        pfVar17[-1] = (float)iVar19;
        *pfVar17 = (float)iVar21;
        lVar9 = FUN_05badb74(lVar11,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_07767440;
        if (*(uint *)(lVar8 + 0x18) <= uVar14)
        goto 
        Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
        ;
        pfVar17 = pfVar17 + 4;
        *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4) = *(undefined4 *)(lVar9 + 0x10);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)*(int *)(lVar11 + 0x18));
    }
    *(long *)(lVar6 + 0x20) = lVar7;
    thunk_FUN_044bb4b4((long *)(lVar6 + 0x20),lVar7);
    *(long *)(lVar6 + 0x30) = lVar8;
    thunk_FUN_044bb4b4((long *)(lVar6 + 0x30),lVar8);
    iVar13 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar13) {
      FUN_07a61000(*(undefined8 *)(lVar11 + 0x10),0,iVar13,0);
    }
    if (lVar12 == 0) goto LAB_07767440;
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (unaff_x27 == 0) goto LAB_07767440;
    lVar7 = *(long *)(unaff_x27 + 0x10);
    lVar8 = *(long *)PTR_DAT_09f32cb8;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(unaff_x27 + 0x18);
    if (uVar16 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar16 + 1;
      plVar4 = (long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
      *plVar4 = lVar6;
      thunk_FUN_044bb4b4(plVar4,lVar6);
    }
    else {
      FUN_05bade44(unaff_x27,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    iVar13 = 0;
    unaff_x26 = in_stack_00000080;
    uVar16 = in_stack_00000088._4_4_;
  }
  else {
    *(undefined4 *)(lVar6 + 0x1c) = 0;
    *(int *)(lVar6 + 0x20) = iVar13;
    lVar7 = *(long *)(lVar11 + 0x10);
    lVar8 = *(long *)PTR_DAT_09f32bf0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(lVar11 + 0x18);
    if (uVar16 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar16 + 1;
      plVar4 = (long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
      *plVar4 = lVar6;
      thunk_FUN_044bb4b4(plVar4,lVar6);
    }
    else {
      FUN_05bade44(lVar11,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar12 == 0) goto LAB_07767440;
    iVar19 = *(int *)(lVar6 + 0x14);
    iVar22 = *(int *)(lVar6 + 0x18);
    lVar7 = *(long *)(lVar12 + 0x10);
    lVar8 = *(long *)PTR_DAT_09f32e10;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(lVar12 + 0x18);
    if (uVar16 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar16 * 0x10;
      *(uint *)(lVar12 + 0x18) = uVar16 + 1;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      *(float *)(lVar7 + 0x24) = (float)iVar13;
      *(float *)(lVar7 + 0x28) = (float)iVar19;
      *(float *)(lVar7 + 0x2c) = (float)iVar22;
    }
    else {
      FUN_05c21a38(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    iVar13 = *(int *)(lVar6 + 0x18) + iVar13;
    if (iVar15 <= *(int *)(lVar6 + 0x14)) {
      iVar15 = *(int *)(lVar6 + 0x14);
    }
    uVar16 = in_stack_00000088._4_4_ - iVar13;
  }
  goto LAB_07766e24;
  while( true ) {
    uVar16 = *(uint *)(lVar12 + 0x14);
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if (lVar12 == 0) goto LAB_07767440;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar20 = logf((float)(int)uVar16);
      fVar20 = exp2f((float)(int)(fVar20 / fVar18));
      uVar16 = 0x80000000;
      if (fVar20 != INFINITY) {
        uVar16 = (int)fVar20;
      }
      if (uVar16 < 3) {
        uVar16 = 2;
      }
    }
    puVar1 = PTR_DAT_09f32e38;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar16) {
      uVar16 = in_stack_00000088._4_4_;
    }
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar12 == 0) goto LAB_07767440;
    *(uint *)(lVar12 + 0x14) = uVar16;
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if (lVar12 == 0) goto LAB_07767440;
    iVar13 = *(int *)(lVar12 + 0x10);
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if ((lVar12 == 0) || (in_stack_00000080 == 0)) goto LAB_07767440;
    iVar19 = *(int *)(lVar12 + 0x14);
    uVar5 = FUN_05a28f70(in_stack_00000080,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar13,(float)iVar19,in_stack_00000090,lVar11,uStack000000000000005c,
                 in_stack_00000088._4_4_,uVar5,iStack0000000000000060,iStack0000000000000064,
                 uStack0000000000000058);
    iVar15 = iVar15 + 1;
    iVar13 = *(int *)(unaff_x27 + 0x18);
    unaff_x26 = in_stack_00000080;
    if (iVar13 <= iVar15) break;
LAB_07767220:
    puVar1 = PTR_DAT_09f32e38;
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar12 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar1 = PTR_DAT_09f32e38;
  if (0 < iVar13) {
    iVar13 = 0;
    do {
      uVar5 = FUN_05badb74(unaff_x27,iVar13,*(undefined8 *)puVar1);
      if (unaff_x26 == 0) goto LAB_07767440;
      uVar10 = FUN_05a28f70(unaff_x26,iVar13,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar10,uVar5,uVar10);
      lVar11 = FUN_05badb74(unaff_x27,iVar13,*(undefined8 *)puVar1);
      if (lVar11 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(unaff_x27 + 0x18));
  }
  FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


