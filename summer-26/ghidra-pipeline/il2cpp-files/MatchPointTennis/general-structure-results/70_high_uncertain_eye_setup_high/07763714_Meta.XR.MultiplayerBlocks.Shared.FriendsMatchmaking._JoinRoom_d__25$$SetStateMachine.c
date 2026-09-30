/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<JoinRoom>d__25$$SetStateMachine
ENTRY_POINT: 07763714
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
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<JoinRoom>d__25__SetStateMachine(long param_1)

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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long unaff_x19;
  float *pfVar25;
  long unaff_x23;
  int iVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  int iVar30;
  long in_stack_00000018;
  long in_stack_00000020;
  
  lVar20 = *(long *)(param_1 + 0x18);
  if (lVar20 != 0) {
    if (*(float *)(unaff_x23 + 0x34) < *(float *)(lVar20 + 0x34)) {
      *(long *)(param_1 + 0x18) = unaff_x23;
      thunk_FUN_044bb4b4();
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) {
      return 0;
    }
    if (3 < *(int *)(unaff_x19 + 0x10)) {
      lVar20 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
      if (lVar20 == 0) goto LAB_077640fc;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)PTR_DAT_09f32d78;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
      uVar17 = FUN_07a3b850(*(long *)(unaff_x19 + 0x18) + 0x10,0);
      if (*(uint *)(lVar20 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar20 + 0x28) = uVar17;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x28),uVar17);
      if (*(uint *)(lVar20 + 0x18) < 3) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
      uVar17 = FUN_07a3b850(*(long *)(unaff_x19 + 0x18) + 0x14,0);
      if (*(uint *)(lVar20 + 0x18) < 4) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x38) = uVar17;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x38),uVar17);
      if (*(uint *)(lVar20 + 0x18) < 5) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)PTR_DAT_09f32d50;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
      uVar17 = FUN_07a5081c(*(long *)(unaff_x19 + 0x18) + 0x2c,0);
      if (*(uint *)(lVar20 + 0x18) < 6) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x48) = uVar17;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x48),uVar17);
      if (*(uint *)(lVar20 + 0x18) < 7) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)PTR_DAT_09f32d58;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
      uVar17 = FUN_07a5081c(*(long *)(unaff_x19 + 0x18) + 0x30,0);
      if (*(uint *)(lVar20 + 0x18) < 8) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x58) = uVar17;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x58),uVar17);
      if (*(uint *)(lVar20 + 0x18) < 9) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x60) = *(undefined8 *)PTR_DAT_09f32d70;
      thunk_FUN_044bb4b4();
      lVar21 = *(long *)(unaff_x19 + 0x18);
      if (lVar21 == 0) goto LAB_077640fc;
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar17 = FUN_079a04dc(lVar21 + 0x28,0);
      if (*(uint *)(lVar20 + 0x18) < 10) goto LAB_07764100;
      *(undefined8 *)(lVar20 + 0x68) = uVar17;
      thunk_FUN_044bb4b4();
      uVar17 = FUN_078b57fc(lVar20,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar17,0);
    }
    puVar16 = PTR_DAT_09f32d48;
    puVar15 = PTR_DAT_09f32d38;
    puVar14 = PTR_DAT_09f32d10;
    puVar13 = PTR_DAT_09f32ce8;
    puVar12 = PTR_DAT_09f32cd8;
    lVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d08);
    FUN_05bad610(lVar20,*(undefined8 *)puVar13);
    lVar21 = thunk_FUN_0448520c(*(undefined8 *)puVar14);
    FUN_05bad610(lVar21,*(undefined8 *)puVar12);
    lVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar16);
    FUN_06761dfc(lVar18,*(undefined8 *)puVar15);
    puVar12 = PTR_DAT_09f32d30;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar27 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x20);
      if (lVar27 != 0) {
        if (lVar18 == 0) goto LAB_077640fc;
        do {
          FUN_067624d4(lVar18,lVar27,*(undefined8 *)puVar12);
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 == 0) goto LAB_077640fc;
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
          lVar27 = *(long *)(lVar27 + 0x20);
        } while (lVar27 != 0);
      }
      puVar14 = PTR_DAT_09f32d30;
      puVar13 = PTR_DAT_09f32d28;
      puVar12 = PTR_DAT_09f32cc0;
      if (lVar18 != 0) {
        iVar26 = *(int *)(lVar18 + 0x18);
        fVar10 = DAT_01c7661c;
        puVar11 = (undefined8 *)PTR_DAT_09f32ba8;
        while (DAT_01c7661c = fVar10, PTR_DAT_09f32ba8 = (undefined *)puVar11, 0 < iVar26) {
          lVar27 = FUN_067623e4(lVar18,*(undefined8 *)puVar13);
          if (lVar27 == 0) goto LAB_077640fc;
          if (*(int *)(lVar27 + 0x10) == 1) {
            if (lVar21 == 0) goto LAB_077640fc;
            lVar22 = *(long *)(lVar21 + 0x10);
            lVar24 = *(long *)puVar12;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_077640fc;
            uVar23 = *(uint *)(lVar21 + 0x18);
            if (uVar23 < *(uint *)(lVar22 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar23 + 1;
              plVar19 = (long *)(lVar22 + (long)(int)uVar23 * 8 + 0x20);
              *plVar19 = lVar27;
              thunk_FUN_044bb4b4(plVar19,lVar27);
            }
            else {
              FUN_05bade44(lVar21,lVar27,
                           *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 == 0) goto LAB_077640fc;
          if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_07764100;
          for (lVar27 = *(long *)(lVar27 + 0x28); lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x20)) {
            FUN_067624d4(lVar18,lVar27,*(undefined8 *)puVar14);
            lVar27 = *(long *)(lVar27 + 0x18);
            if (lVar27 == 0) goto LAB_077640fc;
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
          }
          fVar10 = DAT_01c7661c;
          puVar11 = (undefined8 *)PTR_DAT_09f32ba8;
          iVar26 = *(int *)(lVar18 + 0x18);
        }
        if (lVar21 != 0) {
          if (0 < *(int *)(lVar21 + 0x18)) {
            iVar26 = 0;
            do {
              lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
              FUN_05bad610(lVar18,*(undefined8 *)PTR_DAT_09f32ce0);
              uVar17 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
              FUN_077617f0(uVar17,lVar18);
              if (lVar18 == 0) goto LAB_077640fc;
              lVar27 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar18 + 0x18));
              lVar22 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar18 + 0x18));
              if (0 < *(int *)(lVar18 + 0x18)) {
                uVar28 = 0;
                pfVar25 = (float *)(lVar27 + 0x2c);
                do {
                  lVar24 = FUN_05badb74(lVar18,uVar28 & 0xffffffff,*puVar11);
                  if (lVar24 == 0) goto LAB_077640fc;
                  iVar6 = *(int *)(lVar24 + 0x1c);
                  lVar24 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
                  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
                  iVar7 = *(int *)(*(long *)(lVar24 + 0x20) + 0x10);
                  lVar24 = FUN_05badb74(lVar18,uVar28 & 0xffffffff,*puVar11);
                  if (lVar24 == 0) goto LAB_077640fc;
                  iVar8 = *(int *)(lVar24 + 0x20);
                  lVar24 = FUN_05badb74(lVar18,uVar28 & 0xffffffff,*puVar11);
                  if (lVar24 == 0) goto LAB_077640fc;
                  iVar9 = *(int *)(lVar24 + 0x14);
                  lVar24 = FUN_05badb74(lVar18,uVar28 & 0xffffffff,*puVar11);
                  if ((lVar24 == 0) || (lVar27 == 0)) goto LAB_077640fc;
                  if (*(uint *)(lVar27 + 0x18) <= uVar28) goto LAB_07764100;
                  iVar30 = *(int *)(lVar24 + 0x18);
                  pfVar25[-3] = (float)(iVar6 - iVar7);
                  pfVar25[-2] = (float)iVar8;
                  pfVar25[-1] = (float)iVar9;
                  *pfVar25 = (float)iVar30;
                  lVar24 = FUN_05badb74(lVar18,uVar28 & 0xffffffff,*puVar11);
                  if ((lVar24 == 0) || (lVar22 == 0)) goto LAB_077640fc;
                  if (*(uint *)(lVar22 + 0x18) <= uVar28) goto LAB_07764100;
                  pfVar25 = pfVar25 + 4;
                  *(undefined4 *)(lVar22 + 0x20 + uVar28 * 4) = *(undefined4 *)(lVar24 + 0x10);
                  uVar28 = uVar28 + 1;
                } while ((long)uVar28 < (long)*(int *)(lVar18 + 0x18));
              }
              if (in_stack_00000020 == 0) goto LAB_077640fc;
              uVar17 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
              lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
              FUN_07a80df4(lVar18,0);
              *(undefined8 *)(lVar18 + 0x28) = uVar17;
              thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x28),uVar17);
              puVar12 = PTR_DAT_09f32d00;
              uVar17 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
              puVar1 = (uint *)(lVar18 + 0x18);
              puVar2 = (uint *)(lVar18 + 0x1c);
              FUN_07762688(in_stack_00000018,uVar17,puVar1,puVar2);
              iVar6 = *(int *)(lVar18 + 0x18);
              lVar24 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)puVar12);
              if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
              *puVar1 = iVar6 - *(int *)(*(long *)(lVar24 + 0x20) + 0x10);
              lVar24 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar24 == 0) ||
                 (((*(long *)(lVar24 + 0x20) == 0 ||
                   (lVar24 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00),
                   lVar24 == 0)) || (*(long *)(lVar24 + 0x20) == 0)))) goto LAB_077640fc;
              if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
                uVar23 = *puVar2;
                uVar5 = *puVar1;
              }
              else {
                fVar29 = logf((float)(int)*puVar1);
                fVar29 = exp2f((float)(int)(fVar29 / fVar10));
                uVar4 = 0x80000000;
                if (fVar29 != INFINITY) {
                  uVar4 = (int)fVar29;
                }
                if (uVar4 < 3) {
                  uVar4 = 2;
                }
                lVar24 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
                if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
                uVar23 = *(uint *)(*(long *)(lVar24 + 0x20) + 0x18);
                if ((int)uVar23 <= (int)uVar4) {
                  uVar4 = uVar23;
                }
                fVar29 = logf((float)(int)*puVar2);
                fVar29 = exp2f((float)(int)(fVar29 / fVar10));
                uVar5 = 0x80000000;
                if (fVar29 != INFINITY) {
                  uVar5 = (int)fVar29;
                }
                if (uVar5 < 3) {
                  uVar5 = 2;
                }
                lVar24 = FUN_05badb74(lVar21,iVar26,*(undefined8 *)PTR_DAT_09f32d00);
                if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_077640fc;
                uVar23 = *(uint *)(*(long *)(lVar24 + 0x20) + 0x1c);
                if ((int)uVar23 <= (int)uVar5) {
                  uVar5 = uVar23;
                }
                uVar3 = uVar4;
                if ((int)uVar4 < 0) {
                  uVar3 = uVar4 + 1;
                }
                uVar23 = (int)uVar3 >> 1;
                if ((int)uVar3 >> 1 <= (int)uVar5) {
                  uVar23 = uVar5;
                }
                uVar3 = uVar23;
                if ((int)uVar23 < 0) {
                  uVar3 = uVar23 + 1;
                }
                uVar5 = (int)uVar3 >> 1;
                if ((int)uVar3 >> 1 <= (int)uVar4) {
                  uVar5 = uVar4;
                }
              }
              *(uint *)(lVar18 + 0x10) = uVar5;
              *(uint *)(lVar18 + 0x14) = uVar23;
              *(long *)(lVar18 + 0x20) = lVar27;
              thunk_FUN_044bb4b4();
              *(long *)(lVar18 + 0x30) = lVar22;
              thunk_FUN_044bb4b4((long *)(lVar18 + 0x30),lVar22);
              FUN_077606dc(lVar18);
              if (lVar20 == 0) goto LAB_077640fc;
              lVar27 = *(long *)(lVar20 + 0x10);
              lVar22 = *(long *)PTR_DAT_09f32cb8;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar27 == 0) goto LAB_077640fc;
              uVar23 = *(uint *)(lVar20 + 0x18);
              if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar23 + 1;
                plVar19 = (long *)(lVar27 + (long)(int)uVar23 * 8 + 0x20);
                *plVar19 = lVar18;
                thunk_FUN_044bb4b4(plVar19,lVar18);
              }
              else {
                FUN_05bade44(lVar20,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
              uVar17 = FUN_05a28f70(in_stack_00000020,iVar26,*(undefined8 *)PTR_DAT_09f32c78);
              FUN_07761148(uVar17,lVar18,uVar17);
              if (3 < *(int *)(in_stack_00000018 + 0x10)) {
                lVar27 = *(long *)PTR_DAT_09f22e40;
                lVar18 = *(long *)(lVar27 + 0x38);
                if (lVar18 == 0) {
                  FUN_04482014(lVar27);
                  lVar18 = *(long *)(lVar27 + 0x38);
                }
                lVar18 = *(long *)(lVar18 + 0x10);
                if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                  lVar18 = FUN_04481fb8();
                }
                if (*(int *)(lVar18 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar18 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
                if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                  lVar18 = FUN_04481fb8();
                }
                uVar17 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,
                                      **(undefined8 **)(lVar18 + 0xb8),0);
                lVar27 = *(long *)PTR_DAT_09f22e40;
                lVar18 = *(long *)(lVar27 + 0x38);
                if (lVar18 == 0) {
                  FUN_04482014(lVar27);
                  lVar18 = *(long *)(lVar27 + 0x38);
                }
                lVar18 = *(long *)(lVar18 + 0x10);
                if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                  lVar18 = FUN_04481fb8();
                }
                if (*(int *)(lVar18 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar18 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
                if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                  lVar18 = FUN_04481fb8();
                }
                FUN_0771ec00(uVar17,**(undefined8 **)(lVar18 + 0xb8),0);
              }
              iVar26 = iVar26 + 1;
            } while (iVar26 < *(int *)(lVar21 + 0x18));
          }
          if (lVar20 != 0) {
            uVar17 = FUN_05baf9bc(lVar20,*(undefined8 *)PTR_DAT_09f32cd0);
            return uVar17;
          }
        }
      }
    }
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


