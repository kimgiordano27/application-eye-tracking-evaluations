/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 077647bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions
               (undefined1 param_1 [16],undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint in_w8;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  uint in_w9;
  uint unaff_w19;
  undefined8 unaff_x20;
  uint uVar15;
  uint uVar16;
  long *unaff_x21;
  int iVar17;
  long unaff_x22;
  long *plVar18;
  uint unaff_w23;
  long *plVar19;
  uint unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  ulong unaff_x28;
  long lVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  float unaff_s8;
  float fVar25;
  float fVar26;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  int iStack0000000000000080;
  uint uStack0000000000000084;
  long in_stack_00000088;
  long *in_stack_00000090;
  undefined8 in_stack_000000b0;
  float fStack00000000000000b8;
  uint uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  int iStack00000000000000d0;
  uint uStack00000000000000d4;
  uint uStack00000000000000d8;
  uint uStack00000000000000dc;
  
  while( true ) {
    puVar5 = PTR_DAT_09f32cf8;
    puVar4 = PTR_DAT_09f32c80;
    unaff_x28 = unaff_x28 + 1;
    if ((int)unaff_w25 <= (int)in_w8) {
      unaff_w25 = in_w8;
    }
    unaff_s8 = unaff_s8 + (float)(int)(in_w9 * in_w8);
    if ((int)unaff_w19 <= (int)in_w9) {
      unaff_w19 = in_w9;
    }
    unaff_x22 = unaff_x22 + 8;
    if ((long)(int)unaff_x21[3] <= (long)unaff_x28) break;
    fVar21 = (float)FUN_05d0cfbc(unaff_x20,unaff_x28 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
    FUN_05d0cfbc(unaff_x20,unaff_x28 & 0xffffffff,*(undefined8 *)puVar5);
    if (in_stack_00000088 == 0) goto LAB_07765a28;
    iVar23 = -0x80000000;
    if ((float)param_2 != INFINITY) {
      iVar23 = (int)(float)param_2;
    }
    iVar24 = -0x80000000;
    if (fVar21 != INFINITY) {
      iVar24 = (int)fVar21;
    }
    uVar10 = FUN_05a28f70(in_stack_00000088,unaff_x28 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
    lVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    FUN_07a80df4(lVar12,0);
    iVar24 = ((uint)(uVar10 >> 0x1f) & 0xfffffffe) + iVar24;
    if (iVar24 <= iStack0000000000000080) {
      iVar24 = iStack0000000000000080;
    }
    iVar23 = iVar23 + (int)uVar10 * 2;
    *(int *)(lVar12 + 0x10) = (int)unaff_x28;
    *(int *)(lVar12 + 0x14) = iVar24;
    if (iVar23 <= in_stack_00000078._4_4_) {
      iVar23 = in_stack_00000078._4_4_;
    }
    *(int *)(lVar12 + 0x18) = iVar23;
    lVar20 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*in_stack_00000090 + 0x40));
    if (lVar20 == 0) {
      uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar8,0);
    }
    if (*(uint *)(in_stack_00000090 + 3) <= unaff_x28) goto LAB_07765a24;
    *(long *)(unaff_x26 + unaff_x28 * 8) = lVar12;
    thunk_FUN_044bb4b4(unaff_x26 + unaff_x22,lVar12);
    in_w8 = *(uint *)(lVar12 + 0x14);
    in_w9 = *(uint *)(lVar12 + 0x18);
    unaff_x21 = in_stack_00000090;
    unaff_w27 = uStack0000000000000084;
  }
  fVar21 = (float)(int)unaff_w19 / (float)(int)unaff_w25;
  if (fVar21 <= 2.0) {
    if (0.5 <= fVar21) {
      puVar13 = (undefined8 *)PTR_DAT_09f32c90;
      if (3 < *(int *)(in_stack_00000070 + 0x10)) {
        lVar20 = *(long *)PTR_DAT_09f22e40;
        lVar12 = *(long *)(lVar20 + 0x38);
        if (lVar12 == 0) {
          FUN_04482014(lVar20);
          lVar12 = *(long *)(lVar20 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar12 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32dc0,**(undefined8 **)(lVar12 + 0xb8),0);
        puVar13 = (undefined8 *)PTR_DAT_09f32c90;
      }
    }
    else {
      puVar13 = (undefined8 *)PTR_DAT_09f32ca8;
      if (3 < *(int *)(in_stack_00000070 + 0x10)) {
        lVar20 = *(long *)PTR_DAT_09f22e40;
        lVar12 = *(long *)(lVar20 + 0x38);
        if (lVar12 == 0) {
          FUN_04482014(lVar20);
          lVar12 = *(long *)(lVar20 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar12 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32d98,**(undefined8 **)(lVar12 + 0xb8),0);
        puVar13 = (undefined8 *)PTR_DAT_09f32ca8;
      }
    }
  }
  else {
    puVar13 = (undefined8 *)PTR_DAT_09f32c98;
    if (3 < *(int *)(in_stack_00000070 + 0x10)) {
      lVar20 = *(long *)PTR_DAT_09f22e40;
      lVar12 = *(long *)(lVar20 + 0x38);
      if (lVar12 == 0) {
        FUN_04482014(lVar20);
        lVar12 = *(long *)(lVar20 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar12 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8();
      }
      FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32de0,**(undefined8 **)(lVar12 + 0xb8),0);
      puVar13 = (undefined8 *)PTR_DAT_09f32c98;
    }
  }
  uVar8 = thunk_FUN_0448520c(*puVar13);
  FUN_07a80df4(uVar8,0);
  FUN_04b03f08(in_stack_00000090,uVar8,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_09f1e748;
  uVar16 = 0x80000000;
  if (SQRT(unaff_s8) != INFINITY) {
    uVar16 = (int)SQRT(unaff_s8);
  }
  if (*(char *)(in_stack_00000070 + 0x14) == '\0') {
    uVar15 = uVar16;
    uVar7 = uVar16;
    if ((int)uVar16 < (int)unaff_w25) {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      fVar21 = unaff_s8 / (float)(int)unaff_w25;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar7 = 0x80000000;
      if ((float)(int)fVar21 != INFINITY) {
        uVar7 = (int)fVar21;
      }
      uVar15 = unaff_w25;
      if ((int)uVar7 <= (int)unaff_w19) {
        uVar7 = unaff_w19;
      }
    }
    if ((int)uVar16 < (int)unaff_w19) {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      fVar21 = unaff_s8 / (float)(int)unaff_w19;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar15 = 0x80000000;
      if ((float)(int)fVar21 != INFINITY) {
        uVar15 = (int)fVar21;
      }
      uVar7 = unaff_w19;
      if ((int)uVar15 <= (int)unaff_w25) {
        uVar15 = unaff_w25;
      }
    }
  }
  else {
    uVar7 = FUN_07760ae0(uVar16);
    uVar15 = uVar7;
    if ((int)uVar7 < (int)unaff_w25) {
      fVar21 = logf((float)(int)uVar7);
      fVar21 = exp2f((float)(int)(fVar21 / DAT_01c7661c));
      uVar15 = 0x80000000;
      if (fVar21 != INFINITY) {
        uVar15 = (int)fVar21;
      }
      if (uVar15 < 3) {
        uVar15 = 2;
      }
    }
    if ((int)uVar7 < (int)unaff_w19) {
      fVar21 = logf((float)(int)uVar7);
      fVar21 = exp2f((float)(int)(fVar21 / DAT_01c7661c));
      uVar7 = 0x80000000;
      if (fVar21 != INFINITY) {
        uVar7 = (int)fVar21;
      }
      if (uVar7 < 3) {
        uVar7 = 2;
      }
    }
  }
  puVar6 = PTR_DAT_09f32de8;
  puVar5 = PTR_DAT_09f32d20;
  puVar4 = PTR_DAT_09f22e40;
  uVar1 = 4;
  if (uVar15 != 0) {
    uVar1 = uVar15;
  }
  uStack00000000000000d8 = 4;
  if (uVar7 != 0) {
    uStack00000000000000d8 = uVar7;
  }
  iVar24 = uVar16 * 1000;
  iVar23 = -0x80000000;
  if ((float)(int)uVar1 * DAT_01c759d8 != INFINITY) {
    iVar23 = (int)((float)(int)uVar1 * DAT_01c759d8);
  }
  iVar2 = -0x80000000;
  if ((float)(int)uStack00000000000000d8 * DAT_01c759d8 != INFINITY) {
    iVar2 = (int)((float)(int)uStack00000000000000d8 * DAT_01c759d8);
  }
  if (iVar23 == 0) {
    iVar23 = 1;
  }
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  plVar18 = (long *)(in_stack_00000070 + 0x18);
  uStack00000000000000dc = uVar1;
  if ((int)uStack00000000000000d8 < iVar24) {
    do {
      iVar17 = 0;
      uStack00000000000000dc = uVar1;
      while ((int)uStack00000000000000dc < iVar24) {
        lVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
        FUN_07a80df4(lVar12,0);
        if (4 < *(int *)(in_stack_00000070 + 0x10)) {
          uVar8 = FUN_07a3b850(&stack0x000000d8,0);
          uVar9 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar8,*(undefined8 *)puVar6,uVar9,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar8,0);
        }
        uVar10 = FUN_07761c50(unaff_s8,in_stack_00000070,in_stack_00000090,uStack00000000000000dc,
                              uStack00000000000000d8,unaff_w23,unaff_w27,lVar12);
        if ((uVar10 & 1) != 0) {
          lVar20 = *plVar18;
          if (lVar20 != 0) {
            if (lVar12 == 0) goto LAB_07765a28;
            fVar21 = 0.0;
            if (*(char *)(lVar12 + 0x28) != '\0') {
              fVar21 = 1.0;
            }
            if (*(char *)(in_stack_00000070 + 0x14) == '\0') {
              fVar22 = 0.0;
              if (*(char *)(lVar20 + 0x28) != '\0') {
                fVar22 = 1.0;
              }
              fVar21 = fVar21 + *(float *)(lVar12 + 0x30) +
                                *(float *)(lVar12 + 0x2c) + *(float *)(lVar12 + 0x2c);
              fVar22 = fVar22 + *(float *)(lVar20 + 0x30) +
                                *(float *)(lVar20 + 0x2c) + *(float *)(lVar20 + 0x2c);
            }
            else {
              fVar21 = fVar21 + fVar21 + *(float *)(lVar12 + 0x2c);
              fVar22 = 0.0;
              if (*(char *)(lVar20 + 0x28) != '\0') {
                fVar22 = 2.0;
              }
              fVar22 = *(float *)(lVar20 + 0x2c) + fVar22;
            }
            if (fVar21 <= fVar22) break;
          }
          *plVar18 = lVar12;
          thunk_FUN_044bb4b4(plVar18,lVar12);
          break;
        }
        if (((int)uStack00000000000000dc < (int)unaff_w23) &&
           (*(char *)(in_stack_00000070 + 0x14) != '\0')) {
          uStack00000000000000dc = uStack00000000000000dc << 1;
        }
        else {
          uVar16 = uStack00000000000000dc + iVar23;
          bVar3 = (int)unaff_w23 <= (int)uStack00000000000000dc;
          uStack00000000000000dc = unaff_w23;
          if ((int)uVar16 <= (int)unaff_w23 || bVar3) {
            uStack00000000000000dc = uVar16;
          }
        }
        if (4 < *(int *)(in_stack_00000070 + 0x10)) {
          uVar8 = FUN_07a3b850(&stack0x000000d8,0);
          uVar9 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar8,*(undefined8 *)puVar6,uVar9,0);
          lVar20 = *(long *)puVar4;
          lVar12 = *(long *)(lVar20 + 0x38);
          if (lVar12 == 0) {
            FUN_04482014(lVar20);
            lVar12 = *(long *)(lVar20 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_04481fb8();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar12 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar8,**(undefined8 **)(lVar12 + 0xb8),0);
        }
        iVar17 = iVar17 + 1;
      }
      if (((int)uStack00000000000000d8 < (int)unaff_w27) &&
         (*(char *)(in_stack_00000070 + 0x14) != '\0')) {
        uStack00000000000000d8 = uStack00000000000000d8 << 1;
      }
      else {
        uVar16 = uStack00000000000000d8 + iVar2;
        bVar3 = (int)unaff_w27 <= (int)uStack00000000000000d8;
        uStack00000000000000d8 = unaff_w27;
        if ((int)uVar16 <= (int)unaff_w27 || bVar3) {
          uStack00000000000000d8 = uVar16;
        }
      }
      if (3 < *(int *)(in_stack_00000070 + 0x10)) {
        uVar8 = FUN_07a3b850(&stack0x000000d8,0);
        uVar9 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
        uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar8,*(undefined8 *)puVar6,uVar9,0);
        lVar20 = *(long *)puVar4;
        lVar12 = *(long *)(lVar20 + 0x38);
        if (lVar12 == 0) {
          FUN_04482014(lVar20);
          lVar12 = *(long *)(lVar20 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar12 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        FUN_0771ec00(uVar8,**(undefined8 **)(lVar12 + 0xb8),0);
      }
    } while ((0 < iVar17) && ((int)uStack00000000000000d8 < iVar24));
  }
  lVar12 = *plVar18;
  if (lVar12 == 0) {
    return 0;
  }
  _iStack00000000000000d0 = 0;
  uVar16 = *(uint *)(lVar12 + 0x10);
  if (*(char *)(in_stack_00000070 + 0x14) == '\0') {
    if ((int)unaff_w23 <= (int)uVar16) {
      uVar16 = unaff_w23;
    }
    uVar15 = *(uint *)(lVar12 + 0x14);
    if ((int)unaff_w27 <= (int)*(uint *)(lVar12 + 0x14)) {
      uVar15 = unaff_w27;
    }
    _iStack00000000000000d0 = CONCAT44(uVar16,uVar15);
  }
  else {
    fVar22 = logf((float)(int)uVar16);
    fVar21 = DAT_01c7661c;
    fVar22 = exp2f((float)(int)(fVar22 / DAT_01c7661c));
    uVar16 = 0x80000000;
    if (fVar22 != INFINITY) {
      uVar16 = (int)fVar22;
    }
    if (uVar16 < 3) {
      uVar16 = 2;
    }
    if ((int)unaff_w23 <= (int)uVar16) {
      uVar16 = unaff_w23;
    }
    uStack00000000000000d4 = uVar16;
    fVar22 = logf((float)*(int *)(lVar12 + 0x14));
    fVar21 = exp2f((float)(int)(fVar22 / fVar21));
    uVar7 = 0x80000000;
    if (fVar21 != INFINITY) {
      uVar7 = (int)fVar21;
    }
    if (uVar7 < 3) {
      uVar7 = 2;
    }
    if ((int)unaff_w27 <= (int)uVar7) {
      uVar7 = unaff_w27;
    }
    uVar1 = uVar16;
    if ((int)uVar16 < 0) {
      uVar1 = uVar16 + 1;
    }
    uVar15 = (int)uVar1 >> 1;
    if ((int)uVar1 >> 1 <= (int)uVar7) {
      uVar15 = uVar7;
    }
    uVar7 = uVar15;
    if ((int)uVar15 < 0) {
      uVar7 = uVar15 + 1;
    }
    uVar7 = (int)uVar7 >> 1;
    if ((int)uVar16 < (int)uVar7) {
      uVar16 = uVar7;
      uStack00000000000000d4 = uVar7;
    }
    _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar15);
  }
  *(uint *)(lVar12 + 0x18) = uVar16;
  *(uint *)(lVar12 + 0x1c) = uVar15;
  if (3 < *(int *)(in_stack_00000070 + 0x10)) {
    lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
    if (lVar12 == 0) goto LAB_07765a28;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_09f32d90;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20));
    uVar8 = FUN_07a3b850((long)&stack0x000000d0 + 4,0);
    if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x28) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28),uVar8);
    if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_09f32da0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x30));
    uVar8 = FUN_07a3b850(&stack0x000000d0,0);
    if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x38) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x38),uVar8);
    if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_09f32de8;
    thunk_FUN_044bb4b4();
    if (*plVar18 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a3b850(*plVar18 + 0x10,0);
    if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x48) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x48),uVar8);
    if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*plVar18 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a3b850(*plVar18 + 0x14,0);
    if (*(uint *)(lVar12 + 0x18) < 8) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x58) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x58),uVar8);
    if (*(uint *)(lVar12 + 0x18) < 9) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*plVar18 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a5081c(*plVar18 + 0x2c,0);
    if (*(uint *)(lVar12 + 0x18) < 10) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x68) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x68),uVar8);
    if (*(uint *)(lVar12 + 0x18) < 0xb) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*plVar18 == 0) goto LAB_07765a28;
    uVar8 = FUN_07a5081c(*plVar18 + 0x30,0);
    if (*(uint *)(lVar12 + 0x18) < 0xc) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x78) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x78),uVar8);
    if (*(uint *)(lVar12 + 0x18) < 0xd) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar20 = *plVar18;
    if (lVar20 == 0) goto LAB_07765a28;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = FUN_079a04dc(lVar20 + 0x28,0);
    if (*(uint *)(lVar12 + 0x18) < 0xe) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x88) = uVar8;
    thunk_FUN_044bb4b4();
    uVar8 = FUN_078b57fc(lVar12,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar8,0);
  }
  puVar4 = PTR_DAT_09f32ce0;
  lVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar12,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_09f32d80;
  if (*plVar18 != 0) {
    FUN_077617f0(*(undefined8 *)(*plVar18 + 0x20),lVar12);
    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
    FUN_07a80df4(uVar8,0);
    if (lVar12 != 0) {
      FUN_05baf864(lVar12,uVar8,*(undefined8 *)PTR_DAT_09f32d88);
      lVar20 = *plVar18;
      if ((lVar20 != 0) && (in_stack_00000088 != 0)) {
        iVar24 = *(int *)(lVar20 + 0x10);
        iVar23 = *(int *)(lVar20 + 0x14);
        uVar8 = FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
        uVar10 = FUN_07760c44((float)iVar24,(float)iVar23,in_stack_00000070,lVar12,unaff_w23,
                              uStack0000000000000084,uVar8,iStack0000000000000080,
                              in_stack_00000078._4_4_,in_stack_00000058._4_4_);
        if ((in_stack_00000050._4_4_ < 0xb) && ((uVar10 & 1) != 0)) {
          if (3 < *(int *)(in_stack_00000070 + 0x10)) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
          }
          lVar12 = FUN_07764110(in_stack_00000070,unaff_x20,in_stack_00000088,unaff_w23,
                                uStack0000000000000084,uStack00000000000000c4,uStack00000000000000c0
                                ,in_stack_00000058._4_4_);
          return lVar12;
        }
        uVar8 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar20,0);
        *(undefined8 *)(lVar20 + 0x28) = uVar8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x28),uVar8);
        lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar12 + 0x18));
        plVar18 = (long *)(lVar20 + 0x20);
        *plVar18 = lVar11;
        thunk_FUN_044bb4b4(plVar18);
        lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar12 + 0x18));
        plVar19 = (long *)(lVar20 + 0x30);
        *plVar19 = lVar11;
        thunk_FUN_044bb4b4(plVar19,lVar11);
        *(undefined8 *)(lVar20 + 0x18) = 0xffffffffffffffff;
        *(uint *)(lVar20 + 0x10) = uStack00000000000000d4;
        *(int *)(lVar20 + 0x14) = iStack00000000000000d0;
        puVar6 = PTR_DAT_09f32ba8;
        puVar5 = PTR_DAT_09f24a78;
        puVar4 = PTR_DAT_09f22e40;
        uStack00000000000000bc = 0;
        if (0 < *(int *)(lVar12 + 0x18)) {
          do {
            lVar11 = FUN_05badb74(lVar12,uStack00000000000000bc,*(undefined8 *)puVar6);
            if ((lVar11 == 0) || (lVar14 = *plVar18, lVar14 == 0)) goto LAB_07765a28;
            if (*(uint *)(lVar14 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            fVar26 = fStack00000000000000cc +
                     (float)*(int *)(lVar11 + 0x1c) / (float)(int)uStack00000000000000d4;
            lVar14 = lVar14 + (long)(int)uStack00000000000000bc * 0x10;
            fVar25 = fStack00000000000000c8 +
                     (float)*(int *)(lVar11 + 0x20) / (float)iStack00000000000000d0;
            fVar22 = (float)*(int *)(lVar11 + 0x14) / (float)(int)uStack00000000000000d4 -
                     (fStack00000000000000cc + fStack00000000000000cc);
            fVar21 = (float)*(int *)(lVar11 + 0x18) / (float)iStack00000000000000d0 -
                     (fStack00000000000000c8 + fStack00000000000000c8);
            *(float *)(lVar14 + 0x20) = fVar26;
            *(float *)(lVar14 + 0x24) = fVar25;
            *(float *)(lVar14 + 0x28) = fVar22;
            *(float *)(lVar14 + 0x2c) = fVar21;
            lVar14 = *plVar19;
            if (lVar14 == 0) goto LAB_07765a28;
            if (*(uint *)(lVar14 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            *(undefined4 *)(lVar14 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                 *(undefined4 *)(lVar11 + 0x10);
            if (3 < *(int *)(in_stack_00000070 + 0x10)) {
              lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
              if (lVar14 == 0) goto LAB_07765a28;
              if (*(int *)(lVar14 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20));
              uVar8 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x28) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x30));
              uVar8 = FUN_07a3b850((undefined4 *)(lVar11 + 0x10),0);
              if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x38) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x40));
              fStack00000000000000b8 = fVar26 * (float)(int)uStack00000000000000d4;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x48) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x48),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x50));
              fStack00000000000000b8 = fVar25 * (float)iStack00000000000000d0;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x58) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x58),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 9) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x60));
              fStack00000000000000b8 = fVar22 * (float)(int)uStack00000000000000d4;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar14 + 0x18) < 10) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x68) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x68),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 0xb) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x70));
              fStack00000000000000b8 = fVar21 * (float)iStack00000000000000d0;
              uVar8 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar14 + 0x18) < 0xc) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x78) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x78),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 0xd) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x80));
              uVar10 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = (uint)(uVar10 >> 0x1f) & 0xfffffffe;
              uVar8 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar14 + 0x18) < 0xe) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x88) = uVar8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x88),uVar8);
              if (*(uint *)(lVar14 + 0x18) < 0xf) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x90) = *(undefined8 *)puVar5;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x90));
              iVar23 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = iVar23 << 1;
              uVar8 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar14 + 0x18) < 0x10) goto LAB_07765a24;
              *(undefined8 *)(lVar14 + 0x98) = uVar8;
              thunk_FUN_044bb4b4();
              uVar8 = FUN_078b57fc(lVar14,0);
              lVar14 = *(long *)puVar4;
              lVar11 = *(long *)(lVar14 + 0x38);
              if (lVar11 == 0) {
                FUN_04482014(lVar14);
                lVar11 = *(long *)(lVar14 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_04481fb8();
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar8,**(undefined8 **)(lVar11 + 0xb8),0);
            }
            uStack00000000000000bc = uStack00000000000000bc + 1;
          } while ((int)uStack00000000000000bc < *(int *)(lVar12 + 0x18));
        }
        FUN_077606dc(lVar20);
        return lVar20;
      }
    }
  }
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


