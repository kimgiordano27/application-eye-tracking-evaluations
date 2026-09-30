/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$SetStateMachine
ENTRY_POINT: 07766208
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__SetStateMachine
               (long param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int in_w10;
  undefined8 *puVar13;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar14;
  uint uVar15;
  undefined8 *unaff_x24;
  float *pfVar16;
  float unaff_w26;
  int iVar17;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000090;
  
  while (*(int *)(unaff_x27 + 0x1c) = in_w10 + 1, param_1 != 0) {
    uVar15 = *(uint *)(unaff_x27 + 0x18);
    if (uVar15 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar15 + 1;
      plVar3 = (long *)(param_1 + (long)(int)uVar15 * 8 + 0x20);
      *plVar3 = unaff_x21;
      thunk_FUN_044bb4b4(plVar3,unaff_x21);
      uVar4 = param_3;
    }
    else {
      FUN_05bade44();
      uVar4 = param_3;
    }
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x28 + 0x18) <= unaff_w20) {
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32ca8);
      FUN_07a80df4(uVar4,0);
      puVar2 = PTR_DAT_09f32e40;
      puVar1 = PTR_DAT_09f32e28;
      if (unaff_x27 != 0) {
        FUN_05baf864();
        lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
        FUN_05bad610(lVar5,*(undefined8 *)PTR_DAT_09f32ce0);
        lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
        FUN_05c211ac(lVar6,*(undefined8 *)puVar1);
        iVar21 = 0;
        goto LAB_07766304;
      }
      break;
    }
    fVar18 = (float)FUN_05d0cfbc();
    FUN_05d0cfbc();
    if (unaff_x23 == 0) break;
    param_3 = uVar4;
    uVar14 = FUN_05a28f70(unaff_x23,unaff_w20,*unaff_x24);
    unaff_x21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    iVar21 = unaff_w29;
    if (fVar18 != unaff_w26) {
      iVar21 = (int)fVar18;
    }
    iVar17 = unaff_w29;
    if ((float)uVar4 != unaff_w26) {
      iVar17 = (int)(float)uVar4;
    }
    FUN_07a80df4(unaff_x21,0);
    iVar21 = ((uint)(uVar14 >> 0x1f) & 0xfffffffe) + iVar21;
    if (iVar21 <= iStack0000000000000060) {
      iVar21 = iStack0000000000000060;
    }
    iVar17 = iVar17 + (int)uVar14 * 2;
    *(int *)(unaff_x21 + 0x10) = unaff_w20;
    *(int *)(unaff_x21 + 0x14) = iVar21;
    if (iVar17 <= iStack0000000000000064) {
      iVar17 = iStack0000000000000064;
    }
    *(int *)(unaff_x21 + 0x18) = iVar17;
    iVar21 = FUN_05a28f70(in_stack_00000068,unaff_w20,*unaff_x24);
    *(int *)(unaff_x21 + 0x18) = iVar17 + iVar21 * -2;
    if (unaff_x27 == 0) break;
    in_w10 = *(int *)(unaff_x27 + 0x1c);
    unaff_x22 = (long *)PTR_DAT_09f32bf0;
    unaff_x23 = in_stack_00000068;
    param_1 = *(long *)(unaff_x27 + 0x10);
  }
LAB_07766980:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07766304:
  iVar17 = 0;
  iVar20 = 0;
  uVar15 = in_stack_00000078._4_4_;
  while( true ) {
    fVar18 = DAT_01c7661c;
    if (*(int *)(unaff_x27 + 0x18) < 1) {
      if (lVar5 == 0) goto LAB_07766980;
      if (*(int *)(lVar5 + 0x18) < 1) {
        if (in_stack_00000070 == 0) goto LAB_07766980;
        iVar21 = *(int *)(in_stack_00000070 + 0x18);
        if (iVar21 < 1) goto LAB_077668c0;
        iVar17 = 0;
        goto LAB_07766754;
      }
    }
    else if (lVar5 == 0) goto LAB_07766980;
    lVar7 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                      (in_stack_00000090,unaff_x27,uVar15,in_stack_00000078._4_4_,
                       *(int *)(lVar5 + 0x18) == 0);
    puVar13 = (undefined8 *)PTR_DAT_09f32ba8;
    if (lVar7 == 0) break;
    *(int *)(lVar7 + 0x1c) = iVar20;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    lVar11 = *(long *)(lVar5 + 0x10);
    lVar12 = *unaff_x22;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_07766980;
    uVar15 = *(uint *)(lVar5 + 0x18);
    if (uVar15 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar15 + 1;
      plVar3 = (long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
      *plVar3 = lVar7;
      thunk_FUN_044bb4b4(plVar3,lVar7);
    }
    else {
      FUN_05bade44(lVar5,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar6 == 0) goto LAB_07766980;
    iVar21 = *(int *)(lVar7 + 0x14);
    iVar22 = *(int *)(lVar7 + 0x18);
    lVar11 = *(long *)(lVar6 + 0x10);
    lVar12 = *(long *)PTR_DAT_09f32e10;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_07766980;
    uVar15 = *(uint *)(lVar6 + 0x18);
    if (uVar15 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar15 * 0x10;
      *(uint *)(lVar6 + 0x18) = uVar15 + 1;
      *(float *)(lVar11 + 0x20) = (float)iVar20;
      *(undefined4 *)(lVar11 + 0x24) = 0;
      *(float *)(lVar11 + 0x28) = (float)iVar21;
      *(float *)(lVar11 + 0x2c) = (float)iVar22;
    }
    else {
      FUN_05c21a38((float)iVar20,0,lVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    iVar21 = *(int *)(lVar7 + 0x14) + iVar20;
    if (iVar17 <= *(int *)(lVar7 + 0x18)) {
      iVar17 = *(int *)(lVar7 + 0x18);
    }
    uVar15 = in_stack_00000078._4_4_ - iVar21;
    iVar20 = iVar21;
  }
  if (3 < *(int *)(in_stack_00000090 + 0x10)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
  }
  if (unaff_x23 == 0) goto LAB_07766980;
  uVar4 = FUN_05a2ad3c(unaff_x23,*(undefined8 *)PTR_DAT_09f32cc8);
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
  FUN_07a80df4(lVar7,0);
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x28),uVar4);
  *(int *)(lVar7 + 0x10) = iVar21;
  *(int *)(lVar7 + 0x14) = iVar17;
  lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar5 + 0x18));
  lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar5 + 0x18));
  if (0 < *(int *)(lVar5 + 0x18)) {
    uVar14 = 0;
    pfVar16 = (float *)(lVar11 + 0x2c);
    do {
      lVar8 = FUN_05badb74(lVar5,uVar14 & 0xffffffff,*puVar13);
      if (lVar8 == 0) {
LAB_07766970:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      iVar20 = *(int *)(lVar8 + 0x1c);
      lVar8 = FUN_05badb74(lVar5,uVar14 & 0xffffffff,*puVar13);
      if (lVar8 == 0) goto LAB_07766970;
      iVar22 = *(int *)(lVar8 + 0x20);
      lVar8 = FUN_05badb74(lVar5,uVar14 & 0xffffffff,*puVar13);
      if (lVar8 == 0) goto LAB_07766970;
      iVar23 = *(int *)(lVar8 + 0x14);
      iVar10 = iVar17;
      if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
        lVar8 = FUN_05badb74(lVar5,uVar14 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32ba8);
        if (lVar8 == 0) goto LAB_07766970;
        iVar10 = *(int *)(lVar8 + 0x18);
      }
      puVar13 = (undefined8 *)PTR_DAT_09f32ba8;
      if (lVar11 == 0) goto LAB_07766970;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) {
LAB_07766984:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      pfVar16[-3] = (float)iVar20;
      pfVar16[-2] = (float)iVar22;
      pfVar16[-1] = (float)iVar23;
      *pfVar16 = (float)iVar10;
      lVar8 = FUN_05badb74(lVar5,uVar14 & 0xffffffff,*puVar13);
      if ((lVar8 == 0) || (lVar12 == 0)) goto LAB_07766970;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_07766984;
      pfVar16 = pfVar16 + 4;
      *(undefined4 *)(lVar12 + 0x20 + uVar14 * 4) = *(undefined4 *)(lVar8 + 0x10);
      uVar14 = uVar14 + 1;
      unaff_x23 = in_stack_00000068;
    } while ((long)uVar14 < (long)*(int *)(lVar5 + 0x18));
  }
  *(long *)(lVar7 + 0x20) = lVar11;
  thunk_FUN_044bb4b4();
  *(long *)(lVar7 + 0x30) = lVar12;
  thunk_FUN_044bb4b4((long *)(lVar7 + 0x30),lVar12);
  FUN_077606dc(lVar7);
  iVar17 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (0 < iVar17) {
    FUN_07a61000(*(undefined8 *)(lVar5 + 0x10),0,iVar17,0);
  }
  unaff_x22 = (long *)PTR_DAT_09f32bf0;
  if (lVar6 == 0) goto LAB_07766980;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (in_stack_00000070 == 0) goto LAB_07766980;
  lVar11 = *(long *)(in_stack_00000070 + 0x10);
  lVar12 = *(long *)PTR_DAT_09f32cb8;
  *(int *)(in_stack_00000070 + 0x1c) = *(int *)(in_stack_00000070 + 0x1c) + 1;
  if (lVar11 == 0) goto LAB_07766980;
  uVar15 = *(uint *)(in_stack_00000070 + 0x18);
  if (uVar15 < *(uint *)(lVar11 + 0x18)) {
    *(uint *)(in_stack_00000070 + 0x18) = uVar15 + 1;
    plVar3 = (long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
    *plVar3 = lVar7;
    thunk_FUN_044bb4b4(plVar3,lVar7);
  }
  else {
    FUN_05bade44(in_stack_00000070,lVar7,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  goto LAB_07766304;
  while( true ) {
    uVar15 = *(uint *)(lVar6 + 0x10);
    lVar6 = FUN_05badb74(in_stack_00000070,iVar17,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07766980;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar19 = logf((float)(int)uVar15);
      fVar19 = exp2f((float)(int)(fVar19 / fVar18));
      uVar15 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar15 = (int)fVar19;
      }
      if (uVar15 < 3) {
        uVar15 = 2;
      }
    }
    if ((int)in_stack_00000078._4_4_ <= (int)uVar15) {
      uVar15 = in_stack_00000078._4_4_;
    }
    lVar6 = FUN_05badb74(in_stack_00000070,iVar17,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07766980;
    *(uint *)(lVar6 + 0x10) = uVar15;
    lVar6 = FUN_05badb74(in_stack_00000070,iVar17,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07766980;
    iVar21 = *(int *)(lVar6 + 0x10);
    lVar6 = FUN_05badb74(in_stack_00000070,iVar17,*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (in_stack_00000068 == 0)) goto LAB_07766980;
    iVar20 = *(int *)(lVar6 + 0x14);
    uVar4 = FUN_05a28f70(in_stack_00000068,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar21,(float)iVar20,in_stack_00000090,lVar5,in_stack_00000078._4_4_,
                 uStack000000000000005c,uVar4,iStack0000000000000060,iStack0000000000000064,
                 uStack0000000000000058);
    iVar17 = iVar17 + 1;
    iVar21 = *(int *)(in_stack_00000070 + 0x18);
    unaff_x23 = in_stack_00000068;
    if (iVar21 <= iVar17) break;
LAB_07766754:
    puVar1 = PTR_DAT_09f32e38;
    lVar6 = FUN_05badb74(in_stack_00000070,iVar17,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07766980;
  }
LAB_077668c0:
  puVar1 = PTR_DAT_09f32e38;
  if (0 < iVar21) {
    iVar21 = 0;
    do {
      uVar4 = FUN_05badb74(in_stack_00000070,iVar21,*(undefined8 *)puVar1);
      if (unaff_x23 == 0) goto LAB_07766980;
      uVar9 = FUN_05a28f70(unaff_x23,iVar21,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar9,uVar4,uVar9);
      lVar5 = FUN_05badb74(in_stack_00000070,iVar21,*(undefined8 *)puVar1);
      if (lVar5 == 0) goto LAB_07766980;
      FUN_077606dc();
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)(in_stack_00000070 + 0x18));
  }
  FUN_05baf9bc(in_stack_00000070,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


