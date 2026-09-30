/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$MoveNext
ENTRY_POINT: 07764b10
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__MoveNext
               (void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint in_w8;
  uint uVar12;
  long lVar13;
  uint in_w9;
  uint unaff_w19;
  long unaff_x20;
  uint uVar14;
  long lVar15;
  int iVar16;
  long *unaff_x22;
  long *plVar17;
  uint unaff_w23;
  long *plVar18;
  long unaff_x24;
  uint unaff_w25;
  uint unaff_w27;
  int unaff_w28;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  float unaff_s8;
  float unaff_s9;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000050;
  int iStack000000000000006c;
  long in_stack_00000088;
  undefined8 in_stack_000000b0;
  float fStack00000000000000b8;
  uint uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  int iStack00000000000000d0;
  uint uStack00000000000000d4;
  uint in_stack_000000d8;
  uint uStack00000000000000dc;
  
  if (!in_ZR) {
    in_w8 = in_w9;
  }
  if ((int)in_w8 <= (int)unaff_w19) {
    in_w8 = unaff_w19;
  }
  uVar14 = unaff_w25;
  if (unaff_w28 < (int)unaff_w19) {
    if (*(char *)(unaff_x24 + 0x737) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      *(undefined1 *)(unaff_x24 + 0x737) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar14 = 0x80000000;
    if ((float)(int)(unaff_s8 / unaff_s9) != INFINITY) {
      uVar14 = (int)(unaff_s8 / unaff_s9);
    }
    in_w8 = unaff_w19;
    if ((int)uVar14 <= (int)unaff_w25) {
      uVar14 = unaff_w25;
    }
  }
  puVar6 = PTR_DAT_09f32de8;
  puVar5 = PTR_DAT_09f32d20;
  puVar4 = PTR_DAT_09f22e40;
  uVar12 = 4;
  if (uVar14 != 0) {
    uVar12 = uVar14;
  }
  in_stack_000000d8 = 4;
  if (in_w8 != 0) {
    in_stack_000000d8 = in_w8;
  }
  iVar22 = unaff_w28 * 1000;
  iVar21 = -0x80000000;
  if ((float)(int)uVar12 * DAT_01c759d8 != INFINITY) {
    iVar21 = (int)((float)(int)uVar12 * DAT_01c759d8);
  }
  iStack000000000000006c = -0x80000000;
  if ((float)(int)in_stack_000000d8 * DAT_01c759d8 != INFINITY) {
    iStack000000000000006c = (int)((float)(int)in_stack_000000d8 * DAT_01c759d8);
  }
  if (iVar21 == 0) {
    iVar21 = 1;
  }
  if (iStack000000000000006c == 0) {
    iStack000000000000006c = 1;
  }
  plVar17 = (long *)(unaff_x20 + 0x18);
  uStack00000000000000dc = uVar12;
  if ((int)in_stack_000000d8 < iVar22) {
    do {
      iVar16 = 0;
      uStack00000000000000dc = uVar12;
      while ((int)uStack00000000000000dc < iVar22) {
        lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
        FUN_07a80df4(lVar7,0);
        if (4 < *(int *)(unaff_x20 + 0x10)) {
          uVar8 = FUN_07a3b850(&stack0x000000d8,0);
          uVar9 = FUN_07a3b850(&stack0x000000dc,0);
          uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar8,*(undefined8 *)puVar6,uVar9,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar8,0);
        }
        uVar10 = FUN_07761c50();
        if ((uVar10 & 1) != 0) {
          lVar15 = *plVar17;
          if (lVar15 != 0) {
            if (lVar7 == 0) goto LAB_07765a28;
            fVar20 = 0.0;
            if (*(char *)(lVar7 + 0x28) != '\0') {
              fVar20 = 1.0;
            }
            if (*(char *)(unaff_x20 + 0x14) == '\0') {
              fVar19 = 0.0;
              if (*(char *)(lVar15 + 0x28) != '\0') {
                fVar19 = 1.0;
              }
              fVar20 = fVar20 + *(float *)(lVar7 + 0x30) +
                                *(float *)(lVar7 + 0x2c) + *(float *)(lVar7 + 0x2c);
              fVar19 = fVar19 + *(float *)(lVar15 + 0x30) +
                                *(float *)(lVar15 + 0x2c) + *(float *)(lVar15 + 0x2c);
            }
            else {
              fVar20 = fVar20 + fVar20 + *(float *)(lVar7 + 0x2c);
              fVar19 = 0.0;
              if (*(char *)(lVar15 + 0x28) != '\0') {
                fVar19 = 2.0;
              }
              fVar19 = *(float *)(lVar15 + 0x2c) + fVar19;
            }
            if (fVar20 <= fVar19) break;
          }
          *plVar17 = lVar7;
          thunk_FUN_044bb4b4(plVar17,lVar7);
          break;
        }
        if (((int)uStack00000000000000dc < (int)unaff_w23) && (*(char *)(unaff_x20 + 0x14) != '\0'))
        {
          uStack00000000000000dc = uStack00000000000000dc << 1;
        }
        else {
          uVar14 = uStack00000000000000dc + iVar21;
          bVar3 = (int)unaff_w23 <= (int)uStack00000000000000dc;
          uStack00000000000000dc = unaff_w23;
          if ((int)uVar14 <= (int)unaff_w23 || bVar3) {
            uStack00000000000000dc = uVar14;
          }
        }
        if (4 < *(int *)(unaff_x20 + 0x10)) {
          uVar8 = FUN_07a3b850(&stack0x000000d8,0);
          uVar9 = FUN_07a3b850(&stack0x000000dc,0);
          uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar8,*(undefined8 *)puVar6,uVar9,0);
          lVar15 = *(long *)puVar4;
          lVar7 = *(long *)(lVar15 + 0x38);
          if (lVar7 == 0) {
            FUN_04482014(lVar15);
            lVar7 = *(long *)(lVar15 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04481fb8();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar7 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar8,**(undefined8 **)(lVar7 + 0xb8),0);
        }
        iVar16 = iVar16 + 1;
      }
      if (((int)in_stack_000000d8 < (int)unaff_w27) && (*(char *)(unaff_x20 + 0x14) != '\0')) {
        in_stack_000000d8 = in_stack_000000d8 << 1;
      }
      else {
        uVar14 = in_stack_000000d8 + iStack000000000000006c;
        bVar3 = (int)unaff_w27 <= (int)in_stack_000000d8;
        in_stack_000000d8 = unaff_w27;
        if ((int)uVar14 <= (int)unaff_w27 || bVar3) {
          in_stack_000000d8 = uVar14;
        }
      }
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        uVar8 = FUN_07a3b850(&stack0x000000d8,0);
        uVar9 = FUN_07a3b850(&stack0x000000dc,0);
        uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar8,*(undefined8 *)puVar6,uVar9,0);
        lVar15 = *(long *)puVar4;
        lVar7 = *(long *)(lVar15 + 0x38);
        if (lVar7 == 0) {
          FUN_04482014(lVar15);
          lVar7 = *(long *)(lVar15 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar7 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        FUN_0771ec00(uVar8,**(undefined8 **)(lVar7 + 0xb8),0);
      }
    } while ((0 < iVar16) && ((int)in_stack_000000d8 < iVar22));
  }
  lVar7 = *plVar17;
  if (lVar7 == 0) {
    return 0;
  }
  _iStack00000000000000d0 = 0;
  uVar14 = *(uint *)(lVar7 + 0x10);
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    if ((int)unaff_w23 <= (int)uVar14) {
      uVar14 = unaff_w23;
    }
    uVar12 = *(uint *)(lVar7 + 0x14);
    if ((int)unaff_w27 <= (int)*(uint *)(lVar7 + 0x14)) {
      uVar12 = unaff_w27;
    }
    _iStack00000000000000d0 = CONCAT44(uVar14,uVar12);
  }
  else {
    fVar19 = logf((float)(int)uVar14);
    fVar20 = DAT_01c7661c;
    fVar19 = exp2f((float)(int)(fVar19 / DAT_01c7661c));
    uVar14 = 0x80000000;
    if (fVar19 != INFINITY) {
      uVar14 = (int)fVar19;
    }
    if (uVar14 < 3) {
      uVar14 = 2;
    }
    if ((int)unaff_w23 <= (int)uVar14) {
      uVar14 = unaff_w23;
    }
    uStack00000000000000d4 = uVar14;
    fVar19 = logf((float)*(int *)(lVar7 + 0x14));
    fVar20 = exp2f((float)(int)(fVar19 / fVar20));
    uVar2 = 0x80000000;
    if (fVar20 != INFINITY) {
      uVar2 = (int)fVar20;
    }
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if ((int)unaff_w27 <= (int)uVar2) {
      uVar2 = unaff_w27;
    }
    uVar1 = uVar14;
    if ((int)uVar14 < 0) {
      uVar1 = uVar14 + 1;
    }
    uVar12 = (int)uVar1 >> 1;
    if ((int)uVar1 >> 1 <= (int)uVar2) {
      uVar12 = uVar2;
    }
    uVar2 = uVar12;
    if ((int)uVar12 < 0) {
      uVar2 = uVar12 + 1;
    }
    uVar2 = (int)uVar2 >> 1;
    if ((int)uVar14 < (int)uVar2) {
      uVar14 = uVar2;
      uStack00000000000000d4 = uVar2;
    }
    _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar12);
  }
  *(uint *)(lVar7 + 0x18) = uVar14;
  *(uint *)(lVar7 + 0x1c) = uVar12;
  if (3 < *(int *)(unaff_x20 + 0x10)) {
    lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
    if (lVar7 == 0) goto LAB_07765a28;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_09f32d90;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x20));
    uVar8 = FUN_07a3b850((long)&stack0x000000d0 + 4,0);
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x28) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x28),uVar8);
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_09f32da0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x30));
    uVar8 = FUN_07a3b850(&stack0x000000d0,0);
    if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x38) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x38),uVar8);
    if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_09f32de8;
    thunk_FUN_044bb4b4();
    if (*plVar17 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a3b850(*plVar17 + 0x10,0);
    if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x48) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x48),uVar8);
    if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*plVar17 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a3b850(*plVar17 + 0x14,0);
    if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x58) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x58),uVar8);
    if (*(uint *)(lVar7 + 0x18) < 9) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*plVar17 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a5081c(*plVar17 + 0x2c,0);
    if (*(uint *)(lVar7 + 0x18) < 10) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x68) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x68),uVar8);
    if (*(uint *)(lVar7 + 0x18) < 0xb) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*plVar17 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a5081c(*plVar17 + 0x30,0);
    if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x78) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x78),uVar8);
    if (*(uint *)(lVar7 + 0x18) < 0xd) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar15 = *plVar17;
    if (lVar15 == 0) goto LAB_07765a28;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = FUN_079a04dc(lVar15 + 0x28,0);
    if (*(uint *)(lVar7 + 0x18) < 0xe) goto LAB_07765a24;
    *(undefined8 *)(lVar7 + 0x88) = uVar8;
    thunk_FUN_044bb4b4();
    uVar8 = FUN_078b57fc(lVar7,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar8,0);
  }
  puVar4 = PTR_DAT_09f32ce0;
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar7,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_09f32d80;
  if (*plVar17 != 0) {
    FUN_077617f0(*(undefined8 *)(*plVar17 + 0x20),lVar7);
    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
    FUN_07a80df4(uVar8,0);
    if (lVar7 != 0) {
      FUN_05baf864(lVar7,uVar8,*(undefined8 *)PTR_DAT_09f32d88);
      lVar15 = *plVar17;
      if ((lVar15 != 0) && (in_stack_00000088 != 0)) {
        iVar22 = *(int *)(lVar15 + 0x10);
        iVar21 = *(int *)(lVar15 + 0x14);
        FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
        uVar10 = FUN_07760c44((float)iVar22,(float)iVar21);
        if ((in_stack_00000050._4_4_ < 0xb) && ((uVar10 & 1) != 0)) {
          if (3 < *(int *)(unaff_x20 + 0x10)) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
          }
          lVar7 = FUN_07764110();
          return lVar7;
        }
        uVar8 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar15,0);
        *(undefined8 *)(lVar15 + 0x28) = uVar8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x28),uVar8);
        lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar7 + 0x18));
        plVar17 = (long *)(lVar15 + 0x20);
        *plVar17 = lVar11;
        thunk_FUN_044bb4b4(plVar17);
        lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar7 + 0x18));
        plVar18 = (long *)(lVar15 + 0x30);
        *plVar18 = lVar11;
        thunk_FUN_044bb4b4(plVar18,lVar11);
        *(undefined8 *)(lVar15 + 0x18) = 0xffffffffffffffff;
        *(uint *)(lVar15 + 0x10) = uStack00000000000000d4;
        *(int *)(lVar15 + 0x14) = iStack00000000000000d0;
        puVar6 = PTR_DAT_09f32ba8;
        puVar5 = PTR_DAT_09f24a78;
        puVar4 = PTR_DAT_09f22e40;
        uStack00000000000000bc = 0;
        if (0 < *(int *)(lVar7 + 0x18)) {
          do {
            lVar11 = FUN_05badb74(lVar7,uStack00000000000000bc,*(undefined8 *)puVar6);
            if ((lVar11 == 0) || (lVar13 = *plVar17, lVar13 == 0)) goto LAB_07765a28;
            if (*(uint *)(lVar13 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            fVar24 = fStack00000000000000cc +
                     (float)*(int *)(lVar11 + 0x1c) / (float)(int)uStack00000000000000d4;
            lVar13 = lVar13 + (long)(int)uStack00000000000000bc * 0x10;
            fVar23 = fStack00000000000000c8 +
                     (float)*(int *)(lVar11 + 0x20) / (float)iStack00000000000000d0;
            fVar19 = (float)*(int *)(lVar11 + 0x14) / (float)(int)uStack00000000000000d4 -
                     (fStack00000000000000cc + fStack00000000000000cc);
            fVar20 = (float)*(int *)(lVar11 + 0x18) / (float)iStack00000000000000d0 -
                     (fStack00000000000000c8 + fStack00000000000000c8);
            *(float *)(lVar13 + 0x20) = fVar24;
            *(float *)(lVar13 + 0x24) = fVar23;
            *(float *)(lVar13 + 0x28) = fVar19;
            *(float *)(lVar13 + 0x2c) = fVar20;
            lVar13 = *plVar18;
            if (lVar13 == 0) goto LAB_07765a28;
            if (*(uint *)(lVar13 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            *(undefined4 *)(lVar13 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                 *(undefined4 *)(lVar11 + 0x10);
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
              if (lVar13 == 0) goto LAB_07765a28;
              if (*(int *)(lVar13 + 0x18) == 0) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x20));
              uVar8 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x28) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x28),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x30));
              uVar8 = FUN_07a3b850((undefined4 *)(lVar11 + 0x10),0);
              if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x38) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x38),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x40));
              fStack00000000000000b8 = fVar24 * (float)(int)uStack00000000000000d4;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x48) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x48),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x50));
              fStack00000000000000b8 = fVar23 * (float)iStack00000000000000d0;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x58) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x58),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 9) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x60));
              fStack00000000000000b8 = fVar19 * (float)(int)uStack00000000000000d4;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 10) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x68) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x68),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 0xb) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x70));
              fStack00000000000000b8 = fVar20 * (float)iStack00000000000000d0;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 0xc) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x78) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x78),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 0xd) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x80));
              uVar10 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = (uint)(uVar10 >> 0x1f) & 0xfffffffe;
              uVar8 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar13 + 0x18) < 0xe) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x88) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x88),uVar8);
              if (*(uint *)(lVar13 + 0x18) < 0xf) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x90) = *(undefined8 *)puVar5;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x90));
              iVar21 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = iVar21 << 1;
              uVar8 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar13 + 0x18) < 0x10) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x98) = uVar8;
              thunk_FUN_044bb4b4();
              uVar8 = FUN_078b57fc(lVar13,0);
              lVar13 = *(long *)puVar4;
              lVar11 = *(long *)(lVar13 + 0x38);
              if (lVar11 == 0) {
                FUN_04482014(lVar13);
                lVar11 = *(long *)(lVar13 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_04481fb8();
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar8,**(undefined8 **)(lVar11 + 0xb8),0);
            }
            uStack00000000000000bc = uStack00000000000000bc + 1;
          } while ((int)uStack00000000000000bc < *(int *)(lVar7 + 0x18));
        }
        FUN_077606dc(lVar15);
        return lVar15;
      }
    }
  }
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


