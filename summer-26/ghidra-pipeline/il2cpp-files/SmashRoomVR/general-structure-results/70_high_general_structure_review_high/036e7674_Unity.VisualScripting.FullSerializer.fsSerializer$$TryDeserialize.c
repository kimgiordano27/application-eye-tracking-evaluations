/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$TryDeserialize
ENTRY_POINT: 036e7674
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x036eca44) */

uint Unity_VisualScripting_FullSerializer_fsSerializer__TryDeserialize(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  char unaff_w19;
  int unaff_w20;
  uint *puVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined4 unaff_w23;
  long lVar21;
  ulong unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  int unaff_w28;
  uint uVar22;
  uint unaff_w29;
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
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) goto LAB_036ecd10;
    *(short *)(param_1 + unaff_x24 * 2 + 0x20) = (short)unaff_w29;
    if (unaff_w19 != '\x01') goto switchD_036e76b8_caseD_3;
    unaff_w19 = '\x01';
    switch(unaff_w23) {
    case 0:
      iVar9 = (int)unaff_x24;
      if (((unaff_w29 < 0x2f) && ((1L << ((ulong)unaff_w29 & 0x3f) & 0x680000000000U) != 0)) ||
         (unaff_w29 - 0x30 < 10)) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
        if (lVar12 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
        lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
        iVar16 = *(int *)(lVar12 + 0x30);
        unaff_w23 = 1;
LAB_036e7720:
        *(undefined4 *)(lVar12 + 0x28) = unaff_w23;
        *(int *)(lVar12 + 0x2c) = iVar9;
        *(int *)(lVar12 + 0x30) = iVar16 + 1;
      }
      else {
        if (unaff_w29 != 0x22) {
          if (unaff_w29 == 0x23) {
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
            }
            lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar12 != 0) {
              if (unaff_w26 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
                iVar16 = *(int *)(lVar12 + 0x30);
                unaff_w23 = 4;
                goto LAB_036e7720;
              }
              goto LAB_036ecd10;
            }
          }
          else {
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
            }
            lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar12 != 0) {
              if (unaff_w26 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
                unaff_w23 = 2;
                in_stack_00000028._4_4_ = 0;
                *(int *)(lVar12 + 0x2c) = iVar9;
                *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
                *(uint *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) * 0x21 ^ unaff_w29;
                *(undefined4 *)(lVar12 + 0x28) = 2;
                unaff_w19 = '\x01';
                break;
              }
              goto LAB_036ecd10;
            }
          }
          goto LAB_036ecd74;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
        if (lVar12 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
        lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
        unaff_w23 = 2;
        *(undefined4 *)(lVar12 + 0x28) = 2;
        *(int *)(lVar12 + 0x2c) = iVar9 + 1;
      }
      in_stack_00000028._4_4_ = 0;
      unaff_w19 = '\x01';
      goto LAB_036e7b38;
    case 1:
      if ((int)unaff_w29 < 0x65) {
        if (unaff_w29 == 0x20) {
LAB_036e7910:
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
          }
          lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
          if (lVar12 == 0) goto LAB_036ecd74;
          if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
          in_stack_00000028._4_4_ = 0;
        }
        else {
          if (unaff_w29 != 0x25) {
LAB_036e7a08:
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
            }
            lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar12 != 0) {
              if (unaff_w26 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
                iVar9 = *(int *)(lVar12 + 0x30);
                unaff_w23 = 1;
                goto LAB_036e7a4c;
              }
              goto LAB_036ecd10;
            }
            goto LAB_036ecd74;
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
          }
          lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
          if (lVar12 == 0) goto LAB_036ecd74;
          if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
          in_stack_00000028._4_4_ = 2;
        }
      }
      else {
        if (unaff_w29 == 0x70) goto LAB_036e7910;
        if (unaff_w29 != 0x65) goto LAB_036e7a08;
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
        if (lVar12 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
        in_stack_00000028._4_4_ = 1;
      }
      *(int *)(lVar12 + (long)(int)unaff_w26 * 0x18 + 0x34) = in_stack_00000028._4_4_;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)PTR_DAT_03d9c920;
      }
      lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
      if (lVar12 == 0) goto LAB_036ecd74;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w26 + 1) goto LAB_036ecd10;
LAB_036e7988:
      unaff_w26 = unaff_w26 + 1;
      lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
      unaff_w23 = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
      unaff_w19 = '\x02';
      break;
    case 2:
      if (unaff_w29 == 0x22) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
        if (lVar12 != 0) {
          unaff_w26 = unaff_w26 + 1;
          if (unaff_w26 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
            unaff_w23 = 0;
            in_stack_00000028._4_4_ = 0;
            *(undefined8 *)(lVar12 + 0x20) = 0;
            *(undefined8 *)(lVar12 + 0x28) = 0;
            *(undefined8 *)(lVar12 + 0x30) = 0;
            goto LAB_036e7b34;
          }
          goto LAB_036ecd10;
        }
      }
      else {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
        if (lVar12 != 0) {
          if (unaff_w26 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
            unaff_w19 = '\x01';
            unaff_w23 = 2;
            *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
            *(uint *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) * 0x21 ^ unaff_w29;
            break;
          }
          goto LAB_036ecd10;
        }
      }
      goto LAB_036ecd74;
    case 4:
      if (unaff_w29 == 0x20) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
        if (lVar12 != 0) {
          if (unaff_w26 + 1 < *(uint *)(lVar12 + 0x18)) {
            in_stack_00000028._4_4_ = 0;
            goto LAB_036e7988;
          }
          goto LAB_036ecd10;
        }
        goto LAB_036ecd74;
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)PTR_DAT_03d9c920;
      }
      lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
      if (lVar12 == 0) goto LAB_036ecd74;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
      lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
      iVar9 = *(int *)(lVar12 + 0x30);
      unaff_w23 = 4;
LAB_036e7a4c:
      unaff_w19 = '\x01';
      *(int *)(lVar12 + 0x30) = iVar9 + 1;
    }
switchD_036e76b8_caseD_3:
    if (unaff_w29 == 0x3d) {
      unaff_w19 = '\x01';
    }
    if ((unaff_w29 == 0x20) && (unaff_w19 == '\0')) {
      if ((unaff_x25 & 1) != 0) {
        return 0;
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)PTR_DAT_03d9c920;
      }
      lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
      if (lVar12 == 0) break;
      unaff_w26 = unaff_w26 + 1;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
      unaff_w23 = 0;
      lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
      unaff_x25 = 1;
      in_stack_00000028._4_4_ = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
LAB_036e7ac0:
      unaff_w19 = '\0';
    }
    else if (unaff_w19 == '\x02') {
      if (unaff_w29 == 0x20) goto LAB_036e7ac0;
LAB_036e7b34:
      unaff_w19 = '\x02';
    }
    else if (unaff_w19 == '\0') {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)PTR_DAT_03d9c920;
      }
      lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_036ecd10;
      lVar12 = lVar12 + (long)(int)unaff_w26 * 0x18;
      unaff_w19 = '\0';
      *(uint *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) * 7 + unaff_w29;
    }
LAB_036e7b38:
    unaff_x24 = unaff_x24 + 1;
    uVar8 = (uint)unaff_x24;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)(unaff_w27 + uVar8)) {
      return 0;
    }
    uVar22 = unaff_w27 + uVar8;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar22) goto LAB_036ecd10;
    puVar19 = (uint *)(unaff_x22 + (long)(int)uVar22 * (long)unaff_w28 + 0x20);
    if (*puVar19 == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *(long *)PTR_DAT_03d9c920;
    }
    lVar12 = *(long *)(param_2 + 0xb8);
    lVar17 = *(long *)(lVar12 + 0x80);
    if (lVar17 == 0) break;
    if ((long)*(int *)(lVar17 + 0x18) <= (long)unaff_x24) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar22) goto LAB_036ecd10;
    unaff_w29 = *puVar19;
    if (unaff_w29 == 0x3c) {
      return 0;
    }
    if (unaff_w29 == 0x3e) {
      *in_stack_00000018 = unaff_w20 + uVar8;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)PTR_DAT_03d9c920;
        lVar12 = *(long *)(param_2 + 0xb8);
        lVar17 = *(long *)(lVar12 + 0x80);
        if (lVar17 == 0) break;
      }
      puVar4 = PTR_DAT_03d9c920;
      if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
      *(undefined2 *)(lVar17 + unaff_x24 * 2 + 0x20) = 0;
      if (*(char *)(in_stack_00000020 + 0x430) != '\0') {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)puVar4;
          lVar12 = *(long *)(param_2 + 0xb8);
        }
        lVar12 = *(long *)(lVar12 + 0x88);
        if (lVar12 == 0) break;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
        if (*(int *)(lVar12 + 0x20) != 0x33542d3) {
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)puVar4;
            lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar12 == 0) break;
          }
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
          if (*(int *)(lVar12 + 0x20) != 0x2f23db3) {
            return 0;
          }
        }
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)puVar4;
      }
      lVar12 = *(long *)(param_2 + 0xb8);
      lVar17 = *(long *)(lVar12 + 0x88);
      if (lVar17 == 0) break;
      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
      if (*(int *)(lVar17 + 0x20) == 0x33542d3) {
LAB_036e7d38:
        *(undefined1 *)(in_stack_00000020 + 0x430) = 0;
        return 1;
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)puVar4;
        lVar12 = *(long *)(param_2 + 0xb8);
        lVar17 = *(long *)(lVar12 + 0x88);
        if (lVar17 == 0) break;
      }
      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
      if (*(int *)(lVar17 + 0x20) == 0x2f23db3) goto LAB_036e7d38;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)puVar4;
        lVar12 = *(long *)(param_2 + 0xb8);
      }
      lVar17 = *(long *)(lVar12 + 0x80);
      if (lVar17 == 0) break;
      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
      sVar3 = *(short *)(lVar17 + 0x20);
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *(long *)puVar4;
        lVar12 = *(long *)(param_2 + 0xb8);
        lVar17 = *(long *)(lVar12 + 0x80);
      }
      if (uVar8 == 4 && sVar3 == 0x23) {
        uVar11 = 4;
LAB_036e7e74:
        uVar7 = FUN_036f3140(param_2,lVar17,uVar11);
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar7;
        uVar11 = *(undefined8 *)PTR_DAT_03d9d6d0;
      }
      else {
        if (lVar17 == 0) break;
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
        sVar3 = *(short *)(lVar17 + 0x20);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)puVar4;
          lVar12 = *(long *)(param_2 + 0xb8);
          lVar17 = *(long *)(lVar12 + 0x80);
        }
        if (uVar8 == 5 && sVar3 == 0x23) {
          uVar11 = 5;
          goto LAB_036e7e74;
        }
        if (lVar17 == 0) break;
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
        sVar3 = *(short *)(lVar17 + 0x20);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)puVar4;
          lVar12 = *(long *)(param_2 + 0xb8);
          lVar17 = *(long *)(lVar12 + 0x80);
        }
        if (uVar8 == 7 && sVar3 == 0x23) {
          uVar11 = 7;
          goto LAB_036e7e74;
        }
        if (lVar17 == 0) break;
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
        sVar3 = *(short *)(lVar17 + 0x20);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)puVar4;
          lVar12 = *(long *)(param_2 + 0xb8);
        }
        if (uVar8 == 9 && sVar3 == 0x23) {
          lVar17 = *(long *)(lVar12 + 0x80);
          uVar11 = 9;
          goto LAB_036e7e74;
        }
        lVar17 = *(long *)(lVar12 + 0x88);
        if (lVar17 == 0) break;
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
        uVar22 = *(uint *)(lVar17 + 0x20);
        if ((int)uVar22 < 0x2d8ff) {
          if ((int)uVar22 < 0xb94) {
            if (0x62 < (int)uVar22) {
              if (0x1b2 < (int)uVar22) {
                if (0x29e < (int)uVar22) {
                  bVar5 = uVar22 == 0x394;
                  if (0x394 < (int)uVar22) {
                    if (uVar22 == 0x39e) {
                      return 1;
                    }
                    if (uVar22 == 0xb8f) {
                      return 0;
                    }
                    if (uVar22 != 0xb93) {
                      return 0;
                    }
                    return 1;
                  }
LAB_036ea008:
                  return (uint)bVar5;
                }
                if (0x1be < (int)uVar22) {
                  if (0xe < uVar22 - 0x290) {
                    return 0;
                  }
                  return 0x4010U >> (ulong)(uVar22 - 0x290 & 0x1f) & 1;
                }
                if (uVar22 == 0x1bc) {
LAB_036ea208:
                  if (((*(byte *)(in_stack_00000020 + 600) >> 6 & 1) == 0) &&
                     (cVar6 = FUN_03705274(in_stack_00000020 + 0x260,0x40,0), cVar6 == '\0')) {
                    *(uint *)(in_stack_00000020 + 0x25c) =
                         *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffbf;
                  }
                  uVar7 = FUN_0217619c(in_stack_00000020 + 0x530,*(undefined8 *)PTR_DAT_03d9d720);
                  *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar7;
                  return 1;
                }
                if (uVar22 != 0x1be) {
                  return 0;
                }
LAB_036e9944:
                if ((*(byte *)(in_stack_00000020 + 600) >> 2 & 1) == 0) {
                  uVar7 = FUN_0217619c(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_03d9d720);
                  *(undefined4 *)(in_stack_00000020 + 0x158) = uVar7;
                  cVar6 = FUN_03705274(in_stack_00000020 + 0x260,4,0);
                  if (cVar6 == '\0') {
                    *(uint *)(in_stack_00000020 + 0x25c) =
                         *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffb;
                  }
                }
                uVar7 = FUN_0217619c(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_03d9d720);
                *(undefined4 *)(in_stack_00000020 + 0x158) = uVar7;
                return 1;
              }
              if ((int)uVar22 < 0x193) {
                if ((int)uVar22 < 0x74) {
                  if (uVar22 != 0x69) {
                    if (uVar22 != 0x73) {
                      return 0;
                    }
                    goto LAB_036e9ebc;
                  }
                  goto LAB_036ea2a8;
                }
                if (uVar22 == 0x75) goto LAB_036eb030;
                if (uVar22 == 0x18b) goto LAB_036eb148;
                if (uVar22 != 0x192) {
                  return 0;
                }
              }
              else {
                if ((int)uVar22 < 0x19f) {
                  if (uVar22 == 0x19c) goto LAB_036ea208;
                  if (uVar22 != 0x19e) {
                    return 0;
                  }
                  goto LAB_036e9944;
                }
                if (uVar22 == 0x1aa) {
                  return 1;
                }
                if (uVar22 == 0x1ab) {
LAB_036eb148:
                  if ((*(byte *)(in_stack_00000020 + 600) & 1) != 0) {
                    return 1;
                  }
                  cVar6 = FUN_03705274(in_stack_00000020 + 0x260,1,0);
                  if (cVar6 == '\0') {
                    *(uint *)(in_stack_00000020 + 0x25c) =
                         *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffe;
                    uVar7 = FUN_021775b8(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_03d9d6f0);
                    *(undefined4 *)(in_stack_00000020 + 0x214) = uVar7;
                    return 1;
                  }
                  return 1;
                }
                if (uVar22 != 0x1b2) {
                  return 0;
                }
              }
              if ((*(byte *)(in_stack_00000020 + 600) >> 1 & 1) != 0) {
                return 1;
              }
              uVar7 = FUN_02176e74(in_stack_00000020 + 0x5d0,*(undefined8 *)PTR_DAT_03d9d718);
              *(undefined4 *)(in_stack_00000020 + 0x5f0) = uVar7;
              cVar6 = FUN_03705274(in_stack_00000020 + 0x260,2,0);
              if (cVar6 != '\0') {
                return 1;
              }
              uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffd;
              goto LAB_036ea5c0;
            }
            if ((int)uVar22 < -0x32f64d99) {
              if ((int)uVar22 < -0x64bbe162) {
                if ((int)uVar22 < -0x70449a55) {
                  if (uVar22 == 0x8f9a8677) {
LAB_036eab68:
                    FUN_02177400(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_03d9d748);
                    if (*(int *)(in_stack_00000020 + 0x25c) == 1) {
                      *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
                      return 1;
                    }
                    uVar7 = FUN_021775b8(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_03d9d6f0);
                    *(undefined4 *)(in_stack_00000020 + 0x214) = uVar7;
                    return 1;
                  }
                  if (uVar22 != 0x8fbb65aa) {
                    return 0;
                  }
                  goto LAB_036ea164;
                }
                if (uVar22 == 0x91e417d1) goto LAB_036e97bc;
                if (uVar22 != 0x92d31273) {
                  if (uVar22 != 0x9b441e9d) {
                    return 0;
                  }
                  goto LAB_036e8d58;
                }
              }
              else {
                if ((int)uVar22 < -0x6147ec0e) {
                  if (uVar22 != 0x9c8f61ca) {
                    if (uVar22 != 0x9eb813f1) {
                      return 0;
                    }
LAB_036e97bc:
                    if ((*(byte *)(in_stack_00000020 + 600) >> 5 & 1) != 0) {
                      return 1;
                    }
                    cVar6 = FUN_03705274(in_stack_00000020 + 0x260,0x20,0);
                    if (cVar6 != '\0') {
                      return 1;
                    }
                    uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffdf;
                    goto LAB_036ea5c0;
                  }
LAB_036ea164:
                  if ((*(byte *)(in_stack_00000020 + 600) >> 3 & 1) != 0) {
                    return 1;
                  }
                  cVar6 = FUN_03705274(in_stack_00000020 + 0x260,8,0);
                  if (cVar6 != '\0') {
                    return 1;
                  }
                  uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffff7;
                  goto LAB_036ea5c0;
                }
                if (uVar22 != 0x9fa70e93) {
                  if (uVar22 != 0xcb42bfbd) {
                    if (uVar22 != 0xcd09b266) {
                      return 0;
                    }
                    goto Unity_VisualScripting_FullSerializer_fsMetaProperty__get_CanWrite;
                  }
LAB_036e8d58:
                  if (*(int *)(param_2 + 0xe0) == 0) {
                    param_2 = thunk_FUN_01ac7298();
                    lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                    lVar17 = *(long *)(lVar12 + 0x88);
                    if (lVar17 == 0) break;
                  }
                  if (*(int *)(lVar17 + 0x18) != 0) {
                    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                    fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                                 *(undefined4 *)(lVar17 + 0x2c),
                                                 *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                    if (fVar23 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000028._4_4_ == 0) {
                      fVar32 = DAT_00b55290;
                      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                        fVar32 = 1.0;
                      }
                      fVar23 = fVar23 * fVar32;
                    }
                    else if (in_stack_00000028._4_4_ == 1) {
                      fVar32 = DAT_00b55290;
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
                    goto LAB_036ec524;
                  }
                  goto LAB_036ecd10;
                }
              }
LAB_036e8f94:
              if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
                return 1;
              }
              cVar6 = FUN_03705274(in_stack_00000020 + 0x260,0x10,0);
              if (cVar6 != '\0') {
                return 1;
              }
              uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
LAB_036ea5c0:
              *(uint *)(in_stack_00000020 + 0x25c) = uVar8;
              return 1;
            }
            if ((int)uVar22 < -0x13b73941) {
              if (-0x3239ec63 < (int)uVar22) {
                if (uVar22 == 0xe5711531) {
LAB_036eac68:
                  *(undefined4 *)(in_stack_00000020 + 0x2c0) = 0xc6fffe00;
                  return 1;
                }
                if (uVar22 == 0xe571a456) {
LAB_036eac7c:
                  *(undefined4 *)(in_stack_00000020 + 0x408) = 0;
                  return 1;
                }
                uVar8 = 0xec48c6be;
LAB_036e86d4:
                if (uVar22 != uVar8) {
                  return 0;
                }
                if (*(int *)(param_2 + 0xe0) == 0) {
                  param_2 = thunk_FUN_01ac7298();
                  lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  lVar17 = *(long *)(lVar12 + 0x88);
                  if (lVar17 == 0) break;
                }
                if (*(int *)(lVar17 + 0x18) != 0) {
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                               *(undefined4 *)(lVar17 + 0x2c),
                                               *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                  if (fVar23 == -32768.0) {
                    return 0;
                  }
                  iVar9 = -0x80000000;
                  if (fVar23 != INFINITY) {
                    iVar9 = (int)fVar23;
                  }
                  if (iVar9 < 0x191) {
                    if (iVar9 < 0xc9) {
                      if ((iVar9 == 100) || (iVar9 == 200)) goto LAB_036ec0d4;
                    }
                    else if ((iVar9 == 300) || (iVar9 == 400)) goto LAB_036ec0d4;
                  }
                  else if (iVar9 < 0x259) {
                    if ((iVar9 == 500) || (iVar9 == 600)) goto LAB_036ec0d4;
                  }
                  else if ((iVar9 == 700) || ((iVar9 == 800 || (iVar9 == 900)))) {
LAB_036ec0d4:
                    *(int *)(in_stack_00000020 + 0x214) = iVar9;
                  }
                  uVar7 = *(undefined4 *)(in_stack_00000020 + 0x214);
                  in_stack_00000020 = in_stack_00000020 + 0x218;
                  puVar15 = (undefined8 *)PTR_DAT_03d9d6e0;
LAB_036ec120:
                  FUN_021773b8(in_stack_00000020,uVar7,*puVar15);
                  return 1;
                }
                goto LAB_036ecd10;
              }
              if (uVar22 != 0xcdc58478) {
                uVar8 = 0xcdc6139d;
                goto LAB_036e9bb0;
              }
LAB_036ea960:
              if (*(int *)(param_2 + 0xe0) == 0) {
                param_2 = thunk_FUN_01ac7298();
                lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                           *(undefined4 *)(lVar17 + 0x2c),
                                           *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ != 2) {
                if (in_stack_00000028._4_4_ == 1) {
                  fVar32 = DAT_00b55290;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                }
                else {
                  if (in_stack_00000028._4_4_ != 0) {
                    return 1;
                  }
                  fVar32 = DAT_00b55290;
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
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                iVar9 = FUN_0396ac24(&stack0x00000270,0);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar24 = (float)FUN_0396ac34(&stack0x00000270,0);
                  if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                    fVar30 = DAT_00b55290;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar30 = 1.0;
                    }
                    memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x50),
                            0x60);
                    fVar25 = (float)FUN_0396ac44(&stack0x00000270,0);
                    *(float *)(in_stack_00000020 + 0x2c0) =
                         (fVar32 / (float)iVar9) * fVar24 * fVar30 * ((fVar23 * fVar25) / 100.0);
                    return 1;
                  }
                }
              }
              break;
            }
            if ((int)uVar22 < 0x4a) {
              if (uVar22 == 0x42) {
LAB_036ea5c8:
                *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 1;
                FUN_03705178(in_stack_00000020 + 0x260,1,0);
                *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
                return 1;
              }
              if (uVar22 != 0x49) {
                return 0;
              }
LAB_036ea2a8:
              *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 2;
              FUN_03705178(in_stack_00000020 + 0x260,2,0);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
              if (*(int *)(lVar17 + 0x38) != 0x43833) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *(long *)PTR_DAT_03d9c920;
                  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                  if (lVar17 == 0) break;
                }
                if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
                if (*(int *)(lVar17 + 0x38) != 0x2da13) {
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    bVar2 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b8);
                    uVar8 = (uint)bVar2;
                    *(uint *)(in_stack_00000020 + 0x5f0) = (uint)bVar2;
                    goto LAB_036eb660;
                  }
                  break;
                }
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
              if (lVar17 != 0) {
                if (1 < *(uint *)(lVar17 + 0x18)) {
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)FUN_036f384c(lVar12,*(undefined8 *)
                                                       (*(long *)(lVar12 + 0xb8) + 0x80),
                                               *(undefined4 *)(lVar17 + 0x44),
                                               *(undefined4 *)(lVar17 + 0x48),&stack0x00000070);
                  uVar8 = 0x80000000;
                  if (fVar23 != INFINITY) {
                    uVar8 = (int)fVar23;
                  }
                  *(uint *)(in_stack_00000020 + 0x5f0) = uVar8;
                  if (0x168 < uVar8 + 0xb4) {
                    return 0;
                  }
LAB_036eb660:
                  FUN_02176e2c(in_stack_00000020 + 0x5d0,uVar8,*(undefined8 *)PTR_DAT_03d9d6b8);
                  return 1;
                }
                goto LAB_036ecd10;
              }
              break;
            }
            if (uVar22 != 0x53) {
              if (uVar22 != 0x55) {
                if (uVar22 != 0x62) {
                  return 0;
                }
                goto LAB_036ea5c8;
              }
LAB_036eb030:
              *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 4;
              FUN_03705178(in_stack_00000020 + 0x260,4,0);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
              if (*(int *)(lVar17 + 0x38) == 0x44d63) {
LAB_036eb0e4:
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *(long *)PTR_DAT_03d9c920;
                }
                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
                uVar11 = FUN_036f3554(lVar12,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                      *(undefined4 *)(lVar17 + 0x44),*(undefined4 *)(lVar17 + 0x48))
                ;
                *(int *)(in_stack_00000020 + 0x158) = (int)uVar11;
                bVar2 = *(byte *)(in_stack_00000020 + 0x4ef);
                if (((uint)((ulong)uVar11 >> 0x18) & 0xff) <=
                    (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                  bVar2 = (byte)((ulong)uVar11 >> 0x18);
                }
                *(byte *)(in_stack_00000020 + 0x15b) = bVar2;
                uVar7 = *(undefined4 *)(in_stack_00000020 + 0x158);
              }
              else {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *(long *)PTR_DAT_03d9c920;
                  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                  if (lVar17 == 0) break;
                }
                if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
                if (*(int *)(lVar17 + 0x38) == 0x2ef43) goto LAB_036eb0e4;
                uVar7 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
                *(undefined4 *)(in_stack_00000020 + 0x158) = uVar7;
              }
              uVar11 = *(undefined8 *)PTR_DAT_03d9d6d0;
              in_stack_00000020 = in_stack_00000020 + 0x510;
              goto LAB_036e7e94;
            }
LAB_036e9ebc:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x40;
            FUN_03705178(in_stack_00000020 + 0x260,0x40,0);
            lVar12 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *(long *)PTR_DAT_03d9c920;
            }
            lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
            if (lVar17 == 0) break;
            if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
            if (*(int *)(lVar17 + 0x38) == 0x44d63) {
LAB_036e9f70:
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
              uVar11 = FUN_036f3554(lVar12,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar17 + 0x44),*(undefined4 *)(lVar17 + 0x48));
              *(int *)(in_stack_00000020 + 0x15c) = (int)uVar11;
              bVar2 = *(byte *)(in_stack_00000020 + 0x4ef);
              if (((uint)((ulong)uVar11 >> 0x18) & 0xff) <=
                  (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                bVar2 = (byte)((ulong)uVar11 >> 0x18);
              }
              *(byte *)(in_stack_00000020 + 0x15f) = bVar2;
              uVar7 = *(undefined4 *)(in_stack_00000020 + 0x15c);
            }
            else {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
              if (*(int *)(lVar17 + 0x38) == 0x2ef43) goto LAB_036e9f70;
              uVar7 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
              *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar7;
            }
            uVar11 = *(undefined8 *)PTR_DAT_03d9d6d0;
            in_stack_00000020 = in_stack_00000020 + 0x530;
            goto LAB_036e7e94;
          }
          if (0x79c1 < (int)uVar22) {
            if (0x22ef4 < (int)uVar22) {
              if ((int)uVar22 < 0x260f5) {
                if (0x23290 < (int)uVar22) {
                  if (uVar22 == 0x238b8) goto LAB_036eabc4;
                  if (uVar22 == 0x25a2e) goto LAB_036eabe4;
                  uVar8 = 0x60f4;
LAB_036e8518:
                  if (uVar22 != (uVar8 | 0x20000)) {
                    return 0;
                  }
                  if ((*(byte *)(in_stack_00000020 + 0x259) >> 1 & 1) != 0) {
                    return 1;
                  }
                  FUN_021767fc(&stack0x00000070,in_stack_00000020 + 0x550,
                               *(undefined8 *)PTR_DAT_03d9d738);
                  cVar6 = FUN_03705274(in_stack_00000020 + 0x260,0x200,0);
                  if (cVar6 != '\0') {
                    return 1;
                  }
                  uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffdff;
                  goto LAB_036ea5c0;
                }
                if (uVar22 != 0x22f09) {
                  uVar8 = 0x3290;
                  goto LAB_036e982c;
                }
              }
              else {
                if (0x26490 < (int)uVar22) {
                  if (uVar22 == 0x26ab8) {
LAB_036eabc4:
                    uVar7 = System_ValueTuple<object,_object>__ToString
                                      (in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_03d9d730);
                    *(undefined4 *)(in_stack_00000020 + 0x1e8) = uVar7;
                    return 1;
                  }
                  if (uVar22 == 0x2d7ad) goto LAB_036ea8b8;
                  uVar8 = 0x2d8fe;
LAB_036e9700:
                  if (uVar22 != uVar8) {
                    return 0;
                  }
                  if (*(int *)(param_2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    param_2 = *(long *)PTR_DAT_03d9c920;
                    lVar12 = *(long *)(param_2 + 0xb8);
                    lVar17 = *(long *)(lVar12 + 0x88);
                    if (lVar17 == 0) break;
                  }
                  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
                  if (*(int *)(lVar17 + 0x30) != 3) {
                    return 0;
                  }
                  if (*(int *)(param_2 + 0xe0) == 0) {
                    param_2 = thunk_FUN_01ac7298();
                    lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  }
                  lVar12 = *(long *)(lVar12 + 0x80);
                  if (lVar12 != 0) {
                    if ((7 < *(uint *)(lVar12 + 0x18)) && (*(uint *)(lVar12 + 0x18) != 8)) {
                      uVar11 = FUN_036f2b64(param_2,*(undefined2 *)(lVar12 + 0x2e));
                      cVar6 = FUN_036f2b64(uVar11,*(undefined2 *)(lVar12 + 0x30));
                      *(char *)(in_stack_00000020 + 0x4ef) = cVar6 + (char)uVar11 * '\x10';
                      return 1;
                    }
                    goto LAB_036ecd10;
                  }
                  break;
                }
                if (uVar22 != 0x26109) {
                  uVar8 = 0x6490;
LAB_036e982c:
                  if (uVar22 == (uVar8 | 0x20000)) {
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
              lVar12 = *(long *)(in_stack_00000020 + 0x368);
              if ((lVar12 != 0) && (lVar17 = *(long *)(lVar12 + 0x48), lVar17 != 0)) {
                uVar8 = *(uint *)(lVar12 + 0x28);
                if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar8) {
                  return 1;
                }
                if (uVar8 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)uVar8 * 0x28;
                  *(int *)(lVar17 + 0x38) =
                       *(int *)(in_stack_00000020 + 0x494) - *(int *)(lVar17 + 0x34);
                  *(uint *)(lVar12 + 0x28) = uVar8 + 1;
                  return 1;
                }
                goto LAB_036ecd10;
              }
              break;
            }
            if ((int)uVar22 < 0xa83b) {
              if (0x7fe9 < (int)uVar22) {
                if (uVar22 == 0xa15f) goto LAB_036e8fe4;
                if (uVar22 == 0xa825) goto LAB_036eac88;
                if (uVar22 != 0xa83a) {
                  return 0;
                }
                goto LAB_036e87e0;
              }
              if (uVar22 == 0x79d7) goto LAB_036ea260;
              if (uVar22 != 0x7fe9) {
                return 0;
              }
            }
            else {
              if ((int)uVar22 < 0xabd8) {
                if (uVar22 == 0xabc1) {
LAB_036ea64c:
                  *(undefined1 *)(in_stack_00000020 + 0x2da) = 1;
                  return 1;
                }
                if (uVar22 != 0xabd7) {
                  return 0;
                }
LAB_036ea260:
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
              if (uVar22 != 0xb1e9) {
                if (uVar22 == 0x2282e) {
LAB_036eabe4:
                  if (*(int *)(param_2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  }
                  FUN_02177af0(&stack0x00000070,lVar12 + 0x10,*(undefined8 *)PTR_DAT_03d9d740);
                  uVar11 = in_stack_00000088;
                  uVar10 = _uStack0000000000000070;
                  *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_00000078;
                  thunk_FUN_01b4f09c(in_stack_00000020 + 0x100);
                  *(undefined8 *)(in_stack_00000020 + 0x118) = uVar11;
                  thunk_FUN_01b4f09c(in_stack_00000020 + 0x118,uVar11);
                  *(int *)(in_stack_00000020 + 0x120) = (int)uVar10;
                  return 1;
                }
                uVar8 = 0x2ef4;
                goto LAB_036e8518;
              }
            }
            if (*(int *)(param_2 + 0xe0) == 0) {
              param_2 = thunk_FUN_01ac7298();
              lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              lVar17 = *(long *)(lVar12 + 0x88);
              if (lVar17 == 0) break;
            }
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            uVar10 = FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                  *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                  &stack0x00000070);
            fVar23 = (float)uVar10;
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 2) {
              uVar10 = (ulong)(uint)((fVar23 * *(float *)(in_stack_00000020 + 0x1e4)) / 100.0);
            }
            else if (in_stack_00000028._4_4_ == 1) {
              uVar10 = (ulong)(uint)(fVar23 * *(float *)(in_stack_00000020 + 0x1e4));
            }
            else {
              if (in_stack_00000028._4_4_ != 0) {
                return 0;
              }
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x80);
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_036ecd10;
              if (*(short *)(lVar17 + 0x2a) != 0x2b) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x80);
                  if (lVar17 == 0) break;
                }
                if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_036ecd10;
                if (*(short *)(lVar17 + 0x2a) != 0x2d) {
                  *(float *)(in_stack_00000020 + 0x1e8) = fVar23;
                  goto LAB_036ebd54;
                }
              }
              uVar10 = (ulong)(uint)(fVar23 + *(float *)(in_stack_00000020 + 0x1e4));
            }
            *(int *)(in_stack_00000020 + 0x1e8) = (int)uVar10;
LAB_036ebd54:
            FUN_0217877c(uVar10,in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_03d9d6c8);
            return 1;
          }
          if ((int)uVar22 < 0x19a7) {
            if ((int)uVar22 < 0x11cd) {
              if ((int)uVar22 < 0xc90) {
                bVar5 = uVar22 == 0xb9d;
                goto LAB_036ea008;
              }
              if (uVar22 == 0xc93) {
                return 1;
              }
              if (uVar22 == 0xc9d) {
                return 1;
              }
              if (uVar22 != 0x11cc) {
                return 0;
              }
LAB_036e8bb8:
              if (*(int *)(param_2 + 0xe0) == 0) {
                param_2 = thunk_FUN_01ac7298();
                lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                             *(undefined4 *)(lVar17 + 0x2c),
                                             *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 2) {
                  *(float *)(in_stack_00000020 + 0x640) =
                       (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
                  return 1;
                }
                fVar32 = DAT_00b55290;
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
LAB_036ebfb8:
                *(float *)(in_stack_00000020 + 0x640) = fVar23;
                return 1;
              }
              goto LAB_036ecd10;
            }
            if ((int)uVar22 < 0x1287) {
              if (uVar22 == 0x1278) {
LAB_036ea750:
                if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
                fVar24 = *(float *)(in_stack_00000020 + 0x404);
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar23 = (float)FUN_0396acd4(&stack0x00000270,0);
                fVar32 = 1.0;
                if (0.0 < fVar23) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar32 = (float)FUN_0396acd4(&stack0x00000270,0);
                }
                *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
                FUN_02178824(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                             *(undefined8 *)PTR_DAT_03d9d708);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  iVar9 = FUN_0396ac24(&stack0x00000270,0);
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                            0x60);
                    fVar32 = (float)FUN_0396ac34(&stack0x00000270,0);
                    if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                      fVar30 = *(float *)(in_stack_00000020 + 0x61c);
                      fVar24 = DAT_00b55290;
                      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                        fVar24 = 1.0;
                      }
                      memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50)
                              ,0x60);
                      fVar25 = (float)FUN_0396acc4(&stack0x00000270,0);
                      *(float *)(in_stack_00000020 + 0x61c) =
                           fVar30 + (fVar23 / (float)iVar9) * fVar32 * fVar24 * fVar25 *
                                    *(float *)(in_stack_00000020 + 0x404);
                      FUN_03705178(in_stack_00000020 + 0x260,0x100,0);
                      uVar8 = *(uint *)(in_stack_00000020 + 0x25c) | 0x100;
                      goto LAB_036ea8b0;
                    }
                  }
                }
                break;
              }
              uVar8 = 0x1286;
            }
            else {
              if (uVar22 == 0x18ec) goto LAB_036e8bb8;
              if (uVar22 == 0x1998) goto LAB_036ea750;
              uVar8 = 0x19a6;
            }
            if (uVar22 != uVar8) {
              return 0;
            }
            if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
            fVar24 = *(float *)(in_stack_00000020 + 0x404);
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar23 = (float)FUN_0396acb4(&stack0x00000270,0);
            fVar32 = 1.0;
            if (0.0 < fVar23) {
              if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar32 = (float)FUN_0396acb4(&stack0x00000270,0);
            }
            *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
            FUN_02178824(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                         *(undefined8 *)PTR_DAT_03d9d708);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              iVar9 = FUN_0396ac24(&stack0x00000270,0);
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_0396ac34(&stack0x00000270,0);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  fVar30 = *(float *)(in_stack_00000020 + 0x61c);
                  fVar24 = DAT_00b55290;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar24 = 1.0;
                  }
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar25 = (float)FUN_0396aca4(&stack0x00000270,0);
                  *(float *)(in_stack_00000020 + 0x61c) =
                       fVar30 + (fVar23 / (float)iVar9) * fVar32 * fVar24 * fVar25 *
                                *(float *)(in_stack_00000020 + 0x404);
                  FUN_03705178(in_stack_00000020 + 0x260,0x80,0);
                  uVar8 = *(uint *)(in_stack_00000020 + 0x25c) | 0x80;
LAB_036ea8b0:
                  *(uint *)(in_stack_00000020 + 0x25c) = uVar8;
                  return 1;
                }
              }
            }
            break;
          }
          if ((int)uVar22 < 0x5892) {
            if ((int)uVar22 < 0x5172) {
              if (uVar22 == 0x50c5) {
LAB_036ea954:
                *(undefined1 *)(in_stack_00000020 + 0x2db) = 0;
                return 1;
              }
              uVar8 = 0x5171;
            }
            else {
              if (uVar22 == 0x517f) goto LAB_036ea4f0;
              if (uVar22 == 0x57e5) goto LAB_036ea954;
              uVar8 = 0x5891;
            }
            if (uVar22 != uVar8) {
              return 0;
            }
            if ((*(byte *)(in_stack_00000020 + 0x25d) & 1) == 0) {
              return 1;
            }
            if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
              uVar7 = FUN_021788f0(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_03d9d6f8);
              *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar7;
              if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
              fVar24 = *(float *)(in_stack_00000020 + 0x404);
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar23 = (float)FUN_0396acd4(&stack0x00000270,0);
              fVar32 = 1.0;
              if (0.0 < fVar23) {
                if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_0396acd4(&stack0x00000270,0);
              }
              *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
            }
            cVar6 = FUN_03705274(in_stack_00000020 + 0x260,0x100,0);
            if (cVar6 != '\0') {
              return 1;
            }
            uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffeff;
            goto LAB_036ea5c0;
          }
          if (0x6f5f < (int)uVar22) {
            if (uVar22 == 0x7625) {
LAB_036eac88:
              *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x200;
              FUN_03705178(in_stack_00000020 + 0x260,0x200,0);
              puVar4 = PTR_DAT_03d9c888;
              if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (DAT_03ff747c == '\0') {
                thunk_FUN_01ad9084(PTR_DAT_03d9c888);
                DAT_03ff747c = '\x01';
              }
              lVar12 = *(long *)puVar4;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)puVar4;
              }
              uVar27 = (*(ulong **)(lVar12 + 0xb8))[1];
              uVar26 = **(ulong **)(lVar12 + 0xb8);
              uVar8 = 0;
              uVar10 = 0x4000ffff;
              goto LAB_036ead3c;
            }
            if (uVar22 != 0x763a) {
              if (uVar22 != 0x79c1) {
                return 0;
              }
              goto LAB_036ea64c;
            }
LAB_036e87e0:
            if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
              return 1;
            }
            if (*(char *)(in_stack_00000020 + 0x3f5) != '\0') {
              return 1;
            }
            lVar12 = *(long *)(in_stack_00000020 + 0x368);
            if (lVar12 == 0) break;
            lVar17 = *(long *)(lVar12 + 0x48);
            if (lVar17 == 0) break;
            uVar8 = *(uint *)(lVar12 + 0x28);
            lVar18 = (long)(int)uVar8;
            if (*(int *)(lVar17 + 0x18) < (int)(uVar8 + 1)) {
              if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52b8c((long *)(lVar12 + 0x48),uVar8 + 1,*(undefined8 *)PTR_DAT_03d9d6a8);
              lVar12 = *(long *)(in_stack_00000020 + 0x368);
              if (lVar12 == 0) break;
            }
            lVar12 = *(long *)(lVar12 + 0x48);
            if (lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
              plVar14 = (long *)(lVar12 + lVar18 * 0x28 + 0x20);
              *plVar14 = in_stack_00000020;
              thunk_FUN_01b4f09c(plVar14,in_stack_00000020);
              if ((*(long *)(in_stack_00000020 + 0x368) != 0) &&
                 (lVar12 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar12 != 0)) {
                lVar17 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar17 = *(long *)PTR_DAT_03d9c920;
                }
                lVar17 = *(long *)(lVar17 + 0xb8);
                lVar21 = *(long *)(lVar17 + 0x88);
                if (lVar21 != 0) {
                  if ((*(int *)(lVar21 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) <= uVar8))
                  goto LAB_036ecd10;
                  *(undefined4 *)(lVar12 + lVar18 * 0x28 + 0x28) = *(undefined4 *)(lVar21 + 0x24);
                  if ((*(long *)(in_stack_00000020 + 0x368) != 0) &&
                     (lVar12 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar12 != 0))
                  {
                    if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                      lVar12 = lVar12 + lVar18 * 0x28;
                      *(undefined4 *)(lVar12 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x494);
                      iVar9 = *(int *)(lVar21 + 0x2c);
                      *(int *)(lVar12 + 0x2c) = iVar9 + unaff_w20;
                      uVar7 = *(undefined4 *)(lVar21 + 0x30);
                      *(undefined4 *)(lVar12 + 0x30) = uVar7;
                      FUN_036c131c(lVar12 + 0x20,*(undefined8 *)(lVar17 + 0x80),iVar9,uVar7,0);
                      return 1;
                    }
                    goto LAB_036ecd10;
                  }
                }
              }
            }
            break;
          }
          if (uVar22 == 0x589f) {
LAB_036ea4f0:
            if (-1 < *(char *)(in_stack_00000020 + 0x25c)) {
              return 1;
            }
            if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
              uVar7 = FUN_021788f0(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_03d9d6f8);
              *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar7;
              if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
              fVar24 = *(float *)(in_stack_00000020 + 0x404);
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar23 = (float)FUN_0396acb4(&stack0x00000270,0);
              fVar32 = 1.0;
              if (0.0 < fVar23) {
                if (*(long *)(in_stack_00000020 + 0x100) == 0) break;
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_0396acb4(&stack0x00000270,0);
              }
              *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
            }
            cVar6 = FUN_03705274(in_stack_00000020 + 0x260,0x80,0);
            if (cVar6 != '\0') {
              return 1;
            }
            uVar8 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffff7f;
            goto LAB_036ea5c0;
          }
          if (uVar22 != 0x6f5f) {
            return 0;
          }
LAB_036e8fe4:
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            lVar17 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar17 == 0) break;
          }
          if ((*(int *)(lVar17 + 0x18) == 0) || (*(int *)(lVar17 + 0x18) == 1)) goto LAB_036ecd10;
          iVar9 = *(int *)(lVar17 + 0x24);
          if ((iVar9 == 0x2d93756b) || (iVar9 == 0x1f31f54b)) {
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
            }
            lVar12 = **(long **)(param_2 + 0xb8);
            if (lVar12 != 0) {
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
              *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar12 + 0x28);
              thunk_FUN_01b4f09c(in_stack_00000020 + 0x100);
              lVar12 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              if (lVar12 != 0) {
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
                *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar12 + 0x38);
                thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
                *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar12 = *plVar14;
                if (lVar12 != 0) {
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
                    _uStack0000000000000070 = *(undefined8 *)(lVar12 + 0x20);
                    in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
                    in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
                    in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
                    in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
                    in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
                    goto LAB_036e9d40;
                  }
                  goto LAB_036ecd10;
                }
              }
            }
            break;
          }
          iVar16 = *(int *)(lVar17 + 0x38);
          iVar1 = *(int *)(lVar17 + 0x3c);
          FUN_036b06d8(iVar9,&stack0x000002f0,0);
          puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_03922f24(in_stack_000002f0,0,0);
          if ((uVar10 & 1) != 0) {
            lVar12 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *(long *)PTR_DAT_03d9c920;
            }
            lVar17 = *(long *)(lVar12 + 0xb8);
            lVar18 = *(long *)(lVar17 + 0x70);
            if (lVar18 == 0) {
              in_stack_000002f0 = 0;
            }
            else {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              }
              lVar12 = *(long *)(lVar17 + 0x88);
              if (lVar12 == 0) break;
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
              uVar11 = FUN_02eeda98(0,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar12 + 0x2c),
                                    *(undefined4 *)(lVar12 + 0x30),0);
              in_stack_000002f0 =
                   (**(code **)(lVar18 + 0x18))
                             (*(undefined8 *)(lVar18 + 0x40),iVar9,uVar11,
                              *(undefined8 *)(lVar18 + 0x28));
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03922f24(in_stack_000002f0,0,0);
            if ((uVar10 & 1) != 0) {
              uVar11 = FUN_036fb900(0);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar12);
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
              if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
              uVar20 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),0)
              ;
              uVar11 = FUN_02edd6e8(uVar11,uVar20,0);
              in_stack_000002f0 = FUN_01f2f4f0(uVar11,*(undefined8 *)StringLiteral_477);
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03922f24(in_stack_000002f0,0,0);
            if ((uVar10 & 1) != 0) {
              return 0;
            }
            FUN_036b01e8(in_stack_000002f0,0);
          }
          if (iVar1 == 0 && iVar16 == 0) {
            if (in_stack_000002f0 == 0) break;
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(in_stack_000002f0 + 0x20);
            thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
            uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
            lVar12 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *(long *)PTR_DAT_03d9c920;
            }
            uVar8 = FUN_036b0b30(uVar11,in_stack_000002f0,*(long *)(lVar12 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar8;
            lVar12 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
            lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
            _uStack0000000000000070 = *(ulong *)(lVar12 + 0x20);
            uVar11 = *(undefined8 *)PTR_DAT_03d9d6d8;
            plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2;
          }
          else {
            if ((iVar16 != 0x629fdf7) && (iVar16 != 0x454d9f7)) {
              return 0;
            }
            uVar10 = FUN_036b08d0(iVar1,&stack0x000002e8,0);
            if ((uVar10 & 1) == 0) {
              uVar11 = FUN_036fb900(0);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar12);
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_036ecd10;
              uVar20 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar17 + 0x44),*(undefined4 *)(lVar17 + 0x48),0)
              ;
              uVar11 = FUN_02edd6e8(uVar11,uVar20,0);
              uVar11 = FUN_01f2f4f0(uVar11,*(undefined8 *)StringLiteral_430);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar4);
              }
              uVar10 = FUN_03922f24(uVar11,0,0);
              if ((uVar10 & 1) != 0) {
                return 0;
              }
              FUN_036b04b4(iVar1,uVar11,0);
              *(undefined8 *)(in_stack_00000020 + 0x118) = uVar11;
              thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              uVar8 = FUN_036b0b30(uVar11,in_stack_000002f0,*(long *)(lVar12 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar8;
              lVar12 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
              lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
              in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
              in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
              _uStack0000000000000070 = *(ulong *)(lVar12 + 0x20);
              uVar11 = *(undefined8 *)PTR_DAT_03d9d6d8;
              plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2;
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
              thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              uVar8 = FUN_036b0b30(uVar11,in_stack_000002f0,*(long *)(lVar12 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar8;
              lVar12 = **(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
              lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
              in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
              in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
              _uStack0000000000000070 = *(ulong *)(lVar12 + 0x20);
              uVar11 = *(undefined8 *)PTR_DAT_03d9d6d8;
              plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 2;
              in_stack_000001b0 = _uStack0000000000000070;
              in_stack_000001b8 = in_stack_00000078;
              in_stack_000001c0 = in_stack_00000080;
              in_stack_000001c8 = in_stack_00000088;
              in_stack_000001d0 = in_stack_00000090;
              in_stack_000001d8 = in_stack_00000098;
              in_stack_000001e0 = in_stack_000000a0;
            }
          }
          FUN_02177a60(plVar14,&stack0x00000070,uVar11);
          lVar12 = in_stack_00000020 + 0x100;
          *(long *)(in_stack_00000020 + 0x100) = in_stack_000002f0;
          goto LAB_036e9170;
        }
        if (0x691282 < (int)uVar22) {
          if ((int)uVar22 < 0x3434823) {
            if (0x765e9a < (int)uVar22) {
              if (0xe6a57a < (int)uVar22) {
                if ((int)uVar22 < 0x2d9fc44) {
                  if (uVar22 == 0xf4aac9) goto LAB_036ea468;
                  if (uVar22 != 0x2d9fc43) {
                    return 0;
                  }
                }
                else {
                  if (uVar22 == 0x3004302) {
LAB_036e80c0:
                    *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
                    return 1;
                  }
                  if (uVar22 != 0x31d0163) {
                    if (uVar22 != 0x3434822) {
                      return 0;
                    }
                    goto LAB_036e80c0;
                  }
                }
                goto LAB_036e8f94;
              }
              if ((int)uVar22 < 0xa3a05b) {
                if (uVar22 != 0x8b5eea) {
                  uVar8 = 0xa3a05a;
LAB_036e99cc:
                  if (uVar22 != uVar8) {
                    return 0;
                  }
                  *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
                  return 1;
                }
              }
              else {
                if (uVar22 == 0xb1a5a9) {
LAB_036ea468:
                  if (*(int *)(param_2 + 0xe0) == 0) {
                    param_2 = thunk_FUN_01ac7298();
                    lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                    lVar17 = *(long *)(lVar12 + 0x88);
                    if (lVar17 == 0) break;
                  }
                  if (*(int *)(lVar17 + 0x18) != 0) {
                    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                    fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                                 *(undefined4 *)(lVar17 + 0x2c),
                                                 *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                    if (fVar23 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000028._4_4_ == 1) {
                      fVar32 = DAT_00b55290;
                      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                        fVar32 = 1.0;
                      }
                      fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                    }
                    else {
                      if (in_stack_00000028._4_4_ != 0) {
                        return 0;
                      }
                      fVar32 = DAT_00b55290;
                      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                        fVar32 = 1.0;
                      }
                      fVar23 = fVar23 * fVar32;
                    }
                    *(float *)(in_stack_00000020 + 0x61c) = fVar23;
                    return 1;
                  }
                  goto LAB_036ecd10;
                }
                if (uVar22 != 0xce640a) {
                  uVar8 = 0xe6a57a;
                  goto LAB_036e99cc;
                }
              }
LAB_036e99e4:
              uVar11 = 0x10;
              uVar8 = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
LAB_036eabb4:
              *(uint *)(in_stack_00000020 + 0x25c) = uVar8;
              FUN_03705178(in_stack_00000020 + 0x260,uVar11,0);
              return 1;
            }
            if ((int)uVar22 < 0x719366) {
              if ((int)uVar22 < 0x6afe3e) {
                if (uVar22 == 0x6a5e93) goto LAB_036ea3d4;
                if (uVar22 != 0x6afe3d) {
                  return 0;
                }
LAB_036e9ff4:
                *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
                return 1;
              }
              if (uVar22 == 0x6ba308) {
Unity_VisualScripting_FullSerializer_fsMetaProperty__set_CanRead:
                *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
                return 1;
              }
              if (uVar22 != 0x6ccb9a) {
                if (uVar22 != 0x719365) {
                  return 0;
                }
                goto LAB_036e8acc;
              }
LAB_036e9ea0:
              *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
              return 1;
            }
            if (0x73f193 < (int)uVar22) {
              if (uVar22 == 0x74913d) goto LAB_036e9ff4;
              if (uVar22 == 0x753608)
              goto Unity_VisualScripting_FullSerializer_fsMetaProperty__set_CanRead;
              if (uVar22 != 0x765e9a) {
                return 0;
              }
              goto LAB_036e9ea0;
            }
            if (uVar22 != 0x72a582) {
              if (uVar22 != 0x73f193) {
                return 0;
              }
LAB_036ea3d4:
              uVar7 = System_ValueTuple<object,_object>__ToString
                                (in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_03d9d730);
              *(undefined4 *)(in_stack_00000020 + 0x40c) = uVar7;
              return 1;
            }
LAB_036ea6ec:
            if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
              return 1;
            }
            uVar8 = *(int *)(in_stack_00000020 + 0x494) - 1;
            if (0 < *(int *)(in_stack_00000020 + 0x494)) {
              fVar23 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac)
              ;
              *(float *)(in_stack_00000020 + 0x640) = fVar23;
              if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
                 (lVar12 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar12 == 0))
              break;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
              *(float *)(lVar12 + (ulong)uVar8 * 0x178 + 0x144) = fVar23;
            }
            *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
            return 1;
          }
          if (0x1eaf47a1 < (int)uVar22) {
            if ((int)uVar22 < 0x2e9af08b) {
              if ((int)uVar22 < 0x21c6f46b) {
                if (uVar22 != 0x20d7f9c8) {
                  uVar8 = 0x21c6f46a;
LAB_036e980c:
                  if (uVar22 != uVar8) {
                    return 0;
                  }
                  goto LAB_036e99e4;
                }
              }
              else {
                if (uVar22 == 0x2b8343c1) goto LAB_036eaba0;
                if (uVar22 != 0x2dabf5e8) {
                  uVar8 = 0x2e9af08a;
                  goto LAB_036e980c;
                }
              }
              uVar11 = 0x20;
              uVar8 = *(uint *)(in_stack_00000020 + 0x25c) | 0x20;
              goto LAB_036eabb4;
            }
            if (0x421fe49d < (int)uVar22) {
              if (uVar22 == 0x71174431) goto LAB_036eac68;
              if (uVar22 == 0x7117d356) goto LAB_036eac7c;
              uVar8 = 0x77eef5be;
              goto LAB_036e86d4;
            }
            if (uVar22 == 0x419bc966) {
Unity_VisualScripting_FullSerializer_fsMetaProperty__get_CanWrite:
              if (*(int *)(param_2 + 0xe0) == 0) {
                param_2 = thunk_FUN_01ac7298();
                lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                             *(undefined4 *)(lVar17 + 0x2c),
                                             *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                if (fVar23 != -32768.0) {
                  if (in_stack_00000028._4_4_ == 0) {
                    fVar32 = DAT_00b55290;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar32 = 1.0;
                    }
                    fVar23 = fVar23 * fVar32;
                  }
                  else if (in_stack_00000028._4_4_ == 1) {
                    fVar32 = DAT_00b55290;
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
              goto LAB_036ecd10;
            }
            if (uVar22 == 0x421f5578) goto LAB_036ea960;
            uVar8 = 0x421fe49d;
LAB_036e9bb0:
            if (uVar22 != uVar8) {
              return 0;
            }
            if (*(int *)(param_2 + 0xe0) == 0) {
              param_2 = thunk_FUN_01ac7298();
              lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              lVar17 = *(long *)(lVar12 + 0x88);
              if (lVar17 == 0) break;
            }
            if (*(int *)(lVar17 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                           *(undefined4 *)(lVar17 + 0x2c),
                                           *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00b55290;
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
                  goto LAB_036ebd10;
                }
                fVar32 = DAT_00b55290;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
              }
              *(float *)(in_stack_00000020 + 0x408) = fVar23;
LAB_036ebd10:
              *(float *)(in_stack_00000020 + 0x640) = *(float *)(in_stack_00000020 + 0x640) + fVar23
              ;
              return 1;
            }
            goto LAB_036ecd10;
          }
          if (0x14495107 < (int)uVar22) {
            if (0x161e7507 < (int)uVar22) {
              if (uVar22 == 0x16504b66) {
LAB_036ea5f8:
                if (*(int *)(param_2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                }
                FUN_02177af0(&stack0x00000070,lVar12 + 0x10,*(undefined8 *)PTR_DAT_03d9d740);
                uVar7 = uStack0000000000000070;
                *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000088;
                thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
                *(undefined4 *)(in_stack_00000020 + 0x120) = uVar7;
                return 1;
              }
              if (uVar22 == 0x1b40b577) goto LAB_036eab68;
              if (uVar22 != 0x1eaf47a1) {
                return 0;
              }
LAB_036eaba0:
              uVar11 = 8;
              uVar8 = *(uint *)(in_stack_00000020 + 0x25c) | 8;
              goto LAB_036eabb4;
            }
            if (uVar22 == 0x147b2766) goto LAB_036ea5f8;
            uVar8 = 0x161e7507;
LAB_036e9144:
            if (uVar22 != uVar8) {
              return 0;
            }
            uVar11 = FUN_02178218(in_stack_00000020 + 0x588,*(undefined8 *)PTR_DAT_03d9d710);
            lVar12 = in_stack_00000020 + 0x580;
            *(undefined8 *)(in_stack_00000020 + 0x580) = uVar11;
LAB_036e9170:
            thunk_FUN_01b4f09c(lVar12);
            return 1;
          }
          if ((int)uVar22 < 0x454d9f8) {
            if (uVar22 == 0x4230398) goto LAB_036ea9f8;
            if (uVar22 != 0x454d9f7) {
              return 0;
            }
          }
          else {
            if (uVar22 == 0x5f82798) {
LAB_036ea9f8:
              if (*(int *)(param_2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
              uVar7 = *(undefined4 *)(lVar17 + 0x24);
              uVar10 = FUN_036b0828(uVar7,&stack0x000002e0,0);
              puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              if ((uVar10 & 1) == 0) {
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar10 = FUN_03922f24(in_stack_000002e0,0,0);
                if ((uVar10 & 1) != 0) {
                  uVar11 = FUN_036fbaf0(0);
                  lVar12 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(lVar12);
                    lVar12 = *(long *)PTR_DAT_03d9c920;
                  }
                  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                  if (lVar17 == 0) break;
                  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
                  uVar20 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar17 + 0x2c),
                                        *(undefined4 *)(lVar17 + 0x30),0);
                  uVar11 = FUN_02edd6e8(uVar11,uVar20,0);
                  in_stack_000002e0 = FUN_01f2f4f0(uVar11,*(undefined8 *)PTR_DAT_03d9d698);
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar10 = FUN_03922f24(in_stack_000002e0,0,0);
                if ((uVar10 & 1) != 0) {
                  return 0;
                }
                FUN_036b054c(uVar7,in_stack_000002e0,0);
              }
              *(undefined8 *)(in_stack_00000020 + 0x580) = in_stack_000002e0;
              thunk_FUN_01b4f09c(in_stack_00000020 + 0x580);
              uVar8 = 1;
              *(undefined1 *)(in_stack_00000020 + 0x5b0) = 0;
              plVar14 = (long *)PTR_DAT_03d9c920;
              goto LAB_036eb8f4;
            }
            if (uVar22 != 0x629fdf7) {
              uVar8 = 0x14495107;
              goto LAB_036e9144;
            }
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            lVar17 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar17 == 0) break;
          }
          if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
          iVar9 = *(int *)(lVar17 + 0x24);
          if ((iVar9 == 0x2d93756b) || (iVar9 == 0x1f31f54b)) {
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
            }
            lVar12 = **(long **)(param_2 + 0xb8);
            if (lVar12 == 0) break;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar12 + 0x38);
            thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
            *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
            plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            lVar12 = *plVar14;
            if (lVar12 == 0) break;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
            in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
            _uStack0000000000000070 = *(undefined8 *)(lVar12 + 0x20);
            in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
            in_stack_00000130 = _uStack0000000000000070;
            in_stack_00000138 = in_stack_00000078;
            in_stack_00000140 = in_stack_00000080;
            in_stack_00000148 = in_stack_00000088;
            in_stack_00000150 = in_stack_00000090;
            in_stack_00000158 = in_stack_00000098;
            in_stack_00000160 = in_stack_000000a0;
LAB_036e9d40:
            uVar11 = *(undefined8 *)PTR_DAT_03d9d6d8;
          }
          else {
            uVar10 = FUN_036b08d0(iVar9,&stack0x000002e8,0);
            if ((uVar10 & 1) != 0) {
              *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
              thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
              uVar20 = *(undefined8 *)(in_stack_00000020 + 0x100);
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)PTR_DAT_03d9c920;
              }
              uVar8 = FUN_036b0b30(uVar11,uVar20,*(long *)(lVar12 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar8;
              plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              lVar12 = *plVar14;
              if (lVar12 != 0) {
                if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
                  in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
                  in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
                  in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
                  in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
                  in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
                  in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
                  _uStack0000000000000070 = *(undefined8 *)(lVar12 + 0x20);
                  uVar11 = *(undefined8 *)PTR_DAT_03d9d6d8;
                  in_stack_000000f0 = _uStack0000000000000070;
                  in_stack_000000f8 = in_stack_00000078;
                  in_stack_00000100 = in_stack_00000080;
                  in_stack_00000108 = in_stack_00000088;
                  in_stack_00000110 = in_stack_00000090;
                  in_stack_00000118 = in_stack_00000098;
                  in_stack_00000120 = in_stack_000000a0;
                  goto LAB_036e9d54;
                }
                goto LAB_036ecd10;
              }
              break;
            }
            uVar11 = FUN_036fb900(0);
            lVar12 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar12);
              lVar12 = *(long *)PTR_DAT_03d9c920;
            }
            lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
            if (lVar17 == 0) break;
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
            uVar20 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                  *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),0);
            uVar11 = FUN_02edd6e8(uVar11,uVar20,0);
            uVar11 = FUN_01f2f4f0(uVar11,*(undefined8 *)StringLiteral_430);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar10 = FUN_03922f24(uVar11,0,0);
            if ((uVar10 & 1) != 0) {
              return 0;
            }
            FUN_036b04b4(iVar9,uVar11,0);
            *(undefined8 *)(in_stack_00000020 + 0x118) = uVar11;
            thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
            uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
            uVar20 = *(undefined8 *)(in_stack_00000020 + 0x100);
            lVar12 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *(long *)PTR_DAT_03d9c920;
            }
            uVar8 = FUN_036b0b30(uVar11,uVar20,*(long *)(lVar12 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar8;
            plVar14 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            lVar12 = *plVar14;
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
            lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar12 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar12 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar12 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar12 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
            _uStack0000000000000070 = *(undefined8 *)(lVar12 + 0x20);
            uVar11 = *(undefined8 *)PTR_DAT_03d9d6d8;
            in_stack_000000b0 = _uStack0000000000000070;
            in_stack_000000b8 = in_stack_00000078;
            in_stack_000000c0 = in_stack_00000080;
            in_stack_000000c8 = in_stack_00000088;
            in_stack_000000d0 = in_stack_00000090;
            in_stack_000000d8 = in_stack_00000098;
            in_stack_000000e0 = in_stack_000000a0;
          }
LAB_036e9d54:
          FUN_02177a60(plVar14 + 2,&stack0x00000070,uVar11);
          return 1;
        }
        if (0x105b0c < (int)uVar22) {
          if ((int)uVar22 < 0x18b5de) {
            if ((int)uVar22 < 0x14b2e4) {
              if ((int)uVar22 < 0x10e5b0) {
                if (uVar22 == 0x10decb) goto LAB_036e9ea0;
                uVar8 = 0x10e5af;
                goto LAB_036e9e94;
              }
              if (uVar22 == 0x110d27) goto LAB_036eb020;
              if (uVar22 != 0x13a0c6) {
                if (uVar22 != 0x14b2e3) {
                  return 0;
                }
                goto LAB_036e898c;
              }
              goto LAB_036e9864;
            }
            if ((int)uVar22 < 0x169e9f) {
              if (uVar22 != 0x15fef4) {
                uVar8 = 0x169e9e;
                goto LAB_036e91ac;
              }
LAB_036ea65c:
              if (*(int *)(param_2 + 0xe0) == 0) {
                param_2 = thunk_FUN_01ac7298();
                lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                             *(undefined4 *)(lVar17 + 0x2c),
                                             *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 0) {
                  fVar32 = DAT_00b55290;
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
                    goto LAB_036ebe18;
                  }
                  fVar32 = DAT_00b55290;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                }
                *(float *)(in_stack_00000020 + 0x40c) = fVar23;
LAB_036ebe18:
                FUN_0217877c(fVar23,in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_03d9d6c8);
                *(undefined4 *)(in_stack_00000020 + 0x640) =
                     *(undefined4 *)(in_stack_00000020 + 0x40c);
                return 1;
              }
              goto LAB_036ecd10;
            }
            if (uVar22 == 0x174369) goto LAB_036ea3f4;
            if (uVar22 == 0x186bfb) goto LAB_036e8e60;
            if (uVar22 != 0x18b5dd) {
              return 0;
            }
          }
          else {
            if ((int)uVar22 < 0x20319f) {
              if ((int)uVar22 < 0x1d33c7) {
                if (uVar22 == 0x1ab5ba) {
                  return 0;
                }
                if (uVar22 != 0x1d33c6) {
                  return 0;
                }
LAB_036e9864:
                if (*(int *)(param_2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
                  if (lVar17 == 0) break;
                }
                if (*(int *)(lVar17 + 0x18) != 0) {
                  if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
                    return 1;
                  }
                  FUN_02176e2c(in_stack_00000020 + 0x5f8,*(undefined4 *)(lVar17 + 0x24),
                               *(undefined8 *)PTR_DAT_03d9d6b8);
                  uVar11 = FUN_0303de64(&stack0x000002d4,0);
                  uVar20 = FUN_0303de64(in_stack_00000020 + 0x494,0);
                  uVar11 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9d750,uVar11,
                                        *(undefined8 *)PTR_DAT_03d9d758,uVar20,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)
                                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                      );
                  }
                  FUN_038f2acc(uVar11,0);
                  return 1;
                }
                goto LAB_036ecd10;
              }
              if (uVar22 == 0x1e45e3) {
LAB_036e898c:
                if (*(int *)(param_2 + 0xe0) == 0) {
                  param_2 = thunk_FUN_01ac7298();
                  lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  lVar17 = *(long *)(lVar12 + 0x88);
                  if (lVar17 == 0) break;
                }
                if (*(int *)(lVar17 + 0x18) != 0) {
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                               *(undefined4 *)(lVar17 + 0x2c),
                                               *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                  if (fVar23 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000028._4_4_ == 0) {
                    fVar32 = DAT_00b55290;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar32 = 1.0;
                    }
                    fVar23 = fVar23 * fVar32;
LAB_036ebf68:
                    *(float *)(in_stack_00000020 + 0x2ac) = fVar23;
                    return 1;
                  }
                  if (in_stack_00000028._4_4_ == 1) {
                    fVar32 = DAT_00b55290;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar32 = 1.0;
                    }
                    fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                    goto LAB_036ebf68;
                  }
                  goto LAB_036ea458;
                }
                goto LAB_036ecd10;
              }
              if (uVar22 == 0x1f91f4) goto LAB_036ea65c;
              uVar8 = 0x20319e;
LAB_036e91ac:
              if (uVar22 != uVar8) {
                return 0;
              }
              if (*(int *)(param_2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                param_2 = *(long *)PTR_DAT_03d9c920;
                lVar12 = *(long *)(param_2 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              fVar23 = DAT_00b55290;
              if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
              if (*(int *)(lVar17 + 0x28) != 1) {
                if (*(int *)(lVar17 + 0x28) != 0) {
                  return 0;
                }
                uVar8 = 1;
                fVar32 = 0.0;
                goto LAB_036e9220;
              }
              if (*(int *)(param_2 + 0xe0) == 0) {
                param_2 = thunk_FUN_01ac7298();
                lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                             *(undefined4 *)(lVar17 + 0x2c),
                                             *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 0) {
                  fVar32 = DAT_00b55290;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = fVar23 * fVar32;
                }
                else if (in_stack_00000028._4_4_ == 1) {
                  fVar32 = DAT_00b55290;
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
LAB_036ec524:
                *(float *)(in_stack_00000020 + 0x354) = fVar23;
                return 1;
              }
              goto LAB_036ecd10;
            }
            if ((int)uVar22 < 0x21fefc) {
              if (uVar22 == 0x20d669) {
LAB_036ea3f4:
                if (*(int *)(param_2 + 0xe0) == 0) {
                  param_2 = thunk_FUN_01ac7298();
                  lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  lVar17 = *(long *)(lVar12 + 0x88);
                  if (lVar17 == 0) break;
                }
                if (*(int *)(lVar17 + 0x18) != 0) {
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                               *(undefined4 *)(lVar17 + 0x2c),
                                               *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                  if (fVar23 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000028._4_4_ == 0) {
                    fVar32 = DAT_00b55290;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar32 = 1.0;
                    }
                    fVar23 = fVar23 * fVar32;
                  }
                  else {
                    if (in_stack_00000028._4_4_ != 1) {
LAB_036ea458:
                      if (in_stack_00000028._4_4_ != 2) {
                        return 1;
                      }
                      return 0;
                    }
                    fVar32 = DAT_00b55290;
                    if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                      fVar32 = 1.0;
                    }
                    fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                  }
                  *(float *)(in_stack_00000020 + 0x2b0) = fVar23;
                  return 1;
                }
                goto LAB_036ecd10;
              }
              if (uVar22 != 0x21fefb) {
                return 0;
              }
LAB_036e8e60:
              if (*(int *)(param_2 + 0xe0) == 0) {
                param_2 = thunk_FUN_01ac7298();
                lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar17 = *(long *)(lVar12 + 0x88);
                if (lVar17 == 0) break;
              }
              if (*(int *)(lVar17 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                             *(undefined4 *)(lVar17 + 0x2c),
                                             *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (DAT_03fed257 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed257 = '\x01';
                }
                puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
                uVar26 = 0;
                uVar27 = (ulong)(uint)(fVar23 * DAT_00b552c8);
                puVar13 = *(undefined4 **)
                           (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                uVar7 = *puVar13;
                uVar29 = puVar13[1];
                uVar28 = puVar13[2];
                uVar10 = FUN_03914564(0,0,uVar27,0);
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed258 = '\x01';
                }
                uStack0000000000000004 =
                     (undefined4)
                     ((ulong)*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc) >> 0x20);
                goto LAB_036ea110;
              }
              goto LAB_036ecd10;
            }
            if (uVar22 != 0x2248dd) {
              if (uVar22 == 0x680065) {
LAB_036e8acc:
                if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
                  FUN_02177074(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_03d9d6e8);
                  uVar11 = FUN_0303de64(&stack0x0000026c,0);
                  uVar20 = FUN_0303de64(&stack0x0000026c,0);
                  uVar11 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9d750,uVar11,
                                        *(undefined8 *)PTR_DAT_03d9d768,uVar20,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)
                                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                      );
                  }
                  FUN_038f2acc(uVar11,0);
                }
                FUN_02176e74(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_03d9d718);
                return 1;
              }
              if (uVar22 != 0x691282) {
                return 0;
              }
              goto LAB_036ea6ec;
            }
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            lVar17 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
            if (lVar17 == 0) break;
          }
          if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
          uVar7 = *(undefined4 *)(lVar17 + 0x24);
          *(undefined4 *)(in_stack_00000020 + 0x6a4) = 0xffffffff;
          if (*(int *)(lVar17 + 0x28) == 0) {
LAB_036e8314:
            puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            uVar11 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_0391f968(uVar11,0,0);
            if ((uVar10 & 1) == 0) {
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x690);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_0391f968(uVar11,0,0);
              if ((uVar10 & 1) != 0) {
LAB_036ec70c:
                uVar11 = *(undefined8 *)(in_stack_00000020 + 0x690);
                goto LAB_036ec714;
              }
              puVar15 = (undefined8 *)(in_stack_00000020 + 0x690);
              uVar11 = *puVar15;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_03922f24(uVar11,0,0);
              if ((uVar10 & 1) != 0) {
                uVar11 = FUN_036fba3c(0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar4);
                }
                uVar10 = FUN_0391f968(uVar11,0,0);
                if ((uVar10 & 1) == 0) {
                  uVar11 = FUN_01f2f4f0(*(undefined8 *)PTR_DAT_03d9d760,
                                        *(undefined8 *)PTR_DAT_03d9d6a0);
                }
                else {
                  uVar11 = FUN_036fba3c(0);
                }
                *puVar15 = uVar11;
                thunk_FUN_01b4f09c(puVar15,uVar11);
                goto LAB_036ec70c;
              }
            }
            else {
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_036ec714:
              *(undefined8 *)(in_stack_00000020 + 0x698) = uVar11;
              thunk_FUN_01b4f09c(in_stack_00000020 + 0x698);
            }
            uVar11 = *(undefined8 *)(in_stack_00000020 + 0x698);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03922f24(uVar11,0,0);
            if ((uVar10 & 1) != 0) {
              return 0;
            }
          }
          else {
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
            }
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
            if (*(int *)(lVar17 + 0x28) == 1) goto LAB_036e8314;
            uVar10 = FUN_036b0780(uVar7,&stack0x000002d8,0);
            puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            if ((uVar10 & 1) == 0) {
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_03922f24(in_stack_000002d8,0,0);
              if ((uVar10 & 1) != 0) {
                lVar12 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *(long *)PTR_DAT_03d9c920;
                }
                lVar17 = *(long *)(lVar12 + 0xb8);
                lVar18 = *(long *)(lVar17 + 0x78);
                in_stack_000002d8 = 0;
                if (lVar18 != 0) {
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  }
                  lVar12 = *(long *)(lVar17 + 0x88);
                  if (lVar12 == 0) break;
                  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
                  uVar11 = FUN_02eeda98(0,*(undefined8 *)(lVar17 + 0x80),
                                        *(undefined4 *)(lVar12 + 0x2c),
                                        *(undefined4 *)(lVar12 + 0x30),0);
                  in_stack_000002d8 =
                       (**(code **)(lVar18 + 0x18))
                                 (*(undefined8 *)(lVar18 + 0x40),uVar7,uVar11,
                                  *(undefined8 *)(lVar18 + 0x28));
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar10 = FUN_03922f24(in_stack_000002d8,0,0);
                if ((uVar10 & 1) != 0) {
                  uVar11 = FUN_036fba58(0);
                  lVar12 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(lVar12);
                    lVar12 = *(long *)PTR_DAT_03d9c920;
                  }
                  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                  if (lVar17 == 0) break;
                  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036ecd10;
                  uVar20 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar17 + 0x2c),
                                        *(undefined4 *)(lVar17 + 0x30),0);
                  uVar11 = FUN_02edd6e8(uVar11,uVar20,0);
                  in_stack_000002d8 = FUN_01f2f4f0(uVar11,*(undefined8 *)PTR_DAT_03d9d6a0);
                }
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_03922f24(in_stack_000002d8,0,0);
              if ((uVar10 & 1) != 0) {
                return 0;
              }
              FUN_036b03b0(uVar7,in_stack_000002d8,0);
            }
            *(undefined8 *)(in_stack_00000020 + 0x698) = in_stack_000002d8;
            thunk_FUN_01b4f09c(in_stack_00000020 + 0x698);
          }
          lVar12 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = *(long *)PTR_DAT_03d9c920;
          }
          lVar17 = *(long *)(lVar12 + 0xb8);
          lVar18 = *(long *)(lVar17 + 0x88);
          if (lVar18 == 0) break;
          if (*(int *)(lVar18 + 0x18) == 0) goto LAB_036ecd10;
          if (*(int *)(lVar18 + 0x28) == 1) {
            if (*(int *)(lVar12 + 0xe0) == 0) {
              lVar12 = thunk_FUN_01ac7298();
              lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              lVar18 = *(long *)(lVar17 + 0x88);
              if (lVar18 == 0) break;
            }
            if (*(int *)(lVar18 + 0x18) == 0) goto LAB_036ecd10;
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_036f384c(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x2c),
                                         *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
            iVar9 = -0x80000000;
            if (fVar23 != INFINITY) {
              iVar9 = (int)fVar23;
            }
            if (iVar9 == -0x8000) {
              return 0;
            }
            if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
               (lVar12 = FUN_036fe7c0(*(long *)(in_stack_00000020 + 0x698),0), lVar12 == 0)) break;
            if (*(int *)(lVar12 + 0x18) + -1 < iVar9) {
              return 0;
            }
            *(int *)(in_stack_00000020 + 0x6a4) = iVar9;
            lVar12 = *(long *)PTR_DAT_03d9c920;
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = *(long *)PTR_DAT_03d9c920;
          }
          uVar8 = 0;
          uVar7 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
          plVar14 = (long *)(in_stack_00000020 + 0x698);
          *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
          *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar7;
          goto LAB_036ec87c;
        }
        if (0x4d122 < (int)uVar22) {
          if (0xefcec < (int)uVar22) {
            if ((int)uVar22 < 0xf8790) {
              if (uVar22 == 0xf80ab) goto LAB_036e9ea0;
              uVar8 = 0xf878f;
LAB_036e9e94:
              if (uVar22 == uVar8) {
                return 1;
              }
              return 0;
            }
            if (uVar22 == 0xfaf07) {
LAB_036eb020:
              *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
              return 1;
            }
            if (uVar22 == 0x104376) {
LAB_036eac48:
              uVar7 = FUN_02177400(in_stack_00000020 + 0x280,*(undefined8 *)PTR_DAT_03d9d728);
              *(undefined4 *)(in_stack_00000020 + 0x278) = uVar7;
              return 1;
            }
            uVar8 = 0x105b0c;
LAB_036e8674:
            if (uVar22 == uVar8) {
              uVar7 = FUN_0217619c(in_stack_00000020 + 0x4f0,*(undefined8 *)PTR_DAT_03d9d720);
              *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar7;
              return 1;
            }
            return 0;
          }
          if ((int)uVar22 < 0x4e24f) {
            if (uVar22 == 0x4d806) {
              return 0;
            }
            if (uVar22 != 0x4e24e) {
              return 0;
            }
LAB_036e9b08:
            if (*(int *)(param_2 + 0xe0) == 0) {
              param_2 = thunk_FUN_01ac7298();
              lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              lVar17 = *(long *)(lVar12 + 0x88);
              if (lVar17 == 0) break;
            }
            if (*(int *)(lVar17 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                           *(undefined4 *)(lVar17 + 0x2c),
                                           *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 1) {
                fVar32 = DAT_00b55290;
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
                fVar32 = DAT_00b55290;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = *(float *)(in_stack_00000020 + 0x640) + fVar23 * fVar32;
              }
              goto LAB_036ebfb8;
            }
            goto LAB_036ecd10;
          }
          if (uVar22 != 0x4ff7e) {
            if (uVar22 == 0xee556) goto LAB_036eac48;
            uVar8 = 0xefcec;
            goto LAB_036e8674;
          }
LAB_036e8c88:
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            lVar17 = *(long *)(lVar12 + 0x88);
            if (lVar17 == 0) break;
          }
          if (*(int *)(lVar17 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                         *(undefined4 *)(lVar17 + 0x2c),
                                         *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00b55290;
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
          goto LAB_036ecd10;
        }
        if ((int)uVar22 < 0x3a15f) {
          if (0x37302 < (int)uVar22) {
            if (uVar22 == 0x379e6) {
              return 0;
            }
            if (uVar22 == 0x3842e) goto LAB_036e9b08;
            if (uVar22 != 0x3a15e) {
              return 0;
            }
            goto LAB_036e8c88;
          }
          if (uVar22 != 0x2ef43) {
            uVar8 = 0x37302;
            goto LAB_036ea028;
          }
        }
        else {
          if ((int)uVar22 < 0x4371f) {
            if (uVar22 != 0x435cd) {
              uVar8 = 0x4371e;
              goto LAB_036e9700;
            }
LAB_036ea8b8:
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
              if (lVar17 == 0) break;
            }
            if (*(int *)(lVar17 + 0x18) != 0) {
              iVar9 = *(int *)(lVar17 + 0x24);
              if (iVar9 < -0x1b4fbb34) {
                if (iVar9 == -0x1f38ae01) {
                  uVar29 = 8;
                  uVar7 = 8;
                }
                else {
                  if (iVar9 != -0x1b4fbb35) {
                    return 0;
                  }
                  uVar29 = 2;
                  uVar7 = 2;
                }
              }
              else if (iVar9 == 0x825ec40) {
                uVar29 = 4;
                uVar7 = 4;
              }
              else if (iVar9 == 0x74b6c44) {
                uVar29 = 0x10;
                uVar7 = 0x10;
              }
              else {
                if (iVar9 != 0x3998db) {
                  return 0;
                }
                uVar29 = 1;
                uVar7 = 1;
              }
              *(undefined4 *)(in_stack_00000020 + 0x278) = uVar29;
              in_stack_00000020 = in_stack_00000020 + 0x280;
              puVar15 = (undefined8 *)PTR_DAT_03d9d6b0;
              goto LAB_036ec120;
            }
            goto LAB_036ecd10;
          }
          if (uVar22 == 0x44760) {
            return 0;
          }
          if (uVar22 != 0x44d63) {
            uVar8 = 0x4d122;
LAB_036ea028:
            if (uVar22 != uVar8) {
              return 0;
            }
            if (*(int *)(param_2 + 0xe0) == 0) {
              param_2 = thunk_FUN_01ac7298();
              lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              lVar17 = *(long *)(lVar12 + 0x88);
              if (lVar17 == 0) break;
            }
            if (*(int *)(lVar17 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar12 + 0x80),
                                           *(undefined4 *)(lVar17 + 0x2c),
                                           *(undefined4 *)(lVar17 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              puVar13 = *(undefined4 **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
              uVar7 = *puVar13;
              uVar29 = puVar13[1];
              uVar28 = puVar13[2];
              if (DAT_03fed256 == '\0') {
                thunk_FUN_01ad9084(
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                  );
                DAT_03fed256 = '\x01';
              }
              puVar19 = *(uint **)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                  + 0xb8);
              uVar10 = (ulong)*puVar19;
              uVar26 = (ulong)puVar19[1];
              uVar27 = (ulong)puVar19[2];
              in_d3 = (ulong)puVar19[3];
              uStack0000000000000004 = 0x3f800000;
LAB_036ea110:
              FUN_03910ecc(&stack0x00000030,uVar7,uVar29,uVar28,uVar10,uVar26,uVar27,in_d3,0);
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
            goto LAB_036ecd10;
          }
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
          lVar12 = *(long *)(param_2 + 0xb8);
        }
        lVar17 = *(long *)(lVar12 + 0x80);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_036ecd10;
        sVar3 = *(short *)(lVar17 + 0x2c);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
          lVar12 = *(long *)(param_2 + 0xb8);
          lVar17 = *(long *)(lVar12 + 0x80);
        }
        if (uVar8 == 10 && sVar3 == 0x23) {
          uVar11 = 10;
LAB_036ec17c:
          uVar7 = FUN_036f3140(param_2,lVar17,uVar11);
        }
        else {
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_036ecd10;
          sVar3 = *(short *)(lVar17 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            lVar12 = *(long *)(param_2 + 0xb8);
            lVar17 = *(long *)(lVar12 + 0x80);
          }
          if (uVar8 == 0xb && sVar3 == 0x23) {
            uVar11 = 0xb;
            goto LAB_036ec17c;
          }
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_036ecd10;
          sVar3 = *(short *)(lVar17 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            lVar12 = *(long *)(param_2 + 0xb8);
            lVar17 = *(long *)(lVar12 + 0x80);
          }
          if (uVar8 == 0xd && sVar3 == 0x23) {
            uVar11 = 0xd;
            goto LAB_036ec17c;
          }
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_036ecd10;
          sVar3 = *(short *)(lVar17 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            lVar12 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          if (uVar8 == 0xf && sVar3 == 0x23) {
            lVar17 = *(long *)(lVar12 + 0x80);
            uVar11 = 0xf;
            goto LAB_036ec17c;
          }
          lVar12 = *(long *)(lVar12 + 0x88);
          if (lVar12 == 0) break;
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
          iVar9 = *(int *)(lVar12 + 0x24);
          if (iVar9 < 0x3829ca) {
            if (iVar9 < -0x232c3b1) {
              if (iVar9 == -0x3b2cd120) {
                *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xffe6d8ad;
                uVar7 = 0xffe6d8ad;
              }
              else {
                if (iVar9 != -0x232c3b2) {
                  return 0;
                }
                *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xfff020a0;
                uVar7 = 0xfff020a0;
              }
            }
            else {
              if (iVar9 == 0x1e9d3) {
                uVar7 = 0x3f800000;
                goto LAB_036ecef8;
              }
              if (iVar9 == 0x36863e) {
                uVar7 = 0;
                uVar29 = 0;
                goto LAB_036ecf0c;
              }
              if (iVar9 != 0x3829c9) {
                return 0;
              }
              *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff808080;
              uVar7 = 0xff808080;
            }
LAB_036eced4:
            in_stack_00000020 = in_stack_00000020 + 0x4f0;
            uVar11 = *(undefined8 *)PTR_DAT_03d9d6d0;
            goto LAB_036e7e94;
          }
          if (iVar9 < 0x7071a48) {
            if (iVar9 == 0x19536f0) {
              *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff0080ff;
              uVar7 = 0xff0080ff;
              goto LAB_036eced4;
            }
            if (iVar9 != 0x7071a47) {
              return 0;
            }
            uVar7 = 0;
LAB_036ecef8:
            uVar29 = 0;
LAB_036ecefc:
            uVar28 = 0;
          }
          else {
            if (iVar9 == 0x73d641b) {
              uVar7 = 0;
              uVar29 = 0x3f800000;
              goto LAB_036ecefc;
            }
            if (iVar9 == 0x85daee7) {
              uVar7 = 0x3f800000;
              uVar29 = 0x3f800000;
LAB_036ecf0c:
              uVar28 = 0x3f800000;
            }
            else {
              if (iVar9 != 0x21063284) {
                return 0;
              }
              uVar7 = 0x3f800000;
              uVar29 = DAT_00b550e0;
              uVar28 = DAT_00b551c8;
            }
          }
          uVar7 = FUN_01bd7168(uVar7,uVar29,uVar28,0x3f800000,0);
        }
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar7;
        uVar11 = *(undefined8 *)PTR_DAT_03d9d6d0;
      }
      in_stack_00000020 = in_stack_00000020 + 0x4f0;
LAB_036e7e94:
      FUN_02176154(in_stack_00000020,uVar7,uVar11);
      return 1;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *(long *)PTR_DAT_03d9c920;
    }
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x80);
  } while (param_1 != 0);
LAB_036ecd74:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_036eb8f4:
  lVar12 = *plVar14;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *plVar14;
  }
  lVar17 = *(long *)(lVar12 + 0xb8);
  lVar18 = *(long *)(lVar17 + 0x88);
  if (lVar18 == 0) goto LAB_036ecd74;
  if (*(int *)(lVar18 + 0x18) <= (int)uVar8) {
LAB_036eba14:
    FUN_021781c8(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                 *(undefined8 *)PTR_DAT_03d9d6c0);
    return 1;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *plVar14;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x88);
    plVar14 = (long *)PTR_DAT_03d9c920;
    if (lVar18 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
  lVar21 = (long)(int)uVar8;
  if (*(int *)(lVar18 + lVar21 * 0x18 + 0x20) == 0) goto LAB_036eba14;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *plVar14;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x88);
    plVar14 = (long *)PTR_DAT_03d9c920;
    if (lVar18 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
  iVar9 = *(int *)(lVar18 + lVar21 * 0x18 + 0x20);
  if ((iVar9 == 0xb2fb) || (iVar9 == 0x80fb)) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_01ac7298();
      lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar18 = *(long *)(lVar17 + 0x88);
      if (lVar18 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
    lVar18 = lVar18 + lVar21 * 0x18;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar23 = (float)FUN_036f384c(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                 *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                 &stack0x00000070);
    *(bool *)(in_stack_00000020 + 0x5b0) = fVar23 != 0.0;
    plVar14 = (long *)PTR_DAT_03d9c920;
  }
  uVar8 = uVar8 + 1;
  goto LAB_036eb8f4;
LAB_036e9220:
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    param_2 = *(long *)PTR_DAT_03d9c920;
  }
  lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
  if (lVar12 == 0) goto LAB_036ecd74;
  if (*(int *)(lVar12 + 0x18) <= (int)uVar8) {
    return 1;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    param_2 = *(long *)PTR_DAT_03d9c920;
    lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
    if (lVar12 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
  lVar17 = (long)(int)uVar8;
  if (*(int *)(lVar12 + lVar17 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    param_2 = *(long *)PTR_DAT_03d9c920;
  }
  lVar18 = *(long *)(param_2 + 0xb8);
  lVar12 = *(long *)(lVar18 + 0x88);
  if (lVar12 == 0) goto LAB_036ecd74;
  if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
  iVar9 = *(int *)(lVar12 + lVar17 * 0x18 + 0x20);
  if (iVar9 == 0x4d0e4) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      param_2 = thunk_FUN_01ac7298();
      lVar18 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar12 = *(long *)(lVar18 + 0x88);
      if (lVar12 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
    lVar12 = lVar12 + lVar17 * 0x18;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar24 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar18 + 0x80),
                                 *(undefined4 *)(lVar12 + 0x2c),*(undefined4 *)(lVar12 + 0x30),
                                 &stack0x00000070);
    if (fVar24 == -32768.0) {
      return 0;
    }
    param_2 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *(long *)PTR_DAT_03d9c920;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
    if (lVar12 == 0) goto LAB_036ecd74;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
    iVar9 = *(int *)(lVar12 + lVar17 * 0x18 + 0x34);
    if (iVar9 == 0) {
      fVar30 = fVar23;
      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
        fVar30 = 1.0;
      }
      fVar24 = fVar24 * fVar30;
    }
    else if (iVar9 == 1) {
      fVar30 = fVar23;
      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
        fVar30 = 1.0;
      }
      fVar24 = fVar24 * fVar30 * *(float *)(in_stack_00000020 + 0x1e8);
    }
    else if (iVar9 == 2) {
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
  else if (iVar9 == 0xa747) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      param_2 = thunk_FUN_01ac7298();
      lVar18 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar12 = *(long *)(lVar18 + 0x88);
      if (lVar12 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
    lVar12 = lVar12 + lVar17 * 0x18;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar24 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar18 + 0x80),
                                 *(undefined4 *)(lVar12 + 0x2c),*(undefined4 *)(lVar12 + 0x30),
                                 &stack0x00000070);
    if (fVar24 == -32768.0) {
      return 0;
    }
    param_2 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *(long *)PTR_DAT_03d9c920;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
    if (lVar12 == 0) goto LAB_036ecd74;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036ecd10;
    iVar9 = *(int *)(lVar12 + lVar17 * 0x18 + 0x34);
    if (iVar9 == 0) {
      fVar30 = fVar23;
      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
        fVar30 = 1.0;
      }
      fVar24 = fVar24 * fVar30;
    }
    else if (iVar9 == 1) {
      fVar30 = fVar23;
      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
        fVar30 = 1.0;
      }
      fVar24 = fVar24 * fVar30 * *(float *)(in_stack_00000020 + 0x1e8);
    }
    else if (iVar9 == 2) {
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
  uVar8 = uVar8 + 1;
  goto LAB_036e9220;
LAB_036ec87c:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *(long *)PTR_DAT_03d9c920;
  }
  lVar18 = *(long *)(lVar12 + 0xb8);
  lVar17 = *(long *)(lVar18 + 0x88);
  if (lVar17 == 0) goto LAB_036ecd74;
  if (*(int *)(lVar17 + 0x18) <= (int)uVar8) {
LAB_036ecd14:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar17 = *plVar14;
    if (lVar17 != 0) {
      uVar11 = *(undefined8 *)(lVar17 + 0x20);
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar12 = *(long *)PTR_DAT_03d9c920;
      }
      uVar7 = FUN_036b0d60(uVar11,lVar17,*(long *)(lVar12 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar7;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_036ecd74;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *(long *)PTR_DAT_03d9c920;
    lVar18 = *(long *)(lVar12 + 0xb8);
    lVar17 = *(long *)(lVar18 + 0x88);
    if (lVar17 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
  lVar21 = (long)(int)uVar8;
  if (*(int *)(lVar17 + lVar21 * 0x18 + 0x20) == 0) goto LAB_036ecd14;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *(long *)PTR_DAT_03d9c920;
    lVar18 = *(long *)(lVar12 + 0xb8);
    lVar17 = *(long *)(lVar18 + 0x88);
    if (lVar17 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
  iVar9 = *(int *)(lVar17 + lVar21 * 0x18 + 0x20);
  if (iVar9 < 0xa954) {
    if (iVar9 < 0x7754) {
      if (iVar9 == 0x6851) {
LAB_036ecaa4:
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar18 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          lVar17 = *(long *)(lVar18 + 0x88);
          if (lVar17 == 0) goto LAB_036ecd74;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
        lVar17 = lVar17 + lVar21 * 0x18;
        iVar9 = FUN_036f37a0(in_stack_00000020,*(undefined8 *)(lVar18 + 0x80),
                             *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                             lVar18 + 0x90);
        if (iVar9 != 3) {
          return 0;
        }
        lVar12 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *(long *)PTR_DAT_03d9c920;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
        if (lVar12 == 0) goto LAB_036ecd74;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_036ecd10;
        iVar9 = -0x80000000;
        if (*(float *)(lVar12 + 0x20) != INFINITY) {
          iVar9 = (int)*(float *)(lVar12 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar9;
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          lVar12 = FUN_036e087c(in_stack_00000020);
          uVar7 = *(undefined4 *)(in_stack_00000020 + 0x494);
          uVar11 = *(undefined8 *)(in_stack_00000020 + 0x698);
          uVar29 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
          lVar17 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar17);
            lVar17 = *(long *)PTR_DAT_03d9c920;
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x90);
          if (lVar17 != 0) {
            if ((1 < *(uint *)(lVar17 + 0x18)) && (*(uint *)(lVar17 + 0x18) != 2)) {
              if (lVar12 != 0) {
                iVar9 = -0x80000000;
                if (*(float *)(lVar17 + 0x24) != INFINITY) {
                  iVar9 = (int)*(float *)(lVar17 + 0x24);
                }
                iVar16 = -0x80000000;
                if (*(float *)(lVar17 + 0x28) != INFINITY) {
                  iVar16 = (int)*(float *)(lVar17 + 0x28);
                }
                FUN_036fdc28(lVar12,uVar7,uVar11,uVar29,iVar9,iVar16,0);
                goto LAB_036eccfc;
              }
              goto LAB_036ecd74;
            }
            goto LAB_036ecd10;
          }
          goto LAB_036ecd74;
        }
        goto LAB_036eccfc;
      }
      if (iVar9 != 0x7753) {
        return 0;
      }
    }
    else {
      if (iVar9 == 0x80fb) goto LAB_036eca48;
      if (iVar9 == 0x9a51) goto LAB_036ecaa4;
      if (iVar9 != 0xa953) {
        return 0;
      }
    }
    lVar18 = *plVar14;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
      if (lVar17 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
    lVar12 = FUN_036ffb0c(lVar18,*(undefined4 *)(lVar17 + lVar21 * 0x18 + 0x24),1,&stack0x00000268,0
                         );
    *plVar14 = lVar12;
    thunk_FUN_01b4f09c(plVar14,lVar12);
    iVar9 = 0;
LAB_036eccf4:
    *(int *)(in_stack_00000020 + 0x6a4) = iVar9;
  }
  else {
    if (0x2ef43 < iVar9) {
      if (iVar9 < 0x4828a) {
        if (iVar9 != 0x3246a) {
          if (iVar9 != 0x44d63) {
            return 0;
          }
          goto LAB_036ecc1c;
        }
      }
      else if (iVar9 != 0x4828a) {
        if ((iVar9 != 0x18b5dd) && (iVar9 != 0x2248dd)) {
          return 0;
        }
        goto LAB_036eccfc;
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = thunk_FUN_01ac7298();
        lVar18 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar17 = *(long *)(lVar18 + 0x88);
        if (lVar17 == 0) goto LAB_036ecd74;
      }
      if (1 < *(uint *)(lVar17 + 0x18)) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)FUN_036f384c(lVar12,*(undefined8 *)(lVar18 + 0x80),
                                     *(undefined4 *)(lVar17 + 0x44),*(undefined4 *)(lVar17 + 0x48),
                                     &stack0x00000070);
        iVar9 = -0x80000000;
        if (fVar23 != INFINITY) {
          iVar9 = (int)fVar23;
        }
        if (iVar9 == -0x8000) {
          return 0;
        }
        if ((*plVar14 != 0) && (lVar12 = FUN_036fe7c0(*plVar14,0), lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x18) + -1 < iVar9) {
            return 0;
          }
          goto LAB_036eccf4;
        }
        goto LAB_036ecd74;
      }
      goto LAB_036ecd10;
    }
    if (iVar9 == 0xb2fb) {
LAB_036eca48:
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = thunk_FUN_01ac7298();
        lVar18 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar17 = *(long *)(lVar18 + 0x88);
        if (lVar17 == 0) goto LAB_036ecd74;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
      lVar17 = lVar17 + lVar21 * 0x18;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)FUN_036f384c(lVar12,*(undefined8 *)(lVar18 + 0x80),
                                   *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                   &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar23 != 0.0;
    }
    else {
      if (iVar9 != 0x2ef43) {
        return 0;
      }
LAB_036ecc1c:
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = thunk_FUN_01ac7298();
        lVar18 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar17 = *(long *)(lVar18 + 0x88);
        if (lVar17 == 0) goto LAB_036ecd74;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_036ecd10;
      lVar17 = lVar17 + lVar21 * 0x18;
      uVar7 = FUN_036f3554(lVar12,*(undefined8 *)(lVar18 + 0x80),*(undefined4 *)(lVar17 + 0x2c),
                           *(undefined4 *)(lVar17 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar7;
    }
  }
LAB_036eccfc:
  uVar8 = uVar8 + 1;
  lVar12 = *(long *)PTR_DAT_03d9c920;
  goto LAB_036ec87c;
LAB_036ead3c:
  plVar14 = (long *)PTR_DAT_03d9c920;
  lVar12 = *(long *)PTR_DAT_03d9c920;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *plVar14;
  }
  lVar17 = *(long *)(lVar12 + 0xb8);
  lVar18 = *(long *)(lVar17 + 0x88);
  if (lVar18 == 0) goto LAB_036ecd74;
  uVar7 = (undefined4)(uVar26 >> 0x20);
  uVar29 = (undefined4)(uVar27 >> 0x20);
  if (*(int *)(lVar18 + 0x18) <= (int)uVar8) {
LAB_036eb250:
    uVar22 = (uint)uVar10;
    uVar8 = (uint)*(byte *)(in_stack_00000020 + 0x4ef);
    if (uVar22 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
      uVar8 = (uint)(uVar10 >> 0x18) & 0xff;
    }
    FUN_036c214c(uVar26 & 0xffffffff,uVar7,uVar27 & 0xffffffff,uVar29,&stack0x000002f8,
                 uVar22 & 0xff0000 | uVar8 << 0x18 | uVar22 & 0xff00 | uVar22 & 0xff,0);
    in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,in_stack_00000308);
    FUN_02176874(in_stack_00000020 + 0x550,&stack0x00000070,*(undefined8 *)PTR_DAT_03d9d700);
    return 1;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *plVar14;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x88);
    plVar14 = (long *)PTR_DAT_03d9c920;
    if (lVar18 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
  lVar21 = (long)(int)uVar8;
  if (*(int *)(lVar18 + lVar21 * 0x18 + 0x20) == 0) goto LAB_036eb250;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *plVar14;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x88);
    if (lVar18 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
  iVar9 = *(int *)(lVar18 + lVar21 * 0x18 + 0x20);
  if (iVar9 < 0xa826) {
    if ((iVar9 == 0x7625) || (iVar9 == 0xa825)) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar12 = *(long *)PTR_DAT_03d9c920;
        lVar17 = *(long *)(lVar12 + 0xb8);
        lVar18 = *(long *)(lVar17 + 0x88);
        if (lVar18 == 0) goto LAB_036ecd74;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
      if (*(int *)(lVar18 + lVar21 * 0x18 + 0x28) == 4) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          lVar12 = thunk_FUN_01ac7298();
          lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          lVar18 = *(long *)(lVar17 + 0x88);
          if (lVar18 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_036ecd10;
        uVar10 = FUN_036f3554(lVar12,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar18 + 0x2c),
                              *(undefined4 *)(lVar18 + 0x30));
      }
    }
  }
  else if (iVar9 == 0x44d63) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_01ac7298();
      lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar18 = *(long *)(lVar17 + 0x88);
      if (lVar18 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_036ecd10;
    lVar18 = lVar18 + lVar21 * 0x18;
    uVar10 = FUN_036f3554(lVar12,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar18 + 0x2c),
                          *(undefined4 *)(lVar18 + 0x30));
    uVar10 = uVar10 & 0xffffffff;
  }
  else if (iVar9 == 0xe63719) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar17 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar18 = *(long *)(lVar17 + 0x88);
      if (lVar18 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar8) {
LAB_036ecd10:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar18 = lVar18 + lVar21 * 0x18;
    iVar9 = FUN_036f37a0(in_stack_00000020,*(undefined8 *)(lVar17 + 0x80),
                         *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),lVar17 + 0x90
                        );
    if (iVar9 != 4) {
      return 0;
    }
    lVar12 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar12 = *(long *)PTR_DAT_03d9c920;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
    if (lVar12 == 0) goto LAB_036ecd74;
    uVar22 = *(uint *)(lVar12 + 0x18);
    if ((((uVar22 == 0) || (uVar22 == 1)) || (uVar22 < 3)) || (uVar22 == 3)) goto LAB_036ecd10;
    uVar34 = *(undefined4 *)(lVar12 + 0x20);
    uVar33 = *(undefined4 *)(lVar12 + 0x24);
    uVar31 = *(undefined4 *)(lVar12 + 0x28);
    uVar28 = *(undefined4 *)(lVar12 + 0x2c);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036c1e7c(uVar34,uVar33,uVar31,uVar28,&stack0x00000310,0);
    uVar28 = (undefined4)uVar27;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar31 = FUN_036c1f6c(uVar26 & 0xffffffff,0);
    uVar26 = CONCAT44(uVar7,uVar31);
    uVar27 = CONCAT44(uVar29,uVar28);
  }
  uVar8 = uVar8 + 1;
  goto LAB_036ead3c;
}


