/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 077664d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  int iVar9;
  long unaff_x23;
  ulong uVar10;
  uint uVar11;
  long unaff_x24;
  float *pfVar12;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  int iVar14;
  int iVar15;
  float unaff_s9;
  int iVar16;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000090;
  float fStack00000000000000b4;
  
  do {
    thunk_FUN_044bb4b4(param_1,param_2);
    *(int *)(unaff_x20 + 0x10) = unaff_w25;
    *(int *)(unaff_x20 + 0x14) = unaff_w26;
    lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(unaff_x28 + 0x18));
    lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(unaff_x28 + 0x18));
    if (0 < *(int *)(unaff_x28 + 0x18)) {
      uVar10 = 0;
      pfVar12 = (float *)(lVar3 + 0x2c);
      do {
        lVar5 = FUN_05badb74();
        if (lVar5 == 0) {
LAB_07766970:
          fStack00000000000000b4 = unaff_s9;
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar9 = *(int *)(lVar5 + 0x1c);
        lVar5 = FUN_05badb74();
        if (lVar5 == 0) goto LAB_07766970;
        iVar14 = *(int *)(lVar5 + 0x20);
        lVar5 = FUN_05badb74();
        if (lVar5 == 0) goto LAB_07766970;
        iVar16 = *(int *)(lVar5 + 0x14);
        iVar15 = unaff_w26;
        if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
          lVar5 = FUN_05badb74();
          if (lVar5 == 0) goto LAB_07766970;
          iVar15 = *(int *)(lVar5 + 0x18);
        }
        unaff_s9 = (float)iVar14;
        if (lVar3 == 0) goto LAB_07766970;
        if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_07766984:
          fStack00000000000000b4 = unaff_s9;
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        pfVar12[-3] = (float)iVar9;
        pfVar12[-2] = unaff_s9;
        pfVar12[-1] = (float)iVar16;
        *pfVar12 = (float)iVar15;
        lVar5 = FUN_05badb74();
        if ((lVar5 == 0) || (lVar4 == 0)) goto LAB_07766970;
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_07766984;
        pfVar12 = pfVar12 + 4;
        *(undefined4 *)(lVar4 + 0x20 + uVar10 * 4) = *(undefined4 *)(lVar5 + 0x10);
        uVar10 = uVar10 + 1;
        unaff_x23 = in_stack_00000068;
        unaff_x24 = in_stack_00000070;
      } while ((long)uVar10 < (long)*(int *)(unaff_x28 + 0x18));
    }
    *(long *)(unaff_x20 + 0x20) = lVar3;
    thunk_FUN_044bb4b4();
    *(long *)(unaff_x20 + 0x30) = lVar4;
    thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x30),lVar4);
    FUN_077606dc(unaff_x20);
    iVar9 = *(int *)(unaff_x28 + 0x18);
    *(undefined4 *)(unaff_x28 + 0x18) = 0;
    *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
    if (0 < iVar9) {
      FUN_07a61000(*(undefined8 *)(unaff_x28 + 0x10),0,iVar9,0);
    }
    fStack00000000000000b4 = unaff_s9;
    if (unaff_x29 == 0) goto LAB_07766980;
    *(undefined4 *)(unaff_x29 + 0x18) = 0;
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (unaff_x24 == 0) goto LAB_07766980;
    lVar3 = *(long *)(unaff_x24 + 0x10);
    lVar4 = *(long *)PTR_DAT_09f32cb8;
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_07766980;
    uVar11 = *(uint *)(unaff_x24 + 0x18);
    if (uVar11 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x24 + 0x18) = uVar11 + 1;
      plVar6 = (long *)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
      *plVar6 = unaff_x20;
      thunk_FUN_044bb4b4(plVar6,unaff_x20);
    }
    else {
      FUN_05bade44(unaff_x24,unaff_x20,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w26 = 0;
    iVar9 = 0;
    uVar11 = in_stack_00000078._4_4_;
    while( true ) {
      fVar1 = DAT_01c7661c;
      if (*(int *)(unaff_x27 + 0x18) < 1) {
        if (unaff_x28 == 0) goto LAB_07766980;
        if (*(int *)(unaff_x28 + 0x18) < 1) {
          if (unaff_x24 == 0) goto LAB_07766980;
          iVar9 = *(int *)(unaff_x24 + 0x18);
          if (iVar9 < 1) goto LAB_077668c0;
          iVar14 = 0;
          goto LAB_07766754;
        }
      }
      else if (unaff_x28 == 0) goto LAB_07766980;
      lVar3 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                        (in_stack_00000090,unaff_x27,uVar11,in_stack_00000078._4_4_,
                         *(int *)(unaff_x28 + 0x18) == 0);
      if (lVar3 == 0) break;
      *(int *)(lVar3 + 0x1c) = iVar9;
      *(undefined4 *)(lVar3 + 0x20) = 0;
      lVar4 = *(long *)(unaff_x28 + 0x10);
      *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_07766980;
      uVar11 = *(uint *)(unaff_x28 + 0x18);
      if (uVar11 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x28 + 0x18) = uVar11 + 1;
        plVar6 = (long *)(lVar4 + (long)(int)uVar11 * 8 + 0x20);
        *plVar6 = lVar3;
        thunk_FUN_044bb4b4(plVar6,lVar3);
      }
      else {
        FUN_05bade44();
      }
      if (unaff_x29 == 0) goto LAB_07766980;
      iVar14 = *(int *)(lVar3 + 0x14);
      iVar15 = *(int *)(lVar3 + 0x18);
      lVar4 = *(long *)(unaff_x29 + 0x10);
      *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_07766980;
      uVar11 = *(uint *)(unaff_x29 + 0x18);
      if (uVar11 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar11 * 0x10;
        *(uint *)(unaff_x29 + 0x18) = uVar11 + 1;
        *(float *)(lVar4 + 0x20) = (float)iVar9;
        *(undefined4 *)(lVar4 + 0x24) = 0;
        *(float *)(lVar4 + 0x28) = (float)iVar14;
        *(float *)(lVar4 + 0x2c) = (float)iVar15;
      }
      else {
        FUN_05c21a38((float)iVar9,0);
      }
      iVar9 = *(int *)(lVar3 + 0x14) + iVar9;
      if (unaff_w26 <= *(int *)(lVar3 + 0x18)) {
        unaff_w26 = *(int *)(lVar3 + 0x18);
      }
      uVar11 = in_stack_00000078._4_4_ - iVar9;
      unaff_w25 = iVar9;
    }
    if (3 < *(int *)(in_stack_00000090 + 0x10)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
    }
    if (unaff_x23 == 0) goto LAB_07766980;
    param_2 = FUN_05a2ad3c(unaff_x23,*(undefined8 *)PTR_DAT_09f32cc8);
    unaff_x20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
    FUN_07a80df4(unaff_x20,0);
    param_1 = (undefined8 *)(unaff_x20 + 0x28);
    *param_1 = param_2;
  } while( true );
  while( true ) {
    uVar11 = *(uint *)(lVar3 + 0x10);
    lVar3 = FUN_05badb74(unaff_x24,iVar14,*(undefined8 *)puVar2);
    if (lVar3 == 0) goto LAB_07766980;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar13 = logf((float)(int)uVar11);
      fVar13 = exp2f((float)(int)(fVar13 / fVar1));
      uVar11 = 0x80000000;
      if (fVar13 != INFINITY) {
        uVar11 = (int)fVar13;
      }
      if (uVar11 < 3) {
        uVar11 = 2;
      }
    }
    if ((int)in_stack_00000078._4_4_ <= (int)uVar11) {
      uVar11 = in_stack_00000078._4_4_;
    }
    lVar3 = FUN_05badb74(in_stack_00000070,iVar14,*(undefined8 *)puVar2);
    if (lVar3 == 0) goto LAB_07766980;
    *(uint *)(lVar3 + 0x10) = uVar11;
    lVar3 = FUN_05badb74(in_stack_00000070,iVar14,*(undefined8 *)puVar2);
    if (lVar3 == 0) goto LAB_07766980;
    iVar9 = *(int *)(lVar3 + 0x10);
    lVar3 = FUN_05badb74(in_stack_00000070,iVar14,*(undefined8 *)puVar2);
    if ((lVar3 == 0) || (in_stack_00000068 == 0)) goto LAB_07766980;
    iVar15 = *(int *)(lVar3 + 0x14);
    FUN_05a28f70(in_stack_00000068,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar9,(float)iVar15,in_stack_00000090);
    iVar14 = iVar14 + 1;
    iVar9 = *(int *)(in_stack_00000070 + 0x18);
    unaff_x23 = in_stack_00000068;
    unaff_x24 = in_stack_00000070;
    if (iVar9 <= iVar14) break;
LAB_07766754:
    puVar2 = PTR_DAT_09f32e38;
    lVar3 = FUN_05badb74(unaff_x24,iVar14,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar3 == 0) goto LAB_07766980;
  }
LAB_077668c0:
  puVar2 = PTR_DAT_09f32e38;
  if (0 < iVar9) {
    iVar9 = 0;
    do {
      uVar7 = FUN_05badb74(unaff_x24,iVar9,*(undefined8 *)puVar2);
      if (unaff_x23 == 0) {
LAB_07766980:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar8 = FUN_05a28f70(unaff_x23,iVar9,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar8,uVar7,uVar8);
      lVar3 = FUN_05badb74(unaff_x24,iVar9,*(undefined8 *)puVar2);
      if (lVar3 == 0) goto LAB_07766980;
      FUN_077606dc();
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x24 + 0x18));
  }
  FUN_05baf9bc(unaff_x24,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


