/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnPointerEventRaised
ENTRY_POINT: 07766aa8
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


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnPointerEventRaised
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x19;
  int iVar16;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar17;
  uint uVar18;
  long unaff_x26;
  float *pfVar19;
  long unaff_x28;
  float fVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_00000130;
  
  FUN_04447ba8(PTR_DAT_09f32e30);
  FUN_04447ba8(PTR_DAT_09f32ba0);
  FUN_04447ba8(PTR_DAT_09f32c60);
  FUN_04447ba8(PTR_DAT_09f32c78);
  FUN_04447ba8(PTR_DAT_09f32cf8);
  FUN_04447ba8(PTR_DAT_09f32ba8);
  FUN_04447ba8(PTR_DAT_09f32e38);
  FUN_04447ba8(PTR_DAT_09f32d08);
  FUN_04447ba8(PTR_DAT_09f32e40);
  FUN_04447ba8(PTR_DAT_09f32d18);
  FUN_04447ba8(PTR_DAT_09f313a0);
  FUN_04447ba8(PTR_DAT_09f32e48);
  FUN_04447ba8(PTR_DAT_09f32e50);
  *(undefined1 *)(unaff_x21 + 0x2d3) = 1;
  _uStack00000000000000b8 = 0;
  uStack000000000000009c = 0;
  lVar4 = thunk_FUN_0448520c(*unaff_x20);
  FUN_05bad610(lVar4,*unaff_x19);
  if (3 < *(int *)(in_stack_00000090 + 0x10)) {
    if (unaff_x28 == 0) goto LAB_07767440;
    _uStack00000000000000b8 = CONCAT44(*(undefined4 *)(unaff_x28 + 0x18),uStack00000000000000b8);
    uVar5 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
    uVar5 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f32e50,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar5,0);
  }
  puVar1 = PTR_DAT_09f32ce0;
  lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar6,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_09f32c78;
  if (unaff_x28 != 0) {
    if (0 < *(int *)(unaff_x28 + 0x18)) {
      iVar16 = 0;
      do {
        fVar20 = (float)FUN_05d0cfbc();
        FUN_05d0cfbc();
        if (unaff_x26 == 0) goto LAB_07767440;
        uVar5 = param_2;
        uVar7 = FUN_05a28f70(unaff_x26,iVar16,*(undefined8 *)puVar1);
        lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
        iVar17 = -0x80000000;
        if (fVar20 != INFINITY) {
          iVar17 = (int)fVar20;
        }
        iVar21 = -0x80000000;
        if ((float)param_2 != INFINITY) {
          iVar21 = (int)(float)param_2;
        }
        FUN_07a80df4(lVar8,0);
        iVar17 = ((uint)(uVar7 >> 0x1f) & 0xfffffffe) + iVar17;
        iVar21 = iVar21 + (int)uVar7 * 2;
        if (iVar17 <= iStack0000000000000060) {
          iVar17 = iStack0000000000000060;
        }
        *(int *)(lVar8 + 0x10) = iVar16;
        *(int *)(lVar8 + 0x14) = iVar17;
        if (iVar21 <= iStack0000000000000064) {
          iVar21 = iStack0000000000000064;
        }
        *(int *)(lVar8 + 0x18) = iVar21;
        uVar7 = FUN_05a28f70(unaff_x26,iVar16,*(undefined8 *)puVar1);
        *(uint *)(lVar8 + 0x14) = iVar17 - ((uint)(uVar7 >> 0x1f) & 0xfffffffe);
        if (lVar6 == 0) goto LAB_07767440;
        lVar14 = *(long *)(lVar6 + 0x10);
        lVar15 = *(long *)PTR_DAT_09f32bf0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_07767440;
        uVar18 = *(uint *)(lVar6 + 0x18);
        if (uVar18 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar18 + 1;
          plVar9 = (long *)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_044bb4b4(plVar9,lVar8);
        }
        else {
          FUN_05bade44(lVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        iVar16 = iVar16 + 1;
        param_2 = uVar5;
      } while (iVar16 < *(int *)(unaff_x28 + 0x18));
    }
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c98);
    FUN_07a80df4(uVar5,0);
    puVar3 = PTR_DAT_09f32e40;
    puVar2 = PTR_DAT_09f32e28;
    puVar1 = PTR_DAT_09f32ba8;
    if (lVar6 != 0) {
      FUN_05baf864(lVar6,uVar5,*(undefined8 *)PTR_DAT_09f32d88);
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
      FUN_05bad610(lVar8,*(undefined8 *)PTR_DAT_09f32ce0);
      lVar14 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_05c211ac(lVar14,*(undefined8 *)puVar2);
      iVar17 = 0;
      iVar16 = 0;
      uVar18 = in_stack_00000088._4_4_;
LAB_07766e24:
      fVar20 = DAT_01c7661c;
      if (*(int *)(lVar6 + 0x18) < 1) {
        if (lVar8 == 0) goto LAB_07767440;
        if (*(int *)(lVar8 + 0x18) < 1) {
          if (lVar4 != 0) {
            iVar16 = *(int *)(lVar4 + 0x18);
            if (iVar16 < 1) goto LAB_0776738c;
            iVar17 = 0;
            goto LAB_07767220;
          }
          goto LAB_07767440;
        }
      }
      else if (lVar8 == 0) goto LAB_07767440;
      lVar15 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                         (in_stack_00000090,lVar6,uVar18,in_stack_00000088._4_4_,
                          *(int *)(lVar8 + 0x18) == 0);
      if (lVar15 == 0) {
        if (3 < *(int *)(in_stack_00000090 + 0x10)) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
        }
        if (unaff_x26 == 0) goto LAB_07767440;
        uVar5 = FUN_05a2ad3c(unaff_x26,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar15,0);
        *(undefined8 *)(lVar15 + 0x28) = uVar5;
        thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x28),uVar5);
        *(int *)(lVar15 + 0x10) = iVar17;
        *(int *)(lVar15 + 0x14) = iVar16;
        lVar10 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar8 + 0x18));
        lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar8 + 0x18));
        if (0 < *(int *)(lVar8 + 0x18)) {
          uVar7 = 0;
          pfVar19 = (float *)(lVar10 + 0x2c);
          do {
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if (lVar12 == 0) goto LAB_07767440;
            iVar16 = *(int *)(lVar12 + 0x1c);
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if (lVar12 == 0) goto LAB_07767440;
            iVar24 = *(int *)(lVar12 + 0x20);
            iVar21 = iVar17;
            if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
              lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
              if (lVar12 == 0) goto LAB_07767440;
              iVar21 = *(int *)(lVar12 + 0x14);
            }
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if ((lVar12 == 0) || (lVar10 == 0)) goto LAB_07767440;
            if (*(uint *)(lVar10 + 0x18) <= uVar7) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar23 = *(int *)(lVar12 + 0x18);
            pfVar19[-3] = (float)iVar16;
            pfVar19[-2] = (float)iVar24;
            pfVar19[-1] = (float)iVar21;
            *pfVar19 = (float)iVar23;
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_07767440;
            if (*(uint *)(lVar11 + 0x18) <= uVar7)
            goto 
            Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
            ;
            pfVar19 = pfVar19 + 4;
            *(undefined4 *)(lVar11 + 0x20 + uVar7 * 4) = *(undefined4 *)(lVar12 + 0x10);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)*(int *)(lVar8 + 0x18));
        }
        *(long *)(lVar15 + 0x20) = lVar10;
        thunk_FUN_044bb4b4((long *)(lVar15 + 0x20),lVar10);
        *(long *)(lVar15 + 0x30) = lVar11;
        thunk_FUN_044bb4b4((long *)(lVar15 + 0x30),lVar11);
        iVar16 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar16) {
          FUN_07a61000(*(undefined8 *)(lVar8 + 0x10),0,iVar16,0);
        }
        if (lVar14 == 0) goto LAB_07767440;
        *(undefined4 *)(lVar14 + 0x18) = 0;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_07767440;
        lVar10 = *(long *)(lVar4 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f32cb8;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_07767440;
        uVar18 = *(uint *)(lVar4 + 0x18);
        if (uVar18 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar18 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
          *plVar9 = lVar15;
          thunk_FUN_044bb4b4(plVar9,lVar15);
        }
        else {
          FUN_05bade44(lVar4,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar16 = 0;
        uVar18 = in_stack_00000088._4_4_;
      }
      else {
        *(undefined4 *)(lVar15 + 0x1c) = 0;
        *(int *)(lVar15 + 0x20) = iVar16;
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f32bf0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_07767440;
        uVar18 = *(uint *)(lVar8 + 0x18);
        if (uVar18 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar18 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
          *plVar9 = lVar15;
          thunk_FUN_044bb4b4(plVar9,lVar15);
        }
        else {
          FUN_05bade44(lVar8,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar14 == 0) goto LAB_07767440;
        iVar21 = *(int *)(lVar15 + 0x14);
        iVar24 = *(int *)(lVar15 + 0x18);
        lVar10 = *(long *)(lVar14 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f32e10;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_07767440;
        uVar18 = *(uint *)(lVar14 + 0x18);
        if (uVar18 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar18 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar18 + 1;
          *(undefined4 *)(lVar10 + 0x20) = 0;
          *(float *)(lVar10 + 0x24) = (float)iVar16;
          *(float *)(lVar10 + 0x28) = (float)iVar21;
          *(float *)(lVar10 + 0x2c) = (float)iVar24;
        }
        else {
          FUN_05c21a38(0,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar16 = *(int *)(lVar15 + 0x18) + iVar16;
        if (iVar17 <= *(int *)(lVar15 + 0x14)) {
          iVar17 = *(int *)(lVar15 + 0x14);
        }
        uVar18 = in_stack_00000088._4_4_ - iVar16;
      }
      goto LAB_07766e24;
    }
  }
LAB_07767440:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    uVar18 = *(uint *)(lVar6 + 0x14);
    _uStack00000000000000b8 = CONCAT44(uStack00000000000000bc,uVar18);
    lVar6 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07767440;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar22 = logf((float)(int)uVar18);
      fVar22 = exp2f((float)(int)(fVar22 / fVar20));
      uVar18 = 0x80000000;
      if (fVar22 != INFINITY) {
        uVar18 = (int)fVar22;
      }
      if (uVar18 < 3) {
        uVar18 = 2;
      }
    }
    puVar1 = PTR_DAT_09f32e38;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar18) {
      uVar18 = in_stack_00000088._4_4_;
    }
    _uStack00000000000000b8 = CONCAT44(uStack00000000000000bc,uVar18);
    lVar6 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07767440;
    *(uint *)(lVar6 + 0x14) = uVar18;
    lVar6 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07767440;
    iVar16 = *(int *)(lVar6 + 0x10);
    lVar6 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (unaff_x26 == 0)) goto LAB_07767440;
    iVar21 = *(int *)(lVar6 + 0x14);
    uVar5 = FUN_05a28f70(unaff_x26,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar16,(float)iVar21,in_stack_00000090,lVar8,uStack000000000000005c,
                 in_stack_00000088._4_4_,uVar5,iStack0000000000000060,iStack0000000000000064,
                 uStack0000000000000058);
    iVar17 = iVar17 + 1;
    iVar16 = *(int *)(lVar4 + 0x18);
    if (iVar16 <= iVar17) break;
LAB_07767220:
    puVar1 = PTR_DAT_09f32e38;
    lVar6 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar1 = PTR_DAT_09f32e38;
  if (0 < iVar16) {
    iVar16 = 0;
    do {
      uVar5 = FUN_05badb74(lVar4,iVar16,*(undefined8 *)puVar1);
      if (unaff_x26 == 0) goto LAB_07767440;
      uVar13 = FUN_05a28f70(unaff_x26,iVar16,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar13,uVar5,uVar13);
      lVar6 = FUN_05badb74(lVar4,iVar16,*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar4 + 0x18));
  }
  FUN_05baf9bc(lVar4,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


