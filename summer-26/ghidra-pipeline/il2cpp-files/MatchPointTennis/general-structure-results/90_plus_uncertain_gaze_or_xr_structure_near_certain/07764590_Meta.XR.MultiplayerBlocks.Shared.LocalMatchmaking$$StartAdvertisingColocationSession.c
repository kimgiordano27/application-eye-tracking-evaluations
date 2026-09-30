/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 07764590
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


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession
               (undefined1 param_1 [16],undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long unaff_x19;
  long unaff_x20;
  uint uVar18;
  undefined4 unaff_w22;
  int iVar19;
  undefined4 uVar20;
  uint unaff_w23;
  long *plVar21;
  long unaff_x24;
  uint uVar22;
  int unaff_w26;
  long *unaff_x27;
  ulong uVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000078;
  int iStack0000000000000080;
  uint uStack0000000000000084;
  long in_stack_00000088;
  undefined4 in_stack_00000098;
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
  
  thunk_FUN_044bb4b4();
  lVar8 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000098);
  if ((lVar8 != 0) &&
     (lVar9 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*unaff_x27 + 0x40)), lVar9 == 0)) {
LAB_07765a2c:
    uVar10 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar10,0);
  }
  if (*(uint *)(unaff_x27 + 3) < 7) goto LAB_07765a24;
  unaff_x27[10] = lVar8;
  thunk_FUN_044bb4b4(unaff_x27 + 10,lVar8);
  uVar10 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32e00);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c652c(uVar10,0);
  if ((10 < unaff_w26) && (0 < *(int *)(unaff_x20 + 0x10))) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f32dd8,0);
  }
  if ((unaff_x24 != 0) &&
     (plVar11 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f32ca0,
                                     *(undefined4 *)(unaff_x24 + 0x18)), plVar11 != (long *)0x0)) {
    iStack0000000000000054 = unaff_w26;
    uStack000000000000005c = unaff_w22;
    if ((int)plVar11[3] < 1) {
      uVar22 = 0;
      uVar17 = 0;
      fVar27 = 0.0;
    }
    else {
      lVar8 = 0;
      uVar17 = 0;
      uVar22 = 0;
      uVar23 = 0;
      fVar27 = 0.0;
      do {
        puVar3 = PTR_DAT_09f32cf8;
        fVar24 = (float)FUN_05d0cfbc(unaff_x24,uVar23 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
        FUN_05d0cfbc(unaff_x24,uVar23 & 0xffffffff,*(undefined8 *)puVar3);
        if (in_stack_00000088 == 0) goto LAB_07765a28;
        iVar7 = -0x80000000;
        if ((float)param_2 != INFINITY) {
          iVar7 = (int)(float)param_2;
        }
        iVar25 = -0x80000000;
        if (fVar24 != INFINITY) {
          iVar25 = (int)fVar24;
        }
        uVar12 = FUN_05a28f70(in_stack_00000088,uVar23 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78)
        ;
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
        FUN_07a80df4(lVar9,0);
        iVar25 = ((uint)(uVar12 >> 0x1f) & 0xfffffffe) + iVar25;
        if (iVar25 <= iStack0000000000000080) {
          iVar25 = iStack0000000000000080;
        }
        iVar7 = iVar7 + (int)uVar12 * 2;
        *(int *)(lVar9 + 0x10) = (int)uVar23;
        *(int *)(lVar9 + 0x14) = iVar25;
        if (iVar7 <= in_stack_00000078._4_4_) {
          iVar7 = in_stack_00000078._4_4_;
        }
        *(int *)(lVar9 + 0x18) = iVar7;
        lVar13 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar11 + 0x40));
        if (lVar13 == 0) goto LAB_07765a2c;
        if (*(uint *)(plVar11 + 3) <= uVar23) goto LAB_07765a24;
        plVar11[uVar23 + 4] = lVar9;
        thunk_FUN_044bb4b4((long)plVar11 + lVar8 + 0x20,lVar9);
        uVar1 = *(uint *)(lVar9 + 0x14);
        uVar18 = *(uint *)(lVar9 + 0x18);
        uVar23 = uVar23 + 1;
        if ((int)uVar22 <= (int)uVar1) {
          uVar22 = uVar1;
        }
        fVar27 = fVar27 + (float)(int)(uVar18 * uVar1);
        if ((int)uVar17 <= (int)uVar18) {
          uVar17 = uVar18;
        }
        lVar8 = lVar8 + 8;
      } while ((long)uVar23 < (long)(int)plVar11[3]);
    }
    puVar3 = PTR_DAT_09f32c80;
    fVar24 = (float)(int)uVar17 / (float)(int)uVar22;
    if (fVar24 <= 2.0) {
      if (0.5 <= fVar24) {
        puVar15 = (undefined8 *)PTR_DAT_09f32c90;
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          lVar9 = *(long *)PTR_DAT_09f22e40;
          lVar8 = *(long *)(lVar9 + 0x38);
          if (lVar8 == 0) {
            FUN_04482014(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32dc0,**(undefined8 **)(lVar8 + 0xb8),0);
          puVar15 = (undefined8 *)PTR_DAT_09f32c90;
        }
      }
      else {
        puVar15 = (undefined8 *)PTR_DAT_09f32ca8;
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          lVar9 = *(long *)PTR_DAT_09f22e40;
          lVar8 = *(long *)(lVar9 + 0x38);
          if (lVar8 == 0) {
            FUN_04482014(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32d98,**(undefined8 **)(lVar8 + 0xb8),0);
          puVar15 = (undefined8 *)PTR_DAT_09f32ca8;
        }
      }
    }
    else {
      puVar15 = (undefined8 *)PTR_DAT_09f32c98;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar9 = *(long *)PTR_DAT_09f22e40;
        lVar8 = *(long *)(lVar9 + 0x38);
        if (lVar8 == 0) {
          FUN_04482014(lVar9);
          lVar8 = *(long *)(lVar9 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32de0,**(undefined8 **)(lVar8 + 0xb8),0);
        puVar15 = (undefined8 *)PTR_DAT_09f32c98;
      }
    }
    uVar10 = thunk_FUN_0448520c(*puVar15);
    FUN_07a80df4(uVar10,0);
    FUN_04b03f08(plVar11,uVar10,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_09f1e748;
    uVar1 = 0x80000000;
    if (SQRT(fVar27) != INFINITY) {
      uVar1 = (int)SQRT(fVar27);
    }
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      uVar18 = uVar1;
      uVar6 = uVar1;
      if ((int)uVar1 < (int)uVar22) {
        if (DAT_0a51c737 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51c737 = '\x01';
        }
        fVar24 = fVar27 / (float)(int)uVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar6 = 0x80000000;
        if ((float)(int)fVar24 != INFINITY) {
          uVar6 = (int)fVar24;
        }
        uVar18 = uVar22;
        if ((int)uVar6 <= (int)uVar17) {
          uVar6 = uVar17;
        }
      }
      if ((int)uVar1 < (int)uVar17) {
        if (DAT_0a51c737 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51c737 = '\x01';
        }
        fVar24 = fVar27 / (float)(int)uVar17;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar18 = 0x80000000;
        if ((float)(int)fVar24 != INFINITY) {
          uVar18 = (int)fVar24;
        }
        uVar6 = uVar17;
        if ((int)uVar18 <= (int)uVar22) {
          uVar18 = uVar22;
        }
      }
    }
    else {
      uVar6 = FUN_07760ae0(uVar1);
      uVar18 = uVar6;
      if ((int)uVar6 < (int)uVar22) {
        fVar24 = logf((float)(int)uVar6);
        fVar24 = exp2f((float)(int)(fVar24 / DAT_01c7661c));
        uVar18 = 0x80000000;
        if (fVar24 != INFINITY) {
          uVar18 = (int)fVar24;
        }
        if (uVar18 < 3) {
          uVar18 = 2;
        }
      }
      if ((int)uVar6 < (int)uVar17) {
        fVar24 = logf((float)(int)uVar6);
        fVar24 = exp2f((float)(int)(fVar24 / DAT_01c7661c));
        uVar6 = 0x80000000;
        if (fVar24 != INFINITY) {
          uVar6 = (int)fVar24;
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
    uStack00000000000000d8 = 4;
    if (uVar6 != 0) {
      uStack00000000000000d8 = uVar6;
    }
    iVar25 = uVar1 * 1000;
    iVar7 = -0x80000000;
    if ((float)(int)uVar22 * DAT_01c759d8 != INFINITY) {
      iVar7 = (int)((float)(int)uVar22 * DAT_01c759d8);
    }
    iVar26 = -0x80000000;
    if ((float)(int)uStack00000000000000d8 * DAT_01c759d8 != INFINITY) {
      iVar26 = (int)((float)(int)uStack00000000000000d8 * DAT_01c759d8);
    }
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    if (iVar26 == 0) {
      iVar26 = 1;
    }
    plVar21 = (long *)(unaff_x20 + 0x18);
    uStack00000000000000dc = uVar22;
    if ((int)uStack00000000000000d8 < iVar25) {
      do {
        iVar19 = 0;
        uStack00000000000000dc = uVar22;
        while ((int)uStack00000000000000dc < iVar25) {
          lVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
          FUN_07a80df4(lVar8,0);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar10 = FUN_07a3b850(&stack0x000000d8,0);
            uVar14 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
            uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar10,*(undefined8 *)puVar5,
                                  uVar14,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar10,0);
          }
          uVar23 = FUN_07761c50(fVar27,unaff_x20,plVar11,uStack00000000000000dc,
                                uStack00000000000000d8,unaff_w23,uStack0000000000000084,lVar8);
          if ((uVar23 & 1) != 0) {
            lVar9 = *plVar21;
            if (lVar9 != 0) {
              if (lVar8 == 0) goto LAB_07765a28;
              fVar24 = 0.0;
              if (*(char *)(lVar8 + 0x28) != '\0') {
                fVar24 = 1.0;
              }
              if (*(char *)(unaff_x20 + 0x14) == '\0') {
                fVar28 = 0.0;
                if (*(char *)(lVar9 + 0x28) != '\0') {
                  fVar28 = 1.0;
                }
                fVar24 = fVar24 + *(float *)(lVar8 + 0x30) +
                                  *(float *)(lVar8 + 0x2c) + *(float *)(lVar8 + 0x2c);
                fVar28 = fVar28 + *(float *)(lVar9 + 0x30) +
                                  *(float *)(lVar9 + 0x2c) + *(float *)(lVar9 + 0x2c);
              }
              else {
                fVar24 = fVar24 + fVar24 + *(float *)(lVar8 + 0x2c);
                fVar28 = 0.0;
                if (*(char *)(lVar9 + 0x28) != '\0') {
                  fVar28 = 2.0;
                }
                fVar28 = *(float *)(lVar9 + 0x2c) + fVar28;
              }
              if (fVar24 <= fVar28) break;
            }
            *plVar21 = lVar8;
            thunk_FUN_044bb4b4(plVar21,lVar8);
            break;
          }
          if (((int)uStack00000000000000dc < (int)unaff_w23) &&
             (*(char *)(unaff_x20 + 0x14) != '\0')) {
            uStack00000000000000dc = uStack00000000000000dc << 1;
          }
          else {
            uVar17 = uStack00000000000000dc + iVar7;
            bVar2 = (int)unaff_w23 <= (int)uStack00000000000000dc;
            uStack00000000000000dc = unaff_w23;
            if ((int)uVar17 <= (int)unaff_w23 || bVar2) {
              uStack00000000000000dc = uVar17;
            }
          }
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar10 = FUN_07a3b850(&stack0x000000d8,0);
            uVar14 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
            uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar10,*(undefined8 *)puVar5,
                                  uVar14,0);
            lVar9 = *(long *)puVar3;
            lVar8 = *(long *)(lVar9 + 0x38);
            if (lVar8 == 0) {
              FUN_04482014(lVar9);
              lVar8 = *(long *)(lVar9 + 0x38);
            }
            lVar8 = *(long *)(lVar8 + 0x10);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_04481fb8();
            }
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar10,**(undefined8 **)(lVar8 + 0xb8),0);
          }
          iVar19 = iVar19 + 1;
        }
        if (((int)uStack00000000000000d8 < (int)uStack0000000000000084) &&
           (*(char *)(unaff_x20 + 0x14) != '\0')) {
          uStack00000000000000d8 = uStack00000000000000d8 << 1;
        }
        else {
          uVar17 = uStack00000000000000d8 + iVar26;
          bVar2 = (int)uStack0000000000000084 <= (int)uStack00000000000000d8;
          uStack00000000000000d8 = uStack0000000000000084;
          if ((int)uVar17 <= (int)uStack0000000000000084 || bVar2) {
            uStack00000000000000d8 = uVar17;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          uVar10 = FUN_07a3b850(&stack0x000000d8,0);
          uVar14 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar10,*(undefined8 *)puVar5,uVar14,
                                0);
          lVar9 = *(long *)puVar3;
          lVar8 = *(long *)(lVar9 + 0x38);
          if (lVar8 == 0) {
            FUN_04482014(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar10,**(undefined8 **)(lVar8 + 0xb8),0);
        }
      } while ((0 < iVar19) && ((int)uStack00000000000000d8 < iVar25));
    }
    lVar8 = *plVar21;
    if (lVar8 == 0) {
      return 0;
    }
    _iStack00000000000000d0 = 0;
    uVar22 = *(uint *)(lVar8 + 0x10);
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      if ((int)unaff_w23 <= (int)uVar22) {
        uVar22 = unaff_w23;
      }
      uVar17 = *(uint *)(lVar8 + 0x14);
      if ((int)uStack0000000000000084 <= (int)*(uint *)(lVar8 + 0x14)) {
        uVar17 = uStack0000000000000084;
      }
      _iStack00000000000000d0 = CONCAT44(uVar22,uVar17);
      uVar20 = uStack000000000000005c;
      iVar7 = iStack0000000000000054;
    }
    else {
      fVar24 = logf((float)(int)uVar22);
      fVar27 = DAT_01c7661c;
      fVar24 = exp2f((float)(int)(fVar24 / DAT_01c7661c));
      uVar22 = 0x80000000;
      if (fVar24 != INFINITY) {
        uVar22 = (int)fVar24;
      }
      if (uVar22 < 3) {
        uVar22 = 2;
      }
      if ((int)unaff_w23 <= (int)uVar22) {
        uVar22 = unaff_w23;
      }
      uStack00000000000000d4 = uVar22;
      fVar24 = logf((float)*(int *)(lVar8 + 0x14));
      fVar27 = exp2f((float)(int)(fVar24 / fVar27));
      uVar1 = 0x80000000;
      if (fVar27 != INFINITY) {
        uVar1 = (int)fVar27;
      }
      if (uVar1 < 3) {
        uVar1 = 2;
      }
      if ((int)uStack0000000000000084 <= (int)uVar1) {
        uVar1 = uStack0000000000000084;
      }
      uVar18 = uVar22;
      if ((int)uVar22 < 0) {
        uVar18 = uVar22 + 1;
      }
      uVar17 = (int)uVar18 >> 1;
      if ((int)uVar18 >> 1 <= (int)uVar1) {
        uVar17 = uVar1;
      }
      uVar1 = uVar17;
      if ((int)uVar17 < 0) {
        uVar1 = uVar17 + 1;
      }
      uVar1 = (int)uVar1 >> 1;
      if ((int)uVar22 < (int)uVar1) {
        uVar22 = uVar1;
        uStack00000000000000d4 = uVar1;
      }
      _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar17);
      uVar20 = uStack000000000000005c;
      iVar7 = iStack0000000000000054;
    }
    *(uint *)(lVar8 + 0x18) = uVar22;
    *(uint *)(lVar8 + 0x1c) = uVar17;
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
      if (lVar8 == 0) goto LAB_07765a28;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_09f32d90;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x20));
      uVar10 = FUN_07a3b850((long)&stack0x000000d0 + 4,0);
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x28) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28),uVar10);
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_09f32da0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x30));
      uVar10 = FUN_07a3b850(&stack0x000000d0,0);
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x38) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x38),uVar10);
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_09f32de8;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar10 = FUN_07a3b850(*plVar21 + 0x10,0);
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x48) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x48),uVar10);
      if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar10 = FUN_07a3b850(*plVar21 + 0x14,0);
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x58) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x58),uVar10);
      if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar10 = FUN_07a5081c(*plVar21 + 0x2c,0);
      if (*(uint *)(lVar8 + 0x18) < 10) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x68) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x68),uVar10);
      if (*(uint *)(lVar8 + 0x18) < 0xb) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar10 = FUN_07a5081c(*plVar21 + 0x30,0);
      if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x78) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x78),uVar10);
      if (*(uint *)(lVar8 + 0x18) < 0xd) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
      thunk_FUN_044bb4b4();
      lVar9 = *plVar21;
      if (lVar9 == 0) goto LAB_07765a28;
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar10 = FUN_079a04dc(lVar9 + 0x28,0);
      if (*(uint *)(lVar8 + 0x18) < 0xe) goto LAB_07765a24;
      *(undefined8 *)(lVar8 + 0x88) = uVar10;
      thunk_FUN_044bb4b4();
      uVar10 = FUN_078b57fc(lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar10,0);
    }
    puVar3 = PTR_DAT_09f32ce0;
    lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
    FUN_05bad610(lVar8,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_09f32d80;
    if (*plVar21 != 0) {
      FUN_077617f0(*(undefined8 *)(*plVar21 + 0x20),lVar8);
      uVar10 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_07a80df4(uVar10,0);
      if (lVar8 != 0) {
        FUN_05baf864(lVar8,uVar10,*(undefined8 *)PTR_DAT_09f32d88);
        lVar9 = *plVar21;
        if ((lVar9 != 0) && (in_stack_00000088 != 0)) {
          iVar26 = *(int *)(lVar9 + 0x10);
          iVar25 = *(int *)(lVar9 + 0x14);
          uVar10 = FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
          uVar23 = FUN_07760c44((float)iVar26,(float)iVar25,unaff_x20,lVar8,unaff_w23,
                                uStack0000000000000084,uVar10,iStack0000000000000080,
                                in_stack_00000078._4_4_,uVar20);
          if ((iVar7 < 0xb) && ((uVar23 & 1) != 0)) {
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
            }
            lVar8 = FUN_07764110(unaff_x20,unaff_x24,in_stack_00000088,unaff_w23,
                                 uStack0000000000000084,uStack00000000000000c4,
                                 uStack00000000000000c0,uVar20);
            return lVar8;
          }
          uVar10 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
          FUN_07a80df4(lVar9,0);
          *(undefined8 *)(lVar9 + 0x28) = uVar10;
          thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28),uVar10);
          lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar8 + 0x18));
          plVar11 = (long *)(lVar9 + 0x20);
          *plVar11 = lVar13;
          thunk_FUN_044bb4b4(plVar11);
          lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar8 + 0x18));
          plVar21 = (long *)(lVar9 + 0x30);
          *plVar21 = lVar13;
          thunk_FUN_044bb4b4(plVar21,lVar13);
          *(undefined8 *)(lVar9 + 0x18) = 0xffffffffffffffff;
          *(uint *)(lVar9 + 0x10) = uStack00000000000000d4;
          *(int *)(lVar9 + 0x14) = iStack00000000000000d0;
          puVar5 = PTR_DAT_09f32ba8;
          puVar4 = PTR_DAT_09f24a78;
          puVar3 = PTR_DAT_09f22e40;
          uStack00000000000000bc = 0;
          if (0 < *(int *)(lVar8 + 0x18)) {
            do {
              lVar13 = FUN_05badb74(lVar8,uStack00000000000000bc,*(undefined8 *)puVar5);
              if ((lVar13 == 0) || (lVar16 = *plVar11, lVar16 == 0)) goto LAB_07765a28;
              if (*(uint *)(lVar16 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
              fVar29 = fStack00000000000000cc +
                       (float)*(int *)(lVar13 + 0x1c) / (float)(int)uStack00000000000000d4;
              lVar16 = lVar16 + (long)(int)uStack00000000000000bc * 0x10;
              fVar28 = fStack00000000000000c8 +
                       (float)*(int *)(lVar13 + 0x20) / (float)iStack00000000000000d0;
              fVar24 = (float)*(int *)(lVar13 + 0x14) / (float)(int)uStack00000000000000d4 -
                       (fStack00000000000000cc + fStack00000000000000cc);
              fVar27 = (float)*(int *)(lVar13 + 0x18) / (float)iStack00000000000000d0 -
                       (fStack00000000000000c8 + fStack00000000000000c8);
              *(float *)(lVar16 + 0x20) = fVar29;
              *(float *)(lVar16 + 0x24) = fVar28;
              *(float *)(lVar16 + 0x28) = fVar24;
              *(float *)(lVar16 + 0x2c) = fVar27;
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
                uVar10 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x28) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x28),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x30));
                uVar10 = FUN_07a3b850((undefined4 *)(lVar13 + 0x10),0);
                if (*(uint *)(lVar16 + 0x18) < 4) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x38) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x38),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 5) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x40));
                fStack00000000000000b8 = fVar29 * (float)(int)uStack00000000000000d4;
                uVar10 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 6) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x48) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x48),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x50));
                fStack00000000000000b8 = fVar28 * (float)iStack00000000000000d0;
                uVar10 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 8) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x58) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x58),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 9) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x60));
                fStack00000000000000b8 = fVar24 * (float)(int)uStack00000000000000d4;
                uVar10 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 10) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x68) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x68),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 0xb) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x70));
                fStack00000000000000b8 = fVar27 * (float)iStack00000000000000d0;
                uVar10 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar16 + 0x18) < 0xc) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x78) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x78),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 0xd) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x80));
                uVar23 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                      *(undefined8 *)PTR_DAT_09f32c78);
                in_stack_000000b0._4_4_ = (uint)(uVar23 >> 0x1f) & 0xfffffffe;
                uVar10 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
                if (*(uint *)(lVar16 + 0x18) < 0xe) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x88) = uVar10;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x88),uVar10);
                if (*(uint *)(lVar16 + 0x18) < 0xf) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)puVar4;
                thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x90));
                iVar7 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                     *(undefined8 *)PTR_DAT_09f32c78);
                in_stack_000000b0._4_4_ = iVar7 << 1;
                uVar10 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
                if (*(uint *)(lVar16 + 0x18) < 0x10) goto LAB_07765a24;
                *(undefined8 *)(lVar16 + 0x98) = uVar10;
                thunk_FUN_044bb4b4();
                uVar10 = FUN_078b57fc(lVar16,0);
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
                FUN_0771ec00(uVar10,**(undefined8 **)(lVar13 + 0xb8),0);
              }
              uStack00000000000000bc = uStack00000000000000bc + 1;
            } while ((int)uStack00000000000000bc < *(int *)(lVar8 + 0x18));
          }
          FUN_077606dc(lVar9);
          return lVar9;
        }
      }
    }
  }
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


