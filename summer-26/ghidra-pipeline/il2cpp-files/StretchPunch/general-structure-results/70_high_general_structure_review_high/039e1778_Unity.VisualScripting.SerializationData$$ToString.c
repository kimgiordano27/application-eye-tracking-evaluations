/*
FUNCTION_NAME: Unity.VisualScripting.SerializationData$$ToString
ENTRY_POINT: 039e1778
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039e6594) */

uint Unity_VisualScripting_SerializationData__ToString(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  long *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long lVar19;
  int unaff_w20;
  uint uVar20;
  undefined8 uVar21;
  long lVar22;
  long unaff_x24;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  ulong uVar27;
  ulong in_d3;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uStack0000000000000004;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  ulong in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  long in_stack_000002f0;
  undefined4 in_stack_00000308;
  
  puVar5 = PTR_DAT_04235450;
  lVar11 = *(long *)PTR_DAT_04235450;
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar19 = *(long *)(lVar14 + 0x80);
  if (lVar19 == 0) goto LAB_039e68c4;
  uVar9 = (uint)unaff_x24;
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
  *(undefined2 *)(lVar19 + unaff_x24 * 2 + 0x20) = 0;
  if (*(char *)(in_stack_00000020 + 0x430) != '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar11 = *(long *)puVar5;
      lVar14 = *(long *)(lVar11 + 0xb8);
    }
    lVar14 = *(long *)(lVar14 + 0x88);
    if (lVar14 == 0) goto LAB_039e68c4;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_039e6860;
    if (*(int *)(lVar14 + 0x20) != 0x33542d3) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *(long *)puVar5;
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_039e6860;
      if (*(int *)(lVar14 + 0x20) != 0x2f23db3) {
        return 0;
      }
    }
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar19 = *(long *)(lVar14 + 0x88);
  if (lVar19 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  if (*(int *)(lVar19 + 0x20) == 0x33542d3) {
LAB_039e1888:
    *(undefined1 *)(in_stack_00000020 + 0x430) = 0;
    return 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x88);
    if (lVar19 == 0) goto LAB_039e68c4;
  }
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  if (*(int *)(lVar19 + 0x20) == 0x2f23db3) goto LAB_039e1888;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
  }
  lVar19 = *(long *)(lVar14 + 0x80);
  if (lVar19 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar19 + 0x20);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x80);
  }
  if (uVar9 == 4 && sVar4 == 0x23) {
    uVar13 = 4;
LAB_039e19c4:
    uVar8 = FUN_039ecc90(lVar11,lVar19,uVar13);
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar13 = *(undefined8 *)PTR_DAT_04236310;
LAB_039e19dc:
    in_stack_00000020 = in_stack_00000020 + 0x4f0;
LAB_039e19e4:
    FUN_026b2290(in_stack_00000020,uVar8,uVar13);
    return 1;
  }
  if (lVar19 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar19 + 0x20);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x80);
  }
  if (uVar9 == 5 && sVar4 == 0x23) {
    uVar13 = 5;
    goto LAB_039e19c4;
  }
  if (lVar19 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar19 + 0x20);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x80);
  }
  if (uVar9 == 7 && sVar4 == 0x23) {
    uVar13 = 7;
    goto LAB_039e19c4;
  }
  if (lVar19 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar19 + 0x20);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
  }
  if (uVar9 == 9 && sVar4 == 0x23) {
    lVar19 = *(long *)(lVar14 + 0x80);
    uVar13 = 9;
    goto LAB_039e19c4;
  }
  lVar19 = *(long *)(lVar14 + 0x88);
  if (lVar19 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  uVar20 = *(uint *)(lVar19 + 0x20);
  if ((int)uVar20 < 0x2d8ff) {
    if (0xb93 < (int)uVar20) {
      if (0x79c1 < (int)uVar20) {
        if ((int)uVar20 < 0x22ef5) {
          if ((int)uVar20 < 0xa83b) {
            if (0x7fe9 < (int)uVar20) {
              if (uVar20 == 0xa15f) goto LAB_039e2b34;
              if (uVar20 == 0xa825) goto LAB_039e47d8;
              if (uVar20 != 0xa83a) {
                return 0;
              }
              goto LAB_039e2330;
            }
            if (uVar20 == 0x79d7) goto LAB_039e3db0;
            if (uVar20 != 0x7fe9) {
              return 0;
            }
          }
          else {
            if ((int)uVar20 < 0xabd8) {
              if (uVar20 == 0xabc1) {
LAB_039e419c:
                *(undefined1 *)(in_stack_00000020 + 0x2da) = 1;
                return 1;
              }
              if (uVar20 != 0xabd7) {
                return 0;
              }
LAB_039e3db0:
              if (*(int *)(in_stack_00000020 + 0x2e0) == 5) {
                *(undefined4 *)(in_stack_00000020 + 0x4d8) = 0;
                *(int *)(in_stack_00000020 + 0x4b0) = *(int *)(in_stack_00000020 + 0x4b0) + 1;
                *(float *)(in_stack_00000020 + 0x640) =
                     *(float *)(in_stack_00000020 + 0x408) + 0.0 +
                     *(float *)(in_stack_00000020 + 0x40c);
                *(undefined1 *)(in_stack_00000020 + 0x33c) = 1;
                return 1;
              }
              return 1;
            }
            if (uVar20 != 0xb1e9) {
              if (uVar20 == 0x2282e) {
LAB_039e4734:
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                }
                FUN_026b3c2c(&stack0x00000070,lVar14 + 0x10,*(undefined8 *)PTR_DAT_04236380);
                uVar13 = in_stack_00000088;
                uVar12 = _uStack0000000000000070;
                *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_00000078;
                thunk_FUN_01e10808(in_stack_00000020 + 0x100);
                *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
                thunk_FUN_01e10808(in_stack_00000020 + 0x118,uVar13);
                *(int *)(in_stack_00000020 + 0x120) = (int)uVar12;
                return 1;
              }
              uVar9 = 0x2ef4;
              goto LAB_039e2068;
            }
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          uVar12 = Unity_VisualScripting_VariableDeclarations__Set
                             (lVar11,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar19 + 0x2c),
                              *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
          fVar23 = (float)uVar12;
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 2) {
            uVar12 = (ulong)(uint)((fVar23 * *(float *)(in_stack_00000020 + 0x1e4)) / 100.0);
          }
          else if (in_stack_00000028._4_4_ == 1) {
            uVar12 = (ulong)(uint)(fVar23 * *(float *)(in_stack_00000020 + 0x1e4));
          }
          else {
            if (in_stack_00000028._4_4_ != 0) {
              return 0;
            }
            lVar11 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)PTR_DAT_04235450;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
            if (lVar14 == 0) goto LAB_039e68c4;
            if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_039e6860;
            if (*(short *)(lVar14 + 0x2a) != 0x2b) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x80);
                if (lVar14 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_039e6860;
              if (*(short *)(lVar14 + 0x2a) != 0x2d) {
                *(float *)(in_stack_00000020 + 0x1e8) = fVar23;
                goto LAB_039e58a4;
              }
            }
            uVar12 = (ulong)(uint)(fVar23 + *(float *)(in_stack_00000020 + 0x1e4));
          }
          *(int *)(in_stack_00000020 + 0x1e8) = (int)uVar12;
LAB_039e58a4:
          FUN_026b48b8(uVar12,in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_04236308);
          return 1;
        }
        if ((int)uVar20 < 0x260f5) {
          if (0x23290 < (int)uVar20) {
            if (uVar20 == 0x238b8) goto LAB_039e4714;
            if (uVar20 == 0x25a2e) goto LAB_039e4734;
            uVar9 = 0x60f4;
LAB_039e2068:
            if (uVar20 != (uVar9 | 0x20000)) {
              return 0;
            }
            if ((*(byte *)(in_stack_00000020 + 0x259) >> 1 & 1) != 0) {
              return 1;
            }
            FUN_026b2938(&stack0x00000070,in_stack_00000020 + 0x550,*(undefined8 *)PTR_DAT_04236378)
            ;
            cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x200,0);
            if (cVar7 != '\0') {
              return 1;
            }
            uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffdff;
            goto LAB_039e4110;
          }
          if (uVar20 != 0x22f09) {
            uVar9 = 0x3290;
            goto LAB_039e337c;
          }
        }
        else {
          if (0x26490 < (int)uVar20) {
            if (uVar20 == 0x26ab8) {
LAB_039e4714:
              uVar8 = FUN_026b48fc(in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_04236370);
              *(undefined4 *)(in_stack_00000020 + 0x1e8) = uVar8;
              return 1;
            }
            if (uVar20 == 0x2d7ad) goto LAB_039e4408;
            uVar9 = 0x2d8fe;
LAB_039e3250:
            if (uVar20 != uVar9) {
              return 0;
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)PTR_DAT_04235450;
              lVar14 = *(long *)(lVar11 + 0xb8);
              lVar19 = *(long *)(lVar14 + 0x88);
              if (lVar19 == 0) goto LAB_039e68c4;
            }
            if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
            if (*(int *)(lVar19 + 0x30) != 3) {
              return 0;
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              lVar11 = thunk_FUN_01dc4f30();
              lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            }
            lVar14 = *(long *)(lVar14 + 0x80);
            if (lVar14 != 0) {
              if ((7 < *(uint *)(lVar14 + 0x18)) && (*(uint *)(lVar14 + 0x18) != 8)) {
                uVar13 = FUN_039ec6b4(lVar11,*(undefined2 *)(lVar14 + 0x2e));
                cVar7 = FUN_039ec6b4(uVar13,*(undefined2 *)(lVar14 + 0x30));
                *(char *)(in_stack_00000020 + 0x4ef) = cVar7 + (char)uVar13 * '\x10';
                return 1;
              }
              goto LAB_039e6860;
            }
            goto LAB_039e68c4;
          }
          if (uVar20 != 0x26109) {
            uVar9 = 0x6490;
LAB_039e337c:
            if (uVar20 == (uVar9 | 0x20000)) {
              *(undefined1 *)(in_stack_00000020 + 0x2da) = 0;
              return 1;
            }
            return 0;
          }
        }
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        if (*(char *)(in_stack_00000020 + 0x3f5) != '\0') {
          return 1;
        }
        lVar11 = *(long *)(in_stack_00000020 + 0x368);
        if ((lVar11 == 0) || (lVar14 = *(long *)(lVar11 + 0x48), lVar14 == 0)) goto LAB_039e68c4;
        uVar9 = *(uint *)(lVar11 + 0x28);
        if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar9) {
          return 1;
        }
        if (uVar9 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar9 * 0x28;
          *(int *)(lVar14 + 0x38) = *(int *)(in_stack_00000020 + 0x494) - *(int *)(lVar14 + 0x34);
          *(uint *)(lVar11 + 0x28) = uVar9 + 1;
          return 1;
        }
        goto LAB_039e6860;
      }
      if (0x19a6 < (int)uVar20) {
        if ((int)uVar20 < 0x5892) {
          if ((int)uVar20 < 0x5172) {
            if (uVar20 == 0x50c5) {
LAB_039e44a4:
              *(undefined1 *)(in_stack_00000020 + 0x2db) = 0;
              return 1;
            }
            uVar9 = 0x5171;
          }
          else {
            if (uVar20 == 0x517f) {
LAB_039e4040:
              if (-1 < *(char *)(in_stack_00000020 + 0x25c)) {
                return 1;
              }
              if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
                uVar8 = FUN_026b4a2c(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_04236338);
                *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar8;
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
                fVar24 = *(float *)(in_stack_00000020 + 0x404);
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar23 = (float)FUN_03dd0f20(&stack0x00000270,0);
                fVar32 = 1.0;
                if (0.0 < fVar23) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar32 = (float)FUN_03dd0f20(&stack0x00000270,0);
                }
                *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
              }
              cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x80,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffff7f;
              goto LAB_039e4110;
            }
            if (uVar20 == 0x57e5) goto LAB_039e44a4;
            uVar9 = 0x5891;
          }
          if (uVar20 != uVar9) {
            return 0;
          }
          if ((*(byte *)(in_stack_00000020 + 0x25d) & 1) == 0) {
            return 1;
          }
          if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
            uVar8 = FUN_026b4a2c(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_04236338);
            *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar8;
            if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
            fVar24 = *(float *)(in_stack_00000020 + 0x404);
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar23 = (float)FUN_03dd0f40(&stack0x00000270,0);
            fVar32 = 1.0;
            if (0.0 < fVar23) {
              if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar32 = (float)FUN_03dd0f40(&stack0x00000270,0);
            }
            *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
          }
          cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x100,0);
          if (cVar7 != '\0') {
            return 1;
          }
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffeff;
          goto LAB_039e4110;
        }
        if (0x6f5f < (int)uVar20) {
          if (uVar20 == 0x7625) {
LAB_039e47d8:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x200;
            FUN_039fecc8(in_stack_00000020 + 0x260,0x200,0);
            puVar5 = PTR_DAT_042353b8;
            if (*(int *)(*(long *)PTR_DAT_042353b8 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            if (DAT_044aaa5d == '\0') {
              FUN_01d7d918(PTR_DAT_042353b8);
              DAT_044aaa5d = '\x01';
            }
            lVar11 = *(long *)puVar5;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)puVar5;
            }
            uVar27 = (*(ulong **)(lVar11 + 0xb8))[1];
            uVar26 = **(ulong **)(lVar11 + 0xb8);
            uVar9 = 0;
            uVar12 = 0x4000ffff;
            do {
              plVar16 = (long *)PTR_DAT_04235450;
              lVar11 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *plVar16;
              }
              lVar14 = *(long *)(lVar11 + 0xb8);
              lVar19 = *(long *)(lVar14 + 0x88);
              if (lVar19 == 0) goto LAB_039e68c4;
              uVar8 = (undefined4)(uVar26 >> 0x20);
              uVar29 = (undefined4)(uVar27 >> 0x20);
              if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_039e4da0:
                uVar20 = (uint)uVar12;
                uVar9 = (uint)*(byte *)(in_stack_00000020 + 0x4ef);
                if (uVar20 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                  uVar9 = (uint)(uVar12 >> 0x18) & 0xff;
                }
                FUN_039bbbc8(uVar26 & 0xffffffff,uVar8,uVar27 & 0xffffffff,uVar29,&stack0x000002f8,
                             uVar20 & 0xff0000 | uVar9 << 0x18 | uVar20 & 0xff00 | uVar20 & 0xff,0);
                in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,in_stack_00000308);
                FUN_026b29b0(in_stack_00000020 + 0x550,&stack0x00000070,
                             *(undefined8 *)PTR_DAT_04236340);
                return 1;
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *plVar16;
                lVar14 = *(long *)(lVar11 + 0xb8);
                lVar19 = *(long *)(lVar14 + 0x88);
                plVar16 = (long *)PTR_DAT_04235450;
                if (lVar19 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
              lVar22 = (long)(int)uVar9;
              if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_039e4da0;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *plVar16;
                lVar14 = *(long *)(lVar11 + 0xb8);
                lVar19 = *(long *)(lVar14 + 0x88);
                if (lVar19 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
              iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
              if (iVar10 < 0xa826) {
                if ((iVar10 == 0x7625) || (iVar10 == 0xa825)) {
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30();
                    lVar11 = *(long *)PTR_DAT_04235450;
                    lVar14 = *(long *)(lVar11 + 0xb8);
                    lVar19 = *(long *)(lVar14 + 0x88);
                    if (lVar19 == 0) goto LAB_039e68c4;
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
                  if (*(int *)(lVar19 + lVar22 * 0x18 + 0x28) == 4) {
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      lVar11 = thunk_FUN_01dc4f30();
                      lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                      lVar19 = *(long *)(lVar14 + 0x88);
                      if (lVar19 == 0) goto LAB_039e68c4;
                    }
                    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
                    uVar12 = FUN_039ed0a4(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                          *(undefined4 *)(lVar19 + 0x2c),
                                          *(undefined4 *)(lVar19 + 0x30));
                  }
                }
              }
              else if (iVar10 == 0x44d63) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  lVar11 = thunk_FUN_01dc4f30();
                  lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar19 = *(long *)(lVar14 + 0x88);
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar19 = lVar19 + lVar22 * 0x18;
                uVar12 = FUN_039ed0a4(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                      *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30))
                ;
                uVar12 = uVar12 & 0xffffffff;
              }
              else if (iVar10 == 0xe63719) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar19 = *(long *)(lVar14 + 0x88);
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar19 = lVar19 + lVar22 * 0x18;
                iVar10 = FUN_039ed2f0(in_stack_00000020,*(undefined8 *)(lVar14 + 0x80),
                                      *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                      lVar14 + 0x90);
                if (iVar10 != 4) {
                  return 0;
                }
                lVar11 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *(long *)PTR_DAT_04235450;
                }
                lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                if (lVar11 == 0) goto LAB_039e68c4;
                uVar20 = *(uint *)(lVar11 + 0x18);
                if ((((uVar20 == 0) || (uVar20 == 1)) || (uVar20 < 3)) || (uVar20 == 3))
                goto LAB_039e6860;
                uVar34 = *(undefined4 *)(lVar11 + 0x20);
                uVar33 = *(undefined4 *)(lVar11 + 0x24);
                uVar31 = *(undefined4 *)(lVar11 + 0x28);
                uVar28 = *(undefined4 *)(lVar11 + 0x2c);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                FUN_039bb8f8(uVar34,uVar33,uVar31,uVar28,&stack0x00000310,0);
                uVar28 = (undefined4)uVar27;
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar31 = FUN_039bb9e8(uVar26 & 0xffffffff,0);
                uVar26 = CONCAT44(uVar8,uVar31);
                uVar27 = CONCAT44(uVar29,uVar28);
              }
              uVar9 = uVar9 + 1;
            } while( true );
          }
          if (uVar20 != 0x763a) {
            if (uVar20 != 0x79c1) {
              return 0;
            }
            goto LAB_039e419c;
          }
LAB_039e2330:
          if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
            return 1;
          }
          if (*(char *)(in_stack_00000020 + 0x3f5) != '\0') {
            return 1;
          }
          lVar11 = *(long *)(in_stack_00000020 + 0x368);
          if (lVar11 != 0) {
            lVar14 = *(long *)(lVar11 + 0x48);
            if (lVar14 == 0) goto LAB_039e68c4;
            uVar9 = *(uint *)(lVar11 + 0x28);
            lVar19 = (long)(int)uVar9;
            if (*(int *)(lVar14 + 0x18) < (int)(uVar9 + 1)) {
              if (*(int *)(*(long *)PTR_DAT_042353d0 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              FUN_0216bb78((long *)(lVar11 + 0x48),uVar9 + 1,*(undefined8 *)PTR_DAT_042362e8);
              lVar11 = *(long *)(in_stack_00000020 + 0x368);
              if (lVar11 == 0) goto LAB_039e68c4;
            }
            lVar11 = *(long *)(lVar11 + 0x48);
            if (lVar11 == 0) goto LAB_039e68c4;
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_039e6860;
            plVar16 = (long *)(lVar11 + lVar19 * 0x28 + 0x20);
            *plVar16 = in_stack_00000020;
            thunk_FUN_01e10808(plVar16,in_stack_00000020);
            if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
               (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar11 == 0))
            goto LAB_039e68c4;
            lVar14 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar14 = *(long *)PTR_DAT_04235450;
            }
            lVar14 = *(long *)(lVar14 + 0xb8);
            lVar22 = *(long *)(lVar14 + 0x88);
            if (lVar22 == 0) goto LAB_039e68c4;
            if ((*(int *)(lVar22 + 0x18) != 0) && (uVar9 < *(uint *)(lVar11 + 0x18))) {
              *(undefined4 *)(lVar11 + lVar19 * 0x28 + 0x28) = *(undefined4 *)(lVar22 + 0x24);
              if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
                 (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar11 == 0))
              goto LAB_039e68c4;
              if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + lVar19 * 0x28;
                *(undefined4 *)(lVar11 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x494);
                iVar10 = *(int *)(lVar22 + 0x2c);
                *(int *)(lVar11 + 0x2c) = iVar10 + unaff_w20;
                uVar8 = *(undefined4 *)(lVar22 + 0x30);
                *(undefined4 *)(lVar11 + 0x30) = uVar8;
                FUN_039bad98(lVar11 + 0x20,*(undefined8 *)(lVar14 + 0x80),iVar10,uVar8,0);
                return 1;
              }
            }
            goto LAB_039e6860;
          }
          goto LAB_039e68c4;
        }
        if (uVar20 == 0x589f) goto LAB_039e4040;
        if (uVar20 != 0x6f5f) {
          return 0;
        }
LAB_039e2b34:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
          lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if ((*(int *)(lVar19 + 0x18) == 0) || (*(int *)(lVar19 + 0x18) == 1)) goto LAB_039e6860;
        iVar10 = *(int *)(lVar19 + 0x24);
        if ((iVar10 != 0x2d93756b) && (iVar10 != 0x1f31f54b)) {
          iVar1 = *(int *)(lVar19 + 0x38);
          iVar2 = *(int *)(lVar19 + 0x3c);
          FUN_039aa154(iVar10,&stack0x000002f0,0);
          puVar5 = 
          Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
          ;
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar12 = FUN_03d755c0(in_stack_000002f0,0,0);
          if ((uVar12 & 1) != 0) {
            lVar11 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)PTR_DAT_04235450;
            }
            lVar14 = *(long *)(lVar11 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x70);
            if (lVar19 == 0) {
              in_stack_000002f0 = 0;
            }
            else {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
              }
              lVar11 = *(long *)(lVar14 + 0x88);
              if (lVar11 == 0) goto LAB_039e68c4;
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
              uVar13 = FUN_0326cf90(0,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar11 + 0x2c),
                                    *(undefined4 *)(lVar11 + 0x30),0);
              in_stack_000002f0 =
                   (**(code **)(lVar19 + 0x18))
                             (*(undefined8 *)(lVar19 + 0x40),iVar10,uVar13,
                              *(undefined8 *)(lVar19 + 0x28));
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar12 = FUN_03d755c0(in_stack_000002f0,0,0);
            if ((uVar12 & 1) != 0) {
              uVar13 = FUN_039f5450(0);
              lVar11 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(lVar11);
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_039e68c4;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_039e6860;
              uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0)
              ;
              uVar13 = FUN_0326dc80(uVar13,uVar21,0);
              in_stack_000002f0 = FUN_02146300(uVar13,*(undefined8 *)PTR_DAT_04235608);
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar12 = FUN_03d755c0(in_stack_000002f0,0,0);
            if ((uVar12 & 1) != 0) {
              return 0;
            }
            FUN_039a9c64(in_stack_000002f0,0);
          }
          if (iVar2 == 0 && iVar1 == 0) {
            if (in_stack_000002f0 == 0) goto LAB_039e68c4;
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(in_stack_000002f0 + 0x20);
            thunk_FUN_01e10808(in_stack_00000020 + 0x118);
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
            lVar11 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)PTR_DAT_04235450;
            }
            uVar9 = FUN_039aa5ac(uVar13,in_stack_000002f0,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar9;
            lVar11 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
            if (lVar11 == 0) goto LAB_039e68c4;
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_039e6860;
            lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
            _uStack0000000000000070 = *(ulong *)(lVar11 + 0x20);
            uVar13 = *(undefined8 *)PTR_DAT_04236318;
            plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8) + 2;
          }
          else {
            if ((iVar1 != 0x629fdf7) && (iVar1 != 0x454d9f7)) {
              return 0;
            }
            uVar12 = FUN_039aa34c(iVar2,&stack0x000002e8,0);
            if ((uVar12 & 1) == 0) {
              uVar13 = FUN_039f5450(0);
              lVar11 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(lVar11);
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_039e68c4;
              if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
              uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),0)
              ;
              uVar13 = FUN_0326dc80(uVar13,uVar21,0);
              uVar13 = FUN_02146300(uVar13,*(undefined8 *)PTR_DAT_042362d0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(*(long *)puVar5);
              }
              uVar12 = FUN_03d755c0(uVar13,0,0);
              if ((uVar12 & 1) != 0) {
                return 0;
              }
              FUN_039a9f30(iVar2,uVar13,0);
              *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
              thunk_FUN_01e10808(in_stack_00000020 + 0x118);
              uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
              lVar11 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              uVar9 = FUN_039aa5ac(uVar13,in_stack_000002f0,*(long *)(lVar11 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar9;
              lVar11 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
              if (lVar11 == 0) goto LAB_039e68c4;
              if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_039e6860;
              lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
              in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
              in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
              _uStack0000000000000070 = *(ulong *)(lVar11 + 0x20);
              uVar13 = *(undefined8 *)PTR_DAT_04236318;
              plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8) + 2;
              in_stack_00000170 = _uStack0000000000000070;
              in_stack_00000178 = in_stack_00000078;
              in_stack_00000180 = in_stack_00000080;
              in_stack_00000188 = in_stack_00000088;
              in_stack_00000190 = in_stack_00000090;
              in_stack_00000198 = in_stack_00000098;
              in_stack_000001a0 = in_stack_000000a0;
            }
            else {
              *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
              thunk_FUN_01e10808(in_stack_00000020 + 0x118);
              uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
              lVar11 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              uVar9 = FUN_039aa5ac(uVar13,in_stack_000002f0,*(long *)(lVar11 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar9;
              lVar11 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
              if (lVar11 == 0) goto LAB_039e68c4;
              if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_039e6860;
              lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
              in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
              in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
              _uStack0000000000000070 = *(ulong *)(lVar11 + 0x20);
              uVar13 = *(undefined8 *)PTR_DAT_04236318;
              plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8) + 2;
              in_stack_000001b0 = _uStack0000000000000070;
              in_stack_000001b8 = in_stack_00000078;
              in_stack_000001c0 = in_stack_00000080;
              in_stack_000001c8 = in_stack_00000088;
              in_stack_000001d0 = in_stack_00000090;
              in_stack_000001d8 = in_stack_00000098;
              in_stack_000001e0 = in_stack_000000a0;
            }
          }
          FUN_026b3b9c(plVar16,&stack0x00000070,uVar13);
          lVar11 = in_stack_00000020 + 0x100;
          *(long *)(in_stack_00000020 + 0x100) = in_stack_000002f0;
          goto LAB_039e2cc0;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
        *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar11 + 0x28);
        thunk_FUN_01e10808(in_stack_00000020 + 0x100);
        lVar11 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
        if (lVar11 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
        *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
        thunk_FUN_01e10808(in_stack_00000020 + 0x118);
        *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
        plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar11 = *plVar16;
        if (lVar11 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
        in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
        _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
        in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
LAB_039e3890:
        uVar13 = *(undefined8 *)PTR_DAT_04236318;
LAB_039e38a4:
        FUN_026b3b9c(plVar16 + 2,&stack0x00000070,uVar13);
        return 1;
      }
      if ((int)uVar20 < 0x11cd) {
        if ((int)uVar20 < 0xc90) {
          bVar6 = uVar20 == 0xb9d;
          goto LAB_039e3b58;
        }
        if (uVar20 == 0xc93) {
          return 1;
        }
        if (uVar20 == 0xc9d) {
          return 1;
        }
        if (uVar20 != 0x11cc) {
          return 0;
        }
LAB_039e2708:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01dc4f30();
          lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                   *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                   &stack0x00000070);
        if (fVar23 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ == 2) {
          *(float *)(in_stack_00000020 + 0x640) =
               (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
          return 1;
        }
        fVar32 = DAT_00bafb80;
        if (in_stack_00000028._4_4_ == 1) {
          fVar23 = fVar23 * *(float *)(in_stack_00000020 + 0x1e8);
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar32 = 1.0;
          }
        }
        else {
          if (in_stack_00000028._4_4_ != 0) {
            return 0;
          }
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar32 = 1.0;
          }
        }
        fVar23 = fVar23 * fVar32;
        goto LAB_039e5b08;
      }
      if ((int)uVar20 < 0x1287) {
        if (uVar20 == 0x1278) {
LAB_039e42a0:
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
          fVar24 = *(float *)(in_stack_00000020 + 0x404);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar23 = (float)FUN_03dd0f40(&stack0x00000270,0);
          fVar32 = 1.0;
          if (0.0 < fVar23) {
            if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar32 = (float)FUN_03dd0f40(&stack0x00000270,0);
          }
          *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
          FUN_026b4960(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                       *(undefined8 *)PTR_DAT_04236348);
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
          fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          iVar10 = FUN_03dd0e90(&stack0x00000270,0);
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar32 = (float)FUN_03dd0ea0(&stack0x00000270,0);
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
          fVar30 = *(float *)(in_stack_00000020 + 0x61c);
          fVar24 = DAT_00bafb80;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar24 = 1.0;
          }
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar25 = (float)FUN_03dd0f30(&stack0x00000270,0);
          *(float *)(in_stack_00000020 + 0x61c) =
               fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                        *(float *)(in_stack_00000020 + 0x404);
          FUN_039fecc8(in_stack_00000020 + 0x260,0x100,0);
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x100;
          goto LAB_039e4400;
        }
        uVar9 = 0x1286;
      }
      else {
        if (uVar20 == 0x18ec) goto LAB_039e2708;
        if (uVar20 == 0x1998) goto LAB_039e42a0;
        uVar9 = 0x19a6;
      }
      if (uVar20 != uVar9) {
        return 0;
      }
      if (*(long *)(in_stack_00000020 + 0x100) != 0) {
        fVar24 = *(float *)(in_stack_00000020 + 0x404);
        memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
        fVar23 = (float)FUN_03dd0f20(&stack0x00000270,0);
        fVar32 = 1.0;
        if (0.0 < fVar23) {
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar32 = (float)FUN_03dd0f20(&stack0x00000270,0);
        }
        *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
        FUN_026b4960(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                     *(undefined8 *)PTR_DAT_04236348);
        if (*(long *)(in_stack_00000020 + 0x100) != 0) {
          fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          iVar10 = FUN_03dd0e90(&stack0x00000270,0);
          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar32 = (float)FUN_03dd0ea0(&stack0x00000270,0);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              fVar30 = *(float *)(in_stack_00000020 + 0x61c);
              fVar24 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar24 = 1.0;
              }
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar25 = (float)FUN_03dd0f10(&stack0x00000270,0);
              *(float *)(in_stack_00000020 + 0x61c) =
                   fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                            *(float *)(in_stack_00000020 + 0x404);
              FUN_039fecc8(in_stack_00000020 + 0x260,0x80,0);
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x80;
LAB_039e4400:
              *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
              return 1;
            }
          }
        }
      }
      goto LAB_039e68c4;
    }
    if (0x62 < (int)uVar20) {
      if (0x1b2 < (int)uVar20) {
        if (0x29e < (int)uVar20) {
          bVar6 = uVar20 == 0x394;
          if (0x394 < (int)uVar20) {
            if (uVar20 == 0x39e) {
              return 1;
            }
            if (uVar20 == 0xb8f) {
              return 0;
            }
            if (uVar20 != 0xb93) {
              return 0;
            }
            return 1;
          }
LAB_039e3b58:
          return (uint)bVar6;
        }
        if (0x1be < (int)uVar20) {
          if (0xe < uVar20 - 0x290) {
            return 0;
          }
          return 0x4010U >> (ulong)(uVar20 - 0x290 & 0x1f) & 1;
        }
        if (uVar20 == 0x1bc) {
LAB_039e3d58:
          if (((*(byte *)(in_stack_00000020 + 600) >> 6 & 1) == 0) &&
             (cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x40,0), cVar7 == '\0')) {
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffbf
            ;
          }
          uVar8 = FUN_026b22d8(in_stack_00000020 + 0x530,*(undefined8 *)PTR_DAT_04236360);
          *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
          return 1;
        }
        if (uVar20 != 0x1be) {
          return 0;
        }
LAB_039e3494:
        if ((*(byte *)(in_stack_00000020 + 600) >> 2 & 1) == 0) {
          uVar8 = FUN_026b22d8(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_04236360);
          *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
          cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,4,0);
          if (cVar7 == '\0') {
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffb
            ;
          }
        }
        uVar8 = FUN_026b22d8(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_04236360);
        *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
        return 1;
      }
      if ((int)uVar20 < 0x193) {
        if ((int)uVar20 < 0x74) {
          if (uVar20 != 0x69) {
            if (uVar20 != 0x73) {
              return 0;
            }
            goto LAB_039e3a0c;
          }
          goto LAB_039e3df8;
        }
        if (uVar20 == 0x75) goto LAB_039e4b80;
        if (uVar20 == 0x18b) goto LAB_039e4c98;
        if (uVar20 != 0x192) {
          return 0;
        }
      }
      else {
        if ((int)uVar20 < 0x19f) {
          if (uVar20 == 0x19c) goto LAB_039e3d58;
          if (uVar20 != 0x19e) {
            return 0;
          }
          goto LAB_039e3494;
        }
        if (uVar20 == 0x1aa) {
          return 1;
        }
        if (uVar20 == 0x1ab) {
LAB_039e4c98:
          if ((*(byte *)(in_stack_00000020 + 600) & 1) != 0) {
            return 1;
          }
          cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,1,0);
          if (cVar7 == '\0') {
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffe
            ;
            uVar8 = FUN_026b36f4(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_04236330);
            *(undefined4 *)(in_stack_00000020 + 0x214) = uVar8;
            return 1;
          }
          return 1;
        }
        if (uVar20 != 0x1b2) {
          return 0;
        }
      }
      if ((*(byte *)(in_stack_00000020 + 600) >> 1 & 1) != 0) {
        return 1;
      }
      uVar8 = FUN_026b2fb0(in_stack_00000020 + 0x5d0,*(undefined8 *)PTR_DAT_04236358);
      *(undefined4 *)(in_stack_00000020 + 0x5f0) = uVar8;
      cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,2,0);
      if (cVar7 != '\0') {
        return 1;
      }
      uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffd;
      goto LAB_039e4110;
    }
    if (-0x32f64d9a < (int)uVar20) {
      if (-0x13b73942 < (int)uVar20) {
        if ((int)uVar20 < 0x4a) {
          if (uVar20 == 0x42) {
LAB_039e4118:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 1;
            FUN_039fecc8(in_stack_00000020 + 0x260,1,0);
            *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
            return 1;
          }
          if (uVar20 != 0x49) {
            return 0;
          }
LAB_039e3df8:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 2;
          FUN_039fecc8(in_stack_00000020 + 0x260,2,0);
          lVar11 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar11 = *(long *)PTR_DAT_04235450;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 != 0) {
            if (1 < *(uint *)(lVar14 + 0x18)) {
              if (*(int *)(lVar14 + 0x38) != 0x43833) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *(long *)PTR_DAT_04235450;
                  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                  if (lVar14 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
                if (*(int *)(lVar14 + 0x38) != 0x2da13) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
                  bVar3 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b8);
                  uVar9 = (uint)bVar3;
                  *(uint *)(in_stack_00000020 + 0x5f0) = (uint)bVar3;
                  goto LAB_039e51b0;
                }
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_039e68c4;
              if (1 < *(uint *)(lVar14 + 0x18)) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                          (lVar11,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                           *(undefined4 *)(lVar14 + 0x44),
                                           *(undefined4 *)(lVar14 + 0x48),&stack0x00000070);
                uVar9 = 0x80000000;
                if (fVar23 != INFINITY) {
                  uVar9 = (int)fVar23;
                }
                *(uint *)(in_stack_00000020 + 0x5f0) = uVar9;
                if (0x168 < uVar9 + 0xb4) {
                  return 0;
                }
LAB_039e51b0:
                FUN_026b2f68(in_stack_00000020 + 0x5d0,uVar9,*(undefined8 *)PTR_DAT_042362f8);
                return 1;
              }
            }
            goto LAB_039e6860;
          }
          goto LAB_039e68c4;
        }
        if (uVar20 == 0x53) {
LAB_039e3a0c:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x40;
          FUN_039fecc8(in_stack_00000020 + 0x260,0x40,0);
          lVar11 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar11 = *(long *)PTR_DAT_04235450;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_039e68c4;
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
          if (*(int *)(lVar14 + 0x38) == 0x44d63) {
LAB_039e3ac0:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)PTR_DAT_04235450;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_039e68c4;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
            uVar13 = FUN_039ed0a4(lVar11,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                  *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48));
            *(int *)(in_stack_00000020 + 0x15c) = (int)uVar13;
            bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
            if (((uint)((ulong)uVar13 >> 0x18) & 0xff) <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)
               ) {
              bVar3 = (byte)((ulong)uVar13 >> 0x18);
            }
            *(byte *)(in_stack_00000020 + 0x15f) = bVar3;
            uVar8 = *(undefined4 *)(in_stack_00000020 + 0x15c);
          }
          else {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar11 = *(long *)PTR_DAT_04235450;
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_039e68c4;
            }
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
            if (*(int *)(lVar14 + 0x38) == 0x2ef43) goto LAB_039e3ac0;
            uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
            *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
          }
          uVar13 = *(undefined8 *)PTR_DAT_04236310;
          in_stack_00000020 = in_stack_00000020 + 0x530;
          goto LAB_039e19e4;
        }
        if (uVar20 != 0x55) {
          if (uVar20 != 0x62) {
            return 0;
          }
          goto LAB_039e4118;
        }
LAB_039e4b80:
        *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 4;
        FUN_039fecc8(in_stack_00000020 + 0x260,4,0);
        lVar11 = *(long *)PTR_DAT_04235450;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_039e68c4;
        if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
        if (*(int *)(lVar14 + 0x38) == 0x44d63) {
LAB_039e4c34:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar11 = *(long *)PTR_DAT_04235450;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_039e68c4;
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
          uVar13 = FUN_039ed0a4(lVar11,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48));
          *(int *)(in_stack_00000020 + 0x158) = (int)uVar13;
          bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
          if (((uint)((ulong)uVar13 >> 0x18) & 0xff) <= (uint)*(byte *)(in_stack_00000020 + 0x4ef))
          {
            bVar3 = (byte)((ulong)uVar13 >> 0x18);
          }
          *(byte *)(in_stack_00000020 + 0x15b) = bVar3;
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x158);
        }
        else {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar11 = *(long *)PTR_DAT_04235450;
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_039e68c4;
          }
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039e6860;
          if (*(int *)(lVar14 + 0x38) == 0x2ef43) goto LAB_039e4c34;
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
          *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
        }
        uVar13 = *(undefined8 *)PTR_DAT_04236310;
        in_stack_00000020 = in_stack_00000020 + 0x510;
        goto LAB_039e19e4;
      }
      if ((int)uVar20 < -0x3239ec62) {
        if (uVar20 == 0xcdc58478) {
LAB_039e44b0:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ != 2) {
            if (in_stack_00000028._4_4_ == 1) {
              fVar32 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
            }
            else {
              if (in_stack_00000028._4_4_ != 0) {
                return 1;
              }
              fVar32 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = fVar23 * fVar32;
            }
            *(float *)(in_stack_00000020 + 0x2c0) = fVar23;
            return 1;
          }
          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
            fVar32 = *(float *)(in_stack_00000020 + 0x1e8);
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            iVar10 = FUN_03dd0e90(&stack0x00000270,0);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar24 = (float)FUN_03dd0ea0(&stack0x00000270,0);
              if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                fVar30 = DAT_00bafb80;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar30 = 1.0;
                }
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x50),0x60);
                fVar25 = (float)FUN_03dd0eb0(&stack0x00000270,0);
                *(float *)(in_stack_00000020 + 0x2c0) =
                     (fVar32 / (float)iVar10) * fVar24 * fVar30 * ((fVar23 * fVar25) / 100.0);
                return 1;
              }
            }
          }
          goto LAB_039e68c4;
        }
        uVar9 = 0xcdc6139d;
        goto LAB_039e3700;
      }
      if (uVar20 == 0xe5711531) {
LAB_039e47b8:
        *(undefined4 *)(in_stack_00000020 + 0x2c0) = 0xc6fffe00;
        return 1;
      }
      if (uVar20 == 0xe571a456) {
LAB_039e47cc:
        *(undefined4 *)(in_stack_00000020 + 0x408) = 0;
        return 1;
      }
      uVar9 = 0xec48c6be;
LAB_039e2224:
      if (uVar20 != uVar9) {
        return 0;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x88);
        if (lVar19 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                 *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                 &stack0x00000070);
      if (fVar23 == -32768.0) {
        return 0;
      }
      iVar10 = -0x80000000;
      if (fVar23 != INFINITY) {
        iVar10 = (int)fVar23;
      }
      if (iVar10 < 0x191) {
        if (iVar10 < 0xc9) {
          if ((iVar10 == 100) || (iVar10 == 200)) goto LAB_039e5c24;
        }
        else if ((iVar10 == 300) || (iVar10 == 400)) goto LAB_039e5c24;
      }
      else if (iVar10 < 0x259) {
        if ((iVar10 == 500) || (iVar10 == 600)) goto LAB_039e5c24;
      }
      else if ((iVar10 == 700) || ((iVar10 == 800 || (iVar10 == 900)))) {
LAB_039e5c24:
        *(int *)(in_stack_00000020 + 0x214) = iVar10;
      }
      uVar8 = *(undefined4 *)(in_stack_00000020 + 0x214);
      in_stack_00000020 = in_stack_00000020 + 0x218;
      puVar18 = (undefined8 *)PTR_DAT_04236320;
LAB_039e5c70:
      FUN_026b34f4(in_stack_00000020,uVar8,*puVar18);
      return 1;
    }
    if ((int)uVar20 < -0x64bbe162) {
      if ((int)uVar20 < -0x70449a55) {
        if (uVar20 == 0x8f9a8677) {
LAB_039e46b8:
          FUN_026b353c(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_04236388);
          if (*(int *)(in_stack_00000020 + 0x25c) == 1) {
            *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
            return 1;
          }
          uVar8 = FUN_026b36f4(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_04236330);
          *(undefined4 *)(in_stack_00000020 + 0x214) = uVar8;
          return 1;
        }
        if (uVar20 != 0x8fbb65aa) {
          return 0;
        }
        goto LAB_039e3cb4;
      }
      if (uVar20 == 0x91e417d1) goto LAB_039e330c;
      if (uVar20 == 0x92d31273) goto LAB_039e2ae4;
      if (uVar20 != 0x9b441e9d) {
        return 0;
      }
    }
    else {
      if ((int)uVar20 < -0x6147ec0e) {
        if (uVar20 != 0x9c8f61ca) {
          if (uVar20 != 0x9eb813f1) {
            return 0;
          }
LAB_039e330c:
          if ((*(byte *)(in_stack_00000020 + 600) >> 5 & 1) != 0) {
            return 1;
          }
          cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x20,0);
          if (cVar7 != '\0') {
            return 1;
          }
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffdf;
          goto LAB_039e4110;
        }
LAB_039e3cb4:
        if ((*(byte *)(in_stack_00000020 + 600) >> 3 & 1) != 0) {
          return 1;
        }
        cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,8,0);
        if (cVar7 != '\0') {
          return 1;
        }
        uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffff7;
LAB_039e4110:
        *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
        return 1;
      }
      if (uVar20 == 0x9fa70e93) goto LAB_039e2ae4;
      if (uVar20 != 0xcb42bfbd) {
        if (uVar20 != 0xcd09b266) {
          return 0;
        }
        goto LAB_039e4cfc;
      }
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01dc4f30();
      lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x88);
      if (lVar19 == 0) goto LAB_039e68c4;
    }
    if (*(int *)(lVar19 + 0x18) != 0) {
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                 *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                 &stack0x00000070);
      if (fVar23 == -32768.0) {
        return 0;
      }
      if (in_stack_00000028._4_4_ == 0) {
        fVar32 = DAT_00bafb80;
        if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
          fVar32 = 1.0;
        }
        fVar23 = fVar23 * fVar32;
      }
      else if (in_stack_00000028._4_4_ == 1) {
        fVar32 = DAT_00bafb80;
        if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
          fVar32 = 1.0;
        }
        fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
      }
      else if (in_stack_00000028._4_4_ == 2) {
        fVar32 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
          fVar32 = *(float *)(in_stack_00000020 + 0x360);
        }
        fVar23 = (fVar23 * (*(float *)(in_stack_00000020 + 0x358) - fVar32)) / 100.0;
      }
      else {
        fVar23 = *(float *)(in_stack_00000020 + 0x354);
      }
      if (fVar23 < 0.0) {
        fVar23 = 0.0;
      }
LAB_039e6074:
      *(float *)(in_stack_00000020 + 0x354) = fVar23;
      return 1;
    }
    goto LAB_039e6860;
  }
  if (0x691282 < (int)uVar20) {
    if ((int)uVar20 < 0x3434823) {
      if ((int)uVar20 < 0x765e9b) {
        if ((int)uVar20 < 0x719366) {
          if ((int)uVar20 < 0x6afe3e) {
            if (uVar20 == 0x6a5e93) goto LAB_039e3f24;
            if (uVar20 != 0x6afe3d) {
              return 0;
            }
LAB_039e3b44:
            *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
            return 1;
          }
          if (uVar20 == 0x6ba308) {
LAB_039e4cf0:
            *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
            return 1;
          }
          if (uVar20 != 0x6ccb9a) {
            if (uVar20 != 0x719365) {
              return 0;
            }
            goto LAB_039e261c;
          }
LAB_039e39f0:
          *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
          return 1;
        }
        if (0x73f193 < (int)uVar20) {
          if (uVar20 == 0x74913d) goto LAB_039e3b44;
          if (uVar20 == 0x753608) goto LAB_039e4cf0;
          if (uVar20 != 0x765e9a) {
            return 0;
          }
          goto LAB_039e39f0;
        }
        if (uVar20 != 0x72a582) {
          if (uVar20 != 0x73f193) {
            return 0;
          }
LAB_039e3f24:
          uVar8 = FUN_026b48fc(in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_04236370);
          *(undefined4 *)(in_stack_00000020 + 0x40c) = uVar8;
          return 1;
        }
LAB_039e423c:
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        uVar9 = *(int *)(in_stack_00000020 + 0x494) - 1;
        if (*(int *)(in_stack_00000020 + 0x494) < 1) {
LAB_039e4294:
          *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
          return 1;
        }
        fVar23 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac);
        *(float *)(in_stack_00000020 + 0x640) = fVar23;
        if ((*(long *)(in_stack_00000020 + 0x368) != 0) &&
           (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar11 != 0)) {
          if (uVar9 < *(uint *)(lVar11 + 0x18)) {
            *(float *)(lVar11 + (ulong)uVar9 * 0x178 + 0x144) = fVar23;
            goto LAB_039e4294;
          }
          goto LAB_039e6860;
        }
        goto LAB_039e68c4;
      }
      if (0xe6a57a < (int)uVar20) {
        if ((int)uVar20 < 0x2d9fc44) {
          if (uVar20 == 0xf4aac9) goto LAB_039e3fb8;
          if (uVar20 != 0x2d9fc43) {
            return 0;
          }
        }
        else {
          if (uVar20 == 0x3004302) {
LAB_039e1c10:
            *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
            return 1;
          }
          if (uVar20 != 0x31d0163) {
            if (uVar20 != 0x3434822) {
              return 0;
            }
            goto LAB_039e1c10;
          }
        }
LAB_039e2ae4:
        if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
          return 1;
        }
        cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x10,0);
        if (cVar7 != '\0') {
          return 1;
        }
        uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
        goto LAB_039e4110;
      }
      if ((int)uVar20 < 0xa3a05b) {
        if (uVar20 != 0x8b5eea) {
          uVar9 = 0xa3a05a;
LAB_039e351c:
          if (uVar20 != uVar9) {
            return 0;
          }
          *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
          return 1;
        }
      }
      else {
        if (uVar20 == 0xb1a5a9) {
LAB_039e3fb8:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 1) {
              fVar32 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
            }
            else {
              if (in_stack_00000028._4_4_ != 0) {
                return 0;
              }
              fVar32 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = fVar23 * fVar32;
            }
            *(float *)(in_stack_00000020 + 0x61c) = fVar23;
            return 1;
          }
          goto LAB_039e6860;
        }
        if (uVar20 != 0xce640a) {
          uVar9 = 0xe6a57a;
          goto LAB_039e351c;
        }
      }
    }
    else {
      if ((int)uVar20 < 0x1eaf47a2) {
        if (0x14495107 < (int)uVar20) {
          if (0x161e7507 < (int)uVar20) {
            if (uVar20 == 0x16504b66) {
LAB_039e4148:
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
              }
              FUN_026b3c2c(&stack0x00000070,lVar14 + 0x10,*(undefined8 *)PTR_DAT_04236380);
              uVar8 = uStack0000000000000070;
              *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000088;
              thunk_FUN_01e10808(in_stack_00000020 + 0x118);
              *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
              return 1;
            }
            if (uVar20 == 0x1b40b577) goto LAB_039e46b8;
            if (uVar20 != 0x1eaf47a1) {
              return 0;
            }
LAB_039e46f0:
            uVar13 = 8;
            uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 8;
            goto LAB_039e4704;
          }
          if (uVar20 == 0x147b2766) goto LAB_039e4148;
          uVar9 = 0x161e7507;
LAB_039e2c94:
          if (uVar20 != uVar9) {
            return 0;
          }
          uVar13 = FUN_026b4354(in_stack_00000020 + 0x588,*(undefined8 *)PTR_DAT_04236350);
          lVar11 = in_stack_00000020 + 0x580;
          *(undefined8 *)(in_stack_00000020 + 0x580) = uVar13;
LAB_039e2cc0:
          thunk_FUN_01e10808(lVar11);
          return 1;
        }
        if ((int)uVar20 < 0x454d9f8) {
          if (uVar20 == 0x4230398) goto LAB_039e4548;
          if (uVar20 != 0x454d9f7) {
            return 0;
          }
        }
        else {
          if (uVar20 == 0x5f82798) {
LAB_039e4548:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
              if (lVar19 == 0) goto LAB_039e68c4;
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              uVar8 = *(undefined4 *)(lVar19 + 0x24);
              uVar12 = FUN_039aa2a4(uVar8,&stack0x000002e0,0);
              puVar5 = 
              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              ;
              if ((uVar12 & 1) == 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                            + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar12 = FUN_03d755c0(in_stack_000002e0,0,0);
                if ((uVar12 & 1) != 0) {
                  uVar13 = FUN_039f5640(0);
                  lVar11 = *(long *)PTR_DAT_04235450;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30(lVar11);
                    lVar11 = *(long *)PTR_DAT_04235450;
                  }
                  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                  if (lVar14 == 0) goto LAB_039e68c4;
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_039e6860;
                  uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar14 + 0x2c),
                                        *(undefined4 *)(lVar14 + 0x30),0);
                  uVar13 = FUN_0326dc80(uVar13,uVar21,0);
                  in_stack_000002e0 = FUN_02146300(uVar13,*(undefined8 *)PTR_DAT_042362d8);
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar12 = FUN_03d755c0(in_stack_000002e0,0,0);
                if ((uVar12 & 1) != 0) {
                  return 0;
                }
                FUN_039a9fc8(uVar8,in_stack_000002e0,0);
              }
              *(undefined8 *)(in_stack_00000020 + 0x580) = in_stack_000002e0;
              thunk_FUN_01e10808(in_stack_00000020 + 0x580);
              uVar9 = 1;
              *(undefined1 *)(in_stack_00000020 + 0x5b0) = 0;
              plVar16 = (long *)PTR_DAT_04235450;
              do {
                lVar11 = *plVar16;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *plVar16;
                }
                lVar14 = *(long *)(lVar11 + 0xb8);
                lVar19 = *(long *)(lVar14 + 0x88);
                if (lVar19 == 0) goto LAB_039e68c4;
                if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_039e5564:
                  FUN_026b4304(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                               *(undefined8 *)PTR_DAT_04236300);
                  return 1;
                }
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *plVar16;
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  lVar19 = *(long *)(lVar14 + 0x88);
                  plVar16 = (long *)PTR_DAT_04235450;
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                lVar22 = (long)(int)uVar9;
                if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_039e5564;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *plVar16;
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  lVar19 = *(long *)(lVar14 + 0x88);
                  plVar16 = (long *)PTR_DAT_04235450;
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
                if ((iVar10 == 0xb2fb) || (iVar10 == 0x80fb)) {
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    lVar11 = thunk_FUN_01dc4f30();
                    lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                    lVar19 = *(long *)(lVar14 + 0x88);
                    if (lVar19 == 0) goto LAB_039e68c4;
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                  lVar19 = lVar19 + lVar22 * 0x18;
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                            (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                             *(undefined4 *)(lVar19 + 0x2c),
                                             *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
                  *(bool *)(in_stack_00000020 + 0x5b0) = fVar23 != 0.0;
                  plVar16 = (long *)PTR_DAT_04235450;
                }
                uVar9 = uVar9 + 1;
              } while( true );
            }
            goto LAB_039e6860;
          }
          if (uVar20 != 0x629fdf7) {
            uVar9 = 0x14495107;
            goto LAB_039e2c94;
          }
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
          lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
        iVar10 = *(int *)(lVar19 + 0x24);
        if ((iVar10 != 0x2d93756b) && (iVar10 != 0x1f31f54b)) {
          uVar12 = FUN_039aa34c(iVar10,&stack0x000002e8,0);
          if ((uVar12 & 1) == 0) {
            uVar13 = FUN_039f5450(0);
            lVar11 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(lVar11);
              lVar11 = *(long *)PTR_DAT_04235450;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_039e68c4;
            if (*(int *)(lVar14 + 0x18) != 0) {
              uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0)
              ;
              uVar13 = FUN_0326dc80(uVar13,uVar21,0);
              uVar13 = FUN_02146300(uVar13,*(undefined8 *)PTR_DAT_042362d0);
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                          + 0xe0) == 0) {
                thunk_FUN_01dc4f30(*(long *)
                                    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                                  );
              }
              uVar12 = FUN_03d755c0(uVar13,0,0);
              if ((uVar12 & 1) != 0) {
                return 0;
              }
              FUN_039a9f30(iVar10,uVar13,0);
              *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
              thunk_FUN_01e10808(in_stack_00000020 + 0x118);
              uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
              uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
              lVar11 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              uVar9 = FUN_039aa5ac(uVar13,uVar21,*(long *)(lVar11 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar9;
              plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
              lVar11 = *plVar16;
              if (lVar11 == 0) goto LAB_039e68c4;
              if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
                in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
                in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
                in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
                in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
                in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
                in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
                _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
                uVar13 = *(undefined8 *)PTR_DAT_04236318;
                in_stack_000000b0 = _uStack0000000000000070;
                in_stack_000000b8 = in_stack_00000078;
                in_stack_000000c0 = in_stack_00000080;
                in_stack_000000c8 = in_stack_00000088;
                in_stack_000000d0 = in_stack_00000090;
                in_stack_000000d8 = in_stack_00000098;
                in_stack_000000e0 = in_stack_000000a0;
                goto LAB_039e38a4;
              }
            }
            goto LAB_039e6860;
          }
          *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
          thunk_FUN_01e10808(in_stack_00000020 + 0x118);
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
          uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
          lVar11 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar11 = *(long *)PTR_DAT_04235450;
          }
          uVar9 = FUN_039aa5ac(uVar13,uVar21,*(long *)(lVar11 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          *(uint *)(in_stack_00000020 + 0x120) = uVar9;
          plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar11 = *plVar16;
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_039e6860;
            lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
            _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
            uVar13 = *(undefined8 *)PTR_DAT_04236318;
            in_stack_000000f0 = _uStack0000000000000070;
            in_stack_000000f8 = in_stack_00000078;
            in_stack_00000100 = in_stack_00000080;
            in_stack_00000108 = in_stack_00000088;
            in_stack_00000110 = in_stack_00000090;
            in_stack_00000118 = in_stack_00000098;
            in_stack_00000120 = in_stack_000000a0;
            goto LAB_039e38a4;
          }
          goto LAB_039e68c4;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
        *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
        thunk_FUN_01e10808(in_stack_00000020 + 0x118);
        *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
        plVar16 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar11 = *plVar16;
        if (lVar11 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
        in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
        _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
        in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
        in_stack_00000130 = _uStack0000000000000070;
        in_stack_00000138 = in_stack_00000078;
        in_stack_00000140 = in_stack_00000080;
        in_stack_00000148 = in_stack_00000088;
        in_stack_00000150 = in_stack_00000090;
        in_stack_00000158 = in_stack_00000098;
        in_stack_00000160 = in_stack_000000a0;
        goto LAB_039e3890;
      }
      if (0x2e9af08a < (int)uVar20) {
        if (0x421fe49d < (int)uVar20) {
          if (uVar20 == 0x71174431) goto LAB_039e47b8;
          if (uVar20 == 0x7117d356) goto LAB_039e47cc;
          uVar9 = 0x77eef5be;
          goto LAB_039e2224;
        }
        if (uVar20 == 0x419bc966) {
LAB_039e4cfc:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
            if (fVar23 != -32768.0) {
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00bafb80;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
              }
              else if (in_stack_00000028._4_4_ == 1) {
                fVar32 = DAT_00bafb80;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
              }
              else if (in_stack_00000028._4_4_ == 2) {
                fVar32 = 0.0;
                if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                  fVar32 = *(float *)(in_stack_00000020 + 0x360);
                }
                fVar23 = (fVar23 * (*(float *)(in_stack_00000020 + 0x358) - fVar32)) / 100.0;
              }
              else {
                fVar23 = *(float *)(in_stack_00000020 + 0x350);
              }
              if (fVar23 < 0.0) {
                fVar23 = 0.0;
              }
              *(float *)(in_stack_00000020 + 0x350) = fVar23;
              return 1;
            }
            return 0;
          }
          goto LAB_039e6860;
        }
        if (uVar20 == 0x421f5578) goto LAB_039e44b0;
        uVar9 = 0x421fe49d;
LAB_039e3700:
        if (uVar20 != uVar9) {
          return 0;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01dc4f30();
          lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = fVar23 * fVar32;
          }
          else {
            if (in_stack_00000028._4_4_ != 1) {
              if (in_stack_00000028._4_4_ == 2) {
                fVar23 = (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
                *(float *)(in_stack_00000020 + 0x408) = fVar23;
              }
              else {
                fVar23 = *(float *)(in_stack_00000020 + 0x408);
              }
              goto LAB_039e5860;
            }
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
          }
          *(float *)(in_stack_00000020 + 0x408) = fVar23;
LAB_039e5860:
          *(float *)(in_stack_00000020 + 0x640) = *(float *)(in_stack_00000020 + 0x640) + fVar23;
          return 1;
        }
        goto LAB_039e6860;
      }
      if ((int)uVar20 < 0x21c6f46b) {
        if (uVar20 == 0x20d7f9c8) {
LAB_039e448c:
          uVar13 = 0x20;
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x20;
          goto LAB_039e4704;
        }
        uVar9 = 0x21c6f46a;
      }
      else {
        if (uVar20 == 0x2b8343c1) goto LAB_039e46f0;
        if (uVar20 == 0x2dabf5e8) goto LAB_039e448c;
        uVar9 = 0x2e9af08a;
      }
      if (uVar20 != uVar9) {
        return 0;
      }
    }
    uVar13 = 0x10;
    uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
LAB_039e4704:
    *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
    FUN_039fecc8(in_stack_00000020 + 0x260,uVar13,0);
    return 1;
  }
  if ((int)uVar20 < 0x105b0d) {
    if (0x4d122 < (int)uVar20) {
      if (0xefcec < (int)uVar20) {
        if ((int)uVar20 < 0xf8790) {
          if (uVar20 == 0xf80ab) goto LAB_039e39f0;
          uVar9 = 0xf878f;
          goto LAB_039e39e4;
        }
        if (uVar20 == 0xfaf07) goto LAB_039e4b70;
        if (uVar20 == 0x104376) {
LAB_039e4798:
          uVar8 = FUN_026b353c(in_stack_00000020 + 0x280,*(undefined8 *)PTR_DAT_04236368);
          *(undefined4 *)(in_stack_00000020 + 0x278) = uVar8;
          return 1;
        }
        uVar9 = 0x105b0c;
LAB_039e21c4:
        if (uVar20 == uVar9) {
          uVar8 = FUN_026b22d8(in_stack_00000020 + 0x4f0,*(undefined8 *)PTR_DAT_04236360);
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
          return 1;
        }
        return 0;
      }
      if (0x4e24e < (int)uVar20) {
        if (uVar20 != 0x4ff7e) {
          if (uVar20 == 0xee556) goto LAB_039e4798;
          uVar9 = 0xefcec;
          goto LAB_039e21c4;
        }
LAB_039e27d8:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01dc4f30();
          lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            *(float *)(in_stack_00000020 + 0x360) = fVar23 * fVar32;
            return 1;
          }
          if (in_stack_00000028._4_4_ == 1) {
            return 0;
          }
          if (in_stack_00000028._4_4_ != 2) {
            return 1;
          }
          *(float *)(in_stack_00000020 + 0x360) =
               (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
          return 1;
        }
        goto LAB_039e6860;
      }
      if (uVar20 == 0x4d806) {
        return 0;
      }
      if (uVar20 != 0x4e24e) {
        return 0;
      }
LAB_039e3658:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x88);
        if (lVar19 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar19 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                   *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                   &stack0x00000070);
        if (fVar23 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ == 1) {
          fVar32 = DAT_00bafb80;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar32 = 1.0;
          }
          fVar23 = *(float *)(in_stack_00000020 + 0x640) +
                   *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
        }
        else {
          if (in_stack_00000028._4_4_ != 0) {
            return 0;
          }
          fVar32 = DAT_00bafb80;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar32 = 1.0;
          }
          fVar23 = *(float *)(in_stack_00000020 + 0x640) + fVar23 * fVar32;
        }
LAB_039e5b08:
        *(float *)(in_stack_00000020 + 0x640) = fVar23;
        return 1;
      }
      goto LAB_039e6860;
    }
    if ((int)uVar20 < 0x3a15f) {
      if (0x37302 < (int)uVar20) {
        if (uVar20 == 0x379e6) {
          return 0;
        }
        if (uVar20 != 0x3842e) {
          if (uVar20 != 0x3a15e) {
            return 0;
          }
          goto LAB_039e27d8;
        }
        goto LAB_039e3658;
      }
      if (uVar20 != 0x2ef43) {
        uVar9 = 0x37302;
LAB_039e3b78:
        if (uVar20 != uVar9) {
          return 0;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01dc4f30();
          lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (DAT_044a2dbb == '\0') {
            FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
            DAT_044a2dbb = '\x01';
          }
          puVar15 = *(undefined4 **)
                     (*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
          uVar8 = *puVar15;
          uVar29 = puVar15[1];
          uVar28 = puVar15[2];
          if (DAT_044a2db9 == '\0') {
            FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
            DAT_044a2db9 = '\x01';
          }
          puVar17 = *(uint **)(*(long *)
                                Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField
                              + 0xb8);
          uVar12 = (ulong)*puVar17;
          uVar26 = (ulong)puVar17[1];
          uVar27 = (ulong)puVar17[2];
          in_d3 = (ulong)puVar17[3];
          uStack0000000000000004 = 0x3f800000;
LAB_039e3c60:
          FUN_03d65f5c(&stack0x00000030,uVar8,uVar29,uVar28,uVar12,uVar26,uVar27,in_d3,0);
          *(undefined8 *)(in_stack_00000020 + 0x45c) = in_stack_00000058;
          *(undefined8 *)(in_stack_00000020 + 0x454) = in_stack_00000050;
          *(undefined8 *)(in_stack_00000020 + 0x46c) = in_stack_00000068;
          *(undefined8 *)(in_stack_00000020 + 0x464) = in_stack_00000060;
          *(undefined8 *)(in_stack_00000020 + 0x43c) = in_stack_00000038;
          *(undefined8 *)(in_stack_00000020 + 0x434) = in_stack_00000030;
          *(undefined8 *)(in_stack_00000020 + 0x44c) = in_stack_00000048;
          *(undefined8 *)(in_stack_00000020 + 0x444) = in_stack_00000040;
          *(undefined1 *)(in_stack_00000020 + 0x474) = 1;
          return 1;
        }
        goto LAB_039e6860;
      }
    }
    else {
      if ((int)uVar20 < 0x4371f) {
        if (uVar20 == 0x435cd) {
LAB_039e4408:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            iVar10 = *(int *)(lVar19 + 0x24);
            if (iVar10 < -0x1b4fbb34) {
              if (iVar10 == -0x1f38ae01) {
                uVar29 = 8;
                uVar8 = 8;
              }
              else {
                if (iVar10 != -0x1b4fbb35) {
                  return 0;
                }
                uVar29 = 2;
                uVar8 = 2;
              }
            }
            else if (iVar10 == 0x825ec40) {
              uVar29 = 4;
              uVar8 = 4;
            }
            else if (iVar10 == 0x74b6c44) {
              uVar29 = 0x10;
              uVar8 = 0x10;
            }
            else {
              if (iVar10 != 0x3998db) {
                return 0;
              }
              uVar29 = 1;
              uVar8 = 1;
            }
            *(undefined4 *)(in_stack_00000020 + 0x278) = uVar29;
            in_stack_00000020 = in_stack_00000020 + 0x280;
            puVar18 = (undefined8 *)PTR_DAT_042362f0;
            goto LAB_039e5c70;
          }
          goto LAB_039e6860;
        }
        uVar9 = 0x4371e;
        goto LAB_039e3250;
      }
      if (uVar20 == 0x44760) {
        return 0;
      }
      if (uVar20 != 0x44d63) {
        uVar9 = 0x4d122;
        goto LAB_039e3b78;
      }
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar11 = *(long *)PTR_DAT_04235450;
      lVar14 = *(long *)(lVar11 + 0xb8);
    }
    lVar19 = *(long *)(lVar14 + 0x80);
    if (lVar19 == 0) goto LAB_039e68c4;
    if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_039e6860;
    sVar4 = *(short *)(lVar19 + 0x2c);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar11 = *(long *)PTR_DAT_04235450;
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x80);
    }
    if (uVar9 == 10 && sVar4 == 0x23) {
      uVar13 = 10;
LAB_039e5ccc:
      uVar8 = FUN_039ecc90(lVar11,lVar19,uVar13);
    }
    else {
      if (lVar19 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_039e6860;
      sVar4 = *(short *)(lVar19 + 0x2c);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *(long *)PTR_DAT_04235450;
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x80);
      }
      if (uVar9 == 0xb && sVar4 == 0x23) {
        uVar13 = 0xb;
        goto LAB_039e5ccc;
      }
      if (lVar19 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_039e6860;
      sVar4 = *(short *)(lVar19 + 0x2c);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *(long *)PTR_DAT_04235450;
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x80);
      }
      if (uVar9 == 0xd && sVar4 == 0x23) {
        uVar13 = 0xd;
        goto LAB_039e5ccc;
      }
      if (lVar19 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_039e6860;
      sVar4 = *(short *)(lVar19 + 0x2c);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
      }
      if (uVar9 == 0xf && sVar4 == 0x23) {
        lVar19 = *(long *)(lVar14 + 0x80);
        uVar13 = 0xf;
        goto LAB_039e5ccc;
      }
      lVar11 = *(long *)(lVar14 + 0x88);
      if (lVar11 == 0) goto LAB_039e68c4;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
      iVar10 = *(int *)(lVar11 + 0x24);
      if (iVar10 < 0x3829ca) {
        if (iVar10 < -0x232c3b1) {
          if (iVar10 == -0x3b2cd120) {
            *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xffe6d8ad;
            uVar8 = 0xffe6d8ad;
          }
          else {
            if (iVar10 != -0x232c3b2) {
              return 0;
            }
            *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xfff020a0;
            uVar8 = 0xfff020a0;
          }
        }
        else {
          if (iVar10 == 0x1e9d3) {
            uVar8 = 0x3f800000;
            goto LAB_039e6a48;
          }
          if (iVar10 == 0x36863e) {
            uVar8 = 0;
            uVar29 = 0;
            goto LAB_039e6a5c;
          }
          if (iVar10 != 0x3829c9) {
            return 0;
          }
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff808080;
          uVar8 = 0xff808080;
        }
LAB_039e6a24:
        in_stack_00000020 = in_stack_00000020 + 0x4f0;
        uVar13 = *(undefined8 *)PTR_DAT_04236310;
        goto LAB_039e19e4;
      }
      if (iVar10 < 0x7071a48) {
        if (iVar10 == 0x19536f0) {
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff0080ff;
          uVar8 = 0xff0080ff;
          goto LAB_039e6a24;
        }
        if (iVar10 != 0x7071a47) {
          return 0;
        }
        uVar8 = 0;
LAB_039e6a48:
        uVar29 = 0;
LAB_039e6a4c:
        uVar28 = 0;
      }
      else {
        if (iVar10 == 0x73d641b) {
          uVar8 = 0;
          uVar29 = 0x3f800000;
          goto LAB_039e6a4c;
        }
        if (iVar10 == 0x85daee7) {
          uVar8 = 0x3f800000;
          uVar29 = 0x3f800000;
LAB_039e6a5c:
          uVar28 = 0x3f800000;
        }
        else {
          if (iVar10 != 0x21063284) {
            return 0;
          }
          uVar8 = 0x3f800000;
          uVar29 = DAT_00bafaa0;
          uVar28 = DAT_00bafb18;
        }
      }
      uVar8 = FUN_0357314c(uVar8,uVar29,uVar28,0x3f800000,0);
    }
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar13 = *(undefined8 *)PTR_DAT_04236310;
    goto LAB_039e19dc;
  }
  if ((int)uVar20 < 0x18b5de) {
    if ((int)uVar20 < 0x14b2e4) {
      if ((int)uVar20 < 0x10e5b0) {
        if (uVar20 == 0x10decb) goto LAB_039e39f0;
        uVar9 = 0x10e5af;
LAB_039e39e4:
        if (uVar20 == uVar9) {
          return 1;
        }
        return 0;
      }
      if (uVar20 == 0x110d27) {
LAB_039e4b70:
        *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
        return 1;
      }
      if (uVar20 != 0x13a0c6) {
        if (uVar20 != 0x14b2e3) {
          return 0;
        }
        goto LAB_039e24dc;
      }
      goto LAB_039e33b4;
    }
    if ((int)uVar20 < 0x169e9f) {
      if (uVar20 == 0x15fef4) {
LAB_039e41ac:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01dc4f30();
          lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = fVar23 * fVar32;
          }
          else {
            if (in_stack_00000028._4_4_ != 1) {
              if (in_stack_00000028._4_4_ == 2) {
                fVar23 = (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
                *(float *)(in_stack_00000020 + 0x40c) = fVar23;
              }
              else {
                fVar23 = *(float *)(in_stack_00000020 + 0x40c);
              }
              goto LAB_039e5968;
            }
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
          }
          *(float *)(in_stack_00000020 + 0x40c) = fVar23;
LAB_039e5968:
          FUN_026b48b8(fVar23,in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_04236308);
          *(undefined4 *)(in_stack_00000020 + 0x640) = *(undefined4 *)(in_stack_00000020 + 0x40c);
          return 1;
        }
        goto LAB_039e6860;
      }
      uVar9 = 0x169e9e;
      goto LAB_039e2cfc;
    }
    if (uVar20 == 0x174369) goto LAB_039e3f44;
    if (uVar20 == 0x186bfb) goto LAB_039e29b0;
    if (uVar20 != 0x18b5dd) {
      return 0;
    }
  }
  else {
    if ((int)uVar20 < 0x20319f) {
      if (0x1d33c6 < (int)uVar20) {
        if (uVar20 == 0x1e45e3) {
LAB_039e24dc:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = fVar23 * fVar32;
LAB_039e5ab8:
              *(float *)(in_stack_00000020 + 0x2ac) = fVar23;
              return 1;
            }
            if (in_stack_00000028._4_4_ == 1) {
              fVar32 = DAT_00bafb80;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
              goto LAB_039e5ab8;
            }
            goto LAB_039e3fa8;
          }
          goto LAB_039e6860;
        }
        if (uVar20 == 0x1f91f4) goto LAB_039e41ac;
        uVar9 = 0x20319e;
LAB_039e2cfc:
        if (uVar20 != uVar9) {
          return 0;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
          lVar14 = *(long *)(lVar11 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        fVar23 = DAT_00bafb80;
        if (*(int *)(lVar19 + 0x18) != 0) {
          if (*(int *)(lVar19 + 0x28) != 1) {
            if (*(int *)(lVar19 + 0x28) != 0) {
              return 0;
            }
            uVar9 = 1;
            fVar32 = 0.0;
            do {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_039e68c4;
              if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
                return 1;
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
                lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                if (lVar14 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
              lVar19 = (long)(int)uVar9;
              if (*(int *)(lVar14 + lVar19 * 0x18 + 0x20) == 0) {
                return 1;
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar11 = *(long *)PTR_DAT_04235450;
              }
              lVar22 = *(long *)(lVar11 + 0xb8);
              lVar14 = *(long *)(lVar22 + 0x88);
              if (lVar14 == 0) goto LAB_039e68c4;
              if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
              iVar10 = *(int *)(lVar14 + lVar19 * 0x18 + 0x20);
              if (iVar10 == 0x4d0e4) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  lVar11 = thunk_FUN_01dc4f30();
                  lVar22 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar14 = *(long *)(lVar22 + 0x88);
                  if (lVar14 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar14 = lVar14 + lVar19 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar24 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                          (lVar11,*(undefined8 *)(lVar22 + 0x80),
                                           *(undefined4 *)(lVar14 + 0x2c),
                                           *(undefined4 *)(lVar14 + 0x30),&stack0x00000070);
                if (fVar24 == -32768.0) {
                  return 0;
                }
                lVar11 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *(long *)PTR_DAT_04235450;
                }
                lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                if (lVar14 == 0) goto LAB_039e68c4;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
                iVar10 = *(int *)(lVar14 + lVar19 * 0x18 + 0x34);
                if (iVar10 == 0) {
                  fVar30 = fVar23;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar30 = 1.0;
                  }
                  fVar24 = fVar24 * fVar30;
                }
                else if (iVar10 == 1) {
                  fVar30 = fVar23;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar30 = 1.0;
                  }
                  fVar24 = fVar24 * fVar30 * *(float *)(in_stack_00000020 + 0x1e8);
                }
                else if (iVar10 == 2) {
                  fVar30 = fVar32;
                  if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                    fVar30 = *(float *)(in_stack_00000020 + 0x360);
                  }
                  fVar24 = (fVar24 * (*(float *)(in_stack_00000020 + 0x358) - fVar30)) / 100.0;
                }
                else {
                  fVar24 = *(float *)(in_stack_00000020 + 0x354);
                }
                if (fVar24 < 0.0) {
                  fVar24 = fVar32;
                }
                *(float *)(in_stack_00000020 + 0x354) = fVar24;
              }
              else if (iVar10 == 0xa747) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  lVar11 = thunk_FUN_01dc4f30();
                  lVar22 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar14 = *(long *)(lVar22 + 0x88);
                  if (lVar14 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar14 = lVar14 + lVar19 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar24 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                          (lVar11,*(undefined8 *)(lVar22 + 0x80),
                                           *(undefined4 *)(lVar14 + 0x2c),
                                           *(undefined4 *)(lVar14 + 0x30),&stack0x00000070);
                if (fVar24 == -32768.0) {
                  return 0;
                }
                lVar11 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar11 = *(long *)PTR_DAT_04235450;
                }
                lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                if (lVar14 == 0) goto LAB_039e68c4;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
                iVar10 = *(int *)(lVar14 + lVar19 * 0x18 + 0x34);
                if (iVar10 == 0) {
                  fVar30 = fVar23;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar30 = 1.0;
                  }
                  fVar24 = fVar24 * fVar30;
                }
                else if (iVar10 == 1) {
                  fVar30 = fVar23;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar30 = 1.0;
                  }
                  fVar24 = fVar24 * fVar30 * *(float *)(in_stack_00000020 + 0x1e8);
                }
                else if (iVar10 == 2) {
                  fVar30 = fVar32;
                  if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                    fVar30 = *(float *)(in_stack_00000020 + 0x360);
                  }
                  fVar24 = (fVar24 * (*(float *)(in_stack_00000020 + 0x358) - fVar30)) / 100.0;
                }
                else {
                  fVar24 = *(float *)(in_stack_00000020 + 0x350);
                }
                if (fVar24 < 0.0) {
                  fVar24 = fVar32;
                }
                *(float *)(in_stack_00000020 + 0x350) = fVar24;
              }
              uVar9 = uVar9 + 1;
            } while( true );
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = fVar23 * fVar32;
          }
          else if (in_stack_00000028._4_4_ == 1) {
            fVar32 = DAT_00bafb80;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
          }
          else if (in_stack_00000028._4_4_ == 2) {
            fVar32 = 0.0;
            if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
              fVar32 = *(float *)(in_stack_00000020 + 0x360);
            }
            fVar23 = (fVar23 * (*(float *)(in_stack_00000020 + 0x358) - fVar32)) / 100.0;
          }
          else {
            fVar23 = *(float *)(in_stack_00000020 + 0x350);
          }
          if (fVar23 < 0.0) {
            fVar23 = 0.0;
          }
          *(float *)(in_stack_00000020 + 0x350) = fVar23;
          goto LAB_039e6074;
        }
        goto LAB_039e6860;
      }
      if (uVar20 == 0x1ab5ba) {
        return 0;
      }
      if (uVar20 != 0x1d33c6) {
        return 0;
      }
LAB_039e33b4:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
        if (lVar19 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar19 + 0x18) != 0) {
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        FUN_026b2f68(in_stack_00000020 + 0x5f8,*(undefined4 *)(lVar19 + 0x24),
                     *(undefined8 *)PTR_DAT_042362f8);
        uVar13 = FUN_03390e50(&stack0x000002d4,0);
        uVar21 = FUN_03390e50(in_stack_00000020 + 0x494,0);
        uVar13 = FUN_03279ae0(*(undefined8 *)PTR_DAT_04236390,uVar13,*(undefined8 *)PTR_DAT_04236398
                              ,uVar21,0);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)
                              Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                            );
        }
        FUN_03d40fd0(uVar13,0);
        return 1;
      }
      goto LAB_039e6860;
    }
    if ((int)uVar20 < 0x21fefc) {
      if (uVar20 != 0x20d669) {
        if (uVar20 != 0x21fefb) {
          return 0;
        }
LAB_039e29b0:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01dc4f30();
          lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (DAT_044a2dbb == '\0') {
            FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
            DAT_044a2dbb = '\x01';
          }
          puVar5 = Field_System_AppDomainSetup_domain_initializer_args;
          uVar26 = 0;
          uVar27 = (ulong)(uint)(fVar23 * DAT_00bafbc4);
          puVar15 = *(undefined4 **)
                     (*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
          uVar8 = *puVar15;
          uVar29 = puVar15[1];
          uVar28 = puVar15[2];
          uVar12 = FUN_03d69658(0,0,uVar27,0);
          if (DAT_044a2dba == '\0') {
            FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
            DAT_044a2dba = '\x01';
          }
          uStack0000000000000004 =
               (undefined4)((ulong)*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc) >> 0x20)
          ;
          goto LAB_039e3c60;
        }
        goto LAB_039e6860;
      }
LAB_039e3f44:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x88);
        if (lVar19 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar19 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (lVar11,*(undefined8 *)(lVar14 + 0x80),
                                   *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                   &stack0x00000070);
        if (fVar23 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ == 0) {
          fVar32 = DAT_00bafb80;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar32 = 1.0;
          }
          fVar23 = fVar23 * fVar32;
        }
        else {
          if (in_stack_00000028._4_4_ != 1) {
LAB_039e3fa8:
            if (in_stack_00000028._4_4_ == 2) {
              return 0;
            }
            return 1;
          }
          fVar32 = DAT_00bafb80;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar32 = 1.0;
          }
          fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
        }
        *(float *)(in_stack_00000020 + 0x2b0) = fVar23;
        return 1;
      }
      goto LAB_039e6860;
    }
    if (uVar20 != 0x2248dd) {
      if (uVar20 == 0x680065) {
LAB_039e261c:
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          FUN_026b31b0(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_04236328);
          uVar13 = FUN_03390e50(&stack0x0000026c,0);
          uVar21 = FUN_03390e50(&stack0x0000026c,0);
          uVar13 = FUN_03279ae0(*(undefined8 *)PTR_DAT_04236390,uVar13,
                                *(undefined8 *)PTR_DAT_042363a8,uVar21,0);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)
                                Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                              );
          }
          FUN_03d40fd0(uVar13,0);
        }
        FUN_026b2fb0(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_04236358);
        return 1;
      }
      if (uVar20 != 0x691282) {
        return 0;
      }
      goto LAB_039e423c;
    }
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)PTR_DAT_04235450;
    lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
    if (lVar19 == 0) goto LAB_039e68c4;
  }
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
  uVar8 = *(undefined4 *)(lVar19 + 0x24);
  *(undefined4 *)(in_stack_00000020 + 0x6a4) = 0xffffffff;
  if (*(int *)(lVar19 + 0x28) == 0) {
LAB_039e1e64:
    puVar5 = 
    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
    ;
    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar12 = FUN_03d749a8(uVar13,0,0);
    if ((uVar12 & 1) == 0) {
      uVar13 = *(undefined8 *)(in_stack_00000020 + 0x690);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_03d749a8(uVar13,0,0);
      if ((uVar12 & 1) != 0) {
LAB_039e625c:
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x690);
        goto LAB_039e6264;
      }
      puVar18 = (undefined8 *)(in_stack_00000020 + 0x690);
      uVar13 = *puVar18;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_03d755c0(uVar13,0,0);
      if ((uVar12 & 1) != 0) {
        uVar13 = FUN_039f558c(0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar5);
        }
        uVar12 = FUN_03d749a8(uVar13,0,0);
        if ((uVar12 & 1) == 0) {
          uVar13 = FUN_02146300(*(undefined8 *)PTR_DAT_042363a0,*(undefined8 *)PTR_DAT_042362e0);
        }
        else {
          uVar13 = FUN_039f558c(0);
        }
        *puVar18 = uVar13;
        thunk_FUN_01e10808(puVar18,uVar13);
        goto LAB_039e625c;
      }
    }
    else {
      uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_039e6264:
      *(undefined8 *)(in_stack_00000020 + 0x698) = uVar13;
      thunk_FUN_01e10808(in_stack_00000020 + 0x698);
    }
    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x698);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar12 = FUN_03d755c0(uVar13,0,0);
    if ((uVar12 & 1) != 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
      if (lVar19 == 0) goto LAB_039e68c4;
    }
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
    if (*(int *)(lVar19 + 0x28) == 1) goto LAB_039e1e64;
    uVar12 = FUN_039aa1fc(uVar8,&stack0x000002d8,0);
    puVar5 = 
    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
    ;
    if ((uVar12 & 1) == 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_03d755c0(in_stack_000002d8,0,0);
      if ((uVar12 & 1) != 0) {
        lVar11 = *(long *)PTR_DAT_04235450;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
        }
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x78);
        in_stack_000002d8 = 0;
        if (lVar19 != 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          }
          lVar11 = *(long *)(lVar14 + 0x88);
          if (lVar11 == 0) goto LAB_039e68c4;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
          uVar13 = FUN_0326cf90(0,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar11 + 0x2c),
                                *(undefined4 *)(lVar11 + 0x30),0);
          in_stack_000002d8 =
               (**(code **)(lVar19 + 0x18))
                         (*(undefined8 *)(lVar19 + 0x40),uVar8,uVar13,*(undefined8 *)(lVar19 + 0x28)
                         );
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar12 = FUN_03d755c0(in_stack_000002d8,0,0);
        if ((uVar12 & 1) != 0) {
          uVar13 = FUN_039f55a8(0);
          lVar11 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(lVar11);
            lVar11 = *(long *)PTR_DAT_04235450;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_039e68c4;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_039e6860;
          uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0);
          uVar13 = FUN_0326dc80(uVar13,uVar21,0);
          in_stack_000002d8 = FUN_02146300(uVar13,*(undefined8 *)PTR_DAT_042362e0);
        }
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_03d755c0(in_stack_000002d8,0,0);
      if ((uVar12 & 1) != 0) {
        return 0;
      }
      FUN_039a9e2c(uVar8,in_stack_000002d8,0);
    }
    *(undefined8 *)(in_stack_00000020 + 0x698) = in_stack_000002d8;
    thunk_FUN_01e10808(in_stack_00000020 + 0x698);
  }
  lVar11 = *(long *)PTR_DAT_04235450;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)PTR_DAT_04235450;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar19 = *(long *)(lVar14 + 0x88);
  if (lVar19 == 0) {
LAB_039e68c4:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(int *)(lVar19 + 0x18) == 0) {
LAB_039e6860:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (*(int *)(lVar19 + 0x28) == 1) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01dc4f30();
      lVar14 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x88);
      if (lVar19 == 0) goto LAB_039e68c4;
    }
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                              (lVar11,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar19 + 0x2c),
                               *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
    iVar10 = -0x80000000;
    if (fVar23 != INFINITY) {
      iVar10 = (int)fVar23;
    }
    if (iVar10 == -0x8000) {
      return 0;
    }
    if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
       (lVar11 = FUN_039f8310(*(long *)(in_stack_00000020 + 0x698),0), lVar11 == 0))
    goto LAB_039e68c4;
    if (*(int *)(lVar11 + 0x18) + -1 < iVar10) {
      return 0;
    }
    *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
    lVar11 = *(long *)PTR_DAT_04235450;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)PTR_DAT_04235450;
  }
  uVar9 = 0;
  uVar8 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x68);
  plVar16 = (long *)(in_stack_00000020 + 0x698);
  *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
  *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
LAB_039e63cc:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)PTR_DAT_04235450;
  }
  lVar19 = *(long *)(lVar11 + 0xb8);
  lVar14 = *(long *)(lVar19 + 0x88);
  if (lVar14 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
LAB_039e6864:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar14 = *plVar16;
    if (lVar14 != 0) {
      uVar13 = *(undefined8 *)(lVar14 + 0x20);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *(long *)PTR_DAT_04235450;
      }
      uVar8 = FUN_039aa7dc(uVar13,lVar14,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_039e68c4;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)PTR_DAT_04235450;
    lVar19 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar19 + 0x88);
    if (lVar14 == 0) goto LAB_039e68c4;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
  lVar22 = (long)(int)uVar9;
  if (*(int *)(lVar14 + lVar22 * 0x18 + 0x20) == 0) goto LAB_039e6864;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar11 = *(long *)PTR_DAT_04235450;
    lVar19 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar19 + 0x88);
    if (lVar14 == 0) goto LAB_039e68c4;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
  iVar10 = *(int *)(lVar14 + lVar22 * 0x18 + 0x20);
  if (iVar10 < 0xa954) {
    if (iVar10 < 0x7754) {
      if (iVar10 == 0x6851) {
LAB_039e65f4:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar14 = *(long *)(lVar19 + 0x88);
          if (lVar14 == 0) goto LAB_039e68c4;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
        lVar14 = lVar14 + lVar22 * 0x18;
        iVar10 = FUN_039ed2f0(in_stack_00000020,*(undefined8 *)(lVar19 + 0x80),
                              *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                              lVar19 + 0x90);
        if (iVar10 != 3) {
          return 0;
        }
        lVar11 = *(long *)PTR_DAT_04235450;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *(long *)PTR_DAT_04235450;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
        if (lVar11 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_039e6860;
        iVar10 = -0x80000000;
        if (*(float *)(lVar11 + 0x20) != INFINITY) {
          iVar10 = (int)*(float *)(lVar11 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          lVar11 = FUN_039da3cc(in_stack_00000020);
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x494);
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x698);
          uVar29 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
          lVar14 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(lVar14);
            lVar14 = *(long *)PTR_DAT_04235450;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
          if (lVar14 != 0) {
            if ((1 < *(uint *)(lVar14 + 0x18)) && (*(uint *)(lVar14 + 0x18) != 2)) {
              if (lVar11 != 0) {
                iVar10 = -0x80000000;
                if (*(float *)(lVar14 + 0x24) != INFINITY) {
                  iVar10 = (int)*(float *)(lVar14 + 0x24);
                }
                iVar1 = -0x80000000;
                if (*(float *)(lVar14 + 0x28) != INFINITY) {
                  iVar1 = (int)*(float *)(lVar14 + 0x28);
                }
                Unity_VisualScripting_FullSerializer_fsWeakReferenceConverter___ctor
                          (lVar11,uVar8,uVar13,uVar29,iVar10,iVar1,0);
                goto LAB_039e684c;
              }
              goto LAB_039e68c4;
            }
            goto LAB_039e6860;
          }
          goto LAB_039e68c4;
        }
        goto LAB_039e684c;
      }
      if (iVar10 != 0x7753) {
        return 0;
      }
    }
    else {
      if (iVar10 == 0x80fb) goto LAB_039e6598;
      if (iVar10 == 0x9a51) goto LAB_039e65f4;
      if (iVar10 != 0xa953) {
        return 0;
      }
    }
    lVar19 = *plVar16;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_039e68c4;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
    lVar11 = FUN_039f965c(lVar19,*(undefined4 *)(lVar14 + lVar22 * 0x18 + 0x24),1,&stack0x00000268,0
                         );
    *plVar16 = lVar11;
    thunk_FUN_01e10808(plVar16,lVar11);
    iVar10 = 0;
LAB_039e6844:
    *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
  }
  else {
    if (0x2ef43 < iVar10) {
      if (iVar10 < 0x4828a) {
        if (iVar10 != 0x3246a) {
          if (iVar10 != 0x44d63) {
            return 0;
          }
          goto LAB_039e676c;
        }
      }
      else if (iVar10 != 0x4828a) {
        if ((iVar10 != 0x18b5dd) && (iVar10 != 0x2248dd)) {
          return 0;
        }
        goto LAB_039e684c;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar14 = *(long *)(lVar19 + 0x88);
        if (lVar14 == 0) goto LAB_039e68c4;
      }
      if (1 < *(uint *)(lVar14 + 0x18)) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (lVar11,*(undefined8 *)(lVar19 + 0x80),
                                   *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                                   &stack0x00000070);
        iVar10 = -0x80000000;
        if (fVar23 != INFINITY) {
          iVar10 = (int)fVar23;
        }
        if (iVar10 == -0x8000) {
          return 0;
        }
        if ((*plVar16 != 0) && (lVar11 = FUN_039f8310(*plVar16,0), lVar11 != 0)) {
          if (*(int *)(lVar11 + 0x18) + -1 < iVar10) {
            return 0;
          }
          goto LAB_039e6844;
        }
        goto LAB_039e68c4;
      }
      goto LAB_039e6860;
    }
    if (iVar10 == 0xb2fb) {
LAB_039e6598:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar14 = *(long *)(lVar19 + 0x88);
        if (lVar14 == 0) goto LAB_039e68c4;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
      lVar14 = lVar14 + lVar22 * 0x18;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                (lVar11,*(undefined8 *)(lVar19 + 0x80),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar23 != 0.0;
    }
    else {
      if (iVar10 != 0x2ef43) {
        return 0;
      }
LAB_039e676c:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar14 = *(long *)(lVar19 + 0x88);
        if (lVar14 == 0) goto LAB_039e68c4;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039e6860;
      lVar14 = lVar14 + lVar22 * 0x18;
      uVar8 = FUN_039ed0a4(lVar11,*(undefined8 *)(lVar19 + 0x80),*(undefined4 *)(lVar14 + 0x2c),
                           *(undefined4 *)(lVar14 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
    }
  }
LAB_039e684c:
  uVar9 = uVar9 + 1;
  lVar11 = *(long *)PTR_DAT_04235450;
  goto LAB_039e63cc;
}


