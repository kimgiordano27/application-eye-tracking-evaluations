/*
FUNCTION_NAME: Unity.VisualScripting.Serialization$$DeserializeInto
ENTRY_POINT: 039e1150
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039e6594) */

uint Unity_VisualScripting_Serialization__DeserializeInto(long param_1)

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
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  char unaff_w19;
  int unaff_w20;
  uint uVar20;
  uint *unaff_x21;
  undefined8 uVar21;
  long unaff_x22;
  undefined4 unaff_w23;
  long lVar22;
  ulong unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
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
  int *in_stack_00000018;
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
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = *(long *)PTR_DAT_04235450;
    }
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar13 + 0x80);
    if (lVar18 == 0) goto LAB_039e68c4;
    if ((long)*(int *)(lVar18 + 0x18) <= (long)unaff_x24) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_039e6860;
    uVar9 = *unaff_x21;
    if (uVar9 == 0x3c) {
      return 0;
    }
    uVar20 = (uint)unaff_x24;
    if (uVar9 == 0x3e) break;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = *(long *)PTR_DAT_04235450;
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x80);
    if (lVar13 == 0) goto LAB_039e68c4;
    if (*(uint *)(lVar13 + 0x18) <= unaff_x24) goto LAB_039e6860;
    *(short *)(lVar13 + unaff_x24 * 2 + 0x20) = (short)uVar9;
    if (unaff_w19 != '\x01') goto switchD_039e1208_caseD_3;
    unaff_w19 = '\x01';
    switch(unaff_w23) {
    case 0:
      if (((uVar9 < 0x2f) && ((1L << ((ulong)uVar9 & 0x3f) & 0x680000000000U) != 0)) ||
         (uVar9 - 0x30 < 10)) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          param_1 = *(long *)PTR_DAT_04235450;
        }
        lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar13 == 0) goto LAB_039e68c4;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
        lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
        iVar10 = *(int *)(lVar13 + 0x30);
        unaff_w23 = 1;
LAB_039e1270:
        *(undefined4 *)(lVar13 + 0x28) = unaff_w23;
        *(uint *)(lVar13 + 0x2c) = uVar20;
        *(int *)(lVar13 + 0x30) = iVar10 + 1;
      }
      else {
        if (uVar9 != 0x22) {
          if (uVar9 == 0x23) {
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              param_1 = *(long *)PTR_DAT_04235450;
            }
            lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
            if (lVar13 != 0) {
              if (unaff_w26 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
                iVar10 = *(int *)(lVar13 + 0x30);
                unaff_w23 = 4;
                goto LAB_039e1270;
              }
              goto LAB_039e6860;
            }
            goto LAB_039e68c4;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            param_1 = *(long *)PTR_DAT_04235450;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
          if (lVar13 != 0) {
            if (unaff_w26 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
              unaff_w23 = 2;
              in_stack_00000028._4_4_ = 0;
              *(uint *)(lVar13 + 0x2c) = uVar20;
              *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
              *(uint *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) * 0x21 ^ uVar9;
              *(undefined4 *)(lVar13 + 0x28) = 2;
              unaff_w19 = '\x01';
              break;
            }
            goto LAB_039e6860;
          }
          goto LAB_039e68c4;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          param_1 = *(long *)PTR_DAT_04235450;
        }
        lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar13 == 0) goto LAB_039e68c4;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
        lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
        unaff_w23 = 2;
        *(undefined4 *)(lVar13 + 0x28) = 2;
        *(uint *)(lVar13 + 0x2c) = uVar20 + 1;
      }
      in_stack_00000028._4_4_ = 0;
      unaff_w19 = '\x01';
      goto LAB_039e1688;
    case 1:
      if ((int)uVar9 < 0x65) {
        if (uVar9 == 0x20) {
LAB_039e1460:
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            param_1 = *(long *)PTR_DAT_04235450;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
          if (lVar13 == 0) goto LAB_039e68c4;
          if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
          in_stack_00000028._4_4_ = 0;
        }
        else {
          if (uVar9 != 0x25) {
LAB_039e1558:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              param_1 = *(long *)PTR_DAT_04235450;
            }
            lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
            if (lVar13 != 0) {
              if (unaff_w26 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
                iVar10 = *(int *)(lVar13 + 0x30);
                unaff_w23 = 1;
                goto LAB_039e159c;
              }
              goto LAB_039e6860;
            }
            goto LAB_039e68c4;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            param_1 = *(long *)PTR_DAT_04235450;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
          if (lVar13 == 0) goto LAB_039e68c4;
          if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
          in_stack_00000028._4_4_ = 2;
        }
      }
      else {
        if (uVar9 == 0x70) goto LAB_039e1460;
        if (uVar9 != 0x65) goto LAB_039e1558;
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          param_1 = *(long *)PTR_DAT_04235450;
        }
        lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar13 == 0) goto LAB_039e68c4;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
        in_stack_00000028._4_4_ = 1;
      }
      *(int *)(lVar13 + (long)(int)unaff_w26 * 0x18 + 0x34) = in_stack_00000028._4_4_;
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar13 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w26 + 1) goto LAB_039e6860;
LAB_039e14d8:
      unaff_w26 = unaff_w26 + 1;
      lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
      unaff_w23 = 0;
      *(undefined8 *)(lVar13 + 0x20) = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      *(undefined8 *)(lVar13 + 0x30) = 0;
      unaff_w19 = '\x02';
      break;
    case 2:
      if (uVar9 == 0x22) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          param_1 = *(long *)PTR_DAT_04235450;
        }
        lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar13 != 0) {
          unaff_w26 = unaff_w26 + 1;
          if (unaff_w26 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
            unaff_w23 = 0;
            in_stack_00000028._4_4_ = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *(undefined8 *)(lVar13 + 0x28) = 0;
            *(undefined8 *)(lVar13 + 0x30) = 0;
            goto LAB_039e1684;
          }
          goto LAB_039e6860;
        }
        goto LAB_039e68c4;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar13 != 0) {
        if (unaff_w26 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
          unaff_w19 = '\x01';
          unaff_w23 = 2;
          *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
          *(uint *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) * 0x21 ^ uVar9;
          break;
        }
        goto LAB_039e6860;
      }
      goto LAB_039e68c4;
    case 4:
      if (uVar9 == 0x20) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          param_1 = *(long *)PTR_DAT_04235450;
        }
        lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar13 != 0) {
          if (unaff_w26 + 1 < *(uint *)(lVar13 + 0x18)) {
            in_stack_00000028._4_4_ = 0;
            goto LAB_039e14d8;
          }
          goto LAB_039e6860;
        }
        goto LAB_039e68c4;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar13 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
      lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
      iVar10 = *(int *)(lVar13 + 0x30);
      unaff_w23 = 4;
LAB_039e159c:
      unaff_w19 = '\x01';
      *(int *)(lVar13 + 0x30) = iVar10 + 1;
    }
switchD_039e1208_caseD_3:
    if (uVar9 == 0x3d) {
      unaff_w19 = '\x01';
    }
    if ((uVar9 == 0x20) && (unaff_w19 == '\0')) {
      if ((unaff_x25 & 1) != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar13 == 0) goto LAB_039e68c4;
      unaff_w26 = unaff_w26 + 1;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
      unaff_w23 = 0;
      lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
      unaff_x25 = 1;
      in_stack_00000028._4_4_ = 0;
      *(undefined8 *)(lVar13 + 0x20) = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      *(undefined8 *)(lVar13 + 0x30) = 0;
LAB_039e1610:
      unaff_w19 = '\0';
    }
    else if (unaff_w19 == '\x02') {
      if (uVar9 == 0x20) goto LAB_039e1610;
LAB_039e1684:
      unaff_w19 = '\x02';
    }
    else if (unaff_w19 == '\0') {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar13 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_039e6860;
      lVar13 = lVar13 + (long)(int)unaff_w26 * 0x18;
      unaff_w19 = '\0';
      *(uint *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) * 7 + uVar9;
    }
LAB_039e1688:
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_x27 + (int)unaff_x24) {
      return 0;
    }
    unaff_x29 = unaff_x27 + unaff_x24;
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_039e6860;
    unaff_x21 = (uint *)(unaff_x22 + (long)(int)(uint)unaff_x29 * (long)unaff_w28 + 0x20);
    if (*unaff_x21 == 0) {
      return 0;
    }
  }
  *in_stack_00000018 = unaff_w20 + uVar20;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)PTR_DAT_04235450;
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar13 + 0x80);
    if (lVar18 == 0) goto LAB_039e68c4;
  }
  puVar5 = PTR_DAT_04235450;
  if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_039e6860;
  *(undefined2 *)(lVar18 + unaff_x24 * 2 + 0x20) = 0;
  if (*(char *)(in_stack_00000020 + 0x430) != '\0') {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = *(long *)puVar5;
      lVar13 = *(long *)(param_1 + 0xb8);
    }
    lVar13 = *(long *)(lVar13 + 0x88);
    if (lVar13 == 0) goto LAB_039e68c4;
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_039e6860;
    if (*(int *)(lVar13 + 0x20) != 0x33542d3) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)puVar5;
        lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar13 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_039e6860;
      if (*(int *)(lVar13 + 0x20) != 0x2f23db3) {
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
  }
  lVar13 = *(long *)(param_1 + 0xb8);
  lVar18 = *(long *)(lVar13 + 0x88);
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  if (*(int *)(lVar18 + 0x20) == 0x33542d3) {
LAB_039e1888:
    *(undefined1 *)(in_stack_00000020 + 0x430) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar13 + 0x88);
    if (lVar18 == 0) goto LAB_039e68c4;
  }
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  if (*(int *)(lVar18 + 0x20) == 0x2f23db3) goto LAB_039e1888;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
    lVar13 = *(long *)(param_1 + 0xb8);
  }
  lVar18 = *(long *)(lVar13 + 0x80);
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar18 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar13 + 0x80);
  }
  if (uVar20 == 4 && sVar4 == 0x23) {
    uVar12 = 4;
LAB_039e19c4:
    uVar8 = FUN_039ecc90(param_1,lVar18,uVar12);
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar12 = *(undefined8 *)PTR_DAT_04236310;
LAB_039e19dc:
    in_stack_00000020 = in_stack_00000020 + 0x4f0;
LAB_039e19e4:
    FUN_026b2290(in_stack_00000020,uVar8,uVar12);
    return 1;
  }
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar18 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar13 + 0x80);
  }
  if (uVar20 == 5 && sVar4 == 0x23) {
    uVar12 = 5;
    goto LAB_039e19c4;
  }
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar18 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar13 + 0x80);
  }
  if (uVar20 == 7 && sVar4 == 0x23) {
    uVar12 = 7;
    goto LAB_039e19c4;
  }
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  sVar4 = *(short *)(lVar18 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)puVar5;
    lVar13 = *(long *)(param_1 + 0xb8);
  }
  if (uVar20 == 9 && sVar4 == 0x23) {
    lVar18 = *(long *)(lVar13 + 0x80);
    uVar12 = 9;
    goto LAB_039e19c4;
  }
  lVar18 = *(long *)(lVar13 + 0x88);
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  uVar9 = *(uint *)(lVar18 + 0x20);
  if ((int)uVar9 < 0x2d8ff) {
    if ((int)uVar9 < 0xb94) {
      if (0x62 < (int)uVar9) {
        if (0x1b2 < (int)uVar9) {
          if (0x29e < (int)uVar9) {
            bVar6 = uVar9 == 0x394;
            if (0x394 < (int)uVar9) {
              if (uVar9 == 0x39e) {
                return 1;
              }
              if (uVar9 == 0xb8f) {
                return 0;
              }
              if (uVar9 != 0xb93) {
                return 0;
              }
              return 1;
            }
LAB_039e3b58:
            return (uint)bVar6;
          }
          if (0x1be < (int)uVar9) {
            if (0xe < uVar9 - 0x290) {
              return 0;
            }
            return 0x4010U >> (ulong)(uVar9 - 0x290 & 0x1f) & 1;
          }
          if (uVar9 == 0x1bc) {
LAB_039e3d58:
            if (((*(byte *)(in_stack_00000020 + 600) >> 6 & 1) == 0) &&
               (cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x40,0), cVar7 == '\0')) {
              *(uint *)(in_stack_00000020 + 0x25c) =
                   *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffbf;
            }
            uVar8 = FUN_026b22d8(in_stack_00000020 + 0x530,*(undefined8 *)PTR_DAT_04236360);
            *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
            return 1;
          }
          if (uVar9 != 0x1be) {
            return 0;
          }
LAB_039e3494:
          if ((*(byte *)(in_stack_00000020 + 600) >> 2 & 1) == 0) {
            uVar8 = FUN_026b22d8(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_04236360);
            *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
            cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,4,0);
            if (cVar7 == '\0') {
              *(uint *)(in_stack_00000020 + 0x25c) =
                   *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffb;
            }
          }
          uVar8 = FUN_026b22d8(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_04236360);
          *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
          return 1;
        }
        if ((int)uVar9 < 0x193) {
          if ((int)uVar9 < 0x74) {
            if (uVar9 != 0x69) {
              if (uVar9 != 0x73) {
                return 0;
              }
              goto LAB_039e3a0c;
            }
            goto LAB_039e3df8;
          }
          if (uVar9 == 0x75) goto LAB_039e4b80;
          if (uVar9 == 0x18b) goto LAB_039e4c98;
          if (uVar9 != 0x192) {
            return 0;
          }
        }
        else {
          if ((int)uVar9 < 0x19f) {
            if (uVar9 == 0x19c) goto LAB_039e3d58;
            if (uVar9 != 0x19e) {
              return 0;
            }
            goto LAB_039e3494;
          }
          if (uVar9 == 0x1aa) {
            return 1;
          }
          if (uVar9 == 0x1ab) {
LAB_039e4c98:
            if ((*(byte *)(in_stack_00000020 + 600) & 1) != 0) {
              return 1;
            }
            cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,1,0);
            if (cVar7 == '\0') {
              *(uint *)(in_stack_00000020 + 0x25c) =
                   *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffe;
              uVar8 = FUN_026b36f4(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_04236330);
              *(undefined4 *)(in_stack_00000020 + 0x214) = uVar8;
              return 1;
            }
            return 1;
          }
          if (uVar9 != 0x1b2) {
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
      if ((int)uVar9 < -0x32f64d99) {
        if ((int)uVar9 < -0x64bbe162) {
          if ((int)uVar9 < -0x70449a55) {
            if (uVar9 == 0x8f9a8677) {
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
            if (uVar9 != 0x8fbb65aa) {
              return 0;
            }
            goto LAB_039e3cb4;
          }
          if (uVar9 == 0x91e417d1) goto LAB_039e330c;
          if (uVar9 != 0x92d31273) {
            if (uVar9 != 0x9b441e9d) {
              return 0;
            }
            goto LAB_039e28a8;
          }
        }
        else {
          if ((int)uVar9 < -0x6147ec0e) {
            if (uVar9 != 0x9c8f61ca) {
              if (uVar9 != 0x9eb813f1) {
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
            goto LAB_039e4110;
          }
          if (uVar9 != 0x9fa70e93) {
            if (uVar9 != 0xcb42bfbd) {
              if (uVar9 != 0xcd09b266) {
                return 0;
              }
              goto LAB_039e4cfc;
            }
LAB_039e28a8:
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01dc4f30();
              lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
              lVar18 = *(long *)(lVar13 + 0x88);
              if (lVar18 == 0) goto LAB_039e68c4;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                        (param_1,*(undefined8 *)(lVar13 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x2c),
                                         *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
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
              goto LAB_039e6074;
            }
            goto LAB_039e6860;
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
LAB_039e4110:
        *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
        return 1;
      }
      if ((int)uVar9 < -0x13b73941) {
        if (-0x3239ec63 < (int)uVar9) {
          if (uVar9 == 0xe5711531) {
LAB_039e47b8:
            *(undefined4 *)(in_stack_00000020 + 0x2c0) = 0xc6fffe00;
            return 1;
          }
          if (uVar9 == 0xe571a456) {
LAB_039e47cc:
            *(undefined4 *)(in_stack_00000020 + 0x408) = 0;
            return 1;
          }
          uVar20 = 0xec48c6be;
LAB_039e2224:
          if (uVar9 != uVar20) {
            return 0;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01dc4f30();
            lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar18 = *(long *)(lVar13 + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (param_1,*(undefined8 *)(lVar13 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
                                       ,&stack0x00000070);
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
            puVar17 = (undefined8 *)PTR_DAT_04236320;
LAB_039e5c70:
            FUN_026b34f4(in_stack_00000020,uVar8,*puVar17);
            return 1;
          }
          goto LAB_039e6860;
        }
        if (uVar9 != 0xcdc58478) {
          uVar20 = 0xcdc6139d;
          goto LAB_039e3700;
        }
LAB_039e44b0:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (param_1,*(undefined8 *)(lVar13 + 0x80),
                                   *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
      }
      else {
        if (0x49 < (int)uVar9) {
          if (uVar9 == 0x53) {
LAB_039e3a0c:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x40;
            FUN_039fecc8(in_stack_00000020 + 0x260,0x40,0);
            lVar13 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *(long *)PTR_DAT_04235450;
            }
            lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
            if (1 < *(uint *)(lVar18 + 0x18)) {
              if (*(int *)(lVar18 + 0x38) == 0x44d63) {
LAB_039e3ac0:
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_039e68c4;
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  uVar12 = FUN_039ed0a4(lVar13,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x44),
                                        *(undefined4 *)(lVar18 + 0x48));
                  *(int *)(in_stack_00000020 + 0x15c) = (int)uVar12;
                  bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
                  if (((uint)((ulong)uVar12 >> 0x18) & 0xff) <=
                      (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                    bVar3 = (byte)((ulong)uVar12 >> 0x18);
                  }
                  *(byte *)(in_stack_00000020 + 0x15f) = bVar3;
                  uVar8 = *(undefined4 *)(in_stack_00000020 + 0x15c);
                  goto LAB_039e53c0;
                }
              }
              else {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                  lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_039e68c4;
                }
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  if (*(int *)(lVar18 + 0x38) == 0x2ef43) goto LAB_039e3ac0;
                  uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
                  *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
LAB_039e53c0:
                  uVar12 = *(undefined8 *)PTR_DAT_04236310;
                  in_stack_00000020 = in_stack_00000020 + 0x530;
                  goto LAB_039e19e4;
                }
              }
            }
          }
          else {
            if (uVar9 != 0x55) {
              if (uVar9 != 0x62) {
                return 0;
              }
              goto LAB_039e4118;
            }
LAB_039e4b80:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 4;
            FUN_039fecc8(in_stack_00000020 + 0x260,4,0);
            lVar13 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *(long *)PTR_DAT_04235450;
            }
            lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
            if (1 < *(uint *)(lVar18 + 0x18)) {
              if (*(int *)(lVar18 + 0x38) == 0x44d63) {
LAB_039e4c34:
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_039e68c4;
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  uVar12 = FUN_039ed0a4(lVar13,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x44),
                                        *(undefined4 *)(lVar18 + 0x48));
                  *(int *)(in_stack_00000020 + 0x158) = (int)uVar12;
                  bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
                  if (((uint)((ulong)uVar12 >> 0x18) & 0xff) <=
                      (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                    bVar3 = (byte)((ulong)uVar12 >> 0x18);
                  }
                  *(byte *)(in_stack_00000020 + 0x15b) = bVar3;
                  uVar8 = *(undefined4 *)(in_stack_00000020 + 0x158);
                  goto LAB_039e55e4;
                }
              }
              else {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                  lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_039e68c4;
                }
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  if (*(int *)(lVar18 + 0x38) == 0x2ef43) goto LAB_039e4c34;
                  uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
                  *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
LAB_039e55e4:
                  uVar12 = *(undefined8 *)PTR_DAT_04236310;
                  in_stack_00000020 = in_stack_00000020 + 0x510;
                  goto LAB_039e19e4;
                }
              }
            }
          }
          goto LAB_039e6860;
        }
        if (uVar9 == 0x42) {
LAB_039e4118:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 1;
          FUN_039fecc8(in_stack_00000020 + 0x260,1,0);
          *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
          return 1;
        }
        if (uVar9 != 0x49) {
          return 0;
        }
LAB_039e3df8:
        *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 2;
        FUN_039fecc8(in_stack_00000020 + 0x260,2,0);
        lVar13 = *(long *)PTR_DAT_04235450;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar13 = *(long *)PTR_DAT_04235450;
        }
        lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_039e6860;
          if (*(int *)(lVar18 + 0x38) != 0x43833) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *(long *)PTR_DAT_04235450;
              lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
              if (lVar18 == 0) goto LAB_039e68c4;
            }
            if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_039e6860;
            if (*(int *)(lVar18 + 0x38) != 0x2da13) {
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                bVar3 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b8);
                uVar9 = (uint)bVar3;
                *(uint *)(in_stack_00000020 + 0x5f0) = (uint)bVar3;
                goto LAB_039e51b0;
              }
              goto LAB_039e68c4;
            }
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar13 = *(long *)PTR_DAT_04235450;
          }
          lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
          if (lVar18 != 0) {
            if (1 < *(uint *)(lVar18 + 0x18)) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                        (lVar13,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                         *(undefined4 *)(lVar18 + 0x44),
                                         *(undefined4 *)(lVar18 + 0x48),&stack0x00000070);
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
            goto LAB_039e6860;
          }
        }
      }
    }
    else {
      if (0x79c1 < (int)uVar9) {
        if ((int)uVar9 < 0x22ef5) {
          if ((int)uVar9 < 0xa83b) {
            if (0x7fe9 < (int)uVar9) {
              if (uVar9 == 0xa15f) goto LAB_039e2b34;
              if (uVar9 == 0xa825) goto LAB_039e47d8;
              if (uVar9 != 0xa83a) {
                return 0;
              }
              goto LAB_039e2330;
            }
            if (uVar9 == 0x79d7) goto LAB_039e3db0;
            if (uVar9 != 0x7fe9) {
              return 0;
            }
          }
          else {
            if ((int)uVar9 < 0xabd8) {
              if (uVar9 == 0xabc1) {
LAB_039e419c:
                *(undefined1 *)(in_stack_00000020 + 0x2da) = 1;
                return 1;
              }
              if (uVar9 != 0xabd7) {
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
            if (uVar9 != 0xb1e9) {
              if (uVar9 == 0x2282e) {
LAB_039e4734:
                if (*(int *)(param_1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                }
                FUN_026b3c2c(&stack0x00000070,lVar13 + 0x10,*(undefined8 *)PTR_DAT_04236380);
                uVar12 = in_stack_00000088;
                uVar11 = _uStack0000000000000070;
                *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_00000078;
                thunk_FUN_01e10808(in_stack_00000020 + 0x100);
                *(undefined8 *)(in_stack_00000020 + 0x118) = uVar12;
                thunk_FUN_01e10808(in_stack_00000020 + 0x118,uVar12);
                *(int *)(in_stack_00000020 + 0x120) = (int)uVar11;
                return 1;
              }
              uVar20 = 0x2ef4;
              goto LAB_039e2068;
            }
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01dc4f30();
            lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar18 = *(long *)(lVar13 + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            uVar11 = Unity_VisualScripting_VariableDeclarations__Set
                               (param_1,*(undefined8 *)(lVar13 + 0x80),
                                *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                &stack0x00000070);
            fVar23 = (float)uVar11;
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 2) {
              uVar11 = (ulong)(uint)((fVar23 * *(float *)(in_stack_00000020 + 0x1e4)) / 100.0);
            }
            else if (in_stack_00000028._4_4_ == 1) {
              uVar11 = (ulong)(uint)(fVar23 * *(float *)(in_stack_00000020 + 0x1e4));
            }
            else {
              if (in_stack_00000028._4_4_ != 0) {
                return 0;
              }
              lVar13 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *(long *)PTR_DAT_04235450;
              }
              lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x80);
              if (lVar18 == 0) goto LAB_039e68c4;
              if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_039e6860;
              if (*(short *)(lVar18 + 0x2a) != 0x2b) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x80);
                  if (lVar18 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_039e6860;
                if (*(short *)(lVar18 + 0x2a) != 0x2d) {
                  *(float *)(in_stack_00000020 + 0x1e8) = fVar23;
                  goto LAB_039e58a4;
                }
              }
              uVar11 = (ulong)(uint)(fVar23 + *(float *)(in_stack_00000020 + 0x1e4));
            }
            *(int *)(in_stack_00000020 + 0x1e8) = (int)uVar11;
LAB_039e58a4:
            FUN_026b48b8(uVar11,in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_04236308);
            return 1;
          }
        }
        else {
          if ((int)uVar9 < 0x260f5) {
            if (0x23290 < (int)uVar9) {
              if (uVar9 == 0x238b8) goto LAB_039e4714;
              if (uVar9 == 0x25a2e) goto LAB_039e4734;
              uVar20 = 0x60f4;
LAB_039e2068:
              if (uVar9 != (uVar20 | 0x20000)) {
                return 0;
              }
              if ((*(byte *)(in_stack_00000020 + 0x259) >> 1 & 1) != 0) {
                return 1;
              }
              FUN_026b2938(&stack0x00000070,in_stack_00000020 + 0x550,
                           *(undefined8 *)PTR_DAT_04236378);
              cVar7 = FUN_039fedc4(in_stack_00000020 + 0x260,0x200,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffdff;
              goto LAB_039e4110;
            }
            if (uVar9 != 0x22f09) {
              uVar20 = 0x3290;
              goto LAB_039e337c;
            }
          }
          else {
            if (0x26490 < (int)uVar9) {
              if (uVar9 == 0x26ab8) {
LAB_039e4714:
                uVar8 = FUN_026b48fc(in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_04236370);
                *(undefined4 *)(in_stack_00000020 + 0x1e8) = uVar8;
                return 1;
              }
              if (uVar9 == 0x2d7ad) goto LAB_039e4408;
              uVar20 = 0x2d8fe;
LAB_039e3250:
              if (uVar9 != uVar20) {
                return 0;
              }
              if (*(int *)(param_1 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                param_1 = *(long *)PTR_DAT_04235450;
                lVar13 = *(long *)(param_1 + 0xb8);
                lVar18 = *(long *)(lVar13 + 0x88);
                if (lVar18 == 0) goto LAB_039e68c4;
              }
              if (*(int *)(lVar18 + 0x18) != 0) {
                if (*(int *)(lVar18 + 0x30) != 3) {
                  return 0;
                }
                if (*(int *)(param_1 + 0xe0) == 0) {
                  param_1 = thunk_FUN_01dc4f30();
                  lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                }
                lVar13 = *(long *)(lVar13 + 0x80);
                if (lVar13 == 0) goto LAB_039e68c4;
                if ((7 < *(uint *)(lVar13 + 0x18)) && (*(uint *)(lVar13 + 0x18) != 8)) {
                  uVar12 = FUN_039ec6b4(param_1,*(undefined2 *)(lVar13 + 0x2e));
                  cVar7 = FUN_039ec6b4(uVar12,*(undefined2 *)(lVar13 + 0x30));
                  *(char *)(in_stack_00000020 + 0x4ef) = cVar7 + (char)uVar12 * '\x10';
                  return 1;
                }
              }
              goto LAB_039e6860;
            }
            if (uVar9 != 0x26109) {
              uVar20 = 0x6490;
LAB_039e337c:
              if (uVar9 != (uVar20 | 0x20000)) {
                return 0;
              }
              *(undefined1 *)(in_stack_00000020 + 0x2da) = 0;
              return 1;
            }
          }
          if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
            return 1;
          }
          if (*(char *)(in_stack_00000020 + 0x3f5) != '\0') {
            return 1;
          }
          lVar13 = *(long *)(in_stack_00000020 + 0x368);
          if ((lVar13 == 0) || (lVar18 = *(long *)(lVar13 + 0x48), lVar18 == 0)) goto LAB_039e68c4;
          uVar9 = *(uint *)(lVar13 + 0x28);
          if ((int)*(uint *)(lVar18 + 0x18) <= (int)uVar9) {
            return 1;
          }
          if (uVar9 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar9 * 0x28;
            *(int *)(lVar18 + 0x38) = *(int *)(in_stack_00000020 + 0x494) - *(int *)(lVar18 + 0x34);
            *(uint *)(lVar13 + 0x28) = uVar9 + 1;
            return 1;
          }
        }
        goto LAB_039e6860;
      }
      if ((int)uVar9 < 0x19a7) {
        if ((int)uVar9 < 0x11cd) {
          if ((int)uVar9 < 0xc90) {
            bVar6 = uVar9 == 0xb9d;
            goto LAB_039e3b58;
          }
          if (uVar9 == 0xc93) {
            return 1;
          }
          if (uVar9 == 0xc9d) {
            return 1;
          }
          if (uVar9 != 0x11cc) {
            return 0;
          }
LAB_039e2708:
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01dc4f30();
            lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar18 = *(long *)(lVar13 + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (param_1,*(undefined8 *)(lVar13 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
                                       ,&stack0x00000070);
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
LAB_039e5b08:
            *(float *)(in_stack_00000020 + 0x640) = fVar23;
            return 1;
          }
          goto LAB_039e6860;
        }
        if ((int)uVar9 < 0x1287) {
          if (uVar9 == 0x1278) {
LAB_039e42a0:
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              fVar24 = *(float *)(in_stack_00000020 + 0x404);
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar23 = (float)FUN_03dd0f40(&stack0x00000270,0);
              fVar32 = 1.0;
              if (0.0 < fVar23) {
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_03dd0f40(&stack0x00000270,0);
              }
              *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
              FUN_026b4960(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                           *(undefined8 *)PTR_DAT_04236348);
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                iVar10 = FUN_03dd0e90(&stack0x00000270,0);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar32 = (float)FUN_03dd0ea0(&stack0x00000270,0);
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    fVar30 = *(float *)(in_stack_00000020 + 0x61c);
                    fVar24 = DAT_00bafb80;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar24 = 1.0;
                    }
                    memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                            0x60);
                    fVar25 = (float)FUN_03dd0f30(&stack0x00000270,0);
                    *(float *)(in_stack_00000020 + 0x61c) =
                         fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                                  *(float *)(in_stack_00000020 + 0x404);
                    FUN_039fecc8(in_stack_00000020 + 0x260,0x100,0);
                    uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x100;
                    goto LAB_039e4400;
                  }
                }
              }
            }
            goto LAB_039e68c4;
          }
          uVar20 = 0x1286;
        }
        else {
          if (uVar9 == 0x18ec) goto LAB_039e2708;
          if (uVar9 == 0x1998) goto LAB_039e42a0;
          uVar20 = 0x19a6;
        }
        if (uVar9 != uVar20) {
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
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
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
      }
      else {
        if ((int)uVar9 < 0x5892) {
          if ((int)uVar9 < 0x5172) {
            if (uVar9 == 0x50c5) {
LAB_039e44a4:
              *(undefined1 *)(in_stack_00000020 + 0x2db) = 0;
              return 1;
            }
            uVar20 = 0x5171;
          }
          else {
            if (uVar9 == 0x517f) goto LAB_039e4040;
            if (uVar9 == 0x57e5) goto LAB_039e44a4;
            uVar20 = 0x5891;
          }
          if (uVar9 != uVar20) {
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
        if ((int)uVar9 < 0x6f60) {
          if (uVar9 == 0x589f) {
LAB_039e4040:
            if (-1 < *(char *)(in_stack_00000020 + 0x25c)) {
              return 1;
            }
            if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
              uVar8 = FUN_026b4a2c(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_04236338);
              *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar8;
              if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
              fVar24 = *(float *)(in_stack_00000020 + 0x404);
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar23 = (float)FUN_03dd0f20(&stack0x00000270,0);
              fVar32 = 1.0;
              if (0.0 < fVar23) {
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_039e68c4;
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
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
          if (uVar9 != 0x6f5f) {
            return 0;
          }
LAB_039e2b34:
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            param_1 = *(long *)PTR_DAT_04235450;
            lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if ((*(int *)(lVar18 + 0x18) == 0) || (*(int *)(lVar18 + 0x18) == 1)) goto LAB_039e6860;
          iVar10 = *(int *)(lVar18 + 0x24);
          if ((iVar10 == 0x2d93756b) || (iVar10 == 0x1f31f54b)) {
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              param_1 = *(long *)PTR_DAT_04235450;
            }
            lVar13 = **(long **)(param_1 + 0xb8);
            if (lVar13 != 0) {
              if (*(int *)(lVar13 + 0x18) != 0) {
                *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar13 + 0x28);
                thunk_FUN_01e10808(in_stack_00000020 + 0x100);
                lVar13 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
                if (lVar13 == 0) goto LAB_039e68c4;
                if (*(int *)(lVar13 + 0x18) != 0) {
                  *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar13 + 0x38);
                  thunk_FUN_01e10808(in_stack_00000020 + 0x118);
                  *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                  plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar13 = *plVar15;
                  if (lVar13 == 0) goto LAB_039e68c4;
                  if (*(int *)(lVar13 + 0x18) != 0) {
                    in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                    _uStack0000000000000070 = *(undefined8 *)(lVar13 + 0x20);
                    in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                    in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                    in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                    in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                    in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                    goto LAB_039e3890;
                  }
                }
              }
              goto LAB_039e6860;
            }
          }
          else {
            iVar1 = *(int *)(lVar18 + 0x38);
            iVar2 = *(int *)(lVar18 + 0x3c);
            FUN_039aa154(iVar10,&stack0x000002f0,0);
            puVar5 = 
            Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
            ;
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar11 = FUN_03d755c0(in_stack_000002f0,0,0);
            if ((uVar11 & 1) != 0) {
              lVar13 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *(long *)PTR_DAT_04235450;
              }
              lVar18 = *(long *)(lVar13 + 0xb8);
              lVar19 = *(long *)(lVar18 + 0x70);
              if (lVar19 == 0) {
                in_stack_000002f0 = 0;
              }
              else {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                }
                lVar13 = *(long *)(lVar18 + 0x88);
                if (lVar13 == 0) goto LAB_039e68c4;
                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_039e6860;
                uVar12 = FUN_0326cf90(0,*(undefined8 *)(lVar18 + 0x80),
                                      *(undefined4 *)(lVar13 + 0x2c),*(undefined4 *)(lVar13 + 0x30),
                                      0);
                in_stack_000002f0 =
                     (**(code **)(lVar19 + 0x18))
                               (*(undefined8 *)(lVar19 + 0x40),iVar10,uVar12,
                                *(undefined8 *)(lVar19 + 0x28));
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar11 = FUN_03d755c0(in_stack_000002f0,0,0);
              if ((uVar11 & 1) != 0) {
                uVar12 = FUN_039f5450(0);
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(lVar13);
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_039e68c4;
                if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
                uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                      *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                      0);
                uVar12 = FUN_0326dc80(uVar12,uVar21,0);
                in_stack_000002f0 = FUN_02146300(uVar12,*(undefined8 *)PTR_DAT_04235608);
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar11 = FUN_03d755c0(in_stack_000002f0,0,0);
              if ((uVar11 & 1) != 0) {
                return 0;
              }
              FUN_039a9c64(in_stack_000002f0,0);
            }
            if (iVar2 == 0 && iVar1 == 0) {
              if (in_stack_000002f0 != 0) {
                *(undefined8 *)(in_stack_00000020 + 0x118) =
                     *(undefined8 *)(in_stack_000002f0 + 0x20);
                thunk_FUN_01e10808(in_stack_00000020 + 0x118);
                uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                uVar9 = FUN_039aa5ac(uVar12,in_stack_000002f0,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                lVar13 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
                if (lVar13 != 0) {
                  if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
                    in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                    in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                    in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                    in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                    in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                    in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                    _uStack0000000000000070 = *(ulong *)(lVar13 + 0x20);
                    uVar12 = *(undefined8 *)PTR_DAT_04236318;
                    plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8) + 2;
                    goto LAB_039e61f0;
                  }
                  goto LAB_039e6860;
                }
              }
            }
            else {
              if ((iVar1 != 0x629fdf7) && (iVar1 != 0x454d9f7)) {
                return 0;
              }
              uVar11 = FUN_039aa34c(iVar2,&stack0x000002e8,0);
              if ((uVar11 & 1) == 0) {
                uVar12 = FUN_039f5450(0);
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(lVar13);
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                if (lVar18 != 0) {
                  if (1 < *(uint *)(lVar18 + 0x18)) {
                    uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                          *(undefined4 *)(lVar18 + 0x44),
                                          *(undefined4 *)(lVar18 + 0x48),0);
                    uVar12 = FUN_0326dc80(uVar12,uVar21,0);
                    uVar12 = FUN_02146300(uVar12,*(undefined8 *)PTR_DAT_042362d0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30(*(long *)puVar5);
                    }
                    uVar11 = FUN_03d755c0(uVar12,0,0);
                    if ((uVar11 & 1) != 0) {
                      return 0;
                    }
                    FUN_039a9f30(iVar2,uVar12,0);
                    *(undefined8 *)(in_stack_00000020 + 0x118) = uVar12;
                    thunk_FUN_01e10808(in_stack_00000020 + 0x118);
                    uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                    lVar13 = *(long *)PTR_DAT_04235450;
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30();
                      lVar13 = *(long *)PTR_DAT_04235450;
                    }
                    uVar9 = FUN_039aa5ac(uVar12,in_stack_000002f0,*(long *)(lVar13 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                    *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                    lVar13 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
                    if (lVar13 == 0) goto LAB_039e68c4;
                    if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                      lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
                      in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                      in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                      in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                      in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                      in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                      in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                      _uStack0000000000000070 = *(ulong *)(lVar13 + 0x20);
                      uVar12 = *(undefined8 *)PTR_DAT_04236318;
                      plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8) + 2;
                      in_stack_00000170 = _uStack0000000000000070;
                      in_stack_00000178 = in_stack_00000078;
                      in_stack_00000180 = in_stack_00000080;
                      in_stack_00000188 = in_stack_00000088;
                      in_stack_00000190 = in_stack_00000090;
                      in_stack_00000198 = in_stack_00000098;
                      in_stack_000001a0 = in_stack_000000a0;
                      goto LAB_039e61f0;
                    }
                  }
                  goto LAB_039e6860;
                }
              }
              else {
                *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
                thunk_FUN_01e10808(in_stack_00000020 + 0x118);
                uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                uVar9 = FUN_039aa5ac(uVar12,in_stack_000002f0,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                lVar13 = **(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
                if (lVar13 != 0) {
                  if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
                    in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                    in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                    in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                    in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                    in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                    in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                    _uStack0000000000000070 = *(ulong *)(lVar13 + 0x20);
                    uVar12 = *(undefined8 *)PTR_DAT_04236318;
                    plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8) + 2;
                    in_stack_000001b0 = _uStack0000000000000070;
                    in_stack_000001b8 = in_stack_00000078;
                    in_stack_000001c0 = in_stack_00000080;
                    in_stack_000001c8 = in_stack_00000088;
                    in_stack_000001d0 = in_stack_00000090;
                    in_stack_000001d8 = in_stack_00000098;
                    in_stack_000001e0 = in_stack_000000a0;
LAB_039e61f0:
                    FUN_026b3b9c(plVar15,&stack0x00000070,uVar12);
                    lVar13 = in_stack_00000020 + 0x100;
                    *(long *)(in_stack_00000020 + 0x100) = in_stack_000002f0;
                    goto LAB_039e2cc0;
                  }
                  goto LAB_039e6860;
                }
              }
            }
          }
        }
        else {
          if (uVar9 == 0x7625) {
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
            lVar13 = *(long *)puVar5;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *(long *)puVar5;
            }
            uVar27 = (*(ulong **)(lVar13 + 0xb8))[1];
            uVar26 = **(ulong **)(lVar13 + 0xb8);
            uVar9 = 0;
            uVar11 = 0x4000ffff;
            do {
              plVar15 = (long *)PTR_DAT_04235450;
              lVar13 = *(long *)PTR_DAT_04235450;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *plVar15;
              }
              lVar18 = *(long *)(lVar13 + 0xb8);
              lVar19 = *(long *)(lVar18 + 0x88);
              if (lVar19 == 0) goto LAB_039e68c4;
              uVar8 = (undefined4)(uVar26 >> 0x20);
              uVar29 = (undefined4)(uVar27 >> 0x20);
              if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_039e4da0:
                uVar20 = (uint)uVar11;
                uVar9 = (uint)*(byte *)(in_stack_00000020 + 0x4ef);
                if (uVar20 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                  uVar9 = (uint)(uVar11 >> 0x18) & 0xff;
                }
                FUN_039bbbc8(uVar26 & 0xffffffff,uVar8,uVar27 & 0xffffffff,uVar29,&stack0x000002f8,
                             uVar20 & 0xff0000 | uVar9 << 0x18 | uVar20 & 0xff00 | uVar20 & 0xff,0);
                in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,in_stack_00000308);
                FUN_026b29b0(in_stack_00000020 + 0x550,&stack0x00000070,
                             *(undefined8 *)PTR_DAT_04236340);
                return 1;
              }
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *plVar15;
                lVar18 = *(long *)(lVar13 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x88);
                plVar15 = (long *)PTR_DAT_04235450;
                if (lVar19 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
              lVar22 = (long)(int)uVar9;
              if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_039e4da0;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *plVar15;
                lVar18 = *(long *)(lVar13 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x88);
                if (lVar19 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
              iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
              if (iVar10 < 0xa826) {
                if ((iVar10 == 0x7625) || (iVar10 == 0xa825)) {
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30();
                    lVar13 = *(long *)PTR_DAT_04235450;
                    lVar18 = *(long *)(lVar13 + 0xb8);
                    lVar19 = *(long *)(lVar18 + 0x88);
                    if (lVar19 == 0) goto LAB_039e68c4;
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
                  if (*(int *)(lVar19 + lVar22 * 0x18 + 0x28) == 4) {
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      lVar13 = thunk_FUN_01dc4f30();
                      lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                      lVar19 = *(long *)(lVar18 + 0x88);
                      if (lVar19 == 0) goto LAB_039e68c4;
                    }
                    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
                    uVar11 = FUN_039ed0a4(lVar13,*(undefined8 *)(lVar18 + 0x80),
                                          *(undefined4 *)(lVar19 + 0x2c),
                                          *(undefined4 *)(lVar19 + 0x30));
                  }
                }
              }
              else if (iVar10 == 0x44d63) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  lVar13 = thunk_FUN_01dc4f30();
                  lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar19 = lVar19 + lVar22 * 0x18;
                uVar11 = FUN_039ed0a4(lVar13,*(undefined8 *)(lVar18 + 0x80),
                                      *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30))
                ;
                uVar11 = uVar11 & 0xffffffff;
              }
              else if (iVar10 == 0xe63719) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar19 = lVar19 + lVar22 * 0x18;
                iVar10 = FUN_039ed2f0(in_stack_00000020,*(undefined8 *)(lVar18 + 0x80),
                                      *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                      lVar18 + 0x90);
                if (iVar10 != 4) {
                  return 0;
                }
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                if (lVar13 == 0) goto LAB_039e68c4;
                uVar20 = *(uint *)(lVar13 + 0x18);
                if ((((uVar20 == 0) || (uVar20 == 1)) || (uVar20 < 3)) || (uVar20 == 3))
                goto LAB_039e6860;
                uVar34 = *(undefined4 *)(lVar13 + 0x20);
                uVar33 = *(undefined4 *)(lVar13 + 0x24);
                uVar31 = *(undefined4 *)(lVar13 + 0x28);
                uVar28 = *(undefined4 *)(lVar13 + 0x2c);
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
          if (uVar9 != 0x763a) {
            if (uVar9 != 0x79c1) {
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
          lVar13 = *(long *)(in_stack_00000020 + 0x368);
          if (lVar13 != 0) {
            lVar18 = *(long *)(lVar13 + 0x48);
            if (lVar18 != 0) {
              uVar9 = *(uint *)(lVar13 + 0x28);
              lVar19 = (long)(int)uVar9;
              if (*(int *)(lVar18 + 0x18) < (int)(uVar9 + 1)) {
                if (*(int *)(*(long *)PTR_DAT_042353d0 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                FUN_0216bb78((long *)(lVar13 + 0x48),uVar9 + 1,*(undefined8 *)PTR_DAT_042362e8);
                lVar13 = *(long *)(in_stack_00000020 + 0x368);
                if (lVar13 == 0) goto LAB_039e68c4;
              }
              lVar13 = *(long *)(lVar13 + 0x48);
              if (lVar13 != 0) {
                if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
                plVar15 = (long *)(lVar13 + lVar19 * 0x28 + 0x20);
                *plVar15 = in_stack_00000020;
                thunk_FUN_01e10808(plVar15,in_stack_00000020);
                if ((*(long *)(in_stack_00000020 + 0x368) != 0) &&
                   (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar13 != 0)) {
                  lVar18 = *(long *)PTR_DAT_04235450;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30();
                    lVar18 = *(long *)PTR_DAT_04235450;
                  }
                  lVar18 = *(long *)(lVar18 + 0xb8);
                  lVar22 = *(long *)(lVar18 + 0x88);
                  if (lVar22 != 0) {
                    if ((*(int *)(lVar22 + 0x18) != 0) && (uVar9 < *(uint *)(lVar13 + 0x18))) {
                      *(undefined4 *)(lVar13 + lVar19 * 0x28 + 0x28) =
                           *(undefined4 *)(lVar22 + 0x24);
                      if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
                         (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48),
                         lVar13 == 0)) goto LAB_039e68c4;
                      if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                        lVar13 = lVar13 + lVar19 * 0x28;
                        *(undefined4 *)(lVar13 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x494);
                        iVar10 = *(int *)(lVar22 + 0x2c);
                        *(int *)(lVar13 + 0x2c) = iVar10 + unaff_w20;
                        uVar8 = *(undefined4 *)(lVar22 + 0x30);
                        *(undefined4 *)(lVar13 + 0x30) = uVar8;
                        FUN_039bad98(lVar13 + 0x20,*(undefined8 *)(lVar18 + 0x80),iVar10,uVar8,0);
                        return 1;
                      }
                    }
                    goto LAB_039e6860;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_039e68c4;
  }
  if (0x691282 < (int)uVar9) {
    if ((int)uVar9 < 0x3434823) {
      if ((int)uVar9 < 0x765e9b) {
        if ((int)uVar9 < 0x719366) {
          if ((int)uVar9 < 0x6afe3e) {
            if (uVar9 == 0x6a5e93) goto LAB_039e3f24;
            if (uVar9 != 0x6afe3d) {
              return 0;
            }
LAB_039e3b44:
            *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
            return 1;
          }
          if (uVar9 == 0x6ba308) {
LAB_039e4cf0:
            *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
            return 1;
          }
          if (uVar9 != 0x6ccb9a) {
            if (uVar9 != 0x719365) {
              return 0;
            }
            goto LAB_039e261c;
          }
LAB_039e39f0:
          *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
          return 1;
        }
        if (0x73f193 < (int)uVar9) {
          if (uVar9 == 0x74913d) goto LAB_039e3b44;
          if (uVar9 == 0x753608) goto LAB_039e4cf0;
          if (uVar9 != 0x765e9a) {
            return 0;
          }
          goto LAB_039e39f0;
        }
        if (uVar9 != 0x72a582) {
          if (uVar9 != 0x73f193) {
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
        if (0 < *(int *)(in_stack_00000020 + 0x494)) {
          fVar23 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac);
          *(float *)(in_stack_00000020 + 0x640) = fVar23;
          if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
             (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar13 == 0))
          goto LAB_039e68c4;
          if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
          *(float *)(lVar13 + (ulong)uVar9 * 0x178 + 0x144) = fVar23;
        }
        *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
        return 1;
      }
      if (0xe6a57a < (int)uVar9) {
        if ((int)uVar9 < 0x2d9fc44) {
          if (uVar9 == 0xf4aac9) goto LAB_039e3fb8;
          if (uVar9 != 0x2d9fc43) {
            return 0;
          }
        }
        else {
          if (uVar9 == 0x3004302) {
LAB_039e1c10:
            *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
            return 1;
          }
          if (uVar9 != 0x31d0163) {
            if (uVar9 != 0x3434822) {
              return 0;
            }
            goto LAB_039e1c10;
          }
        }
        goto LAB_039e2ae4;
      }
      if ((int)uVar9 < 0xa3a05b) {
        if (uVar9 != 0x8b5eea) {
          uVar20 = 0xa3a05a;
LAB_039e351c:
          if (uVar9 != uVar20) {
            return 0;
          }
          *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
          return 1;
        }
      }
      else {
        if (uVar9 == 0xb1a5a9) {
LAB_039e3fb8:
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01dc4f30();
            lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar18 = *(long *)(lVar13 + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (param_1,*(undefined8 *)(lVar13 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
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
        if (uVar9 != 0xce640a) {
          uVar20 = 0xe6a57a;
          goto LAB_039e351c;
        }
      }
LAB_039e3534:
      uVar12 = 0x10;
      uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
LAB_039e4704:
      *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
      FUN_039fecc8(in_stack_00000020 + 0x260,uVar12,0);
      return 1;
    }
    if ((int)uVar9 < 0x1eaf47a2) {
      if (0x14495107 < (int)uVar9) {
        if (0x161e7507 < (int)uVar9) {
          if (uVar9 == 0x16504b66) {
LAB_039e4148:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            }
            FUN_026b3c2c(&stack0x00000070,lVar13 + 0x10,*(undefined8 *)PTR_DAT_04236380);
            uVar8 = uStack0000000000000070;
            *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000088;
            thunk_FUN_01e10808(in_stack_00000020 + 0x118);
            *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
            return 1;
          }
          if (uVar9 == 0x1b40b577) goto LAB_039e46b8;
          if (uVar9 != 0x1eaf47a1) {
            return 0;
          }
LAB_039e46f0:
          uVar12 = 8;
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 8;
          goto LAB_039e4704;
        }
        if (uVar9 == 0x147b2766) goto LAB_039e4148;
        uVar20 = 0x161e7507;
LAB_039e2c94:
        if (uVar9 != uVar20) {
          return 0;
        }
        uVar12 = FUN_026b4354(in_stack_00000020 + 0x588,*(undefined8 *)PTR_DAT_04236350);
        lVar13 = in_stack_00000020 + 0x580;
        *(undefined8 *)(in_stack_00000020 + 0x580) = uVar12;
LAB_039e2cc0:
        thunk_FUN_01e10808(lVar13);
        return 1;
      }
      if ((int)uVar9 < 0x454d9f8) {
        if (uVar9 == 0x4230398) goto LAB_039e4548;
        if (uVar9 != 0x454d9f7) {
          return 0;
        }
      }
      else {
        if (uVar9 == 0x5f82798) {
LAB_039e4548:
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            uVar8 = *(undefined4 *)(lVar18 + 0x24);
            uVar11 = FUN_039aa2a4(uVar8,&stack0x000002e0,0);
            puVar5 = 
            Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
            ;
            if ((uVar11 & 1) == 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                          + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar11 = FUN_03d755c0(in_stack_000002e0,0,0);
              if ((uVar11 & 1) != 0) {
                uVar12 = FUN_039f5640(0);
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(lVar13);
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_039e68c4;
                if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
                uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                      *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                      0);
                uVar12 = FUN_0326dc80(uVar12,uVar21,0);
                in_stack_000002e0 = FUN_02146300(uVar12,*(undefined8 *)PTR_DAT_042362d8);
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar11 = FUN_03d755c0(in_stack_000002e0,0,0);
              if ((uVar11 & 1) != 0) {
                return 0;
              }
              FUN_039a9fc8(uVar8,in_stack_000002e0,0);
            }
            *(undefined8 *)(in_stack_00000020 + 0x580) = in_stack_000002e0;
            thunk_FUN_01e10808(in_stack_00000020 + 0x580);
            uVar9 = 1;
            *(undefined1 *)(in_stack_00000020 + 0x5b0) = 0;
            plVar15 = (long *)PTR_DAT_04235450;
            do {
              lVar13 = *plVar15;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *plVar15;
              }
              lVar18 = *(long *)(lVar13 + 0xb8);
              lVar19 = *(long *)(lVar18 + 0x88);
              if (lVar19 == 0) goto LAB_039e68c4;
              if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_039e5564:
                FUN_026b4304(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                             *(undefined8 *)PTR_DAT_04236300);
                return 1;
              }
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *plVar15;
                lVar18 = *(long *)(lVar13 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x88);
                plVar15 = (long *)PTR_DAT_04235450;
                if (lVar19 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
              lVar22 = (long)(int)uVar9;
              if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_039e5564;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar13 = *plVar15;
                lVar18 = *(long *)(lVar13 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x88);
                plVar15 = (long *)PTR_DAT_04235450;
                if (lVar19 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
              iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
              if ((iVar10 == 0xb2fb) || (iVar10 == 0x80fb)) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  lVar13 = thunk_FUN_01dc4f30();
                  lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  if (lVar19 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                lVar19 = lVar19 + lVar22 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                          (lVar13,*(undefined8 *)(lVar18 + 0x80),
                                           *(undefined4 *)(lVar19 + 0x2c),
                                           *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
                *(bool *)(in_stack_00000020 + 0x5b0) = fVar23 != 0.0;
                plVar15 = (long *)PTR_DAT_04235450;
              }
              uVar9 = uVar9 + 1;
            } while( true );
          }
          goto LAB_039e6860;
        }
        if (uVar9 != 0x629fdf7) {
          uVar20 = 0x14495107;
          goto LAB_039e2c94;
        }
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
        lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar18 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar18 + 0x18) != 0) {
        iVar10 = *(int *)(lVar18 + 0x24);
        if ((iVar10 == 0x2d93756b) || (iVar10 == 0x1f31f54b)) {
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            param_1 = *(long *)PTR_DAT_04235450;
          }
          lVar13 = **(long **)(param_1 + 0xb8);
          if (lVar13 != 0) {
            if (*(int *)(lVar13 + 0x18) != 0) {
              *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar13 + 0x38);
              thunk_FUN_01e10808(in_stack_00000020 + 0x118);
              *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
              plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
              lVar13 = *plVar15;
              if (lVar13 == 0) goto LAB_039e68c4;
              if (*(int *)(lVar13 + 0x18) != 0) {
                in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                _uStack0000000000000070 = *(undefined8 *)(lVar13 + 0x20);
                in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                in_stack_00000130 = _uStack0000000000000070;
                in_stack_00000138 = in_stack_00000078;
                in_stack_00000140 = in_stack_00000080;
                in_stack_00000148 = in_stack_00000088;
                in_stack_00000150 = in_stack_00000090;
                in_stack_00000158 = in_stack_00000098;
                in_stack_00000160 = in_stack_000000a0;
LAB_039e3890:
                uVar12 = *(undefined8 *)PTR_DAT_04236318;
LAB_039e38a4:
                FUN_026b3b9c(plVar15 + 2,&stack0x00000070,uVar12);
                return 1;
              }
            }
            goto LAB_039e6860;
          }
        }
        else {
          uVar11 = FUN_039aa34c(iVar10,&stack0x000002e8,0);
          if ((uVar11 & 1) == 0) {
            uVar12 = FUN_039f5450(0);
            lVar13 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(lVar13);
              lVar13 = *(long *)PTR_DAT_04235450;
            }
            lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
            if (lVar18 != 0) {
              if (*(int *)(lVar18 + 0x18) != 0) {
                uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                      *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                      0);
                uVar12 = FUN_0326dc80(uVar12,uVar21,0);
                uVar12 = FUN_02146300(uVar12,*(undefined8 *)PTR_DAT_042362d0);
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                            + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)
                                      Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                                    );
                }
                uVar11 = FUN_03d755c0(uVar12,0,0);
                if ((uVar11 & 1) != 0) {
                  return 0;
                }
                FUN_039a9f30(iVar10,uVar12,0);
                *(undefined8 *)(in_stack_00000020 + 0x118) = uVar12;
                thunk_FUN_01e10808(in_stack_00000020 + 0x118);
                uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
                lVar13 = *(long *)PTR_DAT_04235450;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar13 = *(long *)PTR_DAT_04235450;
                }
                uVar9 = FUN_039aa5ac(uVar12,uVar21,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
                lVar13 = *plVar15;
                if (lVar13 == 0) goto LAB_039e68c4;
                if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
                  in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                  in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                  in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                  in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                  in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                  in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                  _uStack0000000000000070 = *(undefined8 *)(lVar13 + 0x20);
                  uVar12 = *(undefined8 *)PTR_DAT_04236318;
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
          }
          else {
            *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
            thunk_FUN_01e10808(in_stack_00000020 + 0x118);
            uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
            uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
            lVar13 = *(long *)PTR_DAT_04235450;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *(long *)PTR_DAT_04235450;
            }
            uVar9 = FUN_039aa5ac(uVar12,uVar21,*(long *)(lVar13 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar9;
            plVar15 = *(long **)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar13 = *plVar15;
            if (lVar13 != 0) {
              if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
                in_stack_00000088 = *(undefined8 *)(lVar13 + 0x38);
                in_stack_00000080 = *(undefined8 *)(lVar13 + 0x30);
                in_stack_00000098 = *(undefined8 *)(lVar13 + 0x48);
                in_stack_00000090 = *(undefined8 *)(lVar13 + 0x40);
                in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x50);
                in_stack_00000078 = *(undefined8 *)(lVar13 + 0x28);
                _uStack0000000000000070 = *(undefined8 *)(lVar13 + 0x20);
                uVar12 = *(undefined8 *)PTR_DAT_04236318;
                in_stack_000000f0 = _uStack0000000000000070;
                in_stack_000000f8 = in_stack_00000078;
                in_stack_00000100 = in_stack_00000080;
                in_stack_00000108 = in_stack_00000088;
                in_stack_00000110 = in_stack_00000090;
                in_stack_00000118 = in_stack_00000098;
                in_stack_00000120 = in_stack_000000a0;
                goto LAB_039e38a4;
              }
              goto LAB_039e6860;
            }
          }
        }
        goto LAB_039e68c4;
      }
    }
    else {
      if ((int)uVar9 < 0x2e9af08b) {
        if ((int)uVar9 < 0x21c6f46b) {
          if (uVar9 != 0x20d7f9c8) {
            uVar20 = 0x21c6f46a;
LAB_039e335c:
            if (uVar9 != uVar20) {
              return 0;
            }
            goto LAB_039e3534;
          }
        }
        else {
          if (uVar9 == 0x2b8343c1) goto LAB_039e46f0;
          if (uVar9 != 0x2dabf5e8) {
            uVar20 = 0x2e9af08a;
            goto LAB_039e335c;
          }
        }
        uVar12 = 0x20;
        uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x20;
        goto LAB_039e4704;
      }
      if (0x421fe49d < (int)uVar9) {
        if (uVar9 == 0x71174431) goto LAB_039e47b8;
        if (uVar9 == 0x7117d356) goto LAB_039e47cc;
        uVar20 = 0x77eef5be;
        goto LAB_039e2224;
      }
      if (uVar9 == 0x419bc966) {
LAB_039e4cfc:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
          return 1;
        }
      }
      else {
        if (uVar9 == 0x421f5578) goto LAB_039e44b0;
        uVar20 = 0x421fe49d;
LAB_039e3700:
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
      }
    }
    goto LAB_039e6860;
  }
  if ((int)uVar9 < 0x105b0d) {
    if (0x4d122 < (int)uVar9) {
      if (0xefcec < (int)uVar9) {
        if ((int)uVar9 < 0xf8790) {
          if (uVar9 == 0xf80ab) goto LAB_039e39f0;
          uVar20 = 0xf878f;
LAB_039e39e4:
          if (uVar9 != uVar20) {
            return 0;
          }
          return 1;
        }
        if (uVar9 == 0xfaf07) {
LAB_039e4b70:
          *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
          return 1;
        }
        if (uVar9 == 0x104376) {
LAB_039e4798:
          uVar8 = FUN_026b353c(in_stack_00000020 + 0x280,*(undefined8 *)PTR_DAT_04236368);
          *(undefined4 *)(in_stack_00000020 + 0x278) = uVar8;
          return 1;
        }
        uVar20 = 0x105b0c;
LAB_039e21c4:
        if (uVar9 != uVar20) {
          return 0;
        }
        uVar8 = FUN_026b22d8(in_stack_00000020 + 0x4f0,*(undefined8 *)PTR_DAT_04236360);
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
        return 1;
      }
      if ((int)uVar9 < 0x4e24f) {
        if (uVar9 == 0x4d806) {
          return 0;
        }
        if (uVar9 != 0x4e24e) {
          return 0;
        }
LAB_039e3658:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
          goto LAB_039e5b08;
        }
      }
      else {
        if (uVar9 != 0x4ff7e) {
          if (uVar9 == 0xee556) goto LAB_039e4798;
          uVar20 = 0xefcec;
          goto LAB_039e21c4;
        }
LAB_039e27d8:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
      }
      goto LAB_039e6860;
    }
    if ((int)uVar9 < 0x3a15f) {
      if (0x37302 < (int)uVar9) {
        if (uVar9 == 0x379e6) {
          return 0;
        }
        if (uVar9 == 0x3842e) goto LAB_039e3658;
        if (uVar9 != 0x3a15e) {
          return 0;
        }
        goto LAB_039e27d8;
      }
      if (uVar9 != 0x2ef43) {
        uVar20 = 0x37302;
        goto LAB_039e3b78;
      }
    }
    else {
      if ((int)uVar9 < 0x4371f) {
        if (uVar9 != 0x435cd) {
          uVar20 = 0x4371e;
          goto LAB_039e3250;
        }
LAB_039e4408:
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          iVar10 = *(int *)(lVar18 + 0x24);
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
          puVar17 = (undefined8 *)PTR_DAT_042362f0;
          goto LAB_039e5c70;
        }
        goto LAB_039e6860;
      }
      if (uVar9 == 0x44760) {
        return 0;
      }
      if (uVar9 != 0x44d63) {
        uVar20 = 0x4d122;
LAB_039e3b78:
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                     &stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (DAT_044a2dbb == '\0') {
            FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
            DAT_044a2dbb = '\x01';
          }
          puVar14 = *(undefined4 **)
                     (*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
          uVar8 = *puVar14;
          uVar29 = puVar14[1];
          uVar28 = puVar14[2];
          if (DAT_044a2db9 == '\0') {
            FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
            DAT_044a2db9 = '\x01';
          }
          puVar16 = *(uint **)(*(long *)
                                Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField
                              + 0xb8);
          uVar11 = (ulong)*puVar16;
          uVar26 = (ulong)puVar16[1];
          uVar27 = (ulong)puVar16[2];
          in_d3 = (ulong)puVar16[3];
          uStack0000000000000004 = 0x3f800000;
LAB_039e3c60:
          FUN_03d65f5c(&stack0x00000030,uVar8,uVar29,uVar28,uVar11,uVar26,uVar27,in_d3,0);
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
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = *(long *)PTR_DAT_04235450;
      lVar13 = *(long *)(param_1 + 0xb8);
    }
    lVar18 = *(long *)(lVar13 + 0x80);
    if (lVar18 == 0) goto LAB_039e68c4;
    if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_039e6860;
    sVar4 = *(short *)(lVar18 + 0x2c);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = *(long *)PTR_DAT_04235450;
      lVar13 = *(long *)(param_1 + 0xb8);
      lVar18 = *(long *)(lVar13 + 0x80);
    }
    if (uVar20 == 10 && sVar4 == 0x23) {
      uVar12 = 10;
LAB_039e5ccc:
      uVar8 = FUN_039ecc90(param_1,lVar18,uVar12);
    }
    else {
      if (lVar18 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_039e6860;
      sVar4 = *(short *)(lVar18 + 0x2c);
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
        lVar13 = *(long *)(param_1 + 0xb8);
        lVar18 = *(long *)(lVar13 + 0x80);
      }
      if (uVar20 == 0xb && sVar4 == 0x23) {
        uVar12 = 0xb;
        goto LAB_039e5ccc;
      }
      if (lVar18 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_039e6860;
      sVar4 = *(short *)(lVar18 + 0x2c);
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *(long *)PTR_DAT_04235450;
        lVar13 = *(long *)(param_1 + 0xb8);
        lVar18 = *(long *)(lVar13 + 0x80);
      }
      if (uVar20 == 0xd && sVar4 == 0x23) {
        uVar12 = 0xd;
        goto LAB_039e5ccc;
      }
      if (lVar18 == 0) goto LAB_039e68c4;
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_039e6860;
      sVar4 = *(short *)(lVar18 + 0x2c);
      if (*(int *)(param_1 + 0xe0) == 0) {
        param_1 = thunk_FUN_01dc4f30();
        lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
      }
      if (uVar20 == 0xf && sVar4 == 0x23) {
        lVar18 = *(long *)(lVar13 + 0x80);
        uVar12 = 0xf;
        goto LAB_039e5ccc;
      }
      lVar13 = *(long *)(lVar13 + 0x88);
      if (lVar13 == 0) goto LAB_039e68c4;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_039e6860;
      iVar10 = *(int *)(lVar13 + 0x24);
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
        uVar12 = *(undefined8 *)PTR_DAT_04236310;
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
    uVar12 = *(undefined8 *)PTR_DAT_04236310;
    goto LAB_039e19dc;
  }
  if ((int)uVar9 < 0x18b5de) {
    if ((int)uVar9 < 0x14b2e4) {
      if ((int)uVar9 < 0x10e5b0) {
        if (uVar9 == 0x10decb) goto LAB_039e39f0;
        uVar20 = 0x10e5af;
        goto LAB_039e39e4;
      }
      if (uVar9 == 0x110d27) goto LAB_039e4b70;
      if (uVar9 != 0x13a0c6) {
        if (uVar9 != 0x14b2e3) {
          return 0;
        }
        goto LAB_039e24dc;
      }
      goto LAB_039e33b4;
    }
    if ((int)uVar9 < 0x169e9f) {
      if (uVar9 != 0x15fef4) {
        uVar20 = 0x169e9e;
        goto LAB_039e2cfc;
      }
LAB_039e41ac:
      if (*(int *)(param_1 + 0xe0) == 0) {
        param_1 = thunk_FUN_01dc4f30();
        lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar18 = *(long *)(lVar13 + 0x88);
        if (lVar18 == 0) goto LAB_039e68c4;
      }
      if (*(int *)(lVar18 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (param_1,*(undefined8 *)(lVar13 + 0x80),
                                   *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
    if (uVar9 == 0x174369) goto LAB_039e3f44;
    if (uVar9 == 0x186bfb) goto LAB_039e29b0;
    if (uVar9 != 0x18b5dd) {
      return 0;
    }
  }
  else {
    if ((int)uVar9 < 0x20319f) {
      if ((int)uVar9 < 0x1d33c7) {
        if (uVar9 == 0x1ab5ba) {
          return 0;
        }
        if (uVar9 != 0x1d33c6) {
          return 0;
        }
LAB_039e33b4:
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
            return 1;
          }
          FUN_026b2f68(in_stack_00000020 + 0x5f8,*(undefined4 *)(lVar18 + 0x24),
                       *(undefined8 *)PTR_DAT_042362f8);
          uVar12 = FUN_03390e50(&stack0x000002d4,0);
          uVar21 = FUN_03390e50(in_stack_00000020 + 0x494,0);
          uVar12 = FUN_03279ae0(*(undefined8 *)PTR_DAT_04236390,uVar12,
                                *(undefined8 *)PTR_DAT_04236398,uVar21,0);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)
                                Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                              );
          }
          FUN_03d40fd0(uVar12,0);
          return 1;
        }
      }
      else if (uVar9 == 0x1e45e3) {
LAB_039e24dc:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
      }
      else {
        if (uVar9 == 0x1f91f4) goto LAB_039e41ac;
        uVar20 = 0x20319e;
LAB_039e2cfc:
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          param_1 = *(long *)PTR_DAT_04235450;
          lVar13 = *(long *)(param_1 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        fVar23 = DAT_00bafb80;
        if (*(int *)(lVar18 + 0x18) != 0) {
          if (*(int *)(lVar18 + 0x28) != 1) {
            if (*(int *)(lVar18 + 0x28) != 0) {
              return 0;
            }
            uVar9 = 1;
            fVar32 = 0.0;
            do {
              if (*(int *)(param_1 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                param_1 = *(long *)PTR_DAT_04235450;
              }
              lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
              if (lVar13 == 0) goto LAB_039e68c4;
              if (*(int *)(lVar13 + 0x18) <= (int)uVar9) {
                return 1;
              }
              if (*(int *)(param_1 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                param_1 = *(long *)PTR_DAT_04235450;
                lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                if (lVar13 == 0) goto LAB_039e68c4;
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
              lVar18 = (long)(int)uVar9;
              if (*(int *)(lVar13 + lVar18 * 0x18 + 0x20) == 0) {
                return 1;
              }
              if (*(int *)(param_1 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                param_1 = *(long *)PTR_DAT_04235450;
              }
              lVar19 = *(long *)(param_1 + 0xb8);
              lVar13 = *(long *)(lVar19 + 0x88);
              if (lVar13 == 0) goto LAB_039e68c4;
              if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
              iVar10 = *(int *)(lVar13 + lVar18 * 0x18 + 0x20);
              if (iVar10 == 0x4d0e4) {
                if (*(int *)(param_1 + 0xe0) == 0) {
                  param_1 = thunk_FUN_01dc4f30();
                  lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar13 = *(long *)(lVar19 + 0x88);
                  if (lVar13 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar13 = lVar13 + lVar18 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar24 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                          (param_1,*(undefined8 *)(lVar19 + 0x80),
                                           *(undefined4 *)(lVar13 + 0x2c),
                                           *(undefined4 *)(lVar13 + 0x30),&stack0x00000070);
                if (fVar24 == -32768.0) {
                  return 0;
                }
                param_1 = *(long *)PTR_DAT_04235450;
                if (*(int *)(param_1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  param_1 = *(long *)PTR_DAT_04235450;
                }
                lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                if (lVar13 == 0) goto LAB_039e68c4;
                if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
                iVar10 = *(int *)(lVar13 + lVar18 * 0x18 + 0x34);
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
                if (*(int *)(param_1 + 0xe0) == 0) {
                  param_1 = thunk_FUN_01dc4f30();
                  lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
                  lVar13 = *(long *)(lVar19 + 0x88);
                  if (lVar13 == 0) goto LAB_039e68c4;
                }
                if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
                lVar13 = lVar13 + lVar18 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar24 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                          (param_1,*(undefined8 *)(lVar19 + 0x80),
                                           *(undefined4 *)(lVar13 + 0x2c),
                                           *(undefined4 *)(lVar13 + 0x30),&stack0x00000070);
                if (fVar24 == -32768.0) {
                  return 0;
                }
                param_1 = *(long *)PTR_DAT_04235450;
                if (*(int *)(param_1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  param_1 = *(long *)PTR_DAT_04235450;
                }
                lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                if (lVar13 == 0) goto LAB_039e68c4;
                if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_039e6860;
                iVar10 = *(int *)(lVar13 + lVar18 * 0x18 + 0x34);
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
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01dc4f30();
            lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
            lVar18 = *(long *)(lVar13 + 0x88);
            if (lVar18 == 0) goto LAB_039e68c4;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                      (param_1,*(undefined8 *)(lVar13 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
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
LAB_039e6074:
            *(float *)(in_stack_00000020 + 0x354) = fVar23;
            return 1;
          }
        }
      }
      goto LAB_039e6860;
    }
    if ((int)uVar9 < 0x21fefc) {
      if (uVar9 == 0x20d669) {
LAB_039e3f44:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
      }
      else {
        if (uVar9 != 0x21fefb) {
          return 0;
        }
LAB_039e29b0:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01dc4f30();
          lVar13 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar13 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                    (param_1,*(undefined8 *)(lVar13 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
          puVar14 = *(undefined4 **)
                     (*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
          uVar8 = *puVar14;
          uVar29 = puVar14[1];
          uVar28 = puVar14[2];
          uVar11 = FUN_03d69658(0,0,uVar27,0);
          if (DAT_044a2dba == '\0') {
            FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
            DAT_044a2dba = '\x01';
          }
          uStack0000000000000004 =
               (undefined4)((ulong)*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc) >> 0x20)
          ;
          goto LAB_039e3c60;
        }
      }
      goto LAB_039e6860;
    }
    if (uVar9 != 0x2248dd) {
      if (uVar9 == 0x680065) {
LAB_039e261c:
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          FUN_026b31b0(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_04236328);
          uVar12 = FUN_03390e50(&stack0x0000026c,0);
          uVar21 = FUN_03390e50(&stack0x0000026c,0);
          uVar12 = FUN_03279ae0(*(undefined8 *)PTR_DAT_04236390,uVar12,
                                *(undefined8 *)PTR_DAT_042363a8,uVar21,0);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)
                                Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                              );
          }
          FUN_03d40fd0(uVar12,0);
        }
        FUN_026b2fb0(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_04236358);
        return 1;
      }
      if (uVar9 != 0x691282) {
        return 0;
      }
      goto LAB_039e423c;
    }
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *(long *)PTR_DAT_04235450;
    lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
    if (lVar18 == 0) goto LAB_039e68c4;
  }
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
  uVar8 = *(undefined4 *)(lVar18 + 0x24);
  *(undefined4 *)(in_stack_00000020 + 0x6a4) = 0xffffffff;
  if (*(int *)(lVar18 + 0x28) == 0) {
LAB_039e1e64:
    puVar5 = 
    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
    ;
    uVar12 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar11 = FUN_03d749a8(uVar12,0,0);
    if ((uVar11 & 1) == 0) {
      uVar12 = *(undefined8 *)(in_stack_00000020 + 0x690);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = FUN_03d749a8(uVar12,0,0);
      if ((uVar11 & 1) != 0) {
LAB_039e625c:
        uVar12 = *(undefined8 *)(in_stack_00000020 + 0x690);
        goto LAB_039e6264;
      }
      puVar17 = (undefined8 *)(in_stack_00000020 + 0x690);
      uVar12 = *puVar17;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = FUN_03d755c0(uVar12,0,0);
      if ((uVar11 & 1) != 0) {
        uVar12 = FUN_039f558c(0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar5);
        }
        uVar11 = FUN_03d749a8(uVar12,0,0);
        if ((uVar11 & 1) == 0) {
          uVar12 = FUN_02146300(*(undefined8 *)PTR_DAT_042363a0,*(undefined8 *)PTR_DAT_042362e0);
        }
        else {
          uVar12 = FUN_039f558c(0);
        }
        *puVar17 = uVar12;
        thunk_FUN_01e10808(puVar17,uVar12);
        goto LAB_039e625c;
      }
    }
    else {
      uVar12 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_039e6264:
      *(undefined8 *)(in_stack_00000020 + 0x698) = uVar12;
      thunk_FUN_01e10808(in_stack_00000020 + 0x698);
    }
    uVar12 = *(undefined8 *)(in_stack_00000020 + 0x698);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar11 = FUN_03d755c0(uVar12,0,0);
    if ((uVar11 & 1) != 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
      if (lVar18 == 0) goto LAB_039e68c4;
    }
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
    if (*(int *)(lVar18 + 0x28) == 1) goto LAB_039e1e64;
    uVar11 = FUN_039aa1fc(uVar8,&stack0x000002d8,0);
    puVar5 = 
    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
    ;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = FUN_03d755c0(in_stack_000002d8,0,0);
      if ((uVar11 & 1) != 0) {
        lVar13 = *(long *)PTR_DAT_04235450;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar13 = *(long *)PTR_DAT_04235450;
        }
        lVar18 = *(long *)(lVar13 + 0xb8);
        lVar19 = *(long *)(lVar18 + 0x78);
        in_stack_000002d8 = 0;
        if (lVar19 != 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          }
          lVar13 = *(long *)(lVar18 + 0x88);
          if (lVar13 == 0) goto LAB_039e68c4;
          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_039e6860;
          uVar12 = FUN_0326cf90(0,*(undefined8 *)(lVar18 + 0x80),*(undefined4 *)(lVar13 + 0x2c),
                                *(undefined4 *)(lVar13 + 0x30),0);
          in_stack_000002d8 =
               (**(code **)(lVar19 + 0x18))
                         (*(undefined8 *)(lVar19 + 0x40),uVar8,uVar12,*(undefined8 *)(lVar19 + 0x28)
                         );
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar11 = FUN_03d755c0(in_stack_000002d8,0,0);
        if ((uVar11 & 1) != 0) {
          uVar12 = FUN_039f55a8(0);
          lVar13 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(lVar13);
            lVar13 = *(long *)PTR_DAT_04235450;
          }
          lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
          if (*(int *)(lVar18 + 0x18) == 0) goto LAB_039e6860;
          uVar21 = FUN_0326cf90(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),0);
          uVar12 = FUN_0326dc80(uVar12,uVar21,0);
          in_stack_000002d8 = FUN_02146300(uVar12,*(undefined8 *)PTR_DAT_042362e0);
        }
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = FUN_03d755c0(in_stack_000002d8,0,0);
      if ((uVar11 & 1) != 0) {
        return 0;
      }
      FUN_039a9e2c(uVar8,in_stack_000002d8,0);
    }
    *(undefined8 *)(in_stack_00000020 + 0x698) = in_stack_000002d8;
    thunk_FUN_01e10808(in_stack_00000020 + 0x698);
  }
  lVar13 = *(long *)PTR_DAT_04235450;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar13 = *(long *)PTR_DAT_04235450;
  }
  lVar18 = *(long *)(lVar13 + 0xb8);
  lVar19 = *(long *)(lVar18 + 0x88);
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
    if (*(int *)(lVar13 + 0xe0) == 0) {
      lVar13 = thunk_FUN_01dc4f30();
      lVar18 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
      lVar19 = *(long *)(lVar18 + 0x88);
      if (lVar19 == 0) goto LAB_039e68c4;
    }
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_039e6860;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                              (lVar13,*(undefined8 *)(lVar18 + 0x80),*(undefined4 *)(lVar19 + 0x2c),
                               *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
    iVar10 = -0x80000000;
    if (fVar23 != INFINITY) {
      iVar10 = (int)fVar23;
    }
    if (iVar10 == -0x8000) {
      return 0;
    }
    if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
       (lVar13 = FUN_039f8310(*(long *)(in_stack_00000020 + 0x698),0), lVar13 == 0))
    goto LAB_039e68c4;
    if (*(int *)(lVar13 + 0x18) + -1 < iVar10) {
      return 0;
    }
    *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
    lVar13 = *(long *)PTR_DAT_04235450;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar13 = *(long *)PTR_DAT_04235450;
  }
  uVar9 = 0;
  uVar8 = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x68);
  plVar15 = (long *)(in_stack_00000020 + 0x698);
  *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
  *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
LAB_039e63cc:
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar13 = *(long *)PTR_DAT_04235450;
  }
  lVar19 = *(long *)(lVar13 + 0xb8);
  lVar18 = *(long *)(lVar19 + 0x88);
  if (lVar18 == 0) goto LAB_039e68c4;
  if (*(int *)(lVar18 + 0x18) <= (int)uVar9) {
LAB_039e6864:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar18 = *plVar15;
    if (lVar18 != 0) {
      uVar12 = *(undefined8 *)(lVar18 + 0x20);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar13 = *(long *)PTR_DAT_04235450;
      }
      uVar8 = FUN_039aa7dc(uVar12,lVar18,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_039e68c4;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar13 = *(long *)PTR_DAT_04235450;
    lVar19 = *(long *)(lVar13 + 0xb8);
    lVar18 = *(long *)(lVar19 + 0x88);
    if (lVar18 == 0) goto LAB_039e68c4;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_039e6860;
  lVar22 = (long)(int)uVar9;
  if (*(int *)(lVar18 + lVar22 * 0x18 + 0x20) == 0) goto LAB_039e6864;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar13 = *(long *)PTR_DAT_04235450;
    lVar19 = *(long *)(lVar13 + 0xb8);
    lVar18 = *(long *)(lVar19 + 0x88);
    if (lVar18 == 0) goto LAB_039e68c4;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_039e6860;
  iVar10 = *(int *)(lVar18 + lVar22 * 0x18 + 0x20);
  if (iVar10 < 0xa954) {
    if (iVar10 < 0x7754) {
      if (iVar10 == 0x6851) {
LAB_039e65f4:
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
          lVar18 = *(long *)(lVar19 + 0x88);
          if (lVar18 == 0) goto LAB_039e68c4;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_039e6860;
        lVar18 = lVar18 + lVar22 * 0x18;
        iVar10 = FUN_039ed2f0(in_stack_00000020,*(undefined8 *)(lVar19 + 0x80),
                              *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                              lVar19 + 0x90);
        if (iVar10 != 3) {
          return 0;
        }
        lVar13 = *(long *)PTR_DAT_04235450;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar13 = *(long *)PTR_DAT_04235450;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
        if (lVar13 == 0) goto LAB_039e68c4;
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_039e6860;
        iVar10 = -0x80000000;
        if (*(float *)(lVar13 + 0x20) != INFINITY) {
          iVar10 = (int)*(float *)(lVar13 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          lVar13 = FUN_039da3cc(in_stack_00000020);
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x494);
          uVar12 = *(undefined8 *)(in_stack_00000020 + 0x698);
          uVar29 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
          lVar18 = *(long *)PTR_DAT_04235450;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(lVar18);
            lVar18 = *(long *)PTR_DAT_04235450;
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x90);
          if (lVar18 != 0) {
            if ((1 < *(uint *)(lVar18 + 0x18)) && (*(uint *)(lVar18 + 0x18) != 2)) {
              if (lVar13 != 0) {
                iVar10 = -0x80000000;
                if (*(float *)(lVar18 + 0x24) != INFINITY) {
                  iVar10 = (int)*(float *)(lVar18 + 0x24);
                }
                iVar1 = -0x80000000;
                if (*(float *)(lVar18 + 0x28) != INFINITY) {
                  iVar1 = (int)*(float *)(lVar18 + 0x28);
                }
                Unity_VisualScripting_FullSerializer_fsWeakReferenceConverter___ctor
                          (lVar13,uVar8,uVar12,uVar29,iVar10,iVar1,0);
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
    lVar19 = *plVar15;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04235450 + 0xb8) + 0x88);
      if (lVar18 == 0) goto LAB_039e68c4;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_039e6860;
    lVar13 = FUN_039f965c(lVar19,*(undefined4 *)(lVar18 + lVar22 * 0x18 + 0x24),1,&stack0x00000268,0
                         );
    *plVar15 = lVar13;
    thunk_FUN_01e10808(plVar15,lVar13);
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
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar18 = *(long *)(lVar19 + 0x88);
        if (lVar18 == 0) goto LAB_039e68c4;
      }
      if (1 < *(uint *)(lVar18 + 0x18)) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                  (lVar13,*(undefined8 *)(lVar19 + 0x80),
                                   *(undefined4 *)(lVar18 + 0x44),*(undefined4 *)(lVar18 + 0x48),
                                   &stack0x00000070);
        iVar10 = -0x80000000;
        if (fVar23 != INFINITY) {
          iVar10 = (int)fVar23;
        }
        if (iVar10 == -0x8000) {
          return 0;
        }
        if ((*plVar15 != 0) && (lVar13 = FUN_039f8310(*plVar15,0), lVar13 != 0)) {
          if (*(int *)(lVar13 + 0x18) + -1 < iVar10) {
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
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar18 = *(long *)(lVar19 + 0x88);
        if (lVar18 == 0) goto LAB_039e68c4;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_039e6860;
      lVar18 = lVar18 + lVar22 * 0x18;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)Unity_VisualScripting_VariableDeclarations__Set
                                (lVar13,*(undefined8 *)(lVar19 + 0x80),
                                 *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                 &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar23 != 0.0;
    }
    else {
      if (iVar10 != 0x2ef43) {
        return 0;
      }
LAB_039e676c:
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = thunk_FUN_01dc4f30();
        lVar19 = *(long *)(*(long *)PTR_DAT_04235450 + 0xb8);
        lVar18 = *(long *)(lVar19 + 0x88);
        if (lVar18 == 0) goto LAB_039e68c4;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_039e6860;
      lVar18 = lVar18 + lVar22 * 0x18;
      uVar8 = FUN_039ed0a4(lVar13,*(undefined8 *)(lVar19 + 0x80),*(undefined4 *)(lVar18 + 0x2c),
                           *(undefined4 *)(lVar18 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
    }
  }
LAB_039e684c:
  uVar9 = uVar9 + 1;
  lVar13 = *(long *)PTR_DAT_04235450;
  goto LAB_039e63cc;
}


