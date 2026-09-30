/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<>c__DisplayClass29_0$$<SetGroupPresence>b__0
ENTRY_POINT: 07763430
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
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0__<SetGroupPresence>b__0
          (undefined1 param_1 [16],float param_2,undefined8 param_3,ulong param_4,undefined8 param_5
          )

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 *unaff_x19;
  float *pfVar25;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  int iVar26;
  long lVar27;
  long *unaff_x26;
  ulong unaff_x27;
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
    fVar28 = (float)FUN_05d0cfbc(param_3,param_4,param_5);
    iVar26 = unaff_w24;
    if (fVar28 != INFINITY) {
      iVar26 = (int)fVar28;
    }
    FUN_05d0cfbc(unaff_x23,unaff_x27 & 0xffffffff,*unaff_x19);
    puVar10 = PTR_DAT_09f32c78;
    iVar3 = unaff_w24;
    if (param_2 != INFINITY) {
      iVar3 = (int)param_2;
    }
    if (in_stack_00000020 == 0) goto LAB_077640fc;
    uVar16 = FUN_05a28f70(in_stack_00000020,unaff_x27 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
    iVar15 = in_stack_00000028 - ((uint)(uVar16 >> 0x1f) & 0xfffffffe);
    if (iVar15 <= iVar26) {
      iVar26 = iVar15;
    }
    iVar15 = FUN_05a28f70(in_stack_00000020,unaff_x27 & 0xffffffff,*(undefined8 *)puVar10);
    iVar15 = in_stack_00000030 + iVar15 * -2;
    if (iVar15 <= iVar3) {
      iVar3 = iVar15;
    }
    uVar16 = FUN_05a28f70(in_stack_00000020,unaff_x27 & 0xffffffff,*(undefined8 *)puVar10);
    lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    FUN_07a80df4(lVar17,0);
    iVar26 = ((uint)(uVar16 >> 0x1f) & 0xfffffffe) + iVar26;
    if (iVar26 <= in_stack_00000008._4_4_) {
      iVar26 = in_stack_00000008._4_4_;
    }
    iVar3 = iVar3 + (int)uVar16 * 2;
    *(int *)(lVar17 + 0x10) = (int)unaff_x27;
    *(int *)(lVar17 + 0x14) = iVar26;
    if (iVar3 <= in_stack_00000010) {
      iVar3 = in_stack_00000010;
    }
    *(int *)(lVar17 + 0x18) = iVar3;
    lVar18 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*unaff_x26 + 0x40));
    if (lVar18 == 0) {
      uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar19,0);
    }
    if (*(uint *)(unaff_x26 + 3) <= unaff_x27) goto LAB_07764100;
    *(long *)(unaff_x22 + unaff_x27 * 8) = lVar17;
    thunk_FUN_044bb4b4(unaff_x22 + unaff_x20,lVar17);
    puVar12 = PTR_DAT_09f32d20;
    puVar10 = PTR_DAT_09f32c98;
    unaff_x27 = unaff_x27 + 1;
    unaff_x20 = unaff_x20 + 8;
    if ((long)(int)unaff_x26[3] <= (long)unaff_x27) break;
    param_4 = unaff_x27 & 0xffffffff;
    param_5 = *(undefined8 *)PTR_DAT_09f32cf8;
    param_3 = unaff_x23;
    unaff_x19 = (undefined8 *)PTR_DAT_09f32cf8;
  }
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    FUN_07760ae0(in_stack_00000030);
    FUN_07760ae0(in_stack_00000028);
  }
  puVar11 = PTR_DAT_09f32ca8;
  lVar17 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_07a80df4(lVar17,0);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar10);
  FUN_07a80df4(uVar19,0);
  FUN_04b03f08();
  uVar16 = FUN_07762798(in_stack_00000018);
  if ((uVar16 & 1) != 0) {
    *(long *)(in_stack_00000018 + 0x18) = lVar17;
    thunk_FUN_044bb4b4((long *)(in_stack_00000018 + 0x18),lVar17);
  }
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar11);
  FUN_07a80df4(uVar19,0);
  FUN_04b03f08();
  uVar16 = FUN_07762798(in_stack_00000018);
  if ((uVar16 & 1) != 0) {
    if (lVar17 == 0) goto LAB_077640fc;
    plVar20 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar20 == 0) goto LAB_077640fc;
    if (*(float *)(lVar17 + 0x34) < *(float *)(*plVar20 + 0x34)) {
      *plVar20 = lVar17;
      thunk_FUN_044bb4b4(plVar20,lVar17);
    }
  }
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c90);
  FUN_07a80df4(uVar19,0);
  FUN_04b03f08();
  uVar16 = FUN_07762798(in_stack_00000018);
  if ((uVar16 & 1) != 0) {
    if (lVar17 == 0) goto LAB_077640fc;
    plVar20 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar20 == 0) goto LAB_077640fc;
    if (*(float *)(lVar17 + 0x34) < *(float *)(*plVar20 + 0x34)) {
      *plVar20 = lVar17;
      thunk_FUN_044bb4b4(plVar20,lVar17);
    }
  }
  if (*(long *)(in_stack_00000018 + 0x18) == 0) {
    return 0;
  }
  if (3 < *(int *)(in_stack_00000018 + 0x10)) {
    lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar17 == 0) goto LAB_077640fc;
    if (*(int *)(lVar17 + 0x18) == 0) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)PTR_DAT_09f32d78;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar19 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x10,0);
    if (*(uint *)(lVar17 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar17 + 0x28) = uVar19;
    thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x28),uVar19);
    if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar19 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x14,0);
    if (*(uint *)(lVar17 + 0x18) < 4) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x38) = uVar19;
    thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x38),uVar19);
    if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar19 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x2c,0);
    if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x48) = uVar19;
    thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x48),uVar19);
    if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar19 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x30,0);
    if (*(uint *)(lVar17 + 0x18) < 8) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x58) = uVar19;
    thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x58),uVar19);
    if (*(uint *)(lVar17 + 0x18) < 9) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar18 = *(long *)(in_stack_00000018 + 0x18);
    if (lVar18 == 0) goto LAB_077640fc;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar19 = FUN_079a04dc(lVar18 + 0x28,0);
    if (*(uint *)(lVar17 + 0x18) < 10) goto LAB_07764100;
    *(undefined8 *)(lVar17 + 0x68) = uVar19;
    thunk_FUN_044bb4b4();
    uVar19 = FUN_078b57fc(lVar17,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar19,0);
  }
  puVar14 = PTR_DAT_09f32d48;
  puVar13 = PTR_DAT_09f32d38;
  puVar11 = PTR_DAT_09f32d10;
  puVar12 = PTR_DAT_09f32ce8;
  puVar10 = PTR_DAT_09f32cd8;
  lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d08);
  FUN_05bad610(lVar17,*(undefined8 *)puVar12);
  lVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar11);
  FUN_05bad610(lVar18,*(undefined8 *)puVar10);
  lVar21 = thunk_FUN_0448520c(*(undefined8 *)puVar14);
  FUN_06761dfc(lVar21,*(undefined8 *)puVar13);
  puVar10 = PTR_DAT_09f32d30;
  if (*(long *)(in_stack_00000018 + 0x18) != 0) {
    lVar27 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
    if (lVar27 != 0) {
      if (lVar21 == 0) goto LAB_077640fc;
      do {
        FUN_067624d4(lVar21,lVar27,*(undefined8 *)puVar10);
        lVar27 = *(long *)(lVar27 + 0x18);
        if (lVar27 == 0) goto LAB_077640fc;
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
        lVar27 = *(long *)(lVar27 + 0x20);
      } while (lVar27 != 0);
    }
    puVar11 = PTR_DAT_09f32d30;
    puVar12 = PTR_DAT_09f32d28;
    puVar10 = PTR_DAT_09f32cc0;
    if (lVar21 != 0) {
      iVar26 = *(int *)(lVar21 + 0x18);
      fVar28 = DAT_01c7661c;
      puVar9 = (undefined8 *)PTR_DAT_09f32ba8;
      while (DAT_01c7661c = fVar28, PTR_DAT_09f32ba8 = (undefined *)puVar9, 0 < iVar26) {
        lVar27 = FUN_067623e4(lVar21,*(undefined8 *)puVar12);
        if (lVar27 == 0) goto LAB_077640fc;
        if (*(int *)(lVar27 + 0x10) == 1) {
          if (lVar18 == 0) goto LAB_077640fc;
          lVar22 = *(long *)(lVar18 + 0x10);
          lVar24 = *(long *)puVar10;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar22 == 0) goto LAB_077640fc;
          uVar23 = *(uint *)(lVar18 + 0x18);
          if (uVar23 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar23 + 1;
            plVar20 = (long *)(lVar22 + (long)(int)uVar23 * 8 + 0x20);
            *plVar20 = lVar27;
            thunk_FUN_044bb4b4(plVar20,lVar27);
          }
          else {
            FUN_05bade44(lVar18,lVar27,
                         *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar27 = *(long *)(lVar27 + 0x18);
        if (lVar27 == 0) goto LAB_077640fc;
        if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_07764100;
        for (lVar27 = *(long *)(lVar27 + 0x28); lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x20)) {
          FUN_067624d4(lVar21,lVar27,*(undefined8 *)puVar11);
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 == 0) goto LAB_077640fc;
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
        }
        fVar28 = DAT_01c7661c;
        puVar9 = (undefined8 *)PTR_DAT_09f32ba8;
        iVar26 = *(int *)(lVar21 + 0x18);
      }
      if (lVar18 != 0) {
        if (0 < *(int *)(lVar18 + 0x18)) {
          iVar26 = 0;
          do {
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
            FUN_05bad610(lVar21,*(undefined8 *)PTR_DAT_09f32ce0);
            uVar19 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
            FUN_077617f0(uVar19,lVar21);
            if (lVar21 == 0) goto LAB_077640fc;
            lVar27 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar21 + 0x18));
            lVar22 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar21 + 0x18));
            if (0 < *(int *)(lVar21 + 0x18)) {
              uVar16 = 0;
              pfVar25 = (float *)(lVar27 + 0x2c);
              do {
                lVar24 = FUN_05badb74(lVar21,uVar16 & 0xffffffff,*puVar9);
                if (lVar24 == 0) goto LAB_077640fc;
                iVar3 = *(int *)(lVar24 + 0x1c);
                lVar24 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
                if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
                iVar15 = *(int *)(*(long *)(lVar24 + 0x20) + 0x10);
                lVar24 = FUN_05badb74(lVar21,uVar16 & 0xffffffff,*puVar9);
                if (lVar24 == 0) goto LAB_077640fc;
                iVar7 = *(int *)(lVar24 + 0x20);
                lVar24 = FUN_05badb74(lVar21,uVar16 & 0xffffffff,*puVar9);
                if (lVar24 == 0) goto LAB_077640fc;
                iVar8 = *(int *)(lVar24 + 0x14);
                lVar24 = FUN_05badb74(lVar21,uVar16 & 0xffffffff,*puVar9);
                if ((lVar24 == 0) || (lVar27 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_07764100;
                iVar30 = *(int *)(lVar24 + 0x18);
                pfVar25[-3] = (float)(iVar3 - iVar15);
                pfVar25[-2] = (float)iVar7;
                pfVar25[-1] = (float)iVar8;
                *pfVar25 = (float)iVar30;
                lVar24 = FUN_05badb74(lVar21,uVar16 & 0xffffffff,*puVar9);
                if ((lVar24 == 0) || (lVar22 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_07764100;
                pfVar25 = pfVar25 + 4;
                *(undefined4 *)(lVar22 + 0x20 + uVar16 * 4) = *(undefined4 *)(lVar24 + 0x10);
                uVar16 = uVar16 + 1;
              } while ((long)uVar16 < (long)*(int *)(lVar21 + 0x18));
            }
            if (in_stack_00000020 == 0) goto LAB_077640fc;
            uVar19 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
            FUN_07a80df4(lVar21,0);
            *(undefined8 *)(lVar21 + 0x28) = uVar19;
            thunk_FUN_044bb4b4((undefined8 *)(lVar21 + 0x28),uVar19);
            puVar10 = PTR_DAT_09f32d00;
            uVar19 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
            puVar1 = (uint *)(lVar21 + 0x18);
            puVar2 = (uint *)(lVar21 + 0x1c);
            FUN_07762688(in_stack_00000018,uVar19,puVar1,puVar2);
            iVar3 = *(int *)(lVar21 + 0x18);
            lVar24 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)puVar10);
            if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
            *puVar1 = iVar3 - *(int *)(*(long *)(lVar24 + 0x20) + 0x10);
            lVar24 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar24 == 0) ||
               (((*(long *)(lVar24 + 0x20) == 0 ||
                 (lVar24 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00), lVar24 == 0)
                 ) || (*(long *)(lVar24 + 0x20) == 0)))) goto LAB_077640fc;
            if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
              uVar23 = *puVar2;
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
              lVar24 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
              uVar23 = *(uint *)(*(long *)(lVar24 + 0x20) + 0x18);
              if ((int)uVar23 <= (int)uVar5) {
                uVar5 = uVar23;
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
              lVar24 = FUN_05badb74(lVar18,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
              uVar23 = *(uint *)(*(long *)(lVar24 + 0x20) + 0x1c);
              if ((int)uVar23 <= (int)uVar6) {
                uVar6 = uVar23;
              }
              uVar4 = uVar5;
              if ((int)uVar5 < 0) {
                uVar4 = uVar5 + 1;
              }
              uVar23 = (int)uVar4 >> 1;
              if ((int)uVar4 >> 1 <= (int)uVar6) {
                uVar23 = uVar6;
              }
              uVar4 = uVar23;
              if ((int)uVar23 < 0) {
                uVar4 = uVar23 + 1;
              }
              uVar6 = (int)uVar4 >> 1;
              if ((int)uVar4 >> 1 <= (int)uVar5) {
                uVar6 = uVar5;
              }
            }
            *(uint *)(lVar21 + 0x10) = uVar6;
            *(uint *)(lVar21 + 0x14) = uVar23;
            *(long *)(lVar21 + 0x20) = lVar27;
            thunk_FUN_044bb4b4();
            *(long *)(lVar21 + 0x30) = lVar22;
            thunk_FUN_044bb4b4((long *)(lVar21 + 0x30),lVar22);
            FUN_077606dc(lVar21);
            if (lVar17 == 0) goto LAB_077640fc;
            lVar27 = *(long *)(lVar17 + 0x10);
            lVar22 = *(long *)PTR_DAT_09f32cb8;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar27 == 0) goto LAB_077640fc;
            uVar23 = *(uint *)(lVar17 + 0x18);
            if (uVar23 < *(uint *)(lVar27 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar23 + 1;
              plVar20 = (long *)(lVar27 + (long)(int)uVar23 * 8 + 0x20);
              *plVar20 = lVar21;
              thunk_FUN_044bb4b4(plVar20,lVar21);
            }
            else {
              FUN_05bade44(lVar17,lVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
            uVar19 = FUN_05a28f70(in_stack_00000020,iVar26,*(undefined8 *)PTR_DAT_09f32c78);
            FUN_07761148(uVar19,lVar21,uVar19);
            if (3 < *(int *)(in_stack_00000018 + 0x10)) {
              lVar27 = *(long *)PTR_DAT_09f22e40;
              lVar21 = *(long *)(lVar27 + 0x38);
              if (lVar21 == 0) {
                FUN_04482014(lVar27);
                lVar21 = *(long *)(lVar27 + 0x38);
              }
              lVar21 = *(long *)(lVar21 + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar21 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              uVar19 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar21 + 0xb8)
                                    ,0);
              lVar27 = *(long *)PTR_DAT_09f22e40;
              lVar21 = *(long *)(lVar27 + 0x38);
              if (lVar21 == 0) {
                FUN_04482014(lVar27);
                lVar21 = *(long *)(lVar27 + 0x38);
              }
              lVar21 = *(long *)(lVar21 + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar21 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar19,**(undefined8 **)(lVar21 + 0xb8),0);
            }
            iVar26 = iVar26 + 1;
          } while (iVar26 < *(int *)(lVar18 + 0x18));
        }
        if (lVar17 != 0) {
          uVar19 = FUN_05baf9bc(lVar17,*(undefined8 *)PTR_DAT_09f32cd0);
          return uVar19;
        }
      }
    }
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


