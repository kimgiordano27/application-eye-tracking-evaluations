/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit_$$.ctor
ENTRY_POINT: 07766d14
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


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit____ctor
               (long param_1,undefined1 param_2 [16],undefined8 param_3)

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
  long lVar10;
  undefined8 uVar11;
  undefined **in_x9;
  long lVar12;
  int in_w10;
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
    lVar12 = *(long *)in_x9[0x17e];
    *(int *)(in_x12 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar16 = *(uint *)(in_x12 + 0x18);
    if (uVar16 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(in_x12 + 0x18) = uVar16 + 1;
      plVar4 = (long *)(param_1 + (long)(int)uVar16 * 8 + 0x20);
      *plVar4 = unaff_x21;
      thunk_FUN_044bb4b4(plVar4,unaff_x21);
      uVar5 = param_3;
    }
    else {
      FUN_05bade44(in_x12,unaff_x21,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      uVar5 = param_3;
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
        lVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
        FUN_05bad610(lVar12,*(undefined8 *)PTR_DAT_09f32ce0);
        lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
        FUN_05c211ac(lVar6,*(undefined8 *)puVar2);
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
    param_3 = uVar5;
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
    in_w10 = *(int *)(in_stack_00000070 + 0x1c);
    param_1 = *(long *)(in_stack_00000070 + 0x10);
    in_x12 = in_stack_00000070;
    unaff_x26 = in_stack_00000080;
  }
LAB_07767440:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07766e24:
  fVar18 = DAT_01c7661c;
  if (*(int *)(in_stack_00000070 + 0x18) < 1) {
    if (lVar12 == 0) goto LAB_07767440;
    if (*(int *)(lVar12 + 0x18) < 1) {
      if (unaff_x27 != 0) {
        iVar13 = *(int *)(unaff_x27 + 0x18);
        if (iVar13 < 1) goto LAB_0776738c;
        iVar15 = 0;
        goto LAB_07767220;
      }
      goto LAB_07767440;
    }
  }
  else if (lVar12 == 0) goto LAB_07767440;
  lVar7 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                    (in_stack_00000090,in_stack_00000070,uVar16,in_stack_00000088._4_4_,
                     *(int *)(lVar12 + 0x18) == 0);
  if (lVar7 == 0) {
    if (3 < *(int *)(in_stack_00000090 + 0x10)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
    }
    if (unaff_x26 == 0) goto LAB_07767440;
    uVar5 = FUN_05a2ad3c(unaff_x26,*(undefined8 *)PTR_DAT_09f32cc8);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
    FUN_07a80df4(lVar7,0);
    *(undefined8 *)(lVar7 + 0x28) = uVar5;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x28),uVar5);
    *(int *)(lVar7 + 0x10) = iVar15;
    *(int *)(lVar7 + 0x14) = iVar13;
    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar12 + 0x18));
    lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar12 + 0x18));
    if (0 < *(int *)(lVar12 + 0x18)) {
      uVar14 = 0;
      pfVar17 = (float *)(lVar8 + 0x2c);
      do {
        lVar10 = FUN_05badb74(lVar12,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if (lVar10 == 0) goto LAB_07767440;
        iVar13 = *(int *)(lVar10 + 0x1c);
        lVar10 = FUN_05badb74(lVar12,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if (lVar10 == 0) goto LAB_07767440;
        iVar22 = *(int *)(lVar10 + 0x20);
        iVar19 = iVar15;
        if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
          lVar10 = FUN_05badb74(lVar12,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
          if (lVar10 == 0) goto LAB_07767440;
          iVar19 = *(int *)(lVar10 + 0x14);
        }
        lVar10 = FUN_05badb74(lVar12,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if ((lVar10 == 0) || (lVar8 == 0)) goto LAB_07767440;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar21 = *(int *)(lVar10 + 0x18);
        pfVar17[-3] = (float)iVar13;
        pfVar17[-2] = (float)iVar22;
        pfVar17[-1] = (float)iVar19;
        *pfVar17 = (float)iVar21;
        lVar10 = FUN_05badb74(lVar12,uVar14 & 0xffffffff,*(undefined8 *)puVar1);
        if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_07767440;
        if (*(uint *)(lVar9 + 0x18) <= uVar14)
        goto 
        Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
        ;
        pfVar17 = pfVar17 + 4;
        *(undefined4 *)(lVar9 + 0x20 + uVar14 * 4) = *(undefined4 *)(lVar10 + 0x10);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)*(int *)(lVar12 + 0x18));
    }
    *(long *)(lVar7 + 0x20) = lVar8;
    thunk_FUN_044bb4b4((long *)(lVar7 + 0x20),lVar8);
    *(long *)(lVar7 + 0x30) = lVar9;
    thunk_FUN_044bb4b4((long *)(lVar7 + 0x30),lVar9);
    iVar13 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar13) {
      FUN_07a61000(*(undefined8 *)(lVar12 + 0x10),0,iVar13,0);
    }
    if (lVar6 == 0) goto LAB_07767440;
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (unaff_x27 == 0) goto LAB_07767440;
    lVar8 = *(long *)(unaff_x27 + 0x10);
    lVar9 = *(long *)PTR_DAT_09f32cb8;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(unaff_x27 + 0x18);
    if (uVar16 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar16 + 1;
      plVar4 = (long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
      *plVar4 = lVar7;
      thunk_FUN_044bb4b4(plVar4,lVar7);
    }
    else {
      FUN_05bade44(unaff_x27,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    iVar13 = 0;
    unaff_x26 = in_stack_00000080;
    uVar16 = in_stack_00000088._4_4_;
  }
  else {
    *(undefined4 *)(lVar7 + 0x1c) = 0;
    *(int *)(lVar7 + 0x20) = iVar13;
    lVar8 = *(long *)(lVar12 + 0x10);
    lVar9 = *(long *)PTR_DAT_09f32bf0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(lVar12 + 0x18);
    if (uVar16 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar16 + 1;
      plVar4 = (long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
      *plVar4 = lVar7;
      thunk_FUN_044bb4b4(plVar4,lVar7);
    }
    else {
      FUN_05bade44(lVar12,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar6 == 0) goto LAB_07767440;
    iVar19 = *(int *)(lVar7 + 0x14);
    iVar22 = *(int *)(lVar7 + 0x18);
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)PTR_DAT_09f32e10;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(lVar6 + 0x18);
    if (uVar16 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar16 * 0x10;
      *(uint *)(lVar6 + 0x18) = uVar16 + 1;
      *(undefined4 *)(lVar8 + 0x20) = 0;
      *(float *)(lVar8 + 0x24) = (float)iVar13;
      *(float *)(lVar8 + 0x28) = (float)iVar19;
      *(float *)(lVar8 + 0x2c) = (float)iVar22;
    }
    else {
      FUN_05c21a38(0,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    iVar13 = *(int *)(lVar7 + 0x18) + iVar13;
    if (iVar15 <= *(int *)(lVar7 + 0x14)) {
      iVar15 = *(int *)(lVar7 + 0x14);
    }
    uVar16 = in_stack_00000088._4_4_ - iVar13;
  }
  goto LAB_07766e24;
  while( true ) {
    uVar16 = *(uint *)(lVar6 + 0x14);
    lVar6 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07767440;
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
    lVar6 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07767440;
    *(uint *)(lVar6 + 0x14) = uVar16;
    lVar6 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07767440;
    iVar13 = *(int *)(lVar6 + 0x10);
    lVar6 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (in_stack_00000080 == 0)) goto LAB_07767440;
    iVar19 = *(int *)(lVar6 + 0x14);
    uVar5 = FUN_05a28f70(in_stack_00000080,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar13,(float)iVar19,in_stack_00000090,lVar12,uStack000000000000005c,
                 in_stack_00000088._4_4_,uVar5,iStack0000000000000060,iStack0000000000000064,
                 uStack0000000000000058);
    iVar15 = iVar15 + 1;
    iVar13 = *(int *)(unaff_x27 + 0x18);
    unaff_x26 = in_stack_00000080;
    if (iVar13 <= iVar15) break;
LAB_07767220:
    puVar1 = PTR_DAT_09f32e38;
    lVar6 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar1 = PTR_DAT_09f32e38;
  if (0 < iVar13) {
    iVar13 = 0;
    do {
      uVar5 = FUN_05badb74(unaff_x27,iVar13,*(undefined8 *)puVar1);
      if (unaff_x26 == 0) goto LAB_07767440;
      uVar11 = FUN_05a28f70(unaff_x26,iVar13,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar11,uVar5,uVar11);
      lVar12 = FUN_05badb74(unaff_x27,iVar13,*(undefined8 *)puVar1);
      if (lVar12 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(unaff_x27 + 0x18));
  }
  FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


