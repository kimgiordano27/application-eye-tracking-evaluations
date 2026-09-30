/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 07764640
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


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound
               (undefined1 param_1 [16],undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long unaff_x20;
  uint uVar17;
  long unaff_x21;
  undefined4 unaff_w22;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  uint unaff_w23;
  long *plVar21;
  long unaff_x24;
  uint uVar22;
  int unaff_w26;
  uint unaff_w27;
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
  
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_094c6b48(*(undefined8 *)PTR_DAT_09f32dd8,0);
  if ((unaff_x24 != 0) &&
     (plVar8 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f32ca0,
                                    *(undefined4 *)(unaff_x24 + 0x18)), plVar8 != (long *)0x0)) {
    iStack0000000000000054 = unaff_w26;
    uStack000000000000005c = unaff_w22;
    if ((int)plVar8[3] < 1) {
      uVar22 = 0;
      uVar16 = 0;
      fVar27 = 0.0;
    }
    else {
      lVar20 = 0;
      uVar16 = 0;
      uVar22 = 0;
      uVar23 = 0;
      fVar27 = 0.0;
      do {
        puVar3 = PTR_DAT_09f32cf8;
        fVar24 = (float)FUN_05d0cfbc(unaff_x24,uVar23 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
        FUN_05d0cfbc(unaff_x24,uVar23 & 0xffffffff,*(undefined8 *)puVar3);
        if (unaff_x21 == 0) goto LAB_07765a28;
        iVar7 = -0x80000000;
        if ((float)param_2 != INFINITY) {
          iVar7 = (int)(float)param_2;
        }
        iVar25 = -0x80000000;
        if (fVar24 != INFINITY) {
          iVar25 = (int)fVar24;
        }
        uVar9 = FUN_05a28f70(unaff_x21,uVar23 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
        FUN_07a80df4(lVar10,0);
        iVar25 = ((uint)(uVar9 >> 0x1f) & 0xfffffffe) + iVar25;
        if (iVar25 <= iStack0000000000000080) {
          iVar25 = iStack0000000000000080;
        }
        iVar7 = iVar7 + (int)uVar9 * 2;
        *(int *)(lVar10 + 0x10) = (int)uVar23;
        *(int *)(lVar10 + 0x14) = iVar25;
        if (iVar7 <= in_stack_00000078._4_4_) {
          iVar7 = in_stack_00000078._4_4_;
        }
        *(int *)(lVar10 + 0x18) = iVar7;
        lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar11 == 0) {
          uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar12,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar23) goto LAB_07765a24;
        plVar8[uVar23 + 4] = lVar10;
        thunk_FUN_044bb4b4((long)plVar8 + lVar20 + 0x20,lVar10);
        uVar1 = *(uint *)(lVar10 + 0x14);
        uVar17 = *(uint *)(lVar10 + 0x18);
        uVar23 = uVar23 + 1;
        if ((int)uVar22 <= (int)uVar1) {
          uVar22 = uVar1;
        }
        fVar27 = fVar27 + (float)(int)(uVar17 * uVar1);
        if ((int)uVar16 <= (int)uVar17) {
          uVar16 = uVar17;
        }
        lVar20 = lVar20 + 8;
        unaff_x21 = in_stack_00000088;
        unaff_w27 = uStack0000000000000084;
      } while ((long)uVar23 < (long)(int)plVar8[3]);
    }
    puVar3 = PTR_DAT_09f32c80;
    fVar24 = (float)(int)uVar16 / (float)(int)uVar22;
    if (fVar24 <= 2.0) {
      if (0.5 <= fVar24) {
        puVar14 = (undefined8 *)PTR_DAT_09f32c90;
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar20 = *(long *)(lVar10 + 0x38);
          if (lVar20 == 0) {
            FUN_04482014(lVar10);
            lVar20 = *(long *)(lVar10 + 0x38);
          }
          lVar20 = *(long *)(lVar20 + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_04481fb8();
          }
          if (*(int *)(lVar20 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_04481fb8();
          }
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32dc0,**(undefined8 **)(lVar20 + 0xb8),0);
          puVar14 = (undefined8 *)PTR_DAT_09f32c90;
        }
      }
      else {
        puVar14 = (undefined8 *)PTR_DAT_09f32ca8;
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar20 = *(long *)(lVar10 + 0x38);
          if (lVar20 == 0) {
            FUN_04482014(lVar10);
            lVar20 = *(long *)(lVar10 + 0x38);
          }
          lVar20 = *(long *)(lVar20 + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_04481fb8();
          }
          if (*(int *)(lVar20 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_04481fb8();
          }
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32d98,**(undefined8 **)(lVar20 + 0xb8),0);
          puVar14 = (undefined8 *)PTR_DAT_09f32ca8;
        }
      }
    }
    else {
      puVar14 = (undefined8 *)PTR_DAT_09f32c98;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar10 = *(long *)PTR_DAT_09f22e40;
        lVar20 = *(long *)(lVar10 + 0x38);
        if (lVar20 == 0) {
          FUN_04482014(lVar10);
          lVar20 = *(long *)(lVar10 + 0x38);
        }
        lVar20 = *(long *)(lVar20 + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_04481fb8();
        }
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_04481fb8();
        }
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f32de0,**(undefined8 **)(lVar20 + 0xb8),0);
        puVar14 = (undefined8 *)PTR_DAT_09f32c98;
      }
    }
    uVar12 = thunk_FUN_0448520c(*puVar14);
    FUN_07a80df4(uVar12,0);
    FUN_04b03f08(plVar8,uVar12,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_09f1e748;
    uVar1 = 0x80000000;
    if (SQRT(fVar27) != INFINITY) {
      uVar1 = (int)SQRT(fVar27);
    }
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      uVar17 = uVar1;
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
        uVar17 = uVar22;
        if ((int)uVar6 <= (int)uVar16) {
          uVar6 = uVar16;
        }
      }
      if ((int)uVar1 < (int)uVar16) {
        if (DAT_0a51c737 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51c737 = '\x01';
        }
        fVar24 = fVar27 / (float)(int)uVar16;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar17 = 0x80000000;
        if ((float)(int)fVar24 != INFINITY) {
          uVar17 = (int)fVar24;
        }
        uVar6 = uVar16;
        if ((int)uVar17 <= (int)uVar22) {
          uVar17 = uVar22;
        }
      }
    }
    else {
      uVar6 = FUN_07760ae0(uVar1);
      uVar17 = uVar6;
      if ((int)uVar6 < (int)uVar22) {
        fVar24 = logf((float)(int)uVar6);
        fVar24 = exp2f((float)(int)(fVar24 / DAT_01c7661c));
        uVar17 = 0x80000000;
        if (fVar24 != INFINITY) {
          uVar17 = (int)fVar24;
        }
        if (uVar17 < 3) {
          uVar17 = 2;
        }
      }
      if ((int)uVar6 < (int)uVar16) {
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
    if (uVar17 != 0) {
      uVar22 = uVar17;
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
        iVar18 = 0;
        uStack00000000000000dc = uVar22;
        while ((int)uStack00000000000000dc < iVar25) {
          lVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
          FUN_07a80df4(lVar20,0);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar12 = FUN_07a3b850(&stack0x000000d8,0);
            uVar13 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
            uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar12,*(undefined8 *)puVar5,
                                  uVar13,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar12,0);
          }
          uVar23 = FUN_07761c50(fVar27,unaff_x20,plVar8,uStack00000000000000dc,
                                uStack00000000000000d8,unaff_w23,unaff_w27,lVar20);
          if ((uVar23 & 1) != 0) {
            lVar10 = *plVar21;
            if (lVar10 != 0) {
              if (lVar20 == 0) goto LAB_07765a28;
              fVar24 = 0.0;
              if (*(char *)(lVar20 + 0x28) != '\0') {
                fVar24 = 1.0;
              }
              if (*(char *)(unaff_x20 + 0x14) == '\0') {
                fVar28 = 0.0;
                if (*(char *)(lVar10 + 0x28) != '\0') {
                  fVar28 = 1.0;
                }
                fVar24 = fVar24 + *(float *)(lVar20 + 0x30) +
                                  *(float *)(lVar20 + 0x2c) + *(float *)(lVar20 + 0x2c);
                fVar28 = fVar28 + *(float *)(lVar10 + 0x30) +
                                  *(float *)(lVar10 + 0x2c) + *(float *)(lVar10 + 0x2c);
              }
              else {
                fVar24 = fVar24 + fVar24 + *(float *)(lVar20 + 0x2c);
                fVar28 = 0.0;
                if (*(char *)(lVar10 + 0x28) != '\0') {
                  fVar28 = 2.0;
                }
                fVar28 = *(float *)(lVar10 + 0x2c) + fVar28;
              }
              if (fVar24 <= fVar28) break;
            }
            *plVar21 = lVar20;
            thunk_FUN_044bb4b4(plVar21,lVar20);
            break;
          }
          if (((int)uStack00000000000000dc < (int)unaff_w23) &&
             (*(char *)(unaff_x20 + 0x14) != '\0')) {
            uStack00000000000000dc = uStack00000000000000dc << 1;
          }
          else {
            uVar16 = uStack00000000000000dc + iVar7;
            bVar2 = (int)unaff_w23 <= (int)uStack00000000000000dc;
            uStack00000000000000dc = unaff_w23;
            if ((int)uVar16 <= (int)unaff_w23 || bVar2) {
              uStack00000000000000dc = uVar16;
            }
          }
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar12 = FUN_07a3b850(&stack0x000000d8,0);
            uVar13 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
            uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar12,*(undefined8 *)puVar5,
                                  uVar13,0);
            lVar10 = *(long *)puVar3;
            lVar20 = *(long *)(lVar10 + 0x38);
            if (lVar20 == 0) {
              FUN_04482014(lVar10);
              lVar20 = *(long *)(lVar10 + 0x38);
            }
            lVar20 = *(long *)(lVar20 + 0x10);
            if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
              lVar20 = FUN_04481fb8();
            }
            if (*(int *)(lVar20 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
              lVar20 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar12,**(undefined8 **)(lVar20 + 0xb8),0);
          }
          iVar18 = iVar18 + 1;
        }
        if (((int)uStack00000000000000d8 < (int)unaff_w27) && (*(char *)(unaff_x20 + 0x14) != '\0'))
        {
          uStack00000000000000d8 = uStack00000000000000d8 << 1;
        }
        else {
          uVar16 = uStack00000000000000d8 + iVar26;
          bVar2 = (int)unaff_w27 <= (int)uStack00000000000000d8;
          uStack00000000000000d8 = unaff_w27;
          if ((int)uVar16 <= (int)unaff_w27 || bVar2) {
            uStack00000000000000d8 = uVar16;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          uVar12 = FUN_07a3b850(&stack0x000000d8,0);
          uVar13 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
          uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar12,*(undefined8 *)puVar5,uVar13,
                                0);
          lVar10 = *(long *)puVar3;
          lVar20 = *(long *)(lVar10 + 0x38);
          if (lVar20 == 0) {
            FUN_04482014(lVar10);
            lVar20 = *(long *)(lVar10 + 0x38);
          }
          lVar20 = *(long *)(lVar20 + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_04481fb8();
          }
          if (*(int *)(lVar20 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar12,**(undefined8 **)(lVar20 + 0xb8),0);
        }
      } while ((0 < iVar18) && ((int)uStack00000000000000d8 < iVar25));
    }
    lVar20 = *plVar21;
    if (lVar20 == 0) {
      return 0;
    }
    _iStack00000000000000d0 = 0;
    uVar22 = *(uint *)(lVar20 + 0x10);
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      if ((int)unaff_w23 <= (int)uVar22) {
        uVar22 = unaff_w23;
      }
      uVar16 = *(uint *)(lVar20 + 0x14);
      if ((int)unaff_w27 <= (int)*(uint *)(lVar20 + 0x14)) {
        uVar16 = unaff_w27;
      }
      _iStack00000000000000d0 = CONCAT44(uVar22,uVar16);
      uVar19 = uStack000000000000005c;
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
      fVar24 = logf((float)*(int *)(lVar20 + 0x14));
      fVar27 = exp2f((float)(int)(fVar24 / fVar27));
      uVar1 = 0x80000000;
      if (fVar27 != INFINITY) {
        uVar1 = (int)fVar27;
      }
      if (uVar1 < 3) {
        uVar1 = 2;
      }
      if ((int)unaff_w27 <= (int)uVar1) {
        uVar1 = unaff_w27;
      }
      uVar17 = uVar22;
      if ((int)uVar22 < 0) {
        uVar17 = uVar22 + 1;
      }
      uVar16 = (int)uVar17 >> 1;
      if ((int)uVar17 >> 1 <= (int)uVar1) {
        uVar16 = uVar1;
      }
      uVar1 = uVar16;
      if ((int)uVar16 < 0) {
        uVar1 = uVar16 + 1;
      }
      uVar1 = (int)uVar1 >> 1;
      if ((int)uVar22 < (int)uVar1) {
        uVar22 = uVar1;
        uStack00000000000000d4 = uVar1;
      }
      _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar16);
      uVar19 = uStack000000000000005c;
      iVar7 = iStack0000000000000054;
    }
    *(uint *)(lVar20 + 0x18) = uVar22;
    *(uint *)(lVar20 + 0x1c) = uVar16;
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      lVar20 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
      if (lVar20 == 0) goto LAB_07765a28;
      if (*(int *)(lVar20 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)PTR_DAT_09f32d90;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x20));
      uVar12 = FUN_07a3b850((long)&stack0x000000d0 + 4,0);
      if (*(uint *)(lVar20 + 0x18) < 2) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x28) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x28),uVar12);
      if (*(uint *)(lVar20 + 0x18) < 3) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)PTR_DAT_09f32da0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x30));
      uVar12 = FUN_07a3b850(&stack0x000000d0,0);
      if (*(uint *)(lVar20 + 0x18) < 4) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x38) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x38),uVar12);
      if (*(uint *)(lVar20 + 0x18) < 5) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)PTR_DAT_09f32de8;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar12 = FUN_07a3b850(*plVar21 + 0x10,0);
      if (*(uint *)(lVar20 + 0x18) < 6) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x48) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x48),uVar12);
      if (*(uint *)(lVar20 + 0x18) < 7) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar12 = FUN_07a3b850(*plVar21 + 0x14,0);
      if (*(uint *)(lVar20 + 0x18) < 8) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x58) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x58),uVar12);
      if (*(uint *)(lVar20 + 0x18) < 9) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar12 = FUN_07a5081c(*plVar21 + 0x2c,0);
      if (*(uint *)(lVar20 + 0x18) < 10) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x68) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x68),uVar12);
      if (*(uint *)(lVar20 + 0x18) < 0xb) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
      thunk_FUN_044bb4b4();
      if (*plVar21 == 0) goto LAB_07765a28;
      uVar12 = FUN_07a5081c(*plVar21 + 0x30,0);
      if (*(uint *)(lVar20 + 0x18) < 0xc) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x78) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x78),uVar12);
      if (*(uint *)(lVar20 + 0x18) < 0xd) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
      thunk_FUN_044bb4b4();
      lVar10 = *plVar21;
      if (lVar10 == 0) goto LAB_07765a28;
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar12 = FUN_079a04dc(lVar10 + 0x28,0);
      if (*(uint *)(lVar20 + 0x18) < 0xe) goto LAB_07765a24;
      *(undefined8 *)(lVar20 + 0x88) = uVar12;
      thunk_FUN_044bb4b4();
      uVar12 = FUN_078b57fc(lVar20,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar12,0);
    }
    puVar3 = PTR_DAT_09f32ce0;
    lVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
    FUN_05bad610(lVar20,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_09f32d80;
    if (*plVar21 != 0) {
      FUN_077617f0(*(undefined8 *)(*plVar21 + 0x20),lVar20);
      uVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_07a80df4(uVar12,0);
      if (lVar20 != 0) {
        FUN_05baf864(lVar20,uVar12,*(undefined8 *)PTR_DAT_09f32d88);
        lVar10 = *plVar21;
        if ((lVar10 != 0) && (in_stack_00000088 != 0)) {
          iVar26 = *(int *)(lVar10 + 0x10);
          iVar25 = *(int *)(lVar10 + 0x14);
          uVar12 = FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
          uVar23 = FUN_07760c44((float)iVar26,(float)iVar25,unaff_x20,lVar20,unaff_w23,
                                uStack0000000000000084,uVar12,iStack0000000000000080,
                                in_stack_00000078._4_4_,uVar19);
          if ((iVar7 < 0xb) && ((uVar23 & 1) != 0)) {
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
            }
            lVar20 = FUN_07764110(unaff_x20,unaff_x24,in_stack_00000088,unaff_w23,
                                  uStack0000000000000084,uStack00000000000000c4,
                                  uStack00000000000000c0,uVar19);
            return lVar20;
          }
          uVar12 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
          FUN_07a80df4(lVar10,0);
          *(undefined8 *)(lVar10 + 0x28) = uVar12;
          thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28),uVar12);
          lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar20 + 0x18));
          plVar8 = (long *)(lVar10 + 0x20);
          *plVar8 = lVar11;
          thunk_FUN_044bb4b4(plVar8);
          lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar20 + 0x18));
          plVar21 = (long *)(lVar10 + 0x30);
          *plVar21 = lVar11;
          thunk_FUN_044bb4b4(plVar21,lVar11);
          *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
          *(uint *)(lVar10 + 0x10) = uStack00000000000000d4;
          *(int *)(lVar10 + 0x14) = iStack00000000000000d0;
          puVar5 = PTR_DAT_09f32ba8;
          puVar4 = PTR_DAT_09f24a78;
          puVar3 = PTR_DAT_09f22e40;
          uStack00000000000000bc = 0;
          if (0 < *(int *)(lVar20 + 0x18)) {
            do {
              lVar11 = FUN_05badb74(lVar20,uStack00000000000000bc,*(undefined8 *)puVar5);
              if ((lVar11 == 0) || (lVar15 = *plVar8, lVar15 == 0)) goto LAB_07765a28;
              if (*(uint *)(lVar15 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
              fVar29 = fStack00000000000000cc +
                       (float)*(int *)(lVar11 + 0x1c) / (float)(int)uStack00000000000000d4;
              lVar15 = lVar15 + (long)(int)uStack00000000000000bc * 0x10;
              fVar28 = fStack00000000000000c8 +
                       (float)*(int *)(lVar11 + 0x20) / (float)iStack00000000000000d0;
              fVar24 = (float)*(int *)(lVar11 + 0x14) / (float)(int)uStack00000000000000d4 -
                       (fStack00000000000000cc + fStack00000000000000cc);
              fVar27 = (float)*(int *)(lVar11 + 0x18) / (float)iStack00000000000000d0 -
                       (fStack00000000000000c8 + fStack00000000000000c8);
              *(float *)(lVar15 + 0x20) = fVar29;
              *(float *)(lVar15 + 0x24) = fVar28;
              *(float *)(lVar15 + 0x28) = fVar24;
              *(float *)(lVar15 + 0x2c) = fVar27;
              lVar15 = *plVar21;
              if (lVar15 == 0) goto LAB_07765a28;
              if (*(uint *)(lVar15 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
              *(undefined4 *)(lVar15 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                   *(undefined4 *)(lVar11 + 0x10);
              if (3 < *(int *)(unaff_x20 + 0x10)) {
                lVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
                if (lVar15 == 0) goto LAB_07765a28;
                if (*(int *)(lVar15 + 0x18) == 0) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x20));
                uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x28) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x28),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x30));
                uVar12 = FUN_07a3b850((undefined4 *)(lVar11 + 0x10),0);
                if (*(uint *)(lVar15 + 0x18) < 4) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x38) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x38),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x40));
                fStack00000000000000b8 = fVar29 * (float)(int)uStack00000000000000d4;
                uVar12 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar15 + 0x18) < 6) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x48) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x48),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 7) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x50));
                fStack00000000000000b8 = fVar28 * (float)iStack00000000000000d0;
                uVar12 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x58) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x58),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 9) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x60));
                fStack00000000000000b8 = fVar24 * (float)(int)uStack00000000000000d4;
                uVar12 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar15 + 0x18) < 10) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x68) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x68),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 0xb) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x70));
                fStack00000000000000b8 = fVar27 * (float)iStack00000000000000d0;
                uVar12 = FUN_07a5081c(&stack0x000000b8,0);
                if (*(uint *)(lVar15 + 0x18) < 0xc) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x78) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x78),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 0xd) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x80));
                uVar23 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                      *(undefined8 *)PTR_DAT_09f32c78);
                in_stack_000000b0._4_4_ = (uint)(uVar23 >> 0x1f) & 0xfffffffe;
                uVar12 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
                if (*(uint *)(lVar15 + 0x18) < 0xe) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x88) = uVar12;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x88),uVar12);
                if (*(uint *)(lVar15 + 0x18) < 0xf) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x90) = *(undefined8 *)puVar4;
                thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x90));
                iVar7 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                     *(undefined8 *)PTR_DAT_09f32c78);
                in_stack_000000b0._4_4_ = iVar7 << 1;
                uVar12 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
                if (*(uint *)(lVar15 + 0x18) < 0x10) goto LAB_07765a24;
                *(undefined8 *)(lVar15 + 0x98) = uVar12;
                thunk_FUN_044bb4b4();
                uVar12 = FUN_078b57fc(lVar15,0);
                lVar15 = *(long *)puVar3;
                lVar11 = *(long *)(lVar15 + 0x38);
                if (lVar11 == 0) {
                  FUN_04482014(lVar15);
                  lVar11 = *(long *)(lVar15 + 0x38);
                }
                lVar11 = *(long *)(lVar11 + 0x10);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_04481fb8();
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_04481fb8();
                }
                FUN_0771ec00(uVar12,**(undefined8 **)(lVar11 + 0xb8),0);
              }
              uStack00000000000000bc = uStack00000000000000bc + 1;
            } while ((int)uStack00000000000000bc < *(int *)(lVar20 + 0x18));
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


