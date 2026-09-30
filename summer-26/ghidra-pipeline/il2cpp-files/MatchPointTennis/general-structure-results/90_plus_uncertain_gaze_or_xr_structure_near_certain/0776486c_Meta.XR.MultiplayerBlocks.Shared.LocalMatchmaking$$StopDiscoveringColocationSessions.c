/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 0776486c
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


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint unaff_w19;
  long unaff_x20;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  undefined8 *unaff_x22;
  long *plVar17;
  uint unaff_w23;
  long *plVar18;
  uint unaff_w25;
  uint unaff_w27;
  long unaff_x28;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000050;
  int iStack000000000000006c;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
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
  
  thunk_FUN_044a54b4();
  lVar7 = *(long *)(*(long *)(unaff_x28 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32de0,**(undefined8 **)(lVar7 + 0xb8),0);
  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c98);
  FUN_07a80df4(uVar8,0);
  FUN_04b03f08(in_stack_00000090,uVar8,*unaff_x22);
  puVar3 = PTR_DAT_09f1e748;
  uVar14 = 0x80000000;
  if (SQRT(unaff_s8) != INFINITY) {
    uVar14 = (int)SQRT(unaff_s8);
  }
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    uVar13 = uVar14;
    uVar6 = uVar14;
    if ((int)uVar14 < (int)unaff_w25) {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar6 = 0x80000000;
      if ((float)(int)(unaff_s8 / unaff_s10) != INFINITY) {
        uVar6 = (int)(unaff_s8 / unaff_s10);
      }
      uVar13 = unaff_w25;
      if ((int)uVar6 <= (int)unaff_w19) {
        uVar6 = unaff_w19;
      }
    }
    if ((int)uVar14 < (int)unaff_w19) {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar13 = 0x80000000;
      if ((float)(int)(unaff_s8 / unaff_s9) != INFINITY) {
        uVar13 = (int)(unaff_s8 / unaff_s9);
      }
      uVar6 = unaff_w19;
      if ((int)uVar13 <= (int)unaff_w25) {
        uVar13 = unaff_w25;
      }
    }
  }
  else {
    uVar6 = FUN_07760ae0(uVar14);
    uVar13 = uVar6;
    if ((int)uVar6 < (int)unaff_w25) {
      fVar19 = logf((float)(int)uVar6);
      fVar19 = exp2f((float)(int)(fVar19 / DAT_01c7661c));
      uVar13 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar13 = (int)fVar19;
      }
      if (uVar13 < 3) {
        uVar13 = 2;
      }
    }
    if ((int)uVar6 < (int)unaff_w19) {
      fVar19 = logf((float)(int)uVar6);
      fVar19 = exp2f((float)(int)(fVar19 / DAT_01c7661c));
      uVar6 = 0x80000000;
      if (fVar19 != INFINITY) {
        uVar6 = (int)fVar19;
      }
      if (uVar6 < 3) {
        uVar6 = 2;
      }
    }
  }
  puVar5 = PTR_DAT_09f32de8;
  puVar4 = PTR_DAT_09f32d20;
  puVar3 = PTR_DAT_09f22e40;
  uVar1 = 4;
  if (uVar13 != 0) {
    uVar1 = uVar13;
  }
  in_stack_000000d8 = 4;
  if (uVar6 != 0) {
    in_stack_000000d8 = uVar6;
  }
  iVar22 = uVar14 * 1000;
  iVar21 = -0x80000000;
  if ((float)(int)uVar1 * DAT_01c759d8 != INFINITY) {
    iVar21 = (int)((float)(int)uVar1 * DAT_01c759d8);
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
  uStack00000000000000dc = uVar1;
  if ((int)in_stack_000000d8 < iVar22) {
    do {
      iVar16 = 0;
      uStack00000000000000dc = uVar1;
      while ((int)uStack00000000000000dc < iVar22) {
        lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
        FUN_07a80df4(lVar7,0);
        if (4 < *(int *)(unaff_x20 + 0x10)) {
          uVar8 = FUN_07a3b850(&stack0x000000d8,0);
          uVar9 = FUN_07a3b850(&stack0x000000dc,0);
          uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar8,*(undefined8 *)puVar5,uVar9,0);
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
            fVar19 = 0.0;
            if (*(char *)(lVar7 + 0x28) != '\0') {
              fVar19 = 1.0;
            }
            if (*(char *)(unaff_x20 + 0x14) == '\0') {
              fVar20 = 0.0;
              if (*(char *)(lVar15 + 0x28) != '\0') {
                fVar20 = 1.0;
              }
              fVar19 = fVar19 + *(float *)(lVar7 + 0x30) +
                                *(float *)(lVar7 + 0x2c) + *(float *)(lVar7 + 0x2c);
              fVar20 = fVar20 + *(float *)(lVar15 + 0x30) +
                                *(float *)(lVar15 + 0x2c) + *(float *)(lVar15 + 0x2c);
            }
            else {
              fVar19 = fVar19 + fVar19 + *(float *)(lVar7 + 0x2c);
              fVar20 = 0.0;
              if (*(char *)(lVar15 + 0x28) != '\0') {
                fVar20 = 2.0;
              }
              fVar20 = *(float *)(lVar15 + 0x2c) + fVar20;
            }
            if (fVar19 <= fVar20) break;
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
          bVar2 = (int)unaff_w23 <= (int)uStack00000000000000dc;
          uStack00000000000000dc = unaff_w23;
          if ((int)uVar14 <= (int)unaff_w23 || bVar2) {
            uStack00000000000000dc = uVar14;
          }
        }
        if (4 < *(int *)(unaff_x20 + 0x10)) {
          uVar8 = FUN_07a3b850(&stack0x000000d8,0);
          uVar9 = FUN_07a3b850(&stack0x000000dc,0);
          uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar8,*(undefined8 *)puVar5,uVar9,0);
          lVar15 = *(long *)puVar3;
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
        bVar2 = (int)unaff_w27 <= (int)in_stack_000000d8;
        in_stack_000000d8 = unaff_w27;
        if ((int)uVar14 <= (int)unaff_w27 || bVar2) {
          in_stack_000000d8 = uVar14;
        }
      }
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        uVar8 = FUN_07a3b850(&stack0x000000d8,0);
        uVar9 = FUN_07a3b850(&stack0x000000dc,0);
        uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar8,*(undefined8 *)puVar5,uVar9,0);
        lVar15 = *(long *)puVar3;
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
    uVar13 = *(uint *)(lVar7 + 0x14);
    if ((int)unaff_w27 <= (int)*(uint *)(lVar7 + 0x14)) {
      uVar13 = unaff_w27;
    }
    _iStack00000000000000d0 = CONCAT44(uVar14,uVar13);
  }
  else {
    fVar20 = logf((float)(int)uVar14);
    fVar19 = DAT_01c7661c;
    fVar20 = exp2f((float)(int)(fVar20 / DAT_01c7661c));
    uVar14 = 0x80000000;
    if (fVar20 != INFINITY) {
      uVar14 = (int)fVar20;
    }
    if (uVar14 < 3) {
      uVar14 = 2;
    }
    if ((int)unaff_w23 <= (int)uVar14) {
      uVar14 = unaff_w23;
    }
    uStack00000000000000d4 = uVar14;
    fVar20 = logf((float)*(int *)(lVar7 + 0x14));
    fVar19 = exp2f((float)(int)(fVar20 / fVar19));
    uVar6 = 0x80000000;
    if (fVar19 != INFINITY) {
      uVar6 = (int)fVar19;
    }
    if (uVar6 < 3) {
      uVar6 = 2;
    }
    if ((int)unaff_w27 <= (int)uVar6) {
      uVar6 = unaff_w27;
    }
    uVar1 = uVar14;
    if ((int)uVar14 < 0) {
      uVar1 = uVar14 + 1;
    }
    uVar13 = (int)uVar1 >> 1;
    if ((int)uVar1 >> 1 <= (int)uVar6) {
      uVar13 = uVar6;
    }
    uVar6 = uVar13;
    if ((int)uVar13 < 0) {
      uVar6 = uVar13 + 1;
    }
    uVar6 = (int)uVar6 >> 1;
    if ((int)uVar14 < (int)uVar6) {
      uVar14 = uVar6;
      uStack00000000000000d4 = uVar6;
    }
    _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar13);
  }
  *(uint *)(lVar7 + 0x18) = uVar14;
  *(uint *)(lVar7 + 0x1c) = uVar13;
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
  puVar3 = PTR_DAT_09f32ce0;
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar7,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_09f32d80;
  if (*plVar17 != 0) {
    FUN_077617f0(*(undefined8 *)(*plVar17 + 0x20),lVar7);
    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
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
        puVar5 = PTR_DAT_09f32ba8;
        puVar4 = PTR_DAT_09f24a78;
        puVar3 = PTR_DAT_09f22e40;
        uStack00000000000000bc = 0;
        if (0 < *(int *)(lVar7 + 0x18)) {
          do {
            lVar11 = FUN_05badb74(lVar7,uStack00000000000000bc,*(undefined8 *)puVar5);
            if ((lVar11 == 0) || (lVar12 = *plVar17, lVar12 == 0)) goto LAB_07765a28;
            if (*(uint *)(lVar12 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            fVar24 = fStack00000000000000cc +
                     (float)*(int *)(lVar11 + 0x1c) / (float)(int)uStack00000000000000d4;
            lVar12 = lVar12 + (long)(int)uStack00000000000000bc * 0x10;
            fVar23 = fStack00000000000000c8 +
                     (float)*(int *)(lVar11 + 0x20) / (float)iStack00000000000000d0;
            fVar20 = (float)*(int *)(lVar11 + 0x14) / (float)(int)uStack00000000000000d4 -
                     (fStack00000000000000cc + fStack00000000000000cc);
            fVar19 = (float)*(int *)(lVar11 + 0x18) / (float)iStack00000000000000d0 -
                     (fStack00000000000000c8 + fStack00000000000000c8);
            *(float *)(lVar12 + 0x20) = fVar24;
            *(float *)(lVar12 + 0x24) = fVar23;
            *(float *)(lVar12 + 0x28) = fVar20;
            *(float *)(lVar12 + 0x2c) = fVar19;
            lVar12 = *plVar18;
            if (lVar12 == 0) goto LAB_07765a28;
            if (*(uint *)(lVar12 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            *(undefined4 *)(lVar12 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                 *(undefined4 *)(lVar11 + 0x10);
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
              if (lVar12 == 0) goto LAB_07765a28;
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20));
              uVar8 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x28) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x30));
              uVar8 = FUN_07a3b850((undefined4 *)(lVar11 + 0x10),0);
              if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x38) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x38),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x40));
              fStack00000000000000b8 = fVar24 * (float)(int)uStack00000000000000d4;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x48) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x48),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x50));
              fStack00000000000000b8 = fVar23 * (float)iStack00000000000000d0;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar12 + 0x18) < 8) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x58) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x58),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 9) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x60));
              fStack00000000000000b8 = fVar20 * (float)(int)uStack00000000000000d4;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar12 + 0x18) < 10) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x68) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x68),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 0xb) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x70));
              fStack00000000000000b8 = fVar19 * (float)iStack00000000000000d0;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar12 + 0x18) < 0xc) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x78) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x78),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 0xd) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x80));
              uVar10 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = (uint)(uVar10 >> 0x1f) & 0xfffffffe;
              uVar8 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar12 + 0x18) < 0xe) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x88) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x88),uVar8);
              if (*(uint *)(lVar12 + 0x18) < 0xf) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x90) = *(undefined8 *)puVar4;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x90));
              iVar21 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = iVar21 << 1;
              uVar8 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar12 + 0x18) < 0x10) goto LAB_07765a24;
              *(undefined8 *)(lVar12 + 0x98) = uVar8;
              thunk_FUN_044bb4b4();
              uVar8 = FUN_078b57fc(lVar12,0);
              lVar12 = *(long *)puVar3;
              lVar11 = *(long *)(lVar12 + 0x38);
              if (lVar11 == 0) {
                FUN_04482014(lVar12);
                lVar11 = *(long *)(lVar12 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_04481fb8();
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
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


