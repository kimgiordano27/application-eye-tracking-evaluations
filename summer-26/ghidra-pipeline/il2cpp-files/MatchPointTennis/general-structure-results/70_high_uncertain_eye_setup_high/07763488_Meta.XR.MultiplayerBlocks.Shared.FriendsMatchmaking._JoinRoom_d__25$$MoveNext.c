/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<JoinRoom>d__25$$MoveNext
ENTRY_POINT: 07763488
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


undefined8
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<JoinRoom>d__25__MoveNext
          (undefined1 param_1 [16],float param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  undefined8 unaff_x19;
  float *pfVar26;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long lVar27;
  long *unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  int unaff_w29;
  float fVar28;
  float fVar29;
  int iVar30;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  int in_stack_00000028;
  int in_stack_00000030;
  
  while( true ) {
    iVar16 = in_stack_00000028 - ((uint)(param_3 >> 0x1f) & 0xfffffffe);
    if (iVar16 <= unaff_w29) {
      unaff_w29 = iVar16;
    }
    iVar16 = FUN_05a28f70(unaff_x23,unaff_x27 & 0xffffffff,*unaff_x21);
    iVar16 = in_stack_00000030 + iVar16 * -2;
    if (iVar16 <= unaff_w28) {
      unaff_w28 = iVar16;
    }
    uVar17 = FUN_05a28f70(unaff_x23,unaff_x27 & 0xffffffff,*unaff_x21);
    lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    FUN_07a80df4(lVar18,0);
    iVar16 = ((uint)(uVar17 >> 0x1f) & 0xfffffffe) + unaff_w29;
    if (iVar16 <= in_stack_00000008._4_4_) {
      iVar16 = in_stack_00000008._4_4_;
    }
    iVar3 = unaff_w28 + (int)uVar17 * 2;
    *(int *)(lVar18 + 0x10) = (int)unaff_x27;
    *(int *)(lVar18 + 0x14) = iVar16;
    if (iVar3 <= in_stack_00000010) {
      iVar3 = in_stack_00000010;
    }
    *(int *)(lVar18 + 0x18) = iVar3;
    lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x26 + 0x40));
    if (lVar19 == 0) {
      uVar20 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar20,0);
    }
    if (*(uint *)(unaff_x26 + 3) <= unaff_x27) goto LAB_07764100;
    *(long *)(unaff_x22 + unaff_x27 * 8) = lVar18;
    thunk_FUN_044bb4b4(unaff_x22 + unaff_x20,lVar18);
    puVar13 = PTR_DAT_09f32d20;
    puVar12 = PTR_DAT_09f32cf8;
    puVar11 = PTR_DAT_09f32c98;
    unaff_x27 = unaff_x27 + 1;
    unaff_x20 = unaff_x20 + 8;
    if ((long)(int)unaff_x26[3] <= (long)unaff_x27) break;
    fVar28 = (float)FUN_05d0cfbc(unaff_x19,unaff_x27 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
    unaff_w29 = unaff_w24;
    if (fVar28 != INFINITY) {
      unaff_w29 = (int)fVar28;
    }
    FUN_05d0cfbc(unaff_x19,unaff_x27 & 0xffffffff,*(undefined8 *)puVar12);
    unaff_x21 = (undefined8 *)PTR_DAT_09f32c78;
    unaff_w28 = unaff_w24;
    if (param_2 != INFINITY) {
      unaff_w28 = (int)param_2;
    }
    if (in_stack_00000020 == 0) goto LAB_077640fc;
    param_3 = FUN_05a28f70(in_stack_00000020,unaff_x27 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78)
    ;
    unaff_x23 = in_stack_00000020;
  }
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    FUN_07760ae0(in_stack_00000030);
    FUN_07760ae0(in_stack_00000028);
  }
  puVar12 = PTR_DAT_09f32ca8;
  lVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar13);
  FUN_07a80df4(lVar18,0);
  uVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar11);
  FUN_07a80df4(uVar20,0);
  FUN_04b03f08();
  uVar17 = FUN_07762798(in_stack_00000018);
  if ((uVar17 & 1) != 0) {
    *(long *)(in_stack_00000018 + 0x18) = lVar18;
    thunk_FUN_044bb4b4((long *)(in_stack_00000018 + 0x18),lVar18);
  }
  uVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_07a80df4(uVar20,0);
  FUN_04b03f08();
  uVar17 = FUN_07762798(in_stack_00000018);
  if ((uVar17 & 1) != 0) {
    if (lVar18 == 0) goto LAB_077640fc;
    plVar21 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar21 == 0) goto LAB_077640fc;
    if (*(float *)(lVar18 + 0x34) < *(float *)(*plVar21 + 0x34)) {
      *plVar21 = lVar18;
      thunk_FUN_044bb4b4(plVar21,lVar18);
    }
  }
  uVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c90);
  FUN_07a80df4(uVar20,0);
  FUN_04b03f08();
  uVar17 = FUN_07762798(in_stack_00000018);
  if ((uVar17 & 1) != 0) {
    if (lVar18 == 0) goto LAB_077640fc;
    plVar21 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar21 == 0) goto LAB_077640fc;
    if (*(float *)(lVar18 + 0x34) < *(float *)(*plVar21 + 0x34)) {
      *plVar21 = lVar18;
      thunk_FUN_044bb4b4(plVar21,lVar18);
    }
  }
  if (*(long *)(in_stack_00000018 + 0x18) == 0) {
    return 0;
  }
  if (3 < *(int *)(in_stack_00000018 + 0x10)) {
    lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar18 == 0) goto LAB_077640fc;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_09f32d78;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x10,0);
    if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x28) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x28),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x14,0);
    if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x38) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x38),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x2c,0);
    if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x48) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x48),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x30,0);
    if (*(uint *)(lVar18 + 0x18) < 8) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x58) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x58),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 9) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x60) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar19 = *(long *)(in_stack_00000018 + 0x18);
    if (lVar19 == 0) goto LAB_077640fc;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar20 = FUN_079a04dc(lVar19 + 0x28,0);
    if (*(uint *)(lVar18 + 0x18) < 10) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x68) = uVar20;
    thunk_FUN_044bb4b4();
    uVar20 = FUN_078b57fc(lVar18,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar20,0);
  }
  puVar15 = PTR_DAT_09f32d48;
  puVar14 = PTR_DAT_09f32d38;
  puVar13 = PTR_DAT_09f32d10;
  puVar12 = PTR_DAT_09f32ce8;
  puVar11 = PTR_DAT_09f32cd8;
  lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d08);
  FUN_05bad610(lVar18,*(undefined8 *)puVar12);
  lVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar13);
  FUN_05bad610(lVar19,*(undefined8 *)puVar11);
  lVar22 = thunk_FUN_0448520c(*(undefined8 *)puVar15);
  FUN_06761dfc(lVar22,*(undefined8 *)puVar14);
  puVar11 = PTR_DAT_09f32d30;
  if (*(long *)(in_stack_00000018 + 0x18) != 0) {
    lVar27 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
    if (lVar27 == 0) goto LAB_07763a20;
    if (lVar22 != 0) goto LAB_077639f8;
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
    lVar27 = *(long *)(lVar27 + 0x20);
    if (lVar27 == 0) break;
LAB_077639f8:
    FUN_067624d4(lVar22,lVar27,*(undefined8 *)puVar11);
    lVar27 = *(long *)(lVar27 + 0x18);
    if (lVar27 == 0) goto LAB_077640fc;
  }
LAB_07763a20:
  puVar13 = PTR_DAT_09f32d30;
  puVar12 = PTR_DAT_09f32d28;
  puVar11 = PTR_DAT_09f32cc0;
  if (lVar22 != 0) {
    iVar16 = *(int *)(lVar22 + 0x18);
    fVar28 = DAT_01c7661c;
    puVar10 = (undefined8 *)PTR_DAT_09f32ba8;
    while (DAT_01c7661c = fVar28, PTR_DAT_09f32ba8 = (undefined *)puVar10, 0 < iVar16) {
      lVar27 = FUN_067623e4(lVar22,*(undefined8 *)puVar12);
      if (lVar27 == 0) goto LAB_077640fc;
      if (*(int *)(lVar27 + 0x10) == 1) {
        if (lVar19 == 0) goto LAB_077640fc;
        lVar23 = *(long *)(lVar19 + 0x10);
        lVar25 = *(long *)puVar11;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_077640fc;
        uVar24 = *(uint *)(lVar19 + 0x18);
        if (uVar24 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar24 + 1;
          plVar21 = (long *)(lVar23 + (long)(int)uVar24 * 8 + 0x20);
          *plVar21 = lVar27;
          thunk_FUN_044bb4b4(plVar21,lVar27);
        }
        else {
          FUN_05bade44(lVar19,lVar27,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar27 = *(long *)(lVar27 + 0x18);
      if (lVar27 == 0) goto LAB_077640fc;
      if (*(uint *)(lVar27 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      for (lVar27 = *(long *)(lVar27 + 0x28); lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x20)) {
        FUN_067624d4(lVar22,lVar27,*(undefined8 *)puVar13);
        lVar27 = *(long *)(lVar27 + 0x18);
        if (lVar27 == 0) goto LAB_077640fc;
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
      }
      fVar28 = DAT_01c7661c;
      puVar10 = (undefined8 *)PTR_DAT_09f32ba8;
      iVar16 = *(int *)(lVar22 + 0x18);
    }
    if (lVar19 != 0) {
      if (0 < *(int *)(lVar19 + 0x18)) {
        iVar16 = 0;
        do {
          lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
          FUN_05bad610(lVar22,*(undefined8 *)PTR_DAT_09f32ce0);
          uVar20 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
          FUN_077617f0(uVar20,lVar22);
          if (lVar22 == 0) goto LAB_077640fc;
          lVar27 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar22 + 0x18));
          lVar23 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar22 + 0x18));
          if (0 < *(int *)(lVar22 + 0x18)) {
            uVar17 = 0;
            pfVar26 = (float *)(lVar27 + 0x2c);
            do {
              lVar25 = FUN_05badb74(lVar22,uVar17 & 0xffffffff,*puVar10);
              if (lVar25 == 0) goto LAB_077640fc;
              iVar3 = *(int *)(lVar25 + 0x1c);
              lVar25 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
              iVar7 = *(int *)(*(long *)(lVar25 + 0x20) + 0x10);
              lVar25 = FUN_05badb74(lVar22,uVar17 & 0xffffffff,*puVar10);
              if (lVar25 == 0) goto LAB_077640fc;
              iVar8 = *(int *)(lVar25 + 0x20);
              lVar25 = FUN_05badb74(lVar22,uVar17 & 0xffffffff,*puVar10);
              if (lVar25 == 0) goto LAB_077640fc;
              iVar9 = *(int *)(lVar25 + 0x14);
              lVar25 = FUN_05badb74(lVar22,uVar17 & 0xffffffff,*puVar10);
              if ((lVar25 == 0) || (lVar27 == 0)) goto LAB_077640fc;
              if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_07764100;
              iVar30 = *(int *)(lVar25 + 0x18);
              pfVar26[-3] = (float)(iVar3 - iVar7);
              pfVar26[-2] = (float)iVar8;
              pfVar26[-1] = (float)iVar9;
              *pfVar26 = (float)iVar30;
              lVar25 = FUN_05badb74(lVar22,uVar17 & 0xffffffff,*puVar10);
              if ((lVar25 == 0) || (lVar23 == 0)) goto LAB_077640fc;
              if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_07764100;
              pfVar26 = pfVar26 + 4;
              *(undefined4 *)(lVar23 + 0x20 + uVar17 * 4) = *(undefined4 *)(lVar25 + 0x10);
              uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)*(int *)(lVar22 + 0x18));
          }
          if (in_stack_00000020 == 0) goto LAB_077640fc;
          uVar20 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
          lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
          FUN_07a80df4(lVar22,0);
          *(undefined8 *)(lVar22 + 0x28) = uVar20;
          thunk_FUN_044bb4b4((undefined8 *)(lVar22 + 0x28),uVar20);
          puVar11 = PTR_DAT_09f32d00;
          uVar20 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
          puVar1 = (uint *)(lVar22 + 0x18);
          puVar2 = (uint *)(lVar22 + 0x1c);
          FUN_07762688(in_stack_00000018,uVar20,puVar1,puVar2);
          iVar3 = *(int *)(lVar22 + 0x18);
          lVar25 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)puVar11);
          if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
          *puVar1 = iVar3 - *(int *)(*(long *)(lVar25 + 0x20) + 0x10);
          lVar25 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
          if ((lVar25 == 0) ||
             (((*(long *)(lVar25 + 0x20) == 0 ||
               (lVar25 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00), lVar25 == 0))
              || (*(long *)(lVar25 + 0x20) == 0)))) goto LAB_077640fc;
          if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
            uVar24 = *puVar2;
            uVar6 = *puVar1;
          }
          else {
            fVar29 = logf((float)(int)*puVar1);
            fVar29 = exp2f((float)(int)(fVar29 / fVar28));
            uVar5 = 0x80000000;
            if (fVar29 != INFINITY) {
              uVar5 = (int)fVar29;
            }
            if (uVar5 < 3) {
              uVar5 = 2;
            }
            lVar25 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
            uVar24 = *(uint *)(*(long *)(lVar25 + 0x20) + 0x18);
            if ((int)uVar24 <= (int)uVar5) {
              uVar5 = uVar24;
            }
            fVar29 = logf((float)(int)*puVar2);
            fVar29 = exp2f((float)(int)(fVar29 / fVar28));
            uVar6 = 0x80000000;
            if (fVar29 != INFINITY) {
              uVar6 = (int)fVar29;
            }
            if (uVar6 < 3) {
              uVar6 = 2;
            }
            lVar25 = FUN_05badb74(lVar19,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
            uVar24 = *(uint *)(*(long *)(lVar25 + 0x20) + 0x1c);
            if ((int)uVar24 <= (int)uVar6) {
              uVar6 = uVar24;
            }
            uVar4 = uVar5;
            if ((int)uVar5 < 0) {
              uVar4 = uVar5 + 1;
            }
            uVar24 = (int)uVar4 >> 1;
            if ((int)uVar4 >> 1 <= (int)uVar6) {
              uVar24 = uVar6;
            }
            uVar4 = uVar24;
            if ((int)uVar24 < 0) {
              uVar4 = uVar24 + 1;
            }
            uVar6 = (int)uVar4 >> 1;
            if ((int)uVar4 >> 1 <= (int)uVar5) {
              uVar6 = uVar5;
            }
          }
          *(uint *)(lVar22 + 0x10) = uVar6;
          *(uint *)(lVar22 + 0x14) = uVar24;
          *(long *)(lVar22 + 0x20) = lVar27;
          thunk_FUN_044bb4b4();
          *(long *)(lVar22 + 0x30) = lVar23;
          thunk_FUN_044bb4b4((long *)(lVar22 + 0x30),lVar23);
          FUN_077606dc(lVar22);
          if (lVar18 == 0) goto LAB_077640fc;
          lVar27 = *(long *)(lVar18 + 0x10);
          lVar23 = *(long *)PTR_DAT_09f32cb8;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar27 == 0) goto LAB_077640fc;
          uVar24 = *(uint *)(lVar18 + 0x18);
          if (uVar24 < *(uint *)(lVar27 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar24 + 1;
            plVar21 = (long *)(lVar27 + (long)(int)uVar24 * 8 + 0x20);
            *plVar21 = lVar22;
            thunk_FUN_044bb4b4(plVar21,lVar22);
          }
          else {
            FUN_05bade44(lVar18,lVar22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          uVar20 = FUN_05a28f70(in_stack_00000020,iVar16,*(undefined8 *)PTR_DAT_09f32c78);
          FUN_07761148(uVar20,lVar22,uVar20);
          if (3 < *(int *)(in_stack_00000018 + 0x10)) {
            lVar27 = *(long *)PTR_DAT_09f22e40;
            lVar22 = *(long *)(lVar27 + 0x38);
            if (lVar22 == 0) {
              FUN_04482014(lVar27);
              lVar22 = *(long *)(lVar27 + 0x38);
            }
            lVar22 = *(long *)(lVar22 + 0x10);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = FUN_04481fb8();
            }
            if (*(int *)(lVar22 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = FUN_04481fb8();
            }
            uVar20 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar22 + 0xb8),0
                                 );
            lVar27 = *(long *)PTR_DAT_09f22e40;
            lVar22 = *(long *)(lVar27 + 0x38);
            if (lVar22 == 0) {
              FUN_04482014(lVar27);
              lVar22 = *(long *)(lVar27 + 0x38);
            }
            lVar22 = *(long *)(lVar22 + 0x10);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = FUN_04481fb8();
            }
            if (*(int *)(lVar22 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar20,**(undefined8 **)(lVar22 + 0xb8),0);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar19 + 0x18));
      }
      if (lVar18 != 0) {
        uVar20 = FUN_05baf9bc(lVar18,*(undefined8 *)PTR_DAT_09f32cd0);
        return uVar20;
      }
    }
  }
  goto LAB_077640fc;
}


