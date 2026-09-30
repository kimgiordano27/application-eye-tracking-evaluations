/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$HostOrJoinSessionAutomatically
ENTRY_POINT: 0776423c
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


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__HostOrJoinSessionAutomatically
               (undefined1 param_1 [16],undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long unaff_x19;
  long unaff_x20;
  uint uVar18;
  long unaff_x21;
  undefined4 unaff_w22;
  int iVar19;
  undefined4 uVar20;
  uint unaff_w23;
  long *plVar21;
  long unaff_x24;
  uint uVar22;
  uint unaff_w27;
  uint uVar23;
  ulong uVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000078;
  int in_stack_00000080;
  uint uStack0000000000000084;
  int iStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  int in_stack_000000a8;
  undefined4 in_stack_000000b0;
  uint uStack00000000000000b4;
  float fStack00000000000000b8;
  uint uStack00000000000000bc;
  ulong in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  int iStack00000000000000d0;
  uint uStack00000000000000d4;
  int iStack00000000000000d8;
  uint uStack00000000000000dc;
  undefined4 in_stack_00000160;
  int in_stack_00000168;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f32d18);
  FUN_04447ba8(PTR_DAT_09f20d20);
  FUN_04447ba8(PTR_DAT_09f32d20);
  FUN_04447ba8(PTR_DAT_09f313a0);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f24a78);
  FUN_04447ba8(PTR_DAT_09f32d90);
  FUN_04447ba8(PTR_DAT_09f32d98);
  FUN_04447ba8(PTR_DAT_09f32da0);
  FUN_04447ba8(PTR_DAT_09f32da8);
  FUN_04447ba8(PTR_DAT_09f307b8);
  FUN_04447ba8(PTR_DAT_09f32db0);
  FUN_04447ba8(PTR_DAT_09f32d50);
  FUN_04447ba8(PTR_DAT_09f32d58);
  FUN_04447ba8(PTR_DAT_09f32db8);
  FUN_04447ba8(PTR_DAT_09f32dc0);
  FUN_04447ba8(PTR_DAT_09f32dc8);
  FUN_04447ba8(PTR_DAT_09f32dd0);
  FUN_04447ba8(PTR_DAT_09f32dd8);
  FUN_04447ba8(PTR_DAT_09f32de0);
  FUN_04447ba8(PTR_DAT_09f32de8);
  FUN_04447ba8(PTR_DAT_09f32df0);
  FUN_04447ba8(PTR_DAT_09f32d70);
  FUN_04447ba8(PTR_DAT_09f32df8);
  FUN_04447ba8(PTR_DAT_09f32e00);
  FUN_04447ba8(PTR_DAT_09f307e8);
  FUN_04447ba8(PTR_DAT_09f32e08);
  iVar7 = in_stack_00000168;
  uVar20 = in_stack_00000160;
  *(undefined1 *)(unaff_x19 + 0x2ca) = 1;
  _iStack00000000000000d0 = 0;
  _iStack00000000000000d8 = 0;
  in_stack_000000c0 = 0;
  _fStack00000000000000c8 = 0;
  fStack00000000000000b8 = 0.0;
  uStack00000000000000bc = 0;
  uStack00000000000000b4 = 0;
  uStack0000000000000084 = unaff_w27;
  if (3 < *(int *)(unaff_x20 + 0x10)) {
    plVar8 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,7);
    puVar3 = PTR_DAT_09f1e5b8;
    if (unaff_x24 == 0) goto LAB_07765a28;
    in_stack_000000b0 = *(undefined4 *)(unaff_x24 + 0x18);
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x000000b0);
    if (plVar8 == (long *)0x0) goto LAB_07765a28;
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_07765a2c:
      uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar11,0);
    }
    if ((int)plVar8[3] == 0) goto LAB_07765a24;
    plVar8[4] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 4,lVar9);
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x000000ac);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07765a2c;
    if (*(uint *)(plVar8 + 3) < 2) goto LAB_07765a24;
    plVar8[5] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 5,lVar9);
    in_stack_000000a8 = in_stack_00000080;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x000000a8);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07765a2c;
    if (*(uint *)(plVar8 + 3) < 3) goto LAB_07765a24;
    plVar8[6] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 6,lVar9);
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x000000a4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07765a2c;
    if (*(uint *)(plVar8 + 3) < 4) goto LAB_07765a24;
    plVar8[7] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 7,lVar9);
    in_stack_000000a0 = unaff_w22;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x000000a0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07765a2c;
    if (*(uint *)(plVar8 + 3) < 5) goto LAB_07765a24;
    plVar8[8] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 8,lVar9);
    uStack000000000000009c = uVar20;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),(long)&stack0x00000098 + 4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07765a2c;
    if (*(uint *)(plVar8 + 3) < 6) goto LAB_07765a24;
    plVar8[9] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 9,lVar9);
    iStack0000000000000098 = iVar7;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000098);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_07765a2c;
    if (*(uint *)(plVar8 + 3) < 7) goto LAB_07765a24;
    plVar8[10] = lVar9;
    thunk_FUN_044bb4b4(plVar8 + 10,lVar9);
    uVar11 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32e00,plVar8,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar11,0);
  }
  uVar23 = uStack0000000000000084;
  if ((10 < iVar7) && (0 < *(int *)(unaff_x20 + 0x10))) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f32dd8,0);
  }
  if ((unaff_x24 != 0) &&
     (plVar8 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f32ca0,
                                    *(undefined4 *)(unaff_x24 + 0x18)), plVar8 != (long *)0x0)) {
    uStack000000000000005c = unaff_w22;
    if ((int)plVar8[3] < 1) {
      uVar22 = 0;
      uVar17 = 0;
      fVar28 = 0.0;
    }
    else {
      lVar9 = 0;
      uVar17 = 0;
      uVar22 = 0;
      uVar24 = 0;
      fVar28 = 0.0;
      do {
        puVar3 = PTR_DAT_09f32cf8;
        fVar25 = (float)FUN_05d0cfbc(unaff_x24,uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
        FUN_05d0cfbc(unaff_x24,uVar24 & 0xffffffff,*(undefined8 *)puVar3);
        if (unaff_x21 == 0) goto LAB_07765a28;
        iVar26 = -0x80000000;
        if ((float)param_2 != INFINITY) {
          iVar26 = (int)(float)param_2;
        }
        iVar27 = -0x80000000;
        if (fVar25 != INFINITY) {
          iVar27 = (int)fVar25;
        }
        uVar12 = FUN_05a28f70(unaff_x21,uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
        FUN_07a80df4(lVar10,0);
        iVar27 = ((uint)(uVar12 >> 0x1f) & 0xfffffffe) + iVar27;
        if (iVar27 <= in_stack_00000080) {
          iVar27 = in_stack_00000080;
        }
        iVar26 = iVar26 + (int)uVar12 * 2;
        *(int *)(lVar10 + 0x10) = (int)uVar24;
        *(int *)(lVar10 + 0x14) = iVar27;
        if (iVar26 <= in_stack_00000078._4_4_) {
          iVar26 = in_stack_00000078._4_4_;
        }
        *(int *)(lVar10 + 0x18) = iVar26;
        lVar13 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
        uVar23 = uStack0000000000000084;
        if (lVar13 == 0) goto LAB_07765a2c;
        if (*(uint *)(plVar8 + 3) <= uVar24) goto LAB_07765a24;
        plVar8[uVar24 + 4] = lVar10;
        thunk_FUN_044bb4b4((long)plVar8 + lVar9 + 0x20,lVar10);
        uVar2 = *(uint *)(lVar10 + 0x14);
        uVar18 = *(uint *)(lVar10 + 0x18);
        uVar24 = uVar24 + 1;
        if ((int)uVar22 <= (int)uVar2) {
          uVar22 = uVar2;
        }
        fVar28 = fVar28 + (float)(int)(uVar18 * uVar2);
        if ((int)uVar17 <= (int)uVar18) {
          uVar17 = uVar18;
        }
        lVar9 = lVar9 + 8;
      } while ((long)uVar24 < (long)(int)plVar8[3]);
    }
    puVar3 = PTR_DAT_09f32c80;
    fVar25 = (float)(int)uVar17 / (float)(int)uVar22;
    if (fVar25 <= 2.0) {
      if (0.5 <= fVar25) {
        puVar15 = (undefined8 *)PTR_DAT_09f32c90;
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar9 = *(long *)(lVar10 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar10);
            lVar9 = *(long *)(lVar10 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32dc0,**(undefined8 **)(lVar9 + 0xb8),0);
          puVar15 = (undefined8 *)PTR_DAT_09f32c90;
        }
      }
      else {
        puVar15 = (undefined8 *)PTR_DAT_09f32ca8;
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar9 = *(long *)(lVar10 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar10);
            lVar9 = *(long *)(lVar10 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32d98,**(undefined8 **)(lVar9 + 0xb8),0);
          puVar15 = (undefined8 *)PTR_DAT_09f32ca8;
        }
      }
    }
    else {
      puVar15 = (undefined8 *)PTR_DAT_09f32c98;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar10 = *(long *)PTR_DAT_09f22e40;
        lVar9 = *(long *)(lVar10 + 0x38);
        if (lVar9 == 0) {
          FUN_04482014(lVar10);
          lVar9 = *(long *)(lVar10 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_04481fb8();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_04481fb8();
        }
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32de0,**(undefined8 **)(lVar9 + 0xb8),0);
        puVar15 = (undefined8 *)PTR_DAT_09f32c98;
      }
    }
    uVar11 = thunk_FUN_0448520c(*puVar15);
    FUN_07a80df4(uVar11,0);
    FUN_04b03f08(plVar8,uVar11,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_09f1e748;
    uVar2 = 0x80000000;
    if (SQRT(fVar28) != INFINITY) {
      uVar2 = (int)SQRT(fVar28);
    }
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      uVar18 = uVar2;
      uVar6 = uVar2;
      if ((int)uVar2 < (int)uVar22) {
        if (DAT_0a51c737 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51c737 = '\x01';
        }
        fVar25 = fVar28 / (float)(int)uVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar6 = 0x80000000;
        if ((float)(int)fVar25 != INFINITY) {
          uVar6 = (int)fVar25;
        }
        uVar18 = uVar22;
        if ((int)uVar6 <= (int)uVar17) {
          uVar6 = uVar17;
        }
      }
      if ((int)uVar2 < (int)uVar17) {
        if (DAT_0a51c737 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51c737 = '\x01';
        }
        fVar25 = fVar28 / (float)(int)uVar17;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar18 = 0x80000000;
        if ((float)(int)fVar25 != INFINITY) {
          uVar18 = (int)fVar25;
        }
        uVar6 = uVar17;
        if ((int)uVar18 <= (int)uVar22) {
          uVar18 = uVar22;
        }
      }
    }
    else {
      uVar6 = FUN_07760ae0(uVar2);
      uVar18 = uVar6;
      if ((int)uVar6 < (int)uVar22) {
        fVar25 = logf((float)(int)uVar6);
        fVar25 = exp2f((float)(int)(fVar25 / DAT_01c7661c));
        uVar18 = 0x80000000;
        if (fVar25 != INFINITY) {
          uVar18 = (int)fVar25;
        }
        if (uVar18 < 3) {
          uVar18 = 2;
        }
      }
      if ((int)uVar6 < (int)uVar17) {
        fVar25 = logf((float)(int)uVar6);
        fVar25 = exp2f((float)(int)(fVar25 / DAT_01c7661c));
        uVar6 = 0x80000000;
        if (fVar25 != INFINITY) {
          uVar6 = (int)fVar25;
        }
        if (uVar6 < 3) {
          uVar6 = 2;
        }
      }
    }
    puVar5 = PTR_DAT_09f32de8;
    puVar4 = PTR_DAT_09f32d20;
    puVar3 = PTR_DAT_09f22e40;
    uVar22 = 4;
    if (uVar18 != 0) {
      uVar22 = uVar18;
    }
    uVar17 = 4;
    if (uVar6 != 0) {
      uVar17 = uVar6;
    }
    iVar27 = uVar2 * 1000;
    iVar26 = -0x80000000;
    if ((float)(int)uVar22 * DAT_01c759d8 != INFINITY) {
      iVar26 = (int)((float)(int)uVar22 * DAT_01c759d8);
    }
    iVar1 = -0x80000000;
    if ((float)(int)uVar17 * DAT_01c759d8 != INFINITY) {
      iVar1 = (int)((float)(int)uVar17 * DAT_01c759d8);
    }
    if (iVar26 == 0) {
      iVar26 = 1;
    }
    _iStack00000000000000d8 = CONCAT44(uVar22,uVar17);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    plVar21 = (long *)(unaff_x20 + 0x18);
    if ((int)uVar17 < iVar27) {
      do {
        iVar19 = 0;
        _iStack00000000000000d8 = CONCAT44(uVar22,iStack00000000000000d8);
        uVar17 = uVar22;
        while ((int)uVar17 < iVar27) {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
          FUN_07a80df4(lVar9,0);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar11 = FUN_07a3b850(&stack0x000000d8,0);
            uVar14 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
            uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar11,*(undefined8 *)puVar5,
                                  uVar14,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar11,0);
          }
          uVar24 = FUN_07761c50(fVar28,unaff_x20,plVar8,uStack00000000000000dc,
                                _iStack00000000000000d8 & 0xffffffff,unaff_w23,uVar23,lVar9);
          if ((uVar24 & 1) != 0) {
            lVar10 = *plVar21;
            if (lVar10 != 0) {
              if (lVar9 == 0) goto LAB_07765a28;
              fVar25 = 0.0;
              if (*(char *)(lVar9 + 0x28) != '\0') {
                fVar25 = 1.0;
              }
              if (*(char *)(unaff_x20 + 0x14) == '\0') {
                fVar29 = 0.0;
                if (*(char *)(lVar10 + 0x28) != '\0') {
                  fVar29 = 1.0;
                }
                fVar25 = fVar25 + *(float *)(lVar9 + 0x30) +
                                  *(float *)(lVar9 + 0x2c) + *(float *)(lVar9 + 0x2c);
                fVar29 = fVar29 + *(float *)(lVar10 + 0x30) +
                                  *(float *)(lVar10 + 0x2c) + *(float *)(lVar10 + 0x2c);
              }
              else {
                fVar25 = fVar25 + fVar25 + *(float *)(lVar9 + 0x2c);
                fVar29 = 0.0;
                if (*(char *)(lVar10 + 0x28) != '\0') {
                  fVar29 = 2.0;
                }
                fVar29 = *(float *)(lVar10 + 0x2c) + fVar29;
              }
              if (fVar25 <= fVar29) break;
            }
            *plVar21 = lVar9;
            thunk_FUN_044bb4b4(plVar21,lVar9);
            break;
          }
          if (((int)uStack00000000000000dc < (int)unaff_w23) &&
             (*(char *)(unaff_x20 + 0x14) != '\0')) {
            uVar17 = uStack00000000000000dc << 1;
          }
          else {
            uVar17 = unaff_w23;
            if ((int)(uStack00000000000000dc + iVar26) <= (int)unaff_w23 ||
                (int)unaff_w23 <= (int)uStack00000000000000dc) {
              uVar17 = uStack00000000000000dc + iVar26;
            }
          }
          _iStack00000000000000d8 = CONCAT44(uVar17,iStack00000000000000d8);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar11 = FUN_07a3b850(&stack0x000000d8,0);
            uVar14 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
            uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar11,*(undefined8 *)puVar5,
                                  uVar14,0);
            lVar10 = *(long *)puVar3;
            lVar9 = *(long *)(lVar10 + 0x38);
            if (lVar9 == 0) {
              FUN_04482014(lVar10);
              lVar9 = *(long *)(lVar10 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_04481fb8();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar11,**(undefined8 **)(lVar9 + 0xb8),0);
            uVar17 = uStack00000000000000dc;
          }
          iVar19 = iVar19 + 1;
        }
        if ((iStack00000000000000d8 < (int)uVar23) && (*(char *)(unaff_x20 + 0x14) != '\0')) {
          uVar17 = iStack00000000000000d8 << 1;
        }
        else {
          uVar17 = uVar23;
          if (iStack00000000000000d8 + iVar1 <= (int)uVar23 || (int)uVar23 <= iStack00000000000000d8
             ) {
            uVar17 = iStack00000000000000d8 + iVar1;
          }
        }
        _iStack00000000000000d8 = CONCAT44(uStack00000000000000dc,uVar17);
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          uVar11 = FUN_07a3b850(&stack0x000000d8,0);
          uVar14 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar11,*(undefined8 *)puVar5,uVar14,
                                0);
          lVar10 = *(long *)puVar3;
          lVar9 = *(long *)(lVar10 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar10);
            lVar9 = *(long *)(lVar10 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar11,**(undefined8 **)(lVar9 + 0xb8),0);
        }
      } while ((0 < iVar19) && (iStack00000000000000d8 < iVar27));
    }
    lVar9 = *plVar21;
    if (lVar9 == 0) {
      return 0;
    }
    _iStack00000000000000d0 = 0;
    uVar22 = *(uint *)(lVar9 + 0x10);
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      if ((int)unaff_w23 <= (int)uVar22) {
        uVar22 = unaff_w23;
      }
      uVar17 = *(uint *)(lVar9 + 0x14);
      if ((int)uVar23 <= (int)*(uint *)(lVar9 + 0x14)) {
        uVar17 = uVar23;
      }
      _iStack00000000000000d0 = CONCAT44(uVar22,uVar17);
      uVar20 = uStack000000000000005c;
    }
    else {
      fVar25 = logf((float)(int)uVar22);
      fVar28 = DAT_01c7661c;
      fVar25 = exp2f((float)(int)(fVar25 / DAT_01c7661c));
      uVar22 = 0x80000000;
      if (fVar25 != INFINITY) {
        uVar22 = (int)fVar25;
      }
      if (uVar22 < 3) {
        uVar22 = 2;
      }
      if ((int)unaff_w23 <= (int)uVar22) {
        uVar22 = unaff_w23;
      }
      uStack00000000000000d4 = uVar22;
      fVar25 = logf((float)*(int *)(lVar9 + 0x14));
      fVar28 = exp2f((float)(int)(fVar25 / fVar28));
      uVar2 = 0x80000000;
      if (fVar28 != INFINITY) {
        uVar2 = (int)fVar28;
      }
      if (uVar2 < 3) {
        uVar2 = 2;
      }
      if ((int)uVar23 <= (int)uVar2) {
        uVar2 = uVar23;
      }
      uVar23 = uVar22;
      if ((int)uVar22 < 0) {
        uVar23 = uVar22 + 1;
      }
      uVar17 = (int)uVar23 >> 1;
      if ((int)uVar23 >> 1 <= (int)uVar2) {
        uVar17 = uVar2;
      }
      uVar23 = uVar17;
      if ((int)uVar17 < 0) {
        uVar23 = uVar17 + 1;
      }
      uVar23 = (int)uVar23 >> 1;
      if ((int)uVar22 < (int)uVar23) {
        uVar22 = uVar23;
        uStack00000000000000d4 = uVar23;
      }
      _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar17);
      uVar20 = uStack000000000000005c;
    }
    *(uint *)(lVar9 + 0x18) = uVar22;
    *(uint *)(lVar9 + 0x1c) = uVar17;
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
      if (lVar9 == 0) goto LAB_07765a28;
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f32d90;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x20));
      uVar11 = FUN_07a3b850((long)&stack0x000000d0 + 4,0);
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x28) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28),uVar11);
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_09f32da0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x30));
      uVar11 = FUN_07a3b850(&stack0x000000d0,0);
      if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x38) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x38),uVar11);
      if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_09f32de8;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar11 = FUN_07a3b850(*plVar21 + 0x10,0);
      if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x48) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x48),uVar11);
      if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar11 = FUN_07a3b850(*plVar21 + 0x14,0);
      if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x58) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x58),uVar11);
      if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar11 = FUN_07a5081c(*plVar21 + 0x2c,0);
      if (*(uint *)(lVar9 + 0x18) < 10) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x68) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x68),uVar11);
      if (*(uint *)(lVar9 + 0x18) < 0xb) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar11 = FUN_07a5081c(*plVar21 + 0x30,0);
      if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x78) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x78),uVar11);
      if (*(uint *)(lVar9 + 0x18) < 0xd) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
      thunk_FUN_044bb4b4();
      lVar10 = *plVar21;
      if (lVar10 == 0) goto LAB_07765a28;
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar11 = FUN_079a04dc(lVar10 + 0x28,0);
      if (*(uint *)(lVar9 + 0x18) < 0xe) goto LAB_07765a24;
      *(undefined8 *)(lVar9 + 0x88) = uVar11;
      thunk_FUN_044bb4b4();
      uVar11 = FUN_078b57fc(lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar11,0);
    }
    puVar3 = PTR_DAT_09f32ce0;
    lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
    FUN_05bad610(lVar9,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_09f32d80;
    if (*plVar21 != 0) {
      FUN_077617f0(*(undefined8 *)(*plVar21 + 0x20),lVar9);
      uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_07a80df4(uVar11,0);
      if (lVar9 != 0) {
        FUN_05baf864(lVar9,uVar11,*(undefined8 *)PTR_DAT_09f32d88);
        lVar10 = *plVar21;
        if ((lVar10 != 0) && (unaff_x21 != 0)) {
          iVar27 = *(int *)(lVar10 + 0x10);
          iVar26 = *(int *)(lVar10 + 0x14);
          uVar11 = FUN_05a28f70(unaff_x21,0,*(undefined8 *)PTR_DAT_09f32c78);
          uVar24 = FUN_07760c44((float)iVar27,(float)iVar26,unaff_x20,lVar9,unaff_w23,
                                uStack0000000000000084,uVar11,in_stack_00000080,
                                in_stack_00000078._4_4_,uVar20);
          if ((iVar7 < 0xb) && ((uVar24 & 1) != 0)) {
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
            }
            lVar9 = FUN_07764110(unaff_x20,unaff_x24,unaff_x21,unaff_w23,uStack0000000000000084,
                                 in_stack_000000c0._4_4_,in_stack_000000c0 & 0xffffffff,uVar20);
            return lVar9;
          }
          uVar11 = FUN_05a2ad3c(unaff_x21,*(undefined8 *)PTR_DAT_09f32cc8);
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
          FUN_07a80df4(lVar10,0);
          *(undefined8 *)(lVar10 + 0x28) = uVar11;
          thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28),uVar11);
          lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar9 + 0x18));
          plVar8 = (long *)(lVar10 + 0x20);
          *plVar8 = lVar13;
          thunk_FUN_044bb4b4(plVar8);
          lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar9 + 0x18));
          plVar21 = (long *)(lVar10 + 0x30);
          *plVar21 = lVar13;
          thunk_FUN_044bb4b4(plVar21,lVar13);
          *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
          *(uint *)(lVar10 + 0x10) = uStack00000000000000d4;
          *(int *)(lVar10 + 0x14) = iStack00000000000000d0;
          puVar5 = PTR_DAT_09f32ba8;
          puVar4 = PTR_DAT_09f24a78;
          puVar3 = PTR_DAT_09f22e40;
          uStack00000000000000bc = 0;
          if (0 < *(int *)(lVar9 + 0x18)) {
            do {
              lVar13 = FUN_05badb74(lVar9,uStack00000000000000bc,*(undefined8 *)puVar5);
              if ((lVar13 == 0) || (lVar16 = *plVar8, lVar16 == 0)) goto LAB_07765a28;
              if (*(uint *)(lVar16 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
              fVar30 = fStack00000000000000cc +
                       (float)*(int *)(lVar13 + 0x1c) / (float)(int)uStack00000000000000d4;
              lVar16 = lVar16 + (long)(int)uStack00000000000000bc * 0x10;
              fVar29 = fStack00000000000000c8 +
                       (float)*(int *)(lVar13 + 0x20) / (float)iStack00000000000000d0;
              fVar25 = (float)*(int *)(lVar13 + 0x14) / (float)(int)uStack00000000000000d4 -
                       (fStack00000000000000cc + fStack00000000000000cc);
              fVar28 = (float)*(int *)(lVar13 + 0x18) / (float)iStack00000000000000d0 -
                       (fStack00000000000000c8 + fStack00000000000000c8);
              *(float *)(lVar16 + 0x20) = fVar30;
              *(float *)(lVar16 + 0x24) = fVar29;
              *(float *)(lVar16 + 0x28) = fVar25;
              *(float *)(lVar16 + 0x2c) = fVar28;
              lVar16 = *plVar21;
              if (lVar16 == 0) goto LAB_07765a28;
              if (*(uint *)(lVar16 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
              *(undefined4 *)(lVar16 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                   *(undefined4 *)(lVar13 + 0x10);
              if (3 < *(int *)(unaff_x20 + 0x10)) {
                lVar16 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
                if (lVar16 == 0) goto LAB_07765a28;
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x20));
                uVar11 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x28) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x28),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x30));
                uVar11 = FUN_07a3b850((undefined4 *)(lVar13 + 0x10),0);
                if (*(uint *)(lVar16 + 0x18) < 4) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x38) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x38),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 5) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x40));
                fStack00000000000000b8 = fVar30 * (float)(int)uStack00000000000000d4;
                uVar11 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 6) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x48) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x48),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x50));
                fStack00000000000000b8 = fVar29 * (float)iStack00000000000000d0;
                uVar11 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 8) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x58) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x58),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 9) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x60));
                fStack00000000000000b8 = fVar25 * (float)(int)uStack00000000000000d4;
                uVar11 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 10) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x68) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x68),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 0xb) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x70));
                fStack00000000000000b8 = fVar28 * (float)iStack00000000000000d0;
                uVar11 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 0xc) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x78) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x78),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 0xd) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x80));
                uVar24 = FUN_05a28f70(unaff_x21,uStack00000000000000bc,
                                      *(undefined8 *)PTR_DAT_09f32c78);
                uStack00000000000000b4 = (uint)(uVar24 >> 0x1f) & 0xfffffffe;
                uVar11 = FUN_07a3b850(&stack0x000000b4,0);
                if (*(uint *)(lVar16 + 0x18) < 0xe) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x88) = uVar11;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x88),uVar11);
                if (*(uint *)(lVar16 + 0x18) < 0xf) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)puVar4;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x90));
                iVar7 = FUN_05a28f70(unaff_x21,uStack00000000000000bc,
                                     *(undefined8 *)PTR_DAT_09f32c78);
                uStack00000000000000b4 = iVar7 << 1;
                uVar11 = FUN_07a3b850(&stack0x000000b4,0);
                if (*(uint *)(lVar16 + 0x18) < 0x10) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x98) = uVar11;
                thunk_FUN_044bb4b4();
                uVar11 = FUN_078b57fc(lVar16,0);
                lVar16 = *(long *)puVar3;
                lVar13 = *(long *)(lVar16 + 0x38);
                if (lVar13 == 0) {
                  FUN_04482014(lVar16);
                  lVar13 = *(long *)(lVar16 + 0x38);
                }
                lVar13 = *(long *)(lVar13 + 0x10);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = FUN_04481fb8();
                }
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = FUN_04481fb8();
                }
                FUN_0771ec00(uVar11,**(undefined8 **)(lVar13 + 0xb8),0);
              }
              uStack00000000000000bc = uStack00000000000000bc + 1;
            } while ((int)uStack00000000000000bc < *(int *)(lVar9 + 0x18));
          }
          FUN_077606dc(lVar10);
          return lVar10;
        }
      }
    }
  }
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


