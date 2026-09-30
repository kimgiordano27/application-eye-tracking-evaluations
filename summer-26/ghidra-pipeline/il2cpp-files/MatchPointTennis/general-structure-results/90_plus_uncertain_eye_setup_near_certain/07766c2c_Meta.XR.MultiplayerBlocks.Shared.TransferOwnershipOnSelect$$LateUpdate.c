/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 07766c2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float unaff_w19;
  int unaff_w20;
  int iVar14;
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
  
  do {
    fVar18 = (float)FUN_05d0cfbc();
    FUN_05d0cfbc();
    if (unaff_x26 == 0) goto LAB_07767440;
    uVar7 = param_2;
    uVar4 = FUN_05a28f70(unaff_x26,unaff_w20,*unaff_x29);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    iVar14 = -0x80000000;
    if (fVar18 != unaff_w19) {
      iVar14 = (int)fVar18;
    }
    iVar15 = -0x80000000;
    if ((float)param_2 != unaff_w19) {
      iVar15 = (int)(float)param_2;
    }
    FUN_07a80df4(lVar5,0);
    iVar14 = ((uint)(uVar4 >> 0x1f) & 0xfffffffe) + iVar14;
    iVar15 = iVar15 + (int)uVar4 * 2;
    if (iVar14 <= iStack0000000000000060) {
      iVar14 = iStack0000000000000060;
    }
    *(int *)(lVar5 + 0x10) = unaff_w20;
    *(int *)(lVar5 + 0x14) = iVar14;
    if (iVar15 <= iStack0000000000000064) {
      iVar15 = iStack0000000000000064;
    }
    *(int *)(lVar5 + 0x18) = iVar15;
    uVar4 = FUN_05a28f70(in_stack_00000080,unaff_w20,*unaff_x29);
    *(uint *)(lVar5 + 0x14) = iVar14 - ((uint)(uVar4 >> 0x1f) & 0xfffffffe);
    if (in_stack_00000070 == 0) goto LAB_07767440;
    lVar12 = *(long *)(in_stack_00000070 + 0x10);
    lVar13 = *(long *)PTR_DAT_09f32bf0;
    *(int *)(in_stack_00000070 + 0x1c) = *(int *)(in_stack_00000070 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07767440;
    uVar16 = *(uint *)(in_stack_00000070 + 0x18);
    if (uVar16 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(in_stack_00000070 + 0x18) = uVar16 + 1;
      plVar6 = (long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
      *plVar6 = lVar5;
      thunk_FUN_044bb4b4(plVar6,lVar5);
    }
    else {
      FUN_05bade44(in_stack_00000070,lVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w20 = unaff_w20 + 1;
    unaff_x26 = in_stack_00000080;
    param_2 = uVar7;
  } while (unaff_w20 < *(int *)(unaff_x28 + 0x18));
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c98);
  FUN_07a80df4(uVar7,0);
  puVar3 = PTR_DAT_09f32e40;
  puVar2 = PTR_DAT_09f32e28;
  puVar1 = PTR_DAT_09f32ba8;
  if (in_stack_00000070 != 0) {
    FUN_05baf864(in_stack_00000070,uVar7,*(undefined8 *)PTR_DAT_09f32d88);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
    FUN_05bad610(lVar5,*(undefined8 *)PTR_DAT_09f32ce0);
    lVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_05c211ac(lVar12,*(undefined8 *)puVar2);
    iVar15 = 0;
    iVar14 = 0;
    uVar16 = in_stack_00000088._4_4_;
LAB_07766e24:
    fVar18 = DAT_01c7661c;
    if (*(int *)(in_stack_00000070 + 0x18) < 1) {
      if (lVar5 == 0) goto LAB_07767440;
      if (*(int *)(lVar5 + 0x18) < 1) {
        if (unaff_x27 != 0) {
          iVar14 = *(int *)(unaff_x27 + 0x18);
          if (iVar14 < 1) goto LAB_0776738c;
          iVar15 = 0;
          goto LAB_07767220;
        }
        goto LAB_07767440;
      }
    }
    else if (lVar5 == 0) goto LAB_07767440;
    lVar13 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                       (in_stack_00000090,in_stack_00000070,uVar16,in_stack_00000088._4_4_,
                        *(int *)(lVar5 + 0x18) == 0);
    if (lVar13 == 0) {
      if (3 < *(int *)(in_stack_00000090 + 0x10)) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
      }
      if (in_stack_00000080 == 0) goto LAB_07767440;
      uVar7 = FUN_05a2ad3c(in_stack_00000080,*(undefined8 *)PTR_DAT_09f32cc8);
      lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
      FUN_07a80df4(lVar13,0);
      *(undefined8 *)(lVar13 + 0x28) = uVar7;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x28),uVar7);
      *(int *)(lVar13 + 0x10) = iVar15;
      *(int *)(lVar13 + 0x14) = iVar14;
      lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar5 + 0x18));
      lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar5 + 0x18));
      if (0 < *(int *)(lVar5 + 0x18)) {
        uVar4 = 0;
        pfVar17 = (float *)(lVar8 + 0x2c);
        do {
          lVar10 = FUN_05badb74(lVar5,uVar4 & 0xffffffff,*(undefined8 *)puVar1);
          if (lVar10 == 0) goto LAB_07767440;
          iVar14 = *(int *)(lVar10 + 0x1c);
          lVar10 = FUN_05badb74(lVar5,uVar4 & 0xffffffff,*(undefined8 *)puVar1);
          if (lVar10 == 0) goto LAB_07767440;
          iVar22 = *(int *)(lVar10 + 0x20);
          iVar19 = iVar15;
          if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
            lVar10 = FUN_05badb74(lVar5,uVar4 & 0xffffffff,*(undefined8 *)puVar1);
            if (lVar10 == 0) goto LAB_07767440;
            iVar19 = *(int *)(lVar10 + 0x14);
          }
          lVar10 = FUN_05badb74(lVar5,uVar4 & 0xffffffff,*(undefined8 *)puVar1);
          if ((lVar10 == 0) || (lVar8 == 0)) goto LAB_07767440;
          if (*(uint *)(lVar8 + 0x18) <= uVar4) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          iVar21 = *(int *)(lVar10 + 0x18);
          pfVar17[-3] = (float)iVar14;
          pfVar17[-2] = (float)iVar22;
          pfVar17[-1] = (float)iVar19;
          *pfVar17 = (float)iVar21;
          lVar10 = FUN_05badb74(lVar5,uVar4 & 0xffffffff,*(undefined8 *)puVar1);
          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_07767440;
          if (*(uint *)(lVar9 + 0x18) <= uVar4)
          goto 
          Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
          ;
          pfVar17 = pfVar17 + 4;
          *(undefined4 *)(lVar9 + 0x20 + uVar4 * 4) = *(undefined4 *)(lVar10 + 0x10);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar5 + 0x18));
      }
      *(long *)(lVar13 + 0x20) = lVar8;
      thunk_FUN_044bb4b4((long *)(lVar13 + 0x20),lVar8);
      *(long *)(lVar13 + 0x30) = lVar9;
      thunk_FUN_044bb4b4((long *)(lVar13 + 0x30),lVar9);
      iVar14 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar14) {
        FUN_07a61000(*(undefined8 *)(lVar5 + 0x10),0,iVar14,0);
      }
      if (lVar12 == 0) goto LAB_07767440;
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (unaff_x27 == 0) goto LAB_07767440;
      lVar8 = *(long *)(unaff_x27 + 0x10);
      lVar9 = *(long *)PTR_DAT_09f32cb8;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_07767440;
      uVar16 = *(uint *)(unaff_x27 + 0x18);
      if (uVar16 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar16 + 1;
        plVar6 = (long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
        *plVar6 = lVar13;
        thunk_FUN_044bb4b4(plVar6,lVar13);
      }
      else {
        FUN_05bade44(unaff_x27,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      iVar14 = 0;
      uVar16 = in_stack_00000088._4_4_;
    }
    else {
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(int *)(lVar13 + 0x20) = iVar14;
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)PTR_DAT_09f32bf0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_07767440;
      uVar16 = *(uint *)(lVar5 + 0x18);
      if (uVar16 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar16 + 1;
        plVar6 = (long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
        *plVar6 = lVar13;
        thunk_FUN_044bb4b4(plVar6,lVar13);
      }
      else {
        FUN_05bade44(lVar5,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
        ;
      }
      if (lVar12 == 0) goto LAB_07767440;
      iVar19 = *(int *)(lVar13 + 0x14);
      iVar22 = *(int *)(lVar13 + 0x18);
      lVar8 = *(long *)(lVar12 + 0x10);
      lVar9 = *(long *)PTR_DAT_09f32e10;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_07767440;
      uVar16 = *(uint *)(lVar12 + 0x18);
      if (uVar16 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar16 * 0x10;
        *(uint *)(lVar12 + 0x18) = uVar16 + 1;
        *(undefined4 *)(lVar8 + 0x20) = 0;
        *(float *)(lVar8 + 0x24) = (float)iVar14;
        *(float *)(lVar8 + 0x28) = (float)iVar19;
        *(float *)(lVar8 + 0x2c) = (float)iVar22;
      }
      else {
        FUN_05c21a38(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      iVar14 = *(int *)(lVar13 + 0x18) + iVar14;
      if (iVar15 <= *(int *)(lVar13 + 0x14)) {
        iVar15 = *(int *)(lVar13 + 0x14);
      }
      uVar16 = in_stack_00000088._4_4_ - iVar14;
    }
    goto LAB_07766e24;
  }
LAB_07767440:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
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
    iVar14 = *(int *)(lVar12 + 0x10);
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)puVar1);
    if ((lVar12 == 0) || (in_stack_00000080 == 0)) goto LAB_07767440;
    iVar19 = *(int *)(lVar12 + 0x14);
    uVar7 = FUN_05a28f70(in_stack_00000080,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar14,(float)iVar19,in_stack_00000090,lVar5,uStack000000000000005c,
                 in_stack_00000088._4_4_,uVar7,iStack0000000000000060,iStack0000000000000064,
                 uStack0000000000000058);
    iVar15 = iVar15 + 1;
    iVar14 = *(int *)(unaff_x27 + 0x18);
    if (iVar14 <= iVar15) break;
LAB_07767220:
    puVar1 = PTR_DAT_09f32e38;
    lVar12 = FUN_05badb74(unaff_x27,iVar15,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar12 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar1 = PTR_DAT_09f32e38;
  if (0 < iVar14) {
    iVar14 = 0;
    do {
      uVar7 = FUN_05badb74(unaff_x27,iVar14,*(undefined8 *)puVar1);
      if (in_stack_00000080 == 0) goto LAB_07767440;
      uVar11 = FUN_05a28f70(in_stack_00000080,iVar14,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar11,uVar7,uVar11);
      lVar5 = FUN_05badb74(unaff_x27,iVar14,*(undefined8 *)puVar1);
      if (lVar5 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(unaff_x27 + 0x18));
  }
  FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


