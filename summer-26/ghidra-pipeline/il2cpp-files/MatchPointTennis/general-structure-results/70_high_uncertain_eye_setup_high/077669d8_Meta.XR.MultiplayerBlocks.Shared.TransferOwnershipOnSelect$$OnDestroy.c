/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnDestroy
ENTRY_POINT: 077669d8
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


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnDestroy
               (ulong param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

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
  long unaff_x19;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  int iVar25;
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
  
  puVar16 = *(undefined8 **)(unaff_x19 + 0xce8);
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f32c88);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f32c98);
    FUN_04447ba8(PTR_DAT_09f32cb0);
    FUN_04447ba8(PTR_DAT_09f1e6a8);
    FUN_04447ba8(PTR_DAT_09f32bf0);
    FUN_04447ba8(PTR_DAT_09f32cb8);
    FUN_04447ba8(PTR_DAT_09f32e10);
    FUN_04447ba8(PTR_DAT_09f32e18);
    FUN_04447ba8(PTR_DAT_09f32e20);
    FUN_04447ba8(PTR_DAT_09f32d88);
    FUN_04447ba8(PTR_DAT_09f32cc8);
    FUN_04447ba8(PTR_DAT_09f32cd0);
    FUN_04447ba8(PTR_DAT_09f32e28);
    FUN_04447ba8(PTR_DAT_09f32ce0);
    FUN_04447ba8(PTR_DAT_09f32ce8);
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
  }
  _uStack00000000000000b8 = 0;
  uStack000000000000009c = 0;
  lVar4 = thunk_FUN_0448520c(*unaff_x20);
  FUN_05bad610(lVar4,*puVar16);
  if (3 < *(int *)(in_stack_00000090 + 0x10)) {
    if (param_5 == 0) goto LAB_07767440;
    _uStack00000000000000b8 = CONCAT44(*(undefined4 *)(param_5 + 0x18),uStack00000000000000b8);
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
  puVar2 = PTR_DAT_09f32cf8;
  puVar1 = PTR_DAT_09f32c78;
  if (param_5 != 0) {
    if (0 < *(int *)(param_5 + 0x18)) {
      iVar17 = 0;
      do {
        fVar21 = (float)FUN_05d0cfbc(param_5,iVar17,*(undefined8 *)puVar2);
        FUN_05d0cfbc(param_5,iVar17,*(undefined8 *)puVar2);
        if (param_6 == 0) goto LAB_07767440;
        uVar5 = param_3;
        uVar7 = FUN_05a28f70(param_6,iVar17,*(undefined8 *)puVar1);
        lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
        iVar18 = -0x80000000;
        if (fVar21 != INFINITY) {
          iVar18 = (int)fVar21;
        }
        iVar22 = -0x80000000;
        if ((float)param_3 != INFINITY) {
          iVar22 = (int)(float)param_3;
        }
        FUN_07a80df4(lVar8,0);
        iVar18 = ((uint)(uVar7 >> 0x1f) & 0xfffffffe) + iVar18;
        iVar22 = iVar22 + (int)uVar7 * 2;
        if (iVar18 <= iStack0000000000000060) {
          iVar18 = iStack0000000000000060;
        }
        *(int *)(lVar8 + 0x10) = iVar17;
        *(int *)(lVar8 + 0x14) = iVar18;
        if (iVar22 <= iStack0000000000000064) {
          iVar22 = iStack0000000000000064;
        }
        *(int *)(lVar8 + 0x18) = iVar22;
        uVar7 = FUN_05a28f70(param_6,iVar17,*(undefined8 *)puVar1);
        *(uint *)(lVar8 + 0x14) = iVar18 - ((uint)(uVar7 >> 0x1f) & 0xfffffffe);
        if (lVar6 == 0) goto LAB_07767440;
        lVar14 = *(long *)(lVar6 + 0x10);
        lVar15 = *(long *)PTR_DAT_09f32bf0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_07767440;
        uVar19 = *(uint *)(lVar6 + 0x18);
        if (uVar19 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar19 + 1;
          plVar9 = (long *)(lVar14 + (long)(int)uVar19 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_044bb4b4(plVar9,lVar8);
        }
        else {
          FUN_05bade44(lVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        iVar17 = iVar17 + 1;
        param_3 = uVar5;
      } while (iVar17 < *(int *)(param_5 + 0x18));
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
      iVar18 = 0;
      iVar17 = 0;
      uVar19 = in_stack_00000088._4_4_;
LAB_07766e24:
      fVar21 = DAT_01c7661c;
      if (*(int *)(lVar6 + 0x18) < 1) {
        if (lVar8 == 0) goto LAB_07767440;
        if (*(int *)(lVar8 + 0x18) < 1) {
          if (lVar4 != 0) {
            iVar17 = *(int *)(lVar4 + 0x18);
            if (iVar17 < 1) goto LAB_0776738c;
            iVar18 = 0;
            goto LAB_07767220;
          }
          goto LAB_07767440;
        }
      }
      else if (lVar8 == 0) goto LAB_07767440;
      lVar15 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                         (in_stack_00000090,lVar6,uVar19,in_stack_00000088._4_4_,
                          *(int *)(lVar8 + 0x18) == 0);
      if (lVar15 == 0) {
        if (3 < *(int *)(in_stack_00000090 + 0x10)) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
        }
        if (param_6 == 0) goto LAB_07767440;
        uVar5 = FUN_05a2ad3c(param_6,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar15,0);
        *(undefined8 *)(lVar15 + 0x28) = uVar5;
        thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x28),uVar5);
        *(int *)(lVar15 + 0x10) = iVar18;
        *(int *)(lVar15 + 0x14) = iVar17;
        lVar10 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar8 + 0x18));
        lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar8 + 0x18));
        if (0 < *(int *)(lVar8 + 0x18)) {
          uVar7 = 0;
          pfVar20 = (float *)(lVar10 + 0x2c);
          do {
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if (lVar12 == 0) goto LAB_07767440;
            iVar17 = *(int *)(lVar12 + 0x1c);
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if (lVar12 == 0) goto LAB_07767440;
            iVar25 = *(int *)(lVar12 + 0x20);
            iVar22 = iVar18;
            if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
              lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
              if (lVar12 == 0) goto LAB_07767440;
              iVar22 = *(int *)(lVar12 + 0x14);
            }
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if ((lVar12 == 0) || (lVar10 == 0)) goto LAB_07767440;
            if (*(uint *)(lVar10 + 0x18) <= uVar7) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar24 = *(int *)(lVar12 + 0x18);
            pfVar20[-3] = (float)iVar17;
            pfVar20[-2] = (float)iVar25;
            pfVar20[-1] = (float)iVar22;
            *pfVar20 = (float)iVar24;
            lVar12 = FUN_05badb74(lVar8,uVar7 & 0xffffffff,*(undefined8 *)puVar1);
            if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_07767440;
            if (*(uint *)(lVar11 + 0x18) <= uVar7)
            goto 
            Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
            ;
            pfVar20 = pfVar20 + 4;
            *(undefined4 *)(lVar11 + 0x20 + uVar7 * 4) = *(undefined4 *)(lVar12 + 0x10);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)*(int *)(lVar8 + 0x18));
        }
        *(long *)(lVar15 + 0x20) = lVar10;
        thunk_FUN_044bb4b4((long *)(lVar15 + 0x20),lVar10);
        *(long *)(lVar15 + 0x30) = lVar11;
        thunk_FUN_044bb4b4((long *)(lVar15 + 0x30),lVar11);
        iVar17 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar17) {
          FUN_07a61000(*(undefined8 *)(lVar8 + 0x10),0,iVar17,0);
        }
        if (lVar14 == 0) goto LAB_07767440;
        *(undefined4 *)(lVar14 + 0x18) = 0;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_07767440;
        lVar10 = *(long *)(lVar4 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f32cb8;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_07767440;
        uVar19 = *(uint *)(lVar4 + 0x18);
        if (uVar19 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar19 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
          *plVar9 = lVar15;
          thunk_FUN_044bb4b4(plVar9,lVar15);
        }
        else {
          FUN_05bade44(lVar4,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar17 = 0;
        uVar19 = in_stack_00000088._4_4_;
      }
      else {
        *(undefined4 *)(lVar15 + 0x1c) = 0;
        *(int *)(lVar15 + 0x20) = iVar17;
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f32bf0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_07767440;
        uVar19 = *(uint *)(lVar8 + 0x18);
        if (uVar19 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar19 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
          *plVar9 = lVar15;
          thunk_FUN_044bb4b4(plVar9,lVar15);
        }
        else {
          FUN_05bade44(lVar8,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar14 == 0) goto LAB_07767440;
        iVar22 = *(int *)(lVar15 + 0x14);
        iVar25 = *(int *)(lVar15 + 0x18);
        lVar10 = *(long *)(lVar14 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f32e10;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_07767440;
        uVar19 = *(uint *)(lVar14 + 0x18);
        if (uVar19 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar19 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar19 + 1;
          *(undefined4 *)(lVar10 + 0x20) = 0;
          *(float *)(lVar10 + 0x24) = (float)iVar17;
          *(float *)(lVar10 + 0x28) = (float)iVar22;
          *(float *)(lVar10 + 0x2c) = (float)iVar25;
        }
        else {
          FUN_05c21a38(0,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar17 = *(int *)(lVar15 + 0x18) + iVar17;
        if (iVar18 <= *(int *)(lVar15 + 0x14)) {
          iVar18 = *(int *)(lVar15 + 0x14);
        }
        uVar19 = in_stack_00000088._4_4_ - iVar17;
      }
      goto LAB_07766e24;
    }
  }
LAB_07767440:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    uVar19 = *(uint *)(lVar6 + 0x14);
    _uStack00000000000000b8 = CONCAT44(uStack00000000000000bc,uVar19);
    lVar6 = FUN_05badb74(lVar4,iVar18,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07767440;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar23 = logf((float)(int)uVar19);
      fVar23 = exp2f((float)(int)(fVar23 / fVar21));
      uVar19 = 0x80000000;
      if (fVar23 != INFINITY) {
        uVar19 = (int)fVar23;
      }
      if (uVar19 < 3) {
        uVar19 = 2;
      }
    }
    puVar1 = PTR_DAT_09f32e38;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar19) {
      uVar19 = in_stack_00000088._4_4_;
    }
    _uStack00000000000000b8 = CONCAT44(uStack00000000000000bc,uVar19);
    lVar6 = FUN_05badb74(lVar4,iVar18,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07767440;
    *(uint *)(lVar6 + 0x14) = uVar19;
    lVar6 = FUN_05badb74(lVar4,iVar18,*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_07767440;
    iVar17 = *(int *)(lVar6 + 0x10);
    lVar6 = FUN_05badb74(lVar4,iVar18,*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (param_6 == 0)) goto LAB_07767440;
    iVar22 = *(int *)(lVar6 + 0x14);
    uVar5 = FUN_05a28f70(param_6,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar17,(float)iVar22,in_stack_00000090,lVar8,uStack000000000000005c,
                 in_stack_00000088._4_4_,uVar5,iStack0000000000000060,iStack0000000000000064,
                 uStack0000000000000058);
    iVar18 = iVar18 + 1;
    iVar17 = *(int *)(lVar4 + 0x18);
    if (iVar17 <= iVar18) break;
LAB_07767220:
    puVar1 = PTR_DAT_09f32e38;
    lVar6 = FUN_05badb74(lVar4,iVar18,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar6 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar1 = PTR_DAT_09f32e38;
  if (0 < iVar17) {
    iVar17 = 0;
    do {
      uVar5 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)puVar1);
      if (param_6 == 0) goto LAB_07767440;
      uVar13 = FUN_05a28f70(param_6,iVar17,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar13,uVar5,uVar13);
      lVar6 = FUN_05badb74(lVar4,iVar17,*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar4 + 0x18));
  }
  FUN_05baf9bc(lVar4,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


