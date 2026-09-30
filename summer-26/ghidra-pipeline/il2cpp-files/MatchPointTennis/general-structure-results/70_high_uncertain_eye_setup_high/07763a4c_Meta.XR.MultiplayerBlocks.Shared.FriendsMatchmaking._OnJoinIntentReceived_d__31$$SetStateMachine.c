/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<OnJoinIntentReceived>d__31$$SetStateMachine
ENTRY_POINT: 07763a4c
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


void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<OnJoinIntentReceived>d__31__SetStateMachine
               (void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  float *pfVar20;
  long unaff_x23;
  int iVar21;
  long unaff_x27;
  ulong uVar22;
  long unaff_x29;
  float fVar23;
  int iVar24;
  long in_stack_00000018;
  long in_stack_00000020;
  
  do {
    lVar13 = FUN_067623e4();
    if (lVar13 == 0) goto LAB_077640fc;
    if (*(int *)(lVar13 + 0x10) == 1) {
      if (unaff_x29 == 0) goto LAB_077640fc;
      lVar18 = *(long *)(unaff_x29 + 0x10);
      *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_077640fc;
      uVar19 = *(uint *)(unaff_x29 + 0x18);
      if (uVar19 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(unaff_x29 + 0x18) = uVar19 + 1;
        plVar14 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
        *plVar14 = lVar13;
        thunk_FUN_044bb4b4(plVar14,lVar13);
      }
      else {
        FUN_05bade44();
      }
    }
    lVar13 = *(long *)(lVar13 + 0x18);
    if (lVar13 == 0) goto LAB_077640fc;
    if (*(uint *)(lVar13 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    fVar10 = DAT_01c7661c;
    puVar11 = (undefined8 *)PTR_DAT_09f32ba8;
    for (lVar13 = *(long *)(lVar13 + 0x28); DAT_01c7661c = fVar10,
        PTR_DAT_09f32ba8 = (undefined *)puVar11, lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x20)) {
      FUN_067624d4();
      lVar13 = *(long *)(lVar13 + 0x18);
      if (lVar13 == 0) goto LAB_077640fc;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_07764100;
      fVar10 = DAT_01c7661c;
      puVar11 = (undefined8 *)PTR_DAT_09f32ba8;
    }
  } while (0 < *(int *)(unaff_x23 + 0x18));
  if (unaff_x29 != 0) {
    if (0 < *(int *)(unaff_x29 + 0x18)) {
      iVar21 = 0;
      do {
        lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
        FUN_05bad610(lVar13,*(undefined8 *)PTR_DAT_09f32ce0);
        uVar15 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00);
        FUN_077617f0(uVar15,lVar13);
        if (lVar13 == 0) goto LAB_077640fc;
        lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar13 + 0x18));
        lVar16 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar13 + 0x18));
        if (0 < *(int *)(lVar13 + 0x18)) {
          uVar22 = 0;
          pfVar20 = (float *)(lVar18 + 0x2c);
          do {
            lVar17 = FUN_05badb74(lVar13,uVar22 & 0xffffffff,*puVar11);
            if (lVar17 == 0) goto LAB_077640fc;
            iVar6 = *(int *)(lVar17 + 0x1c);
            lVar17 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_077640fc;
            iVar7 = *(int *)(*(long *)(lVar17 + 0x20) + 0x10);
            lVar17 = FUN_05badb74(lVar13,uVar22 & 0xffffffff,*puVar11);
            if (lVar17 == 0) goto LAB_077640fc;
            iVar8 = *(int *)(lVar17 + 0x20);
            lVar17 = FUN_05badb74(lVar13,uVar22 & 0xffffffff,*puVar11);
            if (lVar17 == 0) goto LAB_077640fc;
            iVar9 = *(int *)(lVar17 + 0x14);
            lVar17 = FUN_05badb74(lVar13,uVar22 & 0xffffffff,*puVar11);
            if ((lVar17 == 0) || (lVar18 == 0)) goto LAB_077640fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_07764100;
            iVar24 = *(int *)(lVar17 + 0x18);
            pfVar20[-3] = (float)(iVar6 - iVar7);
            pfVar20[-2] = (float)iVar8;
            pfVar20[-1] = (float)iVar9;
            *pfVar20 = (float)iVar24;
            lVar17 = FUN_05badb74(lVar13,uVar22 & 0xffffffff,*puVar11);
            if ((lVar17 == 0) || (lVar16 == 0)) goto LAB_077640fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_07764100;
            pfVar20 = pfVar20 + 4;
            *(undefined4 *)(lVar16 + 0x20 + uVar22 * 4) = *(undefined4 *)(lVar17 + 0x10);
            uVar22 = uVar22 + 1;
          } while ((long)uVar22 < (long)*(int *)(lVar13 + 0x18));
        }
        if (in_stack_00000020 == 0) goto LAB_077640fc;
        uVar15 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar13,0);
        *(undefined8 *)(lVar13 + 0x28) = uVar15;
        thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x28),uVar15);
        puVar12 = PTR_DAT_09f32d00;
        uVar15 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00);
        puVar1 = (uint *)(lVar13 + 0x18);
        puVar2 = (uint *)(lVar13 + 0x1c);
        FUN_07762688(in_stack_00000018,uVar15,puVar1,puVar2);
        iVar6 = *(int *)(lVar13 + 0x18);
        lVar17 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)puVar12);
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_077640fc;
        *puVar1 = iVar6 - *(int *)(*(long *)(lVar17 + 0x20) + 0x10);
        lVar17 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00);
        if ((lVar17 == 0) ||
           (((*(long *)(lVar17 + 0x20) == 0 ||
             (lVar17 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00), lVar17 == 0))
            || (*(long *)(lVar17 + 0x20) == 0)))) goto LAB_077640fc;
        if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
          uVar19 = *puVar2;
          uVar5 = *puVar1;
        }
        else {
          fVar23 = logf((float)(int)*puVar1);
          fVar23 = exp2f((float)(int)(fVar23 / fVar10));
          uVar4 = 0x80000000;
          if (fVar23 != INFINITY) {
            uVar4 = (int)fVar23;
          }
          if (uVar4 < 3) {
            uVar4 = 2;
          }
          lVar17 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00);
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_077640fc;
          uVar19 = *(uint *)(*(long *)(lVar17 + 0x20) + 0x18);
          if ((int)uVar19 <= (int)uVar4) {
            uVar4 = uVar19;
          }
          fVar23 = logf((float)(int)*puVar2);
          fVar23 = exp2f((float)(int)(fVar23 / fVar10));
          uVar5 = 0x80000000;
          if (fVar23 != INFINITY) {
            uVar5 = (int)fVar23;
          }
          if (uVar5 < 3) {
            uVar5 = 2;
          }
          lVar17 = FUN_05badb74(unaff_x29,iVar21,*(undefined8 *)PTR_DAT_09f32d00);
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_077640fc;
          uVar19 = *(uint *)(*(long *)(lVar17 + 0x20) + 0x1c);
          if ((int)uVar19 <= (int)uVar5) {
            uVar5 = uVar19;
          }
          uVar3 = uVar4;
          if ((int)uVar4 < 0) {
            uVar3 = uVar4 + 1;
          }
          uVar19 = (int)uVar3 >> 1;
          if ((int)uVar3 >> 1 <= (int)uVar5) {
            uVar19 = uVar5;
          }
          uVar3 = uVar19;
          if ((int)uVar19 < 0) {
            uVar3 = uVar19 + 1;
          }
          uVar5 = (int)uVar3 >> 1;
          if ((int)uVar3 >> 1 <= (int)uVar4) {
            uVar5 = uVar4;
          }
        }
        *(uint *)(lVar13 + 0x10) = uVar5;
        *(uint *)(lVar13 + 0x14) = uVar19;
        *(long *)(lVar13 + 0x20) = lVar18;
        thunk_FUN_044bb4b4();
        *(long *)(lVar13 + 0x30) = lVar16;
        thunk_FUN_044bb4b4((long *)(lVar13 + 0x30),lVar16);
        FUN_077606dc(lVar13);
        if (unaff_x27 == 0) goto LAB_077640fc;
        lVar18 = *(long *)(unaff_x27 + 0x10);
        lVar16 = *(long *)PTR_DAT_09f32cb8;
        *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_077640fc;
        uVar19 = *(uint *)(unaff_x27 + 0x18);
        if (uVar19 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(unaff_x27 + 0x18) = uVar19 + 1;
          plVar14 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
          *plVar14 = lVar13;
          thunk_FUN_044bb4b4(plVar14,lVar13);
        }
        else {
          FUN_05bade44(unaff_x27,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = FUN_05a28f70(in_stack_00000020,iVar21,*(undefined8 *)PTR_DAT_09f32c78);
        FUN_07761148(uVar15,lVar13,uVar15);
        if (3 < *(int *)(in_stack_00000018 + 0x10)) {
          lVar18 = *(long *)PTR_DAT_09f22e40;
          lVar13 = *(long *)(lVar18 + 0x38);
          if (lVar13 == 0) {
            FUN_04482014(lVar18);
            lVar13 = *(long *)(lVar18 + 0x38);
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_04481fb8();
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_04481fb8();
          }
          uVar15 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar13 + 0xb8),0);
          lVar18 = *(long *)PTR_DAT_09f22e40;
          lVar13 = *(long *)(lVar18 + 0x38);
          if (lVar13 == 0) {
            FUN_04482014(lVar18);
            lVar13 = *(long *)(lVar18 + 0x38);
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_04481fb8();
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar15,**(undefined8 **)(lVar13 + 0xb8),0);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)(unaff_x29 + 0x18));
    }
    if (unaff_x27 != 0) {
      FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
      return;
    }
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


