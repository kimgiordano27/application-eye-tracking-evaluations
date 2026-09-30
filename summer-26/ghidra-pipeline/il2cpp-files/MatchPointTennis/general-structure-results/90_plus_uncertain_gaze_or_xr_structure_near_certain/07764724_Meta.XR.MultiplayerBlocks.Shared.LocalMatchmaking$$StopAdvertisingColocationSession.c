/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 07764724
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


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession
               (undefined1 param_1 [16],undefined8 param_2,long param_3,ulong param_4,
               undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int in_w8;
  undefined8 *puVar14;
  long lVar15;
  int in_w9;
  uint unaff_w19;
  undefined8 unaff_x20;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long unaff_x22;
  long *plVar19;
  uint unaff_w23;
  long *plVar20;
  int unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  ulong unaff_x28;
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
    if (!(bool)in_ZR) {
      in_w9 = in_w8;
    }
    uVar8 = FUN_05a28f70(param_3,param_4,param_5);
    lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
    FUN_07a80df4(lVar9,0);
    iVar23 = ((uint)(uVar8 >> 0x1f) & 0xfffffffe) + in_w9;
    if (iVar23 <= iStack0000000000000080) {
      iVar23 = iStack0000000000000080;
    }
    iVar24 = unaff_w24 + (int)uVar8 * 2;
    *(int *)(lVar9 + 0x10) = (int)unaff_x28;
    *(int *)(lVar9 + 0x14) = iVar23;
    if (iVar24 <= in_stack_00000078._4_4_) {
      iVar24 = in_stack_00000078._4_4_;
    }
    *(int *)(lVar9 + 0x18) = iVar24;
    lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*in_stack_00000090 + 0x40));
    if (lVar10 == 0) {
      uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar11,0);
    }
    if (*(uint *)(in_stack_00000090 + 3) <= unaff_x28) goto LAB_07765a24;
    *(long *)(unaff_x26 + unaff_x28 * 8) = lVar9;
    thunk_FUN_044bb4b4(unaff_x26 + unaff_x22,lVar9);
    puVar5 = PTR_DAT_09f32cf8;
    puVar4 = PTR_DAT_09f32c80;
    uVar17 = *(uint *)(lVar9 + 0x14);
    uVar16 = *(uint *)(lVar9 + 0x18);
    unaff_x28 = unaff_x28 + 1;
    if ((int)unaff_w25 <= (int)uVar17) {
      unaff_w25 = uVar17;
    }
    unaff_s8 = unaff_s8 + (float)(int)(uVar16 * uVar17);
    if ((int)unaff_w19 <= (int)uVar16) {
      unaff_w19 = uVar16;
    }
    unaff_x22 = unaff_x22 + 8;
    if ((long)(int)in_stack_00000090[3] <= (long)unaff_x28) break;
    fVar21 = (float)FUN_05d0cfbc(unaff_x20,unaff_x28 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
    FUN_05d0cfbc(unaff_x20,unaff_x28 & 0xffffffff,*(undefined8 *)puVar5);
    if (in_stack_00000088 == 0) goto LAB_07765a28;
    param_5 = *(undefined8 *)PTR_DAT_09f32c78;
    in_w9 = -0x80000000;
    unaff_w24 = -0x80000000;
    if ((float)param_2 != INFINITY) {
      unaff_w24 = (int)(float)param_2;
    }
    in_w8 = (int)fVar21;
    in_ZR = fVar21 == INFINITY;
    param_4 = unaff_x28 & 0xffffffff;
    param_3 = in_stack_00000088;
  }
  fVar21 = (float)(int)unaff_w19 / (float)(int)unaff_w25;
  if (fVar21 <= 2.0) {
    if (0.5 <= fVar21) {
      puVar14 = (undefined8 *)PTR_DAT_09f32c90;
      if (3 < *(int *)(in_stack_00000070 + 0x10)) {
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
        puVar14 = (undefined8 *)PTR_DAT_09f32c90;
      }
    }
    else {
      puVar14 = (undefined8 *)PTR_DAT_09f32ca8;
      if (3 < *(int *)(in_stack_00000070 + 0x10)) {
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
        puVar14 = (undefined8 *)PTR_DAT_09f32ca8;
      }
    }
  }
  else {
    puVar14 = (undefined8 *)PTR_DAT_09f32c98;
    if (3 < *(int *)(in_stack_00000070 + 0x10)) {
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
      puVar14 = (undefined8 *)PTR_DAT_09f32c98;
    }
  }
  uVar11 = thunk_FUN_0448520c(*puVar14);
  FUN_07a80df4(uVar11,0);
  FUN_04b03f08(in_stack_00000090,uVar11,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_09f1e748;
  uVar17 = 0x80000000;
  if (SQRT(unaff_s8) != INFINITY) {
    uVar17 = (int)SQRT(unaff_s8);
  }
  if (*(char *)(in_stack_00000070 + 0x14) == '\0') {
    uVar16 = uVar17;
    uVar7 = uVar17;
    if ((int)uVar17 < (int)unaff_w25) {
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
      uVar16 = unaff_w25;
      if ((int)uVar7 <= (int)unaff_w19) {
        uVar7 = unaff_w19;
      }
    }
    if ((int)uVar17 < (int)unaff_w19) {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      fVar21 = unaff_s8 / (float)(int)unaff_w19;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar16 = 0x80000000;
      if ((float)(int)fVar21 != INFINITY) {
        uVar16 = (int)fVar21;
      }
      uVar7 = unaff_w19;
      if ((int)uVar16 <= (int)unaff_w25) {
        uVar16 = unaff_w25;
      }
    }
  }
  else {
    uVar7 = FUN_07760ae0(uVar17);
    uVar16 = uVar7;
    if ((int)uVar7 < (int)unaff_w25) {
      fVar21 = logf((float)(int)uVar7);
      fVar21 = exp2f((float)(int)(fVar21 / DAT_01c7661c));
      uVar16 = 0x80000000;
      if (fVar21 != INFINITY) {
        uVar16 = (int)fVar21;
      }
      if (uVar16 < 3) {
        uVar16 = 2;
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
  if (uVar16 != 0) {
    uVar1 = uVar16;
  }
  uStack00000000000000d8 = 4;
  if (uVar7 != 0) {
    uStack00000000000000d8 = uVar7;
  }
  iVar24 = uVar17 * 1000;
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
  plVar19 = (long *)(in_stack_00000070 + 0x18);
  uStack00000000000000dc = uVar1;
  if ((int)uStack00000000000000d8 < iVar24) {
    do {
      iVar18 = 0;
      uStack00000000000000dc = uVar1;
      while ((int)uStack00000000000000dc < iVar24) {
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
        FUN_07a80df4(lVar9,0);
        if (4 < *(int *)(in_stack_00000070 + 0x10)) {
          uVar11 = FUN_07a3b850(&stack0x000000d8,0);
          uVar12 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar11,*(undefined8 *)puVar6,uVar12,
                                0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar11,0);
        }
        uVar8 = FUN_07761c50(unaff_s8,in_stack_00000070,in_stack_00000090,uStack00000000000000dc,
                             uStack00000000000000d8,unaff_w23,uStack0000000000000084,lVar9);
        if ((uVar8 & 1) != 0) {
          lVar10 = *plVar19;
          if (lVar10 != 0) {
            if (lVar9 == 0) goto LAB_07765a28;
            fVar21 = 0.0;
            if (*(char *)(lVar9 + 0x28) != '\0') {
              fVar21 = 1.0;
            }
            if (*(char *)(in_stack_00000070 + 0x14) == '\0') {
              fVar22 = 0.0;
              if (*(char *)(lVar10 + 0x28) != '\0') {
                fVar22 = 1.0;
              }
              fVar21 = fVar21 + *(float *)(lVar9 + 0x30) +
                                *(float *)(lVar9 + 0x2c) + *(float *)(lVar9 + 0x2c);
              fVar22 = fVar22 + *(float *)(lVar10 + 0x30) +
                                *(float *)(lVar10 + 0x2c) + *(float *)(lVar10 + 0x2c);
            }
            else {
              fVar21 = fVar21 + fVar21 + *(float *)(lVar9 + 0x2c);
              fVar22 = 0.0;
              if (*(char *)(lVar10 + 0x28) != '\0') {
                fVar22 = 2.0;
              }
              fVar22 = *(float *)(lVar10 + 0x2c) + fVar22;
            }
            if (fVar21 <= fVar22) break;
          }
          *plVar19 = lVar9;
          thunk_FUN_044bb4b4(plVar19,lVar9);
          break;
        }
        if (((int)uStack00000000000000dc < (int)unaff_w23) &&
           (*(char *)(in_stack_00000070 + 0x14) != '\0')) {
          uStack00000000000000dc = uStack00000000000000dc << 1;
        }
        else {
          uVar17 = uStack00000000000000dc + iVar23;
          bVar3 = (int)unaff_w23 <= (int)uStack00000000000000dc;
          uStack00000000000000dc = unaff_w23;
          if ((int)uVar17 <= (int)unaff_w23 || bVar3) {
            uStack00000000000000dc = uVar17;
          }
        }
        if (4 < *(int *)(in_stack_00000070 + 0x10)) {
          uVar11 = FUN_07a3b850(&stack0x000000d8,0);
          uVar12 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar11,*(undefined8 *)puVar6,uVar12,
                                0);
          lVar10 = *(long *)puVar4;
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
        iVar18 = iVar18 + 1;
      }
      if (((int)uStack00000000000000d8 < (int)uStack0000000000000084) &&
         (*(char *)(in_stack_00000070 + 0x14) != '\0')) {
        uStack00000000000000d8 = uStack00000000000000d8 << 1;
      }
      else {
        uVar17 = uStack00000000000000d8 + iVar2;
        bVar3 = (int)uStack0000000000000084 <= (int)uStack00000000000000d8;
        uStack00000000000000d8 = uStack0000000000000084;
        if ((int)uVar17 <= (int)uStack0000000000000084 || bVar3) {
          uStack00000000000000d8 = uVar17;
        }
      }
      if (3 < *(int *)(in_stack_00000070 + 0x10)) {
        uVar11 = FUN_07a3b850(&stack0x000000d8,0);
        uVar12 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
        uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar11,*(undefined8 *)puVar6,uVar12,0)
        ;
        lVar10 = *(long *)puVar4;
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
    } while ((0 < iVar18) && ((int)uStack00000000000000d8 < iVar24));
  }
  lVar9 = *plVar19;
  if (lVar9 == 0) {
    return 0;
  }
  _iStack00000000000000d0 = 0;
  uVar17 = *(uint *)(lVar9 + 0x10);
  if (*(char *)(in_stack_00000070 + 0x14) == '\0') {
    if ((int)unaff_w23 <= (int)uVar17) {
      uVar17 = unaff_w23;
    }
    uVar16 = *(uint *)(lVar9 + 0x14);
    if ((int)uStack0000000000000084 <= (int)*(uint *)(lVar9 + 0x14)) {
      uVar16 = uStack0000000000000084;
    }
    _iStack00000000000000d0 = CONCAT44(uVar17,uVar16);
  }
  else {
    fVar22 = logf((float)(int)uVar17);
    fVar21 = DAT_01c7661c;
    fVar22 = exp2f((float)(int)(fVar22 / DAT_01c7661c));
    uVar17 = 0x80000000;
    if (fVar22 != INFINITY) {
      uVar17 = (int)fVar22;
    }
    if (uVar17 < 3) {
      uVar17 = 2;
    }
    if ((int)unaff_w23 <= (int)uVar17) {
      uVar17 = unaff_w23;
    }
    uStack00000000000000d4 = uVar17;
    fVar22 = logf((float)*(int *)(lVar9 + 0x14));
    fVar21 = exp2f((float)(int)(fVar22 / fVar21));
    uVar7 = 0x80000000;
    if (fVar21 != INFINITY) {
      uVar7 = (int)fVar21;
    }
    if (uVar7 < 3) {
      uVar7 = 2;
    }
    if ((int)uStack0000000000000084 <= (int)uVar7) {
      uVar7 = uStack0000000000000084;
    }
    uVar1 = uVar17;
    if ((int)uVar17 < 0) {
      uVar1 = uVar17 + 1;
    }
    uVar16 = (int)uVar1 >> 1;
    if ((int)uVar1 >> 1 <= (int)uVar7) {
      uVar16 = uVar7;
    }
    uVar7 = uVar16;
    if ((int)uVar16 < 0) {
      uVar7 = uVar16 + 1;
    }
    uVar7 = (int)uVar7 >> 1;
    if ((int)uVar17 < (int)uVar7) {
      uVar17 = uVar7;
      uStack00000000000000d4 = uVar7;
    }
    _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar16);
  }
  *(uint *)(lVar9 + 0x18) = uVar17;
  *(uint *)(lVar9 + 0x1c) = uVar16;
  if (3 < *(int *)(in_stack_00000070 + 0x10)) {
    lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
    if (lVar9 == 0) goto LAB_07765a28;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07765a24;
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
    if (*plVar19 == 0) goto LAB_07765a28;
    uVar11 = FUN_07a3b850(*plVar19 + 0x10,0);
    if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x48) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x48),uVar11);
    if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*plVar19 == 0) goto LAB_07765a28;
    uVar11 = FUN_07a3b850(*plVar19 + 0x14,0);
    if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x58) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x58),uVar11);
    if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*plVar19 == 0) goto LAB_07765a28;
    uVar11 = FUN_07a5081c(*plVar19 + 0x2c,0);
    if (*(uint *)(lVar9 + 0x18) < 10) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x68) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x68),uVar11);
    if (*(uint *)(lVar9 + 0x18) < 0xb) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*plVar19 == 0) goto LAB_07765a28;
    uVar11 = FUN_07a5081c(*plVar19 + 0x30,0);
    if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x78) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x78),uVar11);
    if (*(uint *)(lVar9 + 0x18) < 0xd) goto LAB_07765a24;
    *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar10 = *plVar19;
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
  puVar4 = PTR_DAT_09f32ce0;
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar9,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_09f32d80;
  if (*plVar19 != 0) {
    FUN_077617f0(*(undefined8 *)(*plVar19 + 0x20),lVar9);
    uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
    FUN_07a80df4(uVar11,0);
    if (lVar9 != 0) {
      FUN_05baf864(lVar9,uVar11,*(undefined8 *)PTR_DAT_09f32d88);
      lVar10 = *plVar19;
      if ((lVar10 != 0) && (in_stack_00000088 != 0)) {
        iVar24 = *(int *)(lVar10 + 0x10);
        iVar23 = *(int *)(lVar10 + 0x14);
        uVar11 = FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
        uVar8 = FUN_07760c44((float)iVar24,(float)iVar23,in_stack_00000070,lVar9,unaff_w23,
                             uStack0000000000000084,uVar11,iStack0000000000000080,
                             in_stack_00000078._4_4_,in_stack_00000058._4_4_);
        if ((in_stack_00000050._4_4_ < 0xb) && ((uVar8 & 1) != 0)) {
          if (3 < *(int *)(in_stack_00000070 + 0x10)) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
          }
          lVar9 = FUN_07764110(in_stack_00000070,unaff_x20,in_stack_00000088,unaff_w23,
                               uStack0000000000000084,uStack00000000000000c4,uStack00000000000000c0,
                               in_stack_00000058._4_4_);
          return lVar9;
        }
        uVar11 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar10,0);
        *(undefined8 *)(lVar10 + 0x28) = uVar11;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28),uVar11);
        lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar9 + 0x18));
        plVar19 = (long *)(lVar10 + 0x20);
        *plVar19 = lVar13;
        thunk_FUN_044bb4b4(plVar19);
        lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar9 + 0x18));
        plVar20 = (long *)(lVar10 + 0x30);
        *plVar20 = lVar13;
        thunk_FUN_044bb4b4(plVar20,lVar13);
        *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
        *(uint *)(lVar10 + 0x10) = uStack00000000000000d4;
        *(int *)(lVar10 + 0x14) = iStack00000000000000d0;
        puVar6 = PTR_DAT_09f32ba8;
        puVar5 = PTR_DAT_09f24a78;
        puVar4 = PTR_DAT_09f22e40;
        uStack00000000000000bc = 0;
        if (0 < *(int *)(lVar9 + 0x18)) {
          do {
            lVar13 = FUN_05badb74(lVar9,uStack00000000000000bc,*(undefined8 *)puVar6);
            if ((lVar13 == 0) || (lVar15 = *plVar19, lVar15 == 0)) goto LAB_07765a28;
            if (*(uint *)(lVar15 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            fVar26 = fStack00000000000000cc +
                     (float)*(int *)(lVar13 + 0x1c) / (float)(int)uStack00000000000000d4;
            lVar15 = lVar15 + (long)(int)uStack00000000000000bc * 0x10;
            fVar25 = fStack00000000000000c8 +
                     (float)*(int *)(lVar13 + 0x20) / (float)iStack00000000000000d0;
            fVar22 = (float)*(int *)(lVar13 + 0x14) / (float)(int)uStack00000000000000d4 -
                     (fStack00000000000000cc + fStack00000000000000cc);
            fVar21 = (float)*(int *)(lVar13 + 0x18) / (float)iStack00000000000000d0 -
                     (fStack00000000000000c8 + fStack00000000000000c8);
            *(float *)(lVar15 + 0x20) = fVar26;
            *(float *)(lVar15 + 0x24) = fVar25;
            *(float *)(lVar15 + 0x28) = fVar22;
            *(float *)(lVar15 + 0x2c) = fVar21;
            lVar15 = *plVar20;
            if (lVar15 == 0) goto LAB_07765a28;
            if (*(uint *)(lVar15 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            *(undefined4 *)(lVar15 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                 *(undefined4 *)(lVar13 + 0x10);
            if (3 < *(int *)(in_stack_00000070 + 0x10)) {
              lVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
              if (lVar15 == 0) goto LAB_07765a28;
              if (*(int *)(lVar15 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x20));
              uVar11 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x28) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x28),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x30));
              uVar11 = FUN_07a3b850((undefined4 *)(lVar13 + 0x10),0);
              if (*(uint *)(lVar15 + 0x18) < 4) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x38) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x38),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x40));
              fStack00000000000000b8 = fVar26 * (float)(int)uStack00000000000000d4;
              uVar11 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar15 + 0x18) < 6) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x48) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x48),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 7) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x50));
              fStack00000000000000b8 = fVar25 * (float)iStack00000000000000d0;
              uVar11 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x58) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x58),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 9) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x60));
              fStack00000000000000b8 = fVar22 * (float)(int)uStack00000000000000d4;
              uVar11 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar15 + 0x18) < 10) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x68) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x68),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 0xb) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x70));
              fStack00000000000000b8 = fVar21 * (float)iStack00000000000000d0;
              uVar11 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar15 + 0x18) < 0xc) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x78) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x78),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 0xd) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x80));
              uVar8 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                   *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = (uint)(uVar8 >> 0x1f) & 0xfffffffe;
              uVar11 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar15 + 0x18) < 0xe) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x88) = uVar11;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x88),uVar11);
              if (*(uint *)(lVar15 + 0x18) < 0xf) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x90) = *(undefined8 *)puVar5;
              thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x90));
              iVar23 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = iVar23 << 1;
              uVar11 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar15 + 0x18) < 0x10) goto LAB_07765a24;
              *(undefined8 *)(lVar15 + 0x98) = uVar11;
              thunk_FUN_044bb4b4();
              uVar11 = FUN_078b57fc(lVar15,0);
              lVar15 = *(long *)puVar4;
              lVar13 = *(long *)(lVar15 + 0x38);
              if (lVar13 == 0) {
                FUN_04482014(lVar15);
                lVar13 = *(long *)(lVar15 + 0x38);
              }
              lVar13 = *(long *)(lVar13 + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_04481fb8();
              }
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
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
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


