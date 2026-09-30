/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Vector4s>
ENTRY_POINT: 0193db50
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Vector4s>(float param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int in_w8;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long unaff_x19;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long unaff_x26;
  float fVar24;
  float unaff_s9;
  float fVar25;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  float fStack000000000000008c;
  float in_stack_00000090;
  float fStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  
  param_1 = param_1 - unaff_s15;
  fStack000000000000002c = fStack000000000000002c - unaff_s9;
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
  }
  puVar2 = PTR_DAT_037f4a40;
  fVar24 = SQRT(fStack000000000000002c * fStack000000000000002c +
                unaff_s12 * unaff_s12 + param_1 * param_1);
  if (fVar24 <= in_stack_00000038) {
    if (DAT_03a21ec9 == '\0') {
      FUN_017fc350(PTR_DAT_037f2b88);
      DAT_03a21ec9 = '\x01';
    }
    pfVar13 = *(float **)(*(long *)PTR_DAT_037f2b88 + 0xb8);
    fVar25 = *pfVar13;
    param_1 = pfVar13[1];
    fStack000000000000002c = pfVar13[2];
  }
  else {
    fVar25 = unaff_s12 / fVar24;
    fStack000000000000002c = fStack000000000000002c / fVar24;
    param_1 = param_1 / fVar24;
  }
  uVar6 = FUN_033e9e90(*(undefined4 *)(unaff_x19 + 0x40),0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar2);
  }
  uStack00000000000000a4 = uStack0000000000000028;
  uStack000000000000009c = in_stack_00000040;
  uStack00000000000000ac = in_stack_00000020;
  lVar7 = FUN_03431348(SQRT(unaff_s14 + unaff_s13),&stack0x00000098,uVar6,0);
  uVar6 = FUN_033e9e90(*(undefined4 *)(unaff_x19 + 0x40),0);
  uStack0000000000000084 = in_stack_00000018;
  fStack000000000000008c = fVar25;
  in_stack_00000090 = param_1;
  fStack0000000000000094 = fStack000000000000002c;
  lVar8 = FUN_03431348(SQRT(unaff_s14 + unaff_s13),&stack0x00000080,uVar6,0);
  puVar5 = PTR_DAT_037f4e80;
  puVar2 = PTR_DAT_037f3790;
  if (lVar7 != 0) {
                    /* try { // try from 0193dc8c to 01a3dc93 has its CatchHandler @ 0193dec0 */
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar22 = 0;
      uVar14 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      puVar23 = (undefined8 *)(lVar7 + 0x20);
      do {
        if (uVar14 <= uVar22) goto LAB_0193e380;
        in_stack_00000158 = *(undefined4 *)(puVar23 + 5);
        in_stack_00000150 = puVar23[4];
        uVar11 = *puVar23;
        uVar21 = puVar23[3];
        uVar10 = puVar23[2];
        *(undefined8 *)(unaff_x26 + 0x68) = puVar23[1];
        *(undefined8 *)(unaff_x26 + 0x60) = uVar11;
        *(undefined8 *)(unaff_x26 + 0x78) = uVar21;
        *(undefined8 *)(unaff_x26 + 0x70) = uVar10;
        lVar9 = FUN_034333dc(&stack0x00000130,0);
        if (lVar9 == 0) goto LAB_0193e37c;
        uVar10 = FUN_033e6c58(lVar9,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0193e37c;
        uVar14 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),uVar10,*(undefined8 *)puVar5);
        if ((uVar14 & 1) == 0) {
          lVar9 = *(long *)(unaff_x19 + 0x30);
          if (lVar9 == 0) goto LAB_0193e37c;
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar18 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_0193e37c;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar16 = uVar10;
            thunk_FUN_0188fd20(puVar16,uVar10);
          }
          else {
            FUN_0270a444(lVar9,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar22 = uVar22 + 1;
        puVar23 = (undefined8 *)((long)puVar23 + 0x2c);
      } while ((long)uVar22 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar22 = 0;
        uVar14 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        puVar23 = (undefined8 *)(lVar8 + 0x20);
        do {
          if (uVar14 <= uVar22) {
LAB_0193e380:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          in_stack_00000128 = *(undefined4 *)(puVar23 + 5);
          in_stack_00000120 = puVar23[4];
          uVar11 = *puVar23;
          uVar21 = puVar23[3];
          uVar10 = puVar23[2];
          *(undefined8 *)(unaff_x26 + 0x38) = puVar23[1];
          *(undefined8 *)(unaff_x26 + 0x30) = uVar11;
          *(undefined8 *)(unaff_x26 + 0x48) = uVar21;
          *(undefined8 *)(unaff_x26 + 0x40) = uVar10;
          lVar7 = FUN_034333dc(&stack0x00000100,0);
          if (lVar7 == 0) goto LAB_0193e37c;
          uVar10 = FUN_033e6c58(lVar7,0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0193e37c;
          uVar14 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),uVar10,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) {
            lVar7 = *(long *)(unaff_x19 + 0x30);
            if (lVar7 == 0) goto LAB_0193e37c;
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0193e37c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar16 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar16 = uVar10;
              thunk_FUN_0188fd20(puVar16,uVar10);
            }
            else {
              FUN_0270a444(lVar7,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar22 = uVar22 + 1;
          puVar23 = (undefined8 *)((long)puVar23 + 0x2c);
        } while ((long)uVar22 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      puVar4 = PTR_DAT_037f4e50;
      puVar3 = PTR_DAT_037f3748;
      puVar2 = PTR_DAT_037f2d40;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_02200a68(&stack0x00000058,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_037f4e38);
        plVar19 = (long *)0x0;
        in_stack_000000d8 = in_stack_00000060;
        in_stack_000000d0 = in_stack_00000058;
        *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000070;
        *(long *)(unaff_x26 + 0x10) = in_stack_00000068;
        in_stack_000000f0 = in_stack_00000078;
        while (uVar22 = FUN_02358864(&stack0x000000d0,*(undefined8 *)puVar4),
              lVar7 = in_stack_000000e8, plVar17 = in_stack_000000e0, (uVar22 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar22 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),in_stack_000000e0,*(undefined8 *)puVar5)
          ;
          if ((uVar22 & 1) == 0) {
            FUN_0193e5bc(uVar22,plVar17,lVar7);
            if (plVar17 != (long *)0x0) {
              plVar19 = plVar17;
            }
            uVar21 = *(undefined8 *)PTR_DAT_037f4ea8;
            uVar10 = 0;
            if (plVar17 != (long *)0x0) {
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              uVar10 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
            }
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
            plVar17 = *(long **)(lVar7 + 0x20);
            if (plVar17 == (long *)0x0) {
              uVar11 = 0;
            }
            else {
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              uVar11 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
            }
            uVar10 = FUN_02a503d0(uVar21,uVar10,uVar11,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bce1c(uVar10,0);
          }
        }
        FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_037f4e48);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_022007c0(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_037f4e28);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_0270ae40(&stack0x00000058,*(long *)(unaff_x19 + 0x30),
                         *(undefined8 *)PTR_DAT_037f3758);
            plVar19 = (long *)0x0;
            in_stack_000000b8 = in_stack_00000060;
            in_stack_000000b0 = in_stack_00000058;
            in_stack_000000c0 = in_stack_00000068;
            while (uVar22 = FUN_022e1404(&stack0x000000b0,*(undefined8 *)puVar3),
                  lVar7 = in_stack_000000c0, (uVar22 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              uVar22 = FUN_0220082c(*(long *)(unaff_x19 + 0x20),in_stack_000000c0,
                                    *(undefined8 *)PTR_DAT_037f4e30);
              if ((uVar22 & 1) == 0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                uVar10 = FUN_033ed158(lVar7,0);
                uVar10 = FUN_02a43498(*(undefined8 *)PTR_DAT_037f4ea0,uVar10,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                FUN_033bce1c(uVar10,0);
                lVar8 = FUN_01b26fcc(lVar7,*(undefined8 *)PTR_DAT_037f4e60);
                if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                uVar22 = FUN_033e963c(lVar8,0,0);
                if ((uVar22 & 1) != 0) {
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5a8();
                  }
                  plVar17 = (long *)FUN_033c92e0(lVar8,0);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5a8();
                  }
                  auVar26 = FUN_02bf1b10(plVar17,0);
                  lVar9 = auVar26._0_8_;
                  if (lVar9 == 0) {
                    auVar27._8_8_ = 0;
                    auVar27._0_8_ = auVar26._8_8_;
                    auVar27 = auVar27 << 0x40;
                  }
                  else {
                    uVar10 = *(undefined8 *)PTR_DAT_037f4e88;
                    auVar27 = thunk_FUN_01861ac0(lVar9,uVar10);
                    if (auVar27._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_017fc944(lVar9,uVar10);
                    }
                  }
                  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5a8(0,auVar27._8_8_,auVar27._0_8_);
                  }
                  FUN_02200638(*(long *)(unaff_x19 + 0x28),lVar7,auVar27._0_8_,
                               *(undefined8 *)PTR_DAT_037f4e20);
                  if (0 < (int)plVar17[3]) {
                    uVar22 = 0;
                    uVar14 = plVar17[3] & 0xffffffff;
                    plVar20 = plVar17 + 4;
                    do {
                      lVar7 = *(long *)(unaff_x19 + 0x38);
                      if (lVar7 != 0) {
                        lVar9 = thunk_FUN_01861ac0(lVar7,*(undefined8 *)(*plVar17 + 0x40));
                        if (lVar9 == 0) {
                          uVar10 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                          FUN_017fc474(uVar10,0);
                        }
                        uVar14 = (ulong)*(uint *)(plVar17 + 3);
                      }
                      if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5b0();
                      }
                      *plVar20 = lVar7;
                      thunk_FUN_0188fd20(plVar20,lVar7);
                      uVar14 = (ulong)*(uint *)(plVar17 + 3);
                      uVar22 = uVar22 + 1;
                      plVar20 = plVar20 + 1;
                    } while ((long)uVar22 < (long)(int)*(uint *)(plVar17 + 3));
                  }
                  thunk_FUN_033c8c18(lVar8,plVar17,0);
                }
              }
              else {
                if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                lVar8 = *(long *)(unaff_x19 + 0x28);
                uVar10 = FUN_022005b8(*(long *)(unaff_x19 + 0x20),lVar7,
                                      *(undefined8 *)PTR_DAT_037f4e40);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                FUN_02200638(lVar8,lVar7,uVar10,*(undefined8 *)PTR_DAT_037f4e20);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                uVar10 = FUN_033ed158(lVar7,0);
                if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                lVar7 = FUN_022005b8(*(long *)(unaff_x19 + 0x20),lVar7,
                                     *(undefined8 *)PTR_DAT_037f4e40);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5b0();
                }
                plVar17 = *(long **)(lVar7 + 0x20);
                uVar21 = *(undefined8 *)PTR_DAT_037f4e90;
                if (plVar17 != (long *)0x0) {
                  plVar19 = plVar17;
                }
                uVar11 = *(undefined8 *)PTR_DAT_037f4e98;
                if (plVar17 == (long *)0x0) {
                  uVar12 = 0;
                }
                else {
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5a8();
                  }
                  uVar12 = (**(code **)(*plVar19 + 0x168))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                }
                uVar10 = FUN_02a506f0(uVar11,uVar10,uVar21,uVar12,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                FUN_033bce1c(uVar10,0);
              }
            }
            FUN_022e1400(&stack0x000000b0,*(undefined8 *)PTR_DAT_037f3740);
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              FUN_022007c0(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_037f4e28);
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                FUN_02200a68(&stack0x00000058,*(long *)(unaff_x19 + 0x28),
                             *(undefined8 *)PTR_DAT_037f4e38);
                in_stack_000000d8 = in_stack_00000060;
                in_stack_000000d0 = in_stack_00000058;
                *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000070;
                *(long *)(unaff_x26 + 0x10) = in_stack_00000068;
                puVar2 = PTR_DAT_037f4e20;
                in_stack_000000f0 = in_stack_00000078;
                while( true ) {
                  uVar22 = FUN_02358864(&stack0x000000d0,*(undefined8 *)puVar4);
                  if ((uVar22 & 1) == 0) {
                    FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_037f4e48);
                    return;
                  }
                  if (*(long *)(unaff_x19 + 0x20) == 0) break;
                  FUN_02200638(*(long *)(unaff_x19 + 0x20),in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)puVar2);
                }
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
            }
          }
        }
      }
    }
  }
LAB_0193e37c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


