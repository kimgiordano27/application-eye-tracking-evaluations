/*
FUNCTION_NAME: Unity.VisualScripting.Serialization$$DeserializeInto
ENTRY_POINT: 03e7c514
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03e81944) */

uint Unity_VisualScripting_Serialization__DeserializeInto(long *param_1)

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
  
code_r0x03e7c514:
  lVar11 = *param_1;
  while( true ) {
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x80);
    if (lVar19 == 0) goto LAB_03e81c74;
    if ((long)*(int *)(lVar19 + 0x18) <= (long)unaff_x24) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_03e81c10;
    uVar9 = *unaff_x21;
    if (uVar9 == 0x3c) {
      return 0;
    }
    uVar20 = (uint)unaff_x24;
    if (uVar9 == 0x3e) break;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)PTR_DAT_04579e70;
    }
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
    if (lVar14 == 0) goto LAB_03e81c74;
    if (*(uint *)(lVar14 + 0x18) <= unaff_x24) goto LAB_03e81c10;
    *(short *)(lVar14 + unaff_x24 * 2 + 0x20) = (short)uVar9;
    if (unaff_w19 != '\x01') goto switchD_03e7c5b8_caseD_3;
    unaff_w19 = '\x01';
    switch(unaff_w23) {
    case 0:
      if (((uVar9 < 0x2f) && ((1L << ((ulong)uVar9 & 0x3f) & 0x680000000000U) != 0)) ||
         (uVar9 - 0x30 < 10)) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
        lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
        iVar10 = *(int *)(lVar14 + 0x30);
        unaff_w23 = 1;
LAB_03e7c620:
        *(undefined4 *)(lVar14 + 0x28) = unaff_w23;
        *(uint *)(lVar14 + 0x2c) = uVar20;
        *(int *)(lVar14 + 0x30) = iVar10 + 1;
      }
      else {
        if (uVar9 != 0x22) {
          if (uVar9 == 0x23) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 != 0) {
              if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
                iVar10 = *(int *)(lVar14 + 0x30);
                unaff_w23 = 4;
                goto LAB_03e7c620;
              }
              goto LAB_03e81c10;
            }
            goto LAB_03e81c74;
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 != 0) {
            if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
              unaff_w23 = 2;
              in_stack_00000028._4_4_ = 0;
              *(uint *)(lVar14 + 0x2c) = uVar20;
              *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
              *(uint *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) * 0x21 ^ uVar9;
              *(undefined4 *)(lVar14 + 0x28) = 2;
              unaff_w19 = '\x01';
              break;
            }
            goto LAB_03e81c10;
          }
          goto LAB_03e81c74;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
        lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
        unaff_w23 = 2;
        *(undefined4 *)(lVar14 + 0x28) = 2;
        *(uint *)(lVar14 + 0x2c) = uVar20 + 1;
      }
      in_stack_00000028._4_4_ = 0;
      unaff_w19 = '\x01';
      goto LAB_03e7ca38;
    case 1:
      if ((int)uVar9 < 0x65) {
        if (uVar9 == 0x20) {
LAB_03e7c810:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
          in_stack_00000028._4_4_ = 0;
        }
        else {
          if (uVar9 != 0x25) {
LAB_03e7c908:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 != 0) {
              if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
                iVar10 = *(int *)(lVar14 + 0x30);
                unaff_w23 = 1;
                goto LAB_03e7c94c;
              }
              goto LAB_03e81c10;
            }
            goto LAB_03e81c74;
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
          in_stack_00000028._4_4_ = 2;
        }
      }
      else {
        if (uVar9 == 0x70) goto LAB_03e7c810;
        if (uVar9 != 0x65) goto LAB_03e7c908;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
        in_stack_00000028._4_4_ = 1;
      }
      *(int *)(lVar14 + (long)(int)unaff_w26 * 0x18 + 0x34) = in_stack_00000028._4_4_;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26 + 1) goto LAB_03e81c10;
LAB_03e7c888:
      unaff_w26 = unaff_w26 + 1;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      unaff_w23 = 0;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      unaff_w19 = '\x02';
      break;
    case 2:
      if (uVar9 == 0x22) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 != 0) {
          unaff_w26 = unaff_w26 + 1;
          if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
            unaff_w23 = 0;
            in_stack_00000028._4_4_ = 0;
            *(undefined8 *)(lVar14 + 0x20) = 0;
            *(undefined8 *)(lVar14 + 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x30) = 0;
            goto LAB_03e7ca34;
          }
          goto LAB_03e81c10;
        }
        goto LAB_03e81c74;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
      if (lVar14 != 0) {
        if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
          unaff_w19 = '\x01';
          unaff_w23 = 2;
          *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
          *(uint *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) * 0x21 ^ uVar9;
          break;
        }
        goto LAB_03e81c10;
      }
      goto LAB_03e81c74;
    case 4:
      if (uVar9 == 0x20) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 != 0) {
          if (unaff_w26 + 1 < *(uint *)(lVar14 + 0x18)) {
            in_stack_00000028._4_4_ = 0;
            goto LAB_03e7c888;
          }
          goto LAB_03e81c10;
        }
        goto LAB_03e81c74;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      iVar10 = *(int *)(lVar14 + 0x30);
      unaff_w23 = 4;
LAB_03e7c94c:
      unaff_w19 = '\x01';
      *(int *)(lVar14 + 0x30) = iVar10 + 1;
    }
switchD_03e7c5b8_caseD_3:
    if (uVar9 == 0x3d) {
      unaff_w19 = '\x01';
    }
    if ((uVar9 == 0x20) && (unaff_w19 == '\0')) {
      if ((unaff_x25 & 1) != 0) {
        return 0;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
      unaff_w26 = unaff_w26 + 1;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
      unaff_w23 = 0;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      unaff_x25 = 1;
      in_stack_00000028._4_4_ = 0;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
LAB_03e7c9c0:
      unaff_w19 = '\0';
    }
    else if (unaff_w19 == '\x02') {
      if (uVar9 == 0x20) goto LAB_03e7c9c0;
LAB_03e7ca34:
      unaff_w19 = '\x02';
    }
    else if (unaff_w19 == '\0') {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_03e81c10;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      unaff_w19 = '\0';
      *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) * 7 + uVar9;
    }
LAB_03e7ca38:
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_x27 + (int)unaff_x24) {
      return 0;
    }
    unaff_x29 = unaff_x27 + unaff_x24;
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_03e81c10;
    unaff_x21 = (uint *)(unaff_x22 + (long)(int)(uint)unaff_x29 * (long)unaff_w28 + 0x20);
    if (*unaff_x21 == 0) {
      return 0;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) goto code_r0x03e7c508;
  }
  *in_stack_00000018 = unaff_w20 + uVar20;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x80);
    if (lVar19 == 0) goto LAB_03e81c74;
  }
  puVar5 = PTR_DAT_04579e70;
  if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_03e81c10;
  *(undefined2 *)(lVar19 + unaff_x24 * 2 + 0x20) = 0;
  if (*(char *)(in_stack_00000020 + 0x430) != '\0') {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar5;
      lVar14 = *(long *)(lVar11 + 0xb8);
    }
    lVar14 = *(long *)(lVar14 + 0x88);
    if (lVar14 == 0) goto LAB_03e81c74;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e81c10;
    if (*(int *)(lVar14 + 0x20) != 0x33542d3) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)puVar5;
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
      }
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e81c10;
      if (*(int *)(lVar14 + 0x20) != 0x2f23db3) {
        return 0;
      }
    }
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar5;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar19 = *(long *)(lVar14 + 0x88);
  if (lVar19 == 0) goto LAB_03e81c74;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
  if (*(int *)(lVar19 + 0x20) == 0x33542d3) {
LAB_03e7cc38:
    *(undefined1 *)(in_stack_00000020 + 0x430) = 0;
    return 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x88);
    if (lVar19 == 0) goto LAB_03e81c74;
  }
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
  if (*(int *)(lVar19 + 0x20) == 0x2f23db3) goto LAB_03e7cc38;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
  }
  lVar19 = *(long *)(lVar14 + 0x80);
  if (lVar19 == 0) goto LAB_03e81c74;
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
  sVar4 = *(short *)(lVar19 + 0x20);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar5;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x80);
  }
  if (uVar20 == 4 && sVar4 == 0x23) {
    uVar13 = 4;
LAB_03e7cd74:
    uVar8 = FUN_03e88040(lVar11,lVar19,uVar13);
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar13 = *(undefined8 *)PTR_DAT_0457ac50;
  }
  else {
    if (lVar19 == 0) goto LAB_03e81c74;
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
    sVar4 = *(short *)(lVar19 + 0x20);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar5;
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x80);
    }
    if (uVar20 == 5 && sVar4 == 0x23) {
      uVar13 = 5;
      goto LAB_03e7cd74;
    }
    if (lVar19 == 0) goto LAB_03e81c74;
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
    sVar4 = *(short *)(lVar19 + 0x20);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar5;
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x80);
    }
    if (uVar20 == 7 && sVar4 == 0x23) {
      uVar13 = 7;
      goto LAB_03e7cd74;
    }
    if (lVar19 == 0) goto LAB_03e81c74;
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
    sVar4 = *(short *)(lVar19 + 0x20);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar5;
      lVar14 = *(long *)(lVar11 + 0xb8);
    }
    if (uVar20 == 9 && sVar4 == 0x23) {
      lVar19 = *(long *)(lVar14 + 0x80);
      uVar13 = 9;
      goto LAB_03e7cd74;
    }
    lVar19 = *(long *)(lVar14 + 0x88);
    if (lVar19 == 0) goto LAB_03e81c74;
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
    uVar9 = *(uint *)(lVar19 + 0x20);
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
LAB_03e7ef08:
              return (uint)bVar6;
            }
            if (0x1be < (int)uVar9) {
              if (0xe < uVar9 - 0x290) {
                return 0;
              }
              return 0x4010U >> (ulong)(uVar9 - 0x290 & 0x1f) & 1;
            }
            if (uVar9 == 0x1bc) {
LAB_03e7f108:
              if (((*(byte *)(in_stack_00000020 + 600) >> 6 & 1) == 0) &&
                 (cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,0x40,0), cVar7 == '\0')) {
                *(uint *)(in_stack_00000020 + 0x25c) =
                     *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffbf;
              }
              uVar8 = FUN_0276ef5c(in_stack_00000020 + 0x530,*(undefined8 *)PTR_DAT_0457aca0);
              *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
              return 1;
            }
            if (uVar9 != 0x1be) {
              return 0;
            }
Unity_VisualScripting_SerializationData__get_json:
            if ((*(byte *)(in_stack_00000020 + 600) >> 2 & 1) == 0) {
              uVar8 = FUN_0276ef5c(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_0457aca0);
              *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
              cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,4,0);
              if (cVar7 == '\0') {
                *(uint *)(in_stack_00000020 + 0x25c) =
                     *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffb;
              }
            }
            uVar8 = FUN_0276ef5c(in_stack_00000020 + 0x510,*(undefined8 *)PTR_DAT_0457aca0);
            *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
            return 1;
          }
          if ((int)uVar9 < 0x193) {
            if ((int)uVar9 < 0x74) {
              if (uVar9 != 0x69) {
                if (uVar9 != 0x73) {
                  return 0;
                }
                goto LAB_03e7edbc;
              }
              goto LAB_03e7f1a8;
            }
            if (uVar9 == 0x75) goto LAB_03e7ff30;
            if (uVar9 == 0x18b)
            goto Unity_VisualScripting_ComponentHolderProtocol__GetComponentInChildren;
            if (uVar9 != 0x192) {
              return 0;
            }
          }
          else {
            if ((int)uVar9 < 0x19f) {
              if (uVar9 == 0x19c) goto LAB_03e7f108;
              if (uVar9 != 0x19e) {
                return 0;
              }
              goto Unity_VisualScripting_SerializationData__get_json;
            }
            if (uVar9 == 0x1aa) {
              return 1;
            }
            if (uVar9 == 0x1ab) {
Unity_VisualScripting_ComponentHolderProtocol__GetComponentInChildren:
              if ((*(byte *)(in_stack_00000020 + 600) & 1) != 0) {
                return 1;
              }
              cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,1,0);
              if (cVar7 == '\0') {
                *(uint *)(in_stack_00000020 + 0x25c) =
                     *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffe;
                uVar8 = FUN_02770378(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_0457ac70);
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
          uVar8 = FUN_0276fc34(in_stack_00000020 + 0x5d0,*(undefined8 *)PTR_DAT_0457ac98);
          *(undefined4 *)(in_stack_00000020 + 0x5f0) = uVar8;
          cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,2,0);
          if (cVar7 != '\0') {
            return 1;
          }
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffd;
          goto LAB_03e7f4c0;
        }
        if ((int)uVar9 < -0x32f64d99) {
          if ((int)uVar9 < -0x64bbe162) {
            if ((int)uVar9 < -0x70449a55) {
              if (uVar9 == 0x8f9a8677) {
LAB_03e7fa68:
                FUN_027701c0(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_0457acc8);
                if (*(int *)(in_stack_00000020 + 0x25c) == 1) {
                  *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
                  return 1;
                }
                uVar8 = FUN_02770378(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_0457ac70);
                *(undefined4 *)(in_stack_00000020 + 0x214) = uVar8;
                return 1;
              }
              if (uVar9 != 0x8fbb65aa) {
                return 0;
              }
              goto LAB_03e7f064;
            }
            if (uVar9 == 0x91e417d1) goto LAB_03e7e6bc;
            if (uVar9 != 0x92d31273) {
              if (uVar9 != 0x9b441e9d) {
                return 0;
              }
              goto LAB_03e7dc58;
            }
          }
          else {
            if ((int)uVar9 < -0x6147ec0e) {
              if (uVar9 != 0x9c8f61ca) {
                if (uVar9 != 0x9eb813f1) {
                  return 0;
                }
LAB_03e7e6bc:
                if ((*(byte *)(in_stack_00000020 + 600) >> 5 & 1) != 0) {
                  return 1;
                }
                cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,0x20,0);
                if (cVar7 != '\0') {
                  return 1;
                }
                uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffdf;
                goto LAB_03e7f4c0;
              }
LAB_03e7f064:
              if ((*(byte *)(in_stack_00000020 + 600) >> 3 & 1) != 0) {
                return 1;
              }
              cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,8,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffff7;
              goto LAB_03e7f4c0;
            }
            if (uVar9 != 0x9fa70e93) {
              if (uVar9 != 0xcb42bfbd) {
                if (uVar9 != 0xcd09b266) {
                  return 0;
                }
                goto LAB_03e800ac;
              }
LAB_03e7dc58:
              if (*(int *)(lVar11 + 0xe0) == 0) {
                lVar11 = thunk_FUN_01ee6d7c();
                lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
                lVar19 = *(long *)(lVar14 + 0x88);
                if (lVar19 == 0) goto LAB_03e81c74;
              }
              if (*(int *)(lVar19 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                             *(undefined4 *)(lVar19 + 0x2c),
                                             *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 0) {
                  fVar32 = DAT_00c925a0;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = fVar23 * fVar32;
                }
                else if (in_stack_00000028._4_4_ == 1) {
                  fVar32 = DAT_00c925a0;
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
                goto LAB_03e81424;
              }
              goto LAB_03e81c10;
            }
          }
LAB_03e7de94:
          if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
            return 1;
          }
          cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,0x10,0);
          if (cVar7 != '\0') {
            return 1;
          }
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
LAB_03e7f4c0:
          *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
          return 1;
        }
        if ((int)uVar9 < -0x13b73941) {
          if (-0x3239ec63 < (int)uVar9) {
            if (uVar9 == 0xe5711531) {
LAB_03e7fb68:
              *(undefined4 *)(in_stack_00000020 + 0x2c0) = 0xc6fffe00;
              return 1;
            }
            if (uVar9 == 0xe571a456) {
LAB_03e7fb7c:
              *(undefined4 *)(in_stack_00000020 + 0x408) = 0;
              return 1;
            }
            uVar20 = 0xec48c6be;
LAB_03e7d5d4:
            if (uVar9 != uVar20) {
              return 0;
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              lVar11 = thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              lVar19 = *(long *)(lVar14 + 0x88);
              if (lVar19 == 0) goto LAB_03e81c74;
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar19 + 0x2c),
                                           *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              iVar10 = -0x80000000;
              if (fVar23 != INFINITY) {
                iVar10 = (int)fVar23;
              }
              if (iVar10 < 0x191) {
                if (iVar10 < 0xc9) {
                  if ((iVar10 == 100) || (iVar10 == 200)) goto LAB_03e80fd4;
                }
                else if ((iVar10 == 300) || (iVar10 == 400)) goto LAB_03e80fd4;
              }
              else if (iVar10 < 0x259) {
                if ((iVar10 == 500) || (iVar10 == 600)) goto LAB_03e80fd4;
              }
              else if ((iVar10 == 700) || ((iVar10 == 800 || (iVar10 == 900)))) {
LAB_03e80fd4:
                *(int *)(in_stack_00000020 + 0x214) = iVar10;
              }
              uVar8 = *(undefined4 *)(in_stack_00000020 + 0x214);
              in_stack_00000020 = in_stack_00000020 + 0x218;
              puVar18 = (undefined8 *)PTR_DAT_0457ac60;
LAB_03e81020:
              FUN_02770178(in_stack_00000020,uVar8,*puVar18);
              return 1;
            }
            goto LAB_03e81c10;
          }
          if (uVar9 != 0xcdc58478) {
            uVar20 = 0xcdc6139d;
            goto LAB_03e7eab0;
          }
LAB_03e7f860:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01ee6d7c();
            lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ != 2) {
            if (in_stack_00000028._4_4_ == 1) {
              fVar32 = DAT_00c925a0;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
            }
            else {
              if (in_stack_00000028._4_4_ != 0) {
                return 1;
              }
              fVar32 = DAT_00c925a0;
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
            iVar10 = FUN_040ced70(&stack0x00000270,0);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar24 = (float)FUN_040ced80(&stack0x00000270,0);
              if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                fVar30 = DAT_00c925a0;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar30 = 1.0;
                }
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x50),0x60);
                fVar25 = (float)FUN_040ced90(&stack0x00000270,0);
                *(float *)(in_stack_00000020 + 0x2c0) =
                     (fVar32 / (float)iVar10) * fVar24 * fVar30 * ((fVar23 * fVar25) / 100.0);
                return 1;
              }
            }
          }
          goto LAB_03e81c74;
        }
        if ((int)uVar9 < 0x4a) {
          if (uVar9 == 0x42) {
LAB_03e7f4c8:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 1;
            FUN_03e9a078(in_stack_00000020 + 0x260,1,0);
            *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
            return 1;
          }
          if (uVar9 != 0x49) {
            return 0;
          }
LAB_03e7f1a8:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 2;
          FUN_03e9a078(in_stack_00000020 + 0x260,2,0);
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
          if (*(int *)(lVar14 + 0x38) != 0x43833) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_03e81c74;
            }
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
            if (*(int *)(lVar14 + 0x38) != 0x2da13) {
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                bVar3 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b8);
                uVar9 = (uint)bVar3;
                *(uint *)(in_stack_00000020 + 0x5f0) = (uint)bVar3;
                goto LAB_03e80560;
              }
              goto LAB_03e81c74;
            }
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (1 < *(uint *)(lVar14 + 0x18)) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
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
LAB_03e80560:
            FUN_0276fbec(in_stack_00000020 + 0x5d0,uVar9,*(undefined8 *)PTR_DAT_0457ac38);
            return 1;
          }
          goto LAB_03e81c10;
        }
        if (uVar9 != 0x53) {
          if (uVar9 != 0x55) {
            if (uVar9 != 0x62) {
              return 0;
            }
            goto LAB_03e7f4c8;
          }
LAB_03e7ff30:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 4;
          FUN_03e9a078(in_stack_00000020 + 0x260,4,0);
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
          if (*(int *)(lVar14 + 0x38) == 0x44d63) {
LAB_03e7ffe4:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_03e81c74;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
            uVar13 = FUN_03e88454(lVar11,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                  *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48));
            *(int *)(in_stack_00000020 + 0x158) = (int)uVar13;
            bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
            if (((uint)((ulong)uVar13 >> 0x18) & 0xff) <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)
               ) {
              bVar3 = (byte)((ulong)uVar13 >> 0x18);
            }
            *(byte *)(in_stack_00000020 + 0x15b) = bVar3;
            uVar8 = *(undefined4 *)(in_stack_00000020 + 0x158);
          }
          else {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_03e81c74;
            }
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
            if (*(int *)(lVar14 + 0x38) == 0x2ef43) goto LAB_03e7ffe4;
            uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
            *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
          }
          uVar13 = *(undefined8 *)PTR_DAT_0457ac50;
          in_stack_00000020 = in_stack_00000020 + 0x510;
          goto LAB_03e7cd94;
        }
LAB_03e7edbc:
        *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x40;
        FUN_03e9a078(in_stack_00000020 + 0x260,0x40,0);
        lVar11 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
        if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
        if (*(int *)(lVar14 + 0x38) == 0x44d63) {
LAB_03e7ee70:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
          uVar13 = FUN_03e88454(lVar11,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48));
          *(int *)(in_stack_00000020 + 0x15c) = (int)uVar13;
          bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
          if (((uint)((ulong)uVar13 >> 0x18) & 0xff) <= (uint)*(byte *)(in_stack_00000020 + 0x4ef))
          {
            bVar3 = (byte)((ulong)uVar13 >> 0x18);
          }
          *(byte *)(in_stack_00000020 + 0x15f) = bVar3;
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x15c);
        }
        else {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_03e81c74;
          }
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
          if (*(int *)(lVar14 + 0x38) == 0x2ef43) goto LAB_03e7ee70;
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4ec);
          *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
        }
        uVar13 = *(undefined8 *)PTR_DAT_0457ac50;
        in_stack_00000020 = in_stack_00000020 + 0x530;
        goto LAB_03e7cd94;
      }
      if (0x79c1 < (int)uVar9) {
        if (0x22ef4 < (int)uVar9) {
          if ((int)uVar9 < 0x260f5) {
            if (0x23290 < (int)uVar9) {
              if (uVar9 == 0x238b8) goto LAB_03e7fac4;
              if (uVar9 == 0x25a2e) goto LAB_03e7fae4;
              uVar20 = 0x60f4;
LAB_03e7d418:
              if (uVar9 != (uVar20 | 0x20000)) {
                return 0;
              }
              if ((*(byte *)(in_stack_00000020 + 0x259) >> 1 & 1) != 0) {
                return 1;
              }
              FUN_0276f5bc(&stack0x00000070,in_stack_00000020 + 0x550,
                           *(undefined8 *)PTR_DAT_0457acb8);
              cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,0x200,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffdff;
              goto LAB_03e7f4c0;
            }
            if (uVar9 != 0x22f09) {
              uVar20 = 0x3290;
              goto LAB_03e7e72c;
            }
          }
          else {
            if (0x26490 < (int)uVar9) {
              if (uVar9 == 0x26ab8) {
LAB_03e7fac4:
                uVar8 = FUN_02771580(in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_0457acb0);
                *(undefined4 *)(in_stack_00000020 + 0x1e8) = uVar8;
                return 1;
              }
              if (uVar9 == 0x2d7ad) goto Unity_VisualScripting_MacroScriptableObject___ctor;
              uVar20 = 0x2d8fe;
LAB_03e7e600:
              if (uVar9 != uVar20) {
                return 0;
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar11 = *(long *)PTR_DAT_04579e70;
                lVar14 = *(long *)(lVar11 + 0xb8);
                lVar19 = *(long *)(lVar14 + 0x88);
                if (lVar19 == 0) goto LAB_03e81c74;
              }
              if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
              if (*(int *)(lVar19 + 0x30) != 3) {
                return 0;
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                lVar11 = thunk_FUN_01ee6d7c();
                lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              }
              lVar14 = *(long *)(lVar14 + 0x80);
              if (lVar14 == 0) goto LAB_03e81c74;
              if ((7 < *(uint *)(lVar14 + 0x18)) && (*(uint *)(lVar14 + 0x18) != 8)) {
                uVar13 = FUN_03e87a64(lVar11,*(undefined2 *)(lVar14 + 0x2e));
                cVar7 = FUN_03e87a64(uVar13,*(undefined2 *)(lVar14 + 0x30));
                *(char *)(in_stack_00000020 + 0x4ef) = cVar7 + (char)uVar13 * '\x10';
                return 1;
              }
              goto LAB_03e81c10;
            }
            if (uVar9 != 0x26109) {
              uVar20 = 0x6490;
LAB_03e7e72c:
              if (uVar9 == (uVar20 | 0x20000)) {
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
          if ((lVar11 == 0) || (lVar14 = *(long *)(lVar11 + 0x48), lVar14 == 0)) goto LAB_03e81c74;
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
          goto LAB_03e81c10;
        }
        if ((int)uVar9 < 0xa83b) {
          if (0x7fe9 < (int)uVar9) {
            if (uVar9 == 0xa15f)
            goto Unity_VisualScripting_Serialization__NotifyDependencyDeserialized;
            if (uVar9 == 0xa825) goto LAB_03e7fb88;
            if (uVar9 != 0xa83a) {
              return 0;
            }
            goto LAB_03e7d6e0;
          }
          if (uVar9 == 0x79d7) goto LAB_03e7f160;
          if (uVar9 != 0x7fe9) {
            return 0;
          }
        }
        else {
          if ((int)uVar9 < 0xabd8) {
            if (uVar9 == 0xabc1) {
LAB_03e7f54c:
              *(undefined1 *)(in_stack_00000020 + 0x2da) = 1;
              return 1;
            }
            if (uVar9 != 0xabd7) {
              return 0;
            }
LAB_03e7f160:
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
LAB_03e7fae4:
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              }
              FUN_027708b0(&stack0x00000070,lVar14 + 0x10,*(undefined8 *)PTR_DAT_0457acc0);
              uVar13 = in_stack_00000088;
              uVar12 = _uStack0000000000000070;
              *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_00000078;
              thunk_FUN_01f51358(in_stack_00000020 + 0x100);
              *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
              thunk_FUN_01f51358(in_stack_00000020 + 0x118,uVar13);
              *(int *)(in_stack_00000020 + 0x120) = (int)uVar12;
              return 1;
            }
            uVar20 = 0x2ef4;
            goto LAB_03e7d418;
          }
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        uVar12 = FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar19 + 0x2c),
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
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_03e81c10;
          if (*(short *)(lVar14 + 0x2a) != 0x2b) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04579e70 + 0xb8) + 0x80);
              if (lVar14 == 0) goto LAB_03e81c74;
            }
            if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_03e81c10;
            if (*(short *)(lVar14 + 0x2a) != 0x2d) {
              *(float *)(in_stack_00000020 + 0x1e8) = fVar23;
              goto LAB_03e80c54;
            }
          }
          uVar12 = (ulong)(uint)(fVar23 + *(float *)(in_stack_00000020 + 0x1e4));
        }
        *(int *)(in_stack_00000020 + 0x1e8) = (int)uVar12;
LAB_03e80c54:
        FUN_0277153c(uVar12,in_stack_00000020 + 0x1f0,*(undefined8 *)PTR_DAT_0457ac48);
        return 1;
      }
      if ((int)uVar9 < 0x19a7) {
        if ((int)uVar9 < 0x11cd) {
          if ((int)uVar9 < 0xc90) {
            bVar6 = uVar9 == 0xb9d;
            goto LAB_03e7ef08;
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
LAB_03e7dab8:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01ee6d7c();
            lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar19 + 0x2c),
                                         *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 2) {
              *(float *)(in_stack_00000020 + 0x640) =
                   (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
              return 1;
            }
            fVar32 = DAT_00c925a0;
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
LAB_03e80eb8:
            *(float *)(in_stack_00000020 + 0x640) = fVar23;
            return 1;
          }
          goto LAB_03e81c10;
        }
        if ((int)uVar9 < 0x1287) {
          if (uVar9 == 0x1278) {
LAB_03e7f650:
            if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
            fVar24 = *(float *)(in_stack_00000020 + 0x404);
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar23 = (float)FUN_040cee20(&stack0x00000270,0);
            fVar32 = 1.0;
            if (0.0 < fVar23) {
              if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar32 = (float)FUN_040cee20(&stack0x00000270,0);
            }
            *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
            FUN_027715e4(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                         *(undefined8 *)PTR_DAT_0457ac88);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              iVar10 = FUN_040ced70(&stack0x00000270,0);
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_040ced80(&stack0x00000270,0);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  fVar30 = *(float *)(in_stack_00000020 + 0x61c);
                  fVar24 = DAT_00c925a0;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar24 = 1.0;
                  }
                  memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar25 = (float)FUN_040cee10(&stack0x00000270,0);
                  *(float *)(in_stack_00000020 + 0x61c) =
                       fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                                *(float *)(in_stack_00000020 + 0x404);
                  FUN_03e9a078(in_stack_00000020 + 0x260,0x100,0);
                  uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x100;
                  goto Unity_VisualScripting_LudiqScriptableObject__ToString;
                }
              }
            }
            goto LAB_03e81c74;
          }
          uVar20 = 0x1286;
        }
        else {
          if (uVar9 == 0x18ec) goto LAB_03e7dab8;
          if (uVar9 == 0x1998) goto LAB_03e7f650;
          uVar20 = 0x19a6;
        }
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
        fVar24 = *(float *)(in_stack_00000020 + 0x404);
        memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
        fVar23 = (float)FUN_040cee00(&stack0x00000270,0);
        fVar32 = 1.0;
        if (0.0 < fVar23) {
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar32 = (float)FUN_040cee00(&stack0x00000270,0);
        }
        *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
        FUN_027715e4(*(undefined4 *)(in_stack_00000020 + 0x61c),in_stack_00000020 + 0x620,
                     *(undefined8 *)PTR_DAT_0457ac88);
        if (*(long *)(in_stack_00000020 + 0x100) != 0) {
          fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          iVar10 = FUN_040ced70(&stack0x00000270,0);
          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar32 = (float)FUN_040ced80(&stack0x00000270,0);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              fVar30 = *(float *)(in_stack_00000020 + 0x61c);
              fVar24 = DAT_00c925a0;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar24 = 1.0;
              }
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar25 = (float)FUN_040cedf0(&stack0x00000270,0);
              *(float *)(in_stack_00000020 + 0x61c) =
                   fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                            *(float *)(in_stack_00000020 + 0x404);
              FUN_03e9a078(in_stack_00000020 + 0x260,0x80,0);
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x80;
Unity_VisualScripting_LudiqScriptableObject__ToString:
              *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
              return 1;
            }
          }
        }
        goto LAB_03e81c74;
      }
      if ((int)uVar9 < 0x5892) {
        if ((int)uVar9 < 0x5172) {
          if (uVar9 == 0x50c5) {
LAB_03e7f854:
            *(undefined1 *)(in_stack_00000020 + 0x2db) = 0;
            return 1;
          }
          uVar20 = 0x5171;
        }
        else {
          if (uVar9 == 0x517f) goto LAB_03e7f3f0;
          if (uVar9 == 0x57e5) goto LAB_03e7f854;
          uVar20 = 0x5891;
        }
        if (uVar9 != uVar20) {
          return 0;
        }
        if ((*(byte *)(in_stack_00000020 + 0x25d) & 1) == 0) {
          return 1;
        }
        if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
          uVar8 = FUN_027716b0(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_0457ac78);
          *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar8;
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
          fVar24 = *(float *)(in_stack_00000020 + 0x404);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar23 = (float)FUN_040cee20(&stack0x00000270,0);
          fVar32 = 1.0;
          if (0.0 < fVar23) {
            if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar32 = (float)FUN_040cee20(&stack0x00000270,0);
          }
          *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
        }
        cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,0x100,0);
        if (cVar7 != '\0') {
          return 1;
        }
        uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffeff;
        goto LAB_03e7f4c0;
      }
      if (0x6f5f < (int)uVar9) {
        if (uVar9 == 0x7625) {
LAB_03e7fb88:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x200;
          FUN_03e9a078(in_stack_00000020 + 0x260,0x200,0);
          puVar5 = PTR_DAT_04579dd8;
          if (*(int *)(*(long *)PTR_DAT_04579dd8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_0483a88b == '\0') {
            thunk_FUN_01efb3a4(PTR_DAT_04579dd8);
            DAT_0483a88b = '\x01';
          }
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)puVar5;
          }
          uVar27 = (*(ulong **)(lVar11 + 0xb8))[1];
          uVar26 = **(ulong **)(lVar11 + 0xb8);
          uVar9 = 0;
          uVar12 = 0x4000ffff;
          goto LAB_03e7fc3c;
        }
        if (uVar9 != 0x763a) {
          if (uVar9 != 0x79c1) {
            return 0;
          }
          goto LAB_03e7f54c;
        }
LAB_03e7d6e0:
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        if (*(char *)(in_stack_00000020 + 0x3f5) != '\0') {
          return 1;
        }
        lVar11 = *(long *)(in_stack_00000020 + 0x368);
        if (lVar11 == 0) goto LAB_03e81c74;
        lVar14 = *(long *)(lVar11 + 0x48);
        if (lVar14 == 0) goto LAB_03e81c74;
        uVar9 = *(uint *)(lVar11 + 0x28);
        lVar19 = (long)(int)uVar9;
        if (*(int *)(lVar14 + 0x18) < (int)(uVar9 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_04579df0 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0241f9fc((long *)(lVar11 + 0x48),uVar9 + 1,*(undefined8 *)PTR_DAT_0457ac28);
          lVar11 = *(long *)(in_stack_00000020 + 0x368);
          if (lVar11 == 0) goto LAB_03e81c74;
        }
        lVar11 = *(long *)(lVar11 + 0x48);
        if (lVar11 == 0) goto LAB_03e81c74;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e81c10;
        plVar16 = (long *)(lVar11 + lVar19 * 0x28 + 0x20);
        *plVar16 = in_stack_00000020;
        thunk_FUN_01f51358(plVar16,in_stack_00000020);
        if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar11 == 0))
        goto LAB_03e81c74;
        lVar14 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar14 = *(long *)PTR_DAT_04579e70;
        }
        lVar14 = *(long *)(lVar14 + 0xb8);
        lVar22 = *(long *)(lVar14 + 0x88);
        if (lVar22 == 0) goto LAB_03e81c74;
        if ((*(int *)(lVar22 + 0x18) == 0) || (*(uint *)(lVar11 + 0x18) <= uVar9))
        goto LAB_03e81c10;
        *(undefined4 *)(lVar11 + lVar19 * 0x28 + 0x28) = *(undefined4 *)(lVar22 + 0x24);
        if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar11 == 0))
        goto LAB_03e81c74;
        if (uVar9 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + lVar19 * 0x28;
          *(undefined4 *)(lVar11 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x494);
          iVar10 = *(int *)(lVar22 + 0x2c);
          *(int *)(lVar11 + 0x2c) = iVar10 + unaff_w20;
          uVar8 = *(undefined4 *)(lVar22 + 0x30);
          *(undefined4 *)(lVar11 + 0x30) = uVar8;
          FUN_03e5621c(lVar11 + 0x20,*(undefined8 *)(lVar14 + 0x80),iVar10,uVar8,0);
          return 1;
        }
        goto LAB_03e81c10;
      }
      if (uVar9 == 0x589f) {
LAB_03e7f3f0:
        if (-1 < *(char *)(in_stack_00000020 + 0x25c)) {
          return 1;
        }
        if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
          uVar8 = FUN_027716b0(in_stack_00000020 + 0x620,*(undefined8 *)PTR_DAT_0457ac78);
          *(undefined4 *)(in_stack_00000020 + 0x61c) = uVar8;
          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
          fVar24 = *(float *)(in_stack_00000020 + 0x404);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          fVar23 = (float)FUN_040cee00(&stack0x00000270,0);
          fVar32 = 1.0;
          if (0.0 < fVar23) {
            if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_03e81c74;
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar32 = (float)FUN_040cee00(&stack0x00000270,0);
          }
          *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
        }
        cVar7 = FUN_03e9a174(in_stack_00000020 + 0x260,0x80,0);
        if (cVar7 != '\0') {
          return 1;
        }
        uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffff7f;
        goto LAB_03e7f4c0;
      }
      if (uVar9 != 0x6f5f) {
        return 0;
      }
Unity_VisualScripting_Serialization__NotifyDependencyDeserialized:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
        lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar19 == 0) goto LAB_03e81c74;
      }
      if ((*(int *)(lVar19 + 0x18) == 0) || (*(int *)(lVar19 + 0x18) == 1)) goto LAB_03e81c10;
      iVar10 = *(int *)(lVar19 + 0x24);
      if ((iVar10 != 0x2d93756b) && (iVar10 != 0x1f31f54b)) {
        iVar1 = *(int *)(lVar19 + 0x38);
        iVar2 = *(int *)(lVar19 + 0x3c);
        FUN_03e455d8(iVar10,&stack0x000002f0,0);
        puVar5 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (in_stack_000002f0,0,0);
        if ((uVar12 & 1) != 0) {
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(lVar11 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x70);
          if (lVar19 == 0) {
            in_stack_000002f0 = 0;
          }
          else {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            }
            lVar11 = *(long *)(lVar14 + 0x88);
            if (lVar11 == 0) goto LAB_03e81c74;
            if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
            uVar13 = FUN_03415cbc(0,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar11 + 0x2c),
                                  *(undefined4 *)(lVar11 + 0x30),0);
            in_stack_000002f0 =
                 (**(code **)(lVar19 + 0x18))
                           (*(undefined8 *)(lVar19 + 0x40),iVar10,uVar13,
                            *(undefined8 *)(lVar19 + 0x28));
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (in_stack_000002f0,0,0);
          if ((uVar12 & 1) != 0) {
            uVar13 = FUN_03e90800(0);
            lVar11 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar11);
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_03e81c74;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e81c10;
            uVar21 = FUN_03415cbc(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                  *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0);
            uVar13 = FUN_03405678(uVar13,uVar21,0);
            in_stack_000002f0 = FUN_023c38f8(uVar13,*(undefined8 *)PTR_DAT_0457a038);
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (in_stack_000002f0,0,0);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          FUN_03e450e8(in_stack_000002f0,0);
        }
        if (iVar2 == 0 && iVar1 == 0) {
          if (in_stack_000002f0 == 0) goto LAB_03e81c74;
          *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(in_stack_000002f0 + 0x20);
          thunk_FUN_01f51358(in_stack_00000020 + 0x118);
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          uVar9 = FUN_03e45a30(uVar13,in_stack_000002f0,*(long *)(lVar11 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          *(uint *)(in_stack_00000020 + 0x120) = uVar9;
          lVar11 = **(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
          if (lVar11 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e81c10;
          lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
          in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
          in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
          in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
          in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
          in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
          in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
          _uStack0000000000000070 = *(ulong *)(lVar11 + 0x20);
          uVar13 = *(undefined8 *)PTR_DAT_0457ac58;
          plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8) + 2;
        }
        else {
          if ((iVar1 != 0x629fdf7) && (iVar1 != 0x454d9f7)) {
            return 0;
          }
          uVar12 = FUN_03e457d0(iVar2,&stack0x000002e8,0);
          if ((uVar12 & 1) == 0) {
            uVar13 = FUN_03e90800(0);
            lVar11 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar11);
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar14 == 0) goto LAB_03e81c74;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_03e81c10;
            uVar21 = FUN_03415cbc(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                  *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),0);
            uVar13 = FUN_03405678(uVar13,uVar21,0);
            uVar13 = FUN_023c38f8(uVar13,*(undefined8 *)
                                          Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_Init__
                                 );
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar5);
            }
            uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                               (uVar13,0,0);
            if ((uVar12 & 1) != 0) {
              return 0;
            }
            FUN_03e453b4(iVar2,uVar13,0);
            *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
            thunk_FUN_01f51358(in_stack_00000020 + 0x118);
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
            lVar11 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            uVar9 = FUN_03e45a30(uVar13,in_stack_000002f0,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar9;
            lVar11 = **(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
            if (lVar11 == 0) goto LAB_03e81c74;
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e81c10;
            lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
            _uStack0000000000000070 = *(ulong *)(lVar11 + 0x20);
            uVar13 = *(undefined8 *)PTR_DAT_0457ac58;
            plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8) + 2;
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
            thunk_FUN_01f51358(in_stack_00000020 + 0x118);
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
            lVar11 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            uVar9 = FUN_03e45a30(uVar13,in_stack_000002f0,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar9;
            lVar11 = **(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
            if (lVar11 == 0) goto LAB_03e81c74;
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e81c10;
            lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
            _uStack0000000000000070 = *(ulong *)(lVar11 + 0x20);
            uVar13 = *(undefined8 *)PTR_DAT_0457ac58;
            plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8) + 2;
            in_stack_000001b0 = _uStack0000000000000070;
            in_stack_000001b8 = in_stack_00000078;
            in_stack_000001c0 = in_stack_00000080;
            in_stack_000001c8 = in_stack_00000088;
            in_stack_000001d0 = in_stack_00000090;
            in_stack_000001d8 = in_stack_00000098;
            in_stack_000001e0 = in_stack_000000a0;
          }
        }
        FUN_02770820(plVar16,&stack0x00000070,uVar13);
        lVar11 = in_stack_00000020 + 0x100;
        *(long *)(in_stack_00000020 + 0x100) = in_stack_000002f0;
        goto LAB_03e7e070;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
      if (lVar11 == 0) goto LAB_03e81c74;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
      *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar11 + 0x28);
      thunk_FUN_01f51358(in_stack_00000020 + 0x100);
      lVar11 = **(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
      if (lVar11 == 0) goto LAB_03e81c74;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
      *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
      thunk_FUN_01f51358(in_stack_00000020 + 0x118);
      *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
      plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
      lVar11 = *plVar16;
      if (lVar11 == 0) goto LAB_03e81c74;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
      in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
      _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
      in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
      in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
      in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
      in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
      in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
LAB_03e7ec40:
      uVar13 = *(undefined8 *)PTR_DAT_0457ac58;
LAB_03e7ec54:
      FUN_02770820(plVar16 + 2,&stack0x00000070,uVar13);
      return 1;
    }
    if (0x691282 < (int)uVar9) {
      if ((int)uVar9 < 0x3434823) {
        if (0x765e9a < (int)uVar9) {
          if (0xe6a57a < (int)uVar9) {
            if ((int)uVar9 < 0x2d9fc44) {
              if (uVar9 == 0xf4aac9) goto LAB_03e7f368;
              if (uVar9 != 0x2d9fc43) {
                return 0;
              }
            }
            else {
              if (uVar9 == 0x3004302) {
LAB_03e7cfc0:
                *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
                return 1;
              }
              if (uVar9 != 0x31d0163) {
                if (uVar9 != 0x3434822) {
                  return 0;
                }
                goto LAB_03e7cfc0;
              }
            }
            goto LAB_03e7de94;
          }
          if ((int)uVar9 < 0xa3a05b) {
            if (uVar9 != 0x8b5eea) {
              uVar20 = 0xa3a05a;
LAB_03e7e8cc:
              if (uVar9 != uVar20) {
                return 0;
              }
              *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
              return 1;
            }
          }
          else {
            if (uVar9 == 0xb1a5a9) {
LAB_03e7f368:
              if (*(int *)(lVar11 + 0xe0) == 0) {
                lVar11 = thunk_FUN_01ee6d7c();
                lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
                lVar19 = *(long *)(lVar14 + 0x88);
                if (lVar19 == 0) goto LAB_03e81c74;
              }
              if (*(int *)(lVar19 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                             *(undefined4 *)(lVar19 + 0x2c),
                                             *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 1) {
                  fVar32 = DAT_00c925a0;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                }
                else {
                  if (in_stack_00000028._4_4_ != 0) {
                    return 0;
                  }
                  fVar32 = DAT_00c925a0;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = fVar23 * fVar32;
                }
                *(float *)(in_stack_00000020 + 0x61c) = fVar23;
                return 1;
              }
              goto LAB_03e81c10;
            }
            if (uVar9 != 0xce640a) {
              uVar20 = 0xe6a57a;
              goto LAB_03e7e8cc;
            }
          }
LAB_03e7e8e4:
          uVar13 = 0x10;
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
LAB_03e7fab4:
          *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
          FUN_03e9a078(in_stack_00000020 + 0x260,uVar13,0);
          return 1;
        }
        if ((int)uVar9 < 0x719366) {
          if ((int)uVar9 < 0x6afe3e) {
            if (uVar9 == 0x6a5e93) goto LAB_03e7f2d4;
            if (uVar9 != 0x6afe3d) {
              return 0;
            }
Unity_VisualScripting_LudiqBehaviour__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize:
            *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
            return 1;
          }
          if (uVar9 == 0x6ba308) {
LAB_03e800a0:
            *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
            return 1;
          }
          if (uVar9 != 0x6ccb9a) {
            if (uVar9 != 0x719365) {
              return 0;
            }
            goto LAB_03e7d9cc;
          }
LAB_03e7eda0:
          *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
          return 1;
        }
        if (0x73f193 < (int)uVar9) {
          if (uVar9 == 0x74913d)
          goto 
          Unity_VisualScripting_LudiqBehaviour__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
          ;
          if (uVar9 == 0x753608) goto LAB_03e800a0;
          if (uVar9 != 0x765e9a) {
            return 0;
          }
          goto LAB_03e7eda0;
        }
        if (uVar9 != 0x72a582) {
          if (uVar9 != 0x73f193) {
            return 0;
          }
LAB_03e7f2d4:
          uVar8 = FUN_02771580(in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_0457acb0);
          *(undefined4 *)(in_stack_00000020 + 0x40c) = uVar8;
          return 1;
        }
LAB_03e7f5ec:
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        uVar9 = *(int *)(in_stack_00000020 + 0x494) - 1;
        if (0 < *(int *)(in_stack_00000020 + 0x494)) {
          fVar23 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac);
          *(float *)(in_stack_00000020 + 0x640) = fVar23;
          if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
             (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar11 == 0))
          goto LAB_03e81c74;
          if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e81c10;
          *(float *)(lVar11 + (ulong)uVar9 * 0x178 + 0x144) = fVar23;
        }
        *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
        return 1;
      }
      if (0x1eaf47a1 < (int)uVar9) {
        if ((int)uVar9 < 0x2e9af08b) {
          if ((int)uVar9 < 0x21c6f46b) {
            if (uVar9 != 0x20d7f9c8) {
              uVar20 = 0x21c6f46a;
LAB_03e7e70c:
              if (uVar9 != uVar20) {
                return 0;
              }
              goto LAB_03e7e8e4;
            }
          }
          else {
            if (uVar9 == 0x2b8343c1) goto LAB_03e7faa0;
            if (uVar9 != 0x2dabf5e8) {
              uVar20 = 0x2e9af08a;
              goto LAB_03e7e70c;
            }
          }
          uVar13 = 0x20;
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x20;
          goto LAB_03e7fab4;
        }
        if (0x421fe49d < (int)uVar9) {
          if (uVar9 == 0x71174431) goto LAB_03e7fb68;
          if (uVar9 == 0x7117d356) goto LAB_03e7fb7c;
          uVar20 = 0x77eef5be;
          goto LAB_03e7d5d4;
        }
        if (uVar9 == 0x419bc966) {
LAB_03e800ac:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01ee6d7c();
            lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar19 + 0x2c),
                                         *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
            if (fVar23 != -32768.0) {
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00c925a0;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
              }
              else if (in_stack_00000028._4_4_ == 1) {
                fVar32 = DAT_00c925a0;
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
          goto LAB_03e81c10;
        }
        if (uVar9 == 0x421f5578) goto LAB_03e7f860;
        uVar20 = 0x421fe49d;
LAB_03e7eab0:
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00c925a0;
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
              goto LAB_03e80c10;
            }
            fVar32 = DAT_00c925a0;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
          }
          *(float *)(in_stack_00000020 + 0x408) = fVar23;
LAB_03e80c10:
          *(float *)(in_stack_00000020 + 0x640) = *(float *)(in_stack_00000020 + 0x640) + fVar23;
          return 1;
        }
        goto LAB_03e81c10;
      }
      if (0x14495107 < (int)uVar9) {
        if (0x161e7507 < (int)uVar9) {
          if (uVar9 == 0x16504b66) {
LAB_03e7f4f8:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            }
            FUN_027708b0(&stack0x00000070,lVar14 + 0x10,*(undefined8 *)PTR_DAT_0457acc0);
            uVar8 = uStack0000000000000070;
            *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000088;
            thunk_FUN_01f51358(in_stack_00000020 + 0x118);
            *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
            return 1;
          }
          if (uVar9 == 0x1b40b577) goto LAB_03e7fa68;
          if (uVar9 != 0x1eaf47a1) {
            return 0;
          }
LAB_03e7faa0:
          uVar13 = 8;
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 8;
          goto LAB_03e7fab4;
        }
        if (uVar9 == 0x147b2766) goto LAB_03e7f4f8;
        uVar20 = 0x161e7507;
LAB_03e7e044:
        if (uVar9 != uVar20) {
          return 0;
        }
        uVar13 = FUN_02770fd8(in_stack_00000020 + 0x588,*(undefined8 *)PTR_DAT_0457ac90);
        lVar11 = in_stack_00000020 + 0x580;
        *(undefined8 *)(in_stack_00000020 + 0x580) = uVar13;
LAB_03e7e070:
        thunk_FUN_01f51358(lVar11);
        return 1;
      }
      if ((int)uVar9 < 0x454d9f8) {
        if (uVar9 != 0x4230398) {
          if (uVar9 != 0x454d9f7) {
            return 0;
          }
LAB_03e7eb68:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
            lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
          iVar10 = *(int *)(lVar19 + 0x24);
          if ((iVar10 == 0x2d93756b) || (iVar10 == 0x1f31f54b)) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar11 = **(long **)(lVar11 + 0xb8);
            if (lVar11 == 0) goto LAB_03e81c74;
            if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
            thunk_FUN_01f51358(in_stack_00000020 + 0x118);
            *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
            plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar11 = *plVar16;
            if (lVar11 == 0) goto LAB_03e81c74;
            if (*(int *)(lVar11 + 0x18) != 0) {
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
              goto LAB_03e7ec40;
            }
            goto LAB_03e81c10;
          }
          uVar12 = FUN_03e457d0(iVar10,&stack0x000002e8,0);
          if ((uVar12 & 1) != 0) {
            *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
            thunk_FUN_01f51358(in_stack_00000020 + 0x118);
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
            uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
            lVar11 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            uVar9 = FUN_03e45a30(uVar13,uVar21,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar9;
            plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar11 = *plVar16;
            if (lVar11 == 0) goto LAB_03e81c74;
            if (uVar9 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
              in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
              in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
              _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
              uVar13 = *(undefined8 *)PTR_DAT_0457ac58;
              in_stack_000000f0 = _uStack0000000000000070;
              in_stack_000000f8 = in_stack_00000078;
              in_stack_00000100 = in_stack_00000080;
              in_stack_00000108 = in_stack_00000088;
              in_stack_00000110 = in_stack_00000090;
              in_stack_00000118 = in_stack_00000098;
              in_stack_00000120 = in_stack_000000a0;
              goto LAB_03e7ec54;
            }
            goto LAB_03e81c10;
          }
          uVar13 = FUN_03e90800(0);
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar11);
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e81c10;
          uVar21 = FUN_03415cbc(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0);
          uVar13 = FUN_03405678(uVar13,uVar21,0);
          uVar13 = FUN_023c38f8(uVar13,*(undefined8 *)
                                        Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_Init__
                               );
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
          }
          uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (uVar13,0,0);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          FUN_03e453b4(iVar10,uVar13,0);
          *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
          thunk_FUN_01f51358(in_stack_00000020 + 0x118);
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
          uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          uVar9 = FUN_03e45a30(uVar13,uVar21,*(long *)(lVar11 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          *(uint *)(in_stack_00000020 + 0x120) = uVar9;
          plVar16 = *(long **)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar11 = *plVar16;
          if (lVar11 == 0) goto LAB_03e81c74;
          if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e81c10;
          lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
          in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
          in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
          in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
          in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
          in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
          in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
          _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
          uVar13 = *(undefined8 *)PTR_DAT_0457ac58;
          in_stack_000000b0 = _uStack0000000000000070;
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000c0 = in_stack_00000080;
          in_stack_000000c8 = in_stack_00000088;
          in_stack_000000d0 = in_stack_00000090;
          in_stack_000000d8 = in_stack_00000098;
          in_stack_000000e0 = in_stack_000000a0;
          goto LAB_03e7ec54;
        }
      }
      else if (uVar9 != 0x5f82798) {
        if (uVar9 == 0x629fdf7) goto LAB_03e7eb68;
        uVar20 = 0x14495107;
        goto LAB_03e7e044;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04579e70 + 0xb8) + 0x88);
        if (lVar19 == 0) goto LAB_03e81c74;
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
      uVar8 = *(undefined4 *)(lVar19 + 0x24);
      uVar12 = FUN_03e45728(uVar8,&stack0x000002e0,0);
      puVar5 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (in_stack_000002e0,0,0);
        if ((uVar12 & 1) != 0) {
          uVar13 = FUN_03e909f0(0);
          lVar11 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar11);
            lVar11 = *(long *)PTR_DAT_04579e70;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e81c10;
          uVar21 = FUN_03415cbc(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0);
          uVar13 = FUN_03405678(uVar13,uVar21,0);
          in_stack_000002e0 = FUN_023c38f8(uVar13,*(undefined8 *)PTR_DAT_0457ac18);
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (in_stack_000002e0,0,0);
        if ((uVar12 & 1) != 0) {
          return 0;
        }
        FUN_03e4544c(uVar8,in_stack_000002e0,0);
      }
      *(undefined8 *)(in_stack_00000020 + 0x580) = in_stack_000002e0;
      thunk_FUN_01f51358(in_stack_00000020 + 0x580);
      uVar9 = 1;
      *(undefined1 *)(in_stack_00000020 + 0x5b0) = 0;
      plVar16 = (long *)PTR_DAT_04579e70;
      goto LAB_03e807f4;
    }
    if (0x105b0c < (int)uVar9) {
      if ((int)uVar9 < 0x18b5de) {
        if ((int)uVar9 < 0x14b2e4) {
          if ((int)uVar9 < 0x10e5b0) {
            if (uVar9 == 0x10decb) goto LAB_03e7eda0;
            uVar20 = 0x10e5af;
            goto LAB_03e7ed94;
          }
          if (uVar9 == 0x110d27) goto LAB_03e7ff20;
          if (uVar9 != 0x13a0c6) {
            if (uVar9 != 0x14b2e3) {
              return 0;
            }
            goto LAB_03e7d88c;
          }
          goto LAB_03e7e764;
        }
        if ((int)uVar9 < 0x169e9f) {
          if (uVar9 != 0x15fef4) {
            uVar20 = 0x169e9e;
            goto LAB_03e7e0ac;
          }
LAB_03e7f55c:
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01ee6d7c();
            lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar19 + 0x2c),
                                         *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00c925a0;
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
                goto LAB_03e80d18;
              }
              fVar32 = DAT_00c925a0;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
            }
            *(float *)(in_stack_00000020 + 0x40c) = fVar23;
LAB_03e80d18:
            FUN_0277153c(fVar23,in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_0457ac48);
            *(undefined4 *)(in_stack_00000020 + 0x640) = *(undefined4 *)(in_stack_00000020 + 0x40c);
            return 1;
          }
          goto LAB_03e81c10;
        }
        if (uVar9 == 0x174369) goto LAB_03e7f2f4;
        if (uVar9 == 0x186bfb) goto LAB_03e7dd60;
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
LAB_03e7e764:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04579e70 + 0xb8) + 0x88);
              if (lVar19 == 0) goto LAB_03e81c74;
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
                return 1;
              }
              FUN_0276fbec(in_stack_00000020 + 0x5f8,*(undefined4 *)(lVar19 + 0x24),
                           *(undefined8 *)PTR_DAT_0457ac38);
              uVar13 = FUN_035683d0(&stack0x000002d4,0);
              uVar21 = FUN_035683d0(in_stack_00000020 + 0x494,0);
              uVar13 = FUN_0340eee0(*(undefined8 *)PTR_DAT_0457acd0,uVar13,
                                    *(undefined8 *)PTR_DAT_0457acd8,uVar21,0);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
              }
              FUN_0403ea2c(uVar13,0);
              return 1;
            }
            goto LAB_03e81c10;
          }
          if (uVar9 == 0x1e45e3) {
LAB_03e7d88c:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              lVar11 = thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              lVar19 = *(long *)(lVar14 + 0x88);
              if (lVar19 == 0) goto LAB_03e81c74;
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar19 + 0x2c),
                                           *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00c925a0;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
LAB_03e80e68:
                *(float *)(in_stack_00000020 + 0x2ac) = fVar23;
                return 1;
              }
              if (in_stack_00000028._4_4_ == 1) {
                fVar32 = DAT_00c925a0;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                goto LAB_03e80e68;
              }
              goto LAB_03e7f358;
            }
            goto LAB_03e81c10;
          }
          if (uVar9 == 0x1f91f4) goto LAB_03e7f55c;
          uVar20 = 0x20319e;
LAB_03e7e0ac:
          if (uVar9 != uVar20) {
            return 0;
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)PTR_DAT_04579e70;
            lVar14 = *(long *)(lVar11 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          fVar23 = DAT_00c925a0;
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
          if (*(int *)(lVar19 + 0x28) != 1) {
            if (*(int *)(lVar19 + 0x28) != 0) {
              return 0;
            }
            uVar9 = 1;
            fVar32 = 0.0;
            goto LAB_03e7e120;
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = thunk_FUN_01ee6d7c();
            lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x88);
            if (lVar19 == 0) goto LAB_03e81c74;
          }
          if (*(int *)(lVar19 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar19 + 0x2c),
                                         *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00c925a0;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = fVar23 * fVar32;
            }
            else if (in_stack_00000028._4_4_ == 1) {
              fVar32 = DAT_00c925a0;
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
LAB_03e81424:
            *(float *)(in_stack_00000020 + 0x354) = fVar23;
            return 1;
          }
          goto LAB_03e81c10;
        }
        if ((int)uVar9 < 0x21fefc) {
          if (uVar9 == 0x20d669) {
LAB_03e7f2f4:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              lVar11 = thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              lVar19 = *(long *)(lVar14 + 0x88);
              if (lVar19 == 0) goto LAB_03e81c74;
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar19 + 0x2c),
                                           *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00c925a0;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
              }
              else {
                if (in_stack_00000028._4_4_ != 1) {
LAB_03e7f358:
                  if (in_stack_00000028._4_4_ != 2) {
                    return 1;
                  }
                  return 0;
                }
                fVar32 = DAT_00c925a0;
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
LAB_03e7dd60:
            if (*(int *)(lVar11 + 0xe0) == 0) {
              lVar11 = thunk_FUN_01ee6d7c();
              lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              lVar19 = *(long *)(lVar14 + 0x88);
              if (lVar19 == 0) goto LAB_03e81c74;
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar19 + 0x2c),
                                           *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                DAT_0482ee12 = '\x01';
              }
              puVar5 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
              uVar26 = 0;
              uVar27 = (ulong)(uint)(fVar23 * DAT_00c925e8);
              puVar15 = *(undefined4 **)
                         (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
              uVar8 = *puVar15;
              uVar29 = puVar15[1];
              uVar28 = puVar15[2];
              uVar12 = FUN_040672cc(0,0,uVar27,0);
              if (DAT_0482ee10 == '\0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                DAT_0482ee10 = '\x01';
              }
              uStack0000000000000004 =
                   (undefined4)
                   ((ulong)*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc) >> 0x20);
              goto LAB_03e7f010;
            }
          }
          goto LAB_03e81c10;
        }
        if (uVar9 != 0x2248dd) {
          if (uVar9 == 0x680065) {
LAB_03e7d9cc:
            if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
              FUN_0276fe34(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_0457ac68);
              uVar13 = FUN_035683d0(&stack0x0000026c,0);
              uVar21 = FUN_035683d0(&stack0x0000026c,0);
              uVar13 = FUN_0340eee0(*(undefined8 *)PTR_DAT_0457acd0,uVar13,
                                    *(undefined8 *)PTR_DAT_0457ace8,uVar21,0);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
              }
              FUN_0403ea2c(uVar13,0);
            }
            FUN_0276fc34(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_0457ac98);
            return 1;
          }
          if (uVar9 != 0x691282) {
            return 0;
          }
          goto LAB_03e7f5ec;
        }
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
        lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar19 == 0) goto LAB_03e81c74;
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
      uVar8 = *(undefined4 *)(lVar19 + 0x24);
      *(undefined4 *)(in_stack_00000020 + 0x6a4) = 0xffffffff;
      if (*(int *)(lVar19 + 0x28) == 0) {
LAB_03e7d214:
        puVar5 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_04073094(uVar13,0,0);
        if ((uVar12 & 1) == 0) {
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x690);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_04073094(uVar13,0,0);
          if ((uVar12 & 1) != 0) {
LAB_03e8160c:
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x690);
            goto LAB_03e81614;
          }
          puVar18 = (undefined8 *)(in_stack_00000020 + 0x690);
          uVar13 = *puVar18;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (uVar13,0,0);
          if ((uVar12 & 1) != 0) {
            uVar13 = FUN_03e9093c(0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar5);
            }
            uVar12 = FUN_04073094(uVar13,0,0);
            if ((uVar12 & 1) == 0) {
              uVar13 = FUN_023c38f8(*(undefined8 *)PTR_DAT_0457ace0,*(undefined8 *)PTR_DAT_0457ac20)
              ;
            }
            else {
              uVar13 = FUN_03e9093c(0);
            }
            *puVar18 = uVar13;
            thunk_FUN_01f51358(puVar18,uVar13);
            goto LAB_03e8160c;
          }
        }
        else {
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_03e81614:
          *(undefined8 *)(in_stack_00000020 + 0x698) = uVar13;
          thunk_FUN_01f51358(in_stack_00000020 + 0x698);
        }
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x698);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (uVar13,0,0);
        if ((uVar12 & 1) != 0) {
          return 0;
        }
      }
      else {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04579e70 + 0xb8) + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
        if (*(int *)(lVar19 + 0x28) == 1) goto LAB_03e7d214;
        uVar12 = FUN_03e45680(uVar8,&stack0x000002d8,0);
        puVar5 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (in_stack_000002d8,0,0);
          if ((uVar12 & 1) != 0) {
            lVar11 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)PTR_DAT_04579e70;
            }
            lVar14 = *(long *)(lVar11 + 0xb8);
            lVar19 = *(long *)(lVar14 + 0x78);
            in_stack_000002d8 = 0;
            if (lVar19 != 0) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
              }
              lVar11 = *(long *)(lVar14 + 0x88);
              if (lVar11 == 0) goto LAB_03e81c74;
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
              uVar13 = FUN_03415cbc(0,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar11 + 0x2c),
                                    *(undefined4 *)(lVar11 + 0x30),0);
              in_stack_000002d8 =
                   (**(code **)(lVar19 + 0x18))
                             (*(undefined8 *)(lVar19 + 0x40),uVar8,uVar13,
                              *(undefined8 *)(lVar19 + 0x28));
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                               (in_stack_000002d8,0,0);
            if ((uVar12 & 1) != 0) {
              uVar13 = FUN_03e90958(0);
              lVar11 = *(long *)PTR_DAT_04579e70;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar11);
                lVar11 = *(long *)PTR_DAT_04579e70;
              }
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_03e81c74;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e81c10;
              uVar21 = FUN_03415cbc(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0)
              ;
              uVar13 = FUN_03405678(uVar13,uVar21,0);
              in_stack_000002d8 = FUN_023c38f8(uVar13,*(undefined8 *)PTR_DAT_0457ac20);
            }
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (in_stack_000002d8,0,0);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          FUN_03e452b0(uVar8,in_stack_000002d8,0);
        }
        *(undefined8 *)(in_stack_00000020 + 0x698) = in_stack_000002d8;
        thunk_FUN_01f51358(in_stack_00000020 + 0x698);
      }
      lVar11 = *(long *)PTR_DAT_04579e70;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x88);
      if (lVar19 == 0) goto LAB_03e81c74;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
      if (*(int *)(lVar19 + 0x28) == 1) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                     &stack0x00000070);
        iVar10 = -0x80000000;
        if (fVar23 != INFINITY) {
          iVar10 = (int)fVar23;
        }
        if (iVar10 == -0x8000) {
          return 0;
        }
        if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
           (lVar11 = FUN_03e936c0(*(long *)(in_stack_00000020 + 0x698),0), lVar11 == 0))
        goto LAB_03e81c74;
        if (*(int *)(lVar11 + 0x18) + -1 < iVar10) {
          return 0;
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      uVar9 = 0;
      uVar8 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x68);
      plVar16 = (long *)(in_stack_00000020 + 0x698);
      *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
      goto LAB_03e8177c;
    }
    if (0x4d122 < (int)uVar9) {
      if (0xefcec < (int)uVar9) {
        if ((int)uVar9 < 0xf8790) {
          if (uVar9 == 0xf80ab) goto LAB_03e7eda0;
          uVar20 = 0xf878f;
LAB_03e7ed94:
          if (uVar9 == uVar20) {
            return 1;
          }
          return 0;
        }
        if (uVar9 == 0xfaf07) {
LAB_03e7ff20:
          *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
          return 1;
        }
        if (uVar9 == 0x104376) {
LAB_03e7fb48:
          uVar8 = FUN_027701c0(in_stack_00000020 + 0x280,*(undefined8 *)PTR_DAT_0457aca8);
          *(undefined4 *)(in_stack_00000020 + 0x278) = uVar8;
          return 1;
        }
        uVar20 = 0x105b0c;
LAB_03e7d574:
        if (uVar9 == uVar20) {
          uVar8 = FUN_0276ef5c(in_stack_00000020 + 0x4f0,*(undefined8 *)PTR_DAT_0457aca0);
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
          return 1;
        }
        return 0;
      }
      if ((int)uVar9 < 0x4e24f) {
        if (uVar9 == 0x4d806) {
          return 0;
        }
        if (uVar9 != 0x4e24e) {
          return 0;
        }
Unity_VisualScripting_SerializationData__ToString:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 1) {
            fVar32 = DAT_00c925a0;
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
            fVar32 = DAT_00c925a0;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x640) + fVar23 * fVar32;
          }
          goto LAB_03e80eb8;
        }
      }
      else {
        if (uVar9 != 0x4ff7e) {
          if (uVar9 == 0xee556) goto LAB_03e7fb48;
          uVar20 = 0xefcec;
          goto LAB_03e7d574;
        }
LAB_03e7db88:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00c925a0;
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
      goto LAB_03e81c10;
    }
    if ((int)uVar9 < 0x3a15f) {
      if (0x37302 < (int)uVar9) {
        if (uVar9 == 0x379e6) {
          return 0;
        }
        if (uVar9 == 0x3842e) goto Unity_VisualScripting_SerializationData__ToString;
        if (uVar9 != 0x3a15e) {
          return 0;
        }
        goto LAB_03e7db88;
      }
      if (uVar9 != 0x2ef43) {
        uVar20 = 0x37302;
        goto LAB_03e7ef28;
      }
    }
    else {
      if ((int)uVar9 < 0x4371f) {
        if (uVar9 != 0x435cd) {
          uVar20 = 0x4371e;
          goto LAB_03e7e600;
        }
Unity_VisualScripting_MacroScriptableObject___ctor:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04579e70 + 0xb8) + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
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
          puVar18 = (undefined8 *)PTR_DAT_0457ac30;
          goto LAB_03e81020;
        }
        goto LAB_03e81c10;
      }
      if (uVar9 == 0x44760) {
        return 0;
      }
      if (uVar9 != 0x44d63) {
        uVar20 = 0x4d122;
LAB_03e7ef28:
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee12 = '\x01';
          }
          puVar15 = *(undefined4 **)
                     (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
          uVar8 = *puVar15;
          uVar29 = puVar15[1];
          uVar28 = puVar15[2];
          if (DAT_0482ee0f == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
            DAT_0482ee0f = '\x01';
          }
          puVar17 = *(uint **)(*(long *)
                                Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ +
                              0xb8);
          uVar12 = (ulong)*puVar17;
          uVar26 = (ulong)puVar17[1];
          uVar27 = (ulong)puVar17[2];
          in_d3 = (ulong)puVar17[3];
          uStack0000000000000004 = 0x3f800000;
LAB_03e7f010:
          FUN_04063d40(&stack0x00000030,uVar8,uVar29,uVar28,uVar12,uVar26,uVar27,in_d3,0);
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
        goto LAB_03e81c10;
      }
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)PTR_DAT_04579e70;
      lVar14 = *(long *)(lVar11 + 0xb8);
    }
    lVar19 = *(long *)(lVar14 + 0x80);
    if (lVar19 == 0) goto LAB_03e81c74;
    if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_03e81c10;
    sVar4 = *(short *)(lVar19 + 0x2c);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)PTR_DAT_04579e70;
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x80);
    }
    if (uVar20 == 10 && sVar4 == 0x23) {
      uVar13 = 10;
LAB_03e8107c:
      uVar8 = FUN_03e88040(lVar11,lVar19,uVar13);
    }
    else {
      if (lVar19 == 0) goto LAB_03e81c74;
      if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_03e81c10;
      sVar4 = *(short *)(lVar19 + 0x2c);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x80);
      }
      if (uVar20 == 0xb && sVar4 == 0x23) {
        uVar13 = 0xb;
        goto LAB_03e8107c;
      }
      if (lVar19 == 0) goto LAB_03e81c74;
      if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_03e81c10;
      sVar4 = *(short *)(lVar19 + 0x2c);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x80);
      }
      if (uVar20 == 0xd && sVar4 == 0x23) {
        uVar13 = 0xd;
        goto LAB_03e8107c;
      }
      if (lVar19 == 0) goto LAB_03e81c74;
      if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_03e81c10;
      sVar4 = *(short *)(lVar19 + 0x2c);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ee6d7c();
        lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
      }
      if (uVar20 == 0xf && sVar4 == 0x23) {
        lVar19 = *(long *)(lVar14 + 0x80);
        uVar13 = 0xf;
        goto LAB_03e8107c;
      }
      lVar11 = *(long *)(lVar14 + 0x88);
      if (lVar11 == 0) goto LAB_03e81c74;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
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
            goto LAB_03e81df8;
          }
          if (iVar10 == 0x36863e) {
            uVar8 = 0;
            uVar29 = 0;
            goto LAB_03e81e0c;
          }
          if (iVar10 != 0x3829c9) {
            return 0;
          }
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff808080;
          uVar8 = 0xff808080;
        }
LAB_03e81dd4:
        in_stack_00000020 = in_stack_00000020 + 0x4f0;
        uVar13 = *(undefined8 *)PTR_DAT_0457ac50;
        goto LAB_03e7cd94;
      }
      if (iVar10 < 0x7071a48) {
        if (iVar10 == 0x19536f0) {
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff0080ff;
          uVar8 = 0xff0080ff;
          goto LAB_03e81dd4;
        }
        if (iVar10 != 0x7071a47) {
          return 0;
        }
        uVar8 = 0;
LAB_03e81df8:
        uVar29 = 0;
LAB_03e81dfc:
        uVar28 = 0;
      }
      else {
        if (iVar10 == 0x73d641b) {
          uVar8 = 0;
          uVar29 = 0x3f800000;
          goto LAB_03e81dfc;
        }
        if (iVar10 == 0x85daee7) {
          uVar8 = 0x3f800000;
          uVar29 = 0x3f800000;
LAB_03e81e0c:
          uVar28 = 0x3f800000;
        }
        else {
          if (iVar10 != 0x21063284) {
            return 0;
          }
          uVar8 = 0x3f800000;
          uVar29 = DAT_00c92384;
          uVar28 = DAT_00c92488;
        }
      }
      uVar8 = FUN_01fdd4e0(uVar8,uVar29,uVar28,0x3f800000,0);
    }
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar13 = *(undefined8 *)PTR_DAT_0457ac50;
  }
  in_stack_00000020 = in_stack_00000020 + 0x4f0;
LAB_03e7cd94:
  FUN_0276ef14(in_stack_00000020,uVar8,uVar13);
  return 1;
LAB_03e807f4:
  lVar11 = *plVar16;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *plVar16;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar19 = *(long *)(lVar14 + 0x88);
  if (lVar19 == 0) goto LAB_03e81c74;
  if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_03e80914:
    FUN_02770f88(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                 *(undefined8 *)PTR_DAT_0457ac40);
    return 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *plVar16;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x88);
    plVar16 = (long *)PTR_DAT_04579e70;
    if (lVar19 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
  lVar22 = (long)(int)uVar9;
  if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_03e80914;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *plVar16;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x88);
    plVar16 = (long *)PTR_DAT_04579e70;
    if (lVar19 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
  iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
  if ((iVar10 == 0xb2fb) || (iVar10 == 0x80fb)) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01ee6d7c();
      lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x88);
      if (lVar19 == 0) goto LAB_03e81c74;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
    lVar19 = lVar19 + lVar22 * 0x18;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                 *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                                 &stack0x00000070);
    *(bool *)(in_stack_00000020 + 0x5b0) = fVar23 != 0.0;
    plVar16 = (long *)PTR_DAT_04579e70;
  }
  uVar9 = uVar9 + 1;
  goto LAB_03e807f4;
LAB_03e7e120:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
  }
  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
  if (lVar14 == 0) goto LAB_03e81c74;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
    return 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
    if (lVar14 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
  lVar19 = (long)(int)uVar9;
  if (*(int *)(lVar14 + lVar19 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
  }
  lVar22 = *(long *)(lVar11 + 0xb8);
  lVar14 = *(long *)(lVar22 + 0x88);
  if (lVar14 == 0) goto LAB_03e81c74;
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
  iVar10 = *(int *)(lVar14 + lVar19 * 0x18 + 0x20);
  if (iVar10 == 0x4d0e4) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01ee6d7c();
      lVar22 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
      lVar14 = *(long *)(lVar22 + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
    lVar14 = lVar14 + lVar19 * 0x18;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar24 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar22 + 0x80),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x00000070);
    if (fVar24 == -32768.0) {
      return 0;
    }
    lVar11 = *(long *)PTR_DAT_04579e70;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)PTR_DAT_04579e70;
    }
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
    if (lVar14 == 0) goto LAB_03e81c74;
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
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
      lVar11 = thunk_FUN_01ee6d7c();
      lVar22 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
      lVar14 = *(long *)(lVar22 + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
    lVar14 = lVar14 + lVar19 * 0x18;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar24 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar22 + 0x80),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x00000070);
    if (fVar24 == -32768.0) {
      return 0;
    }
    lVar11 = *(long *)PTR_DAT_04579e70;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)PTR_DAT_04579e70;
    }
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
    if (lVar14 == 0) goto LAB_03e81c74;
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
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
  goto LAB_03e7e120;
LAB_03e8177c:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
  }
  lVar19 = *(long *)(lVar11 + 0xb8);
  lVar14 = *(long *)(lVar19 + 0x88);
  if (lVar14 == 0) goto LAB_03e81c74;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
LAB_03e81c14:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar14 = *plVar16;
    if (lVar14 != 0) {
      uVar13 = *(undefined8 *)(lVar14 + 0x20);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
      }
      uVar8 = FUN_03e45c60(uVar13,lVar14,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_03e81c74;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
    lVar19 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar19 + 0x88);
    if (lVar14 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
  lVar22 = (long)(int)uVar9;
  if (*(int *)(lVar14 + lVar22 * 0x18 + 0x20) == 0) goto LAB_03e81c14;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)PTR_DAT_04579e70;
    lVar19 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar19 + 0x88);
    if (lVar14 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
  iVar10 = *(int *)(lVar14 + lVar22 * 0x18 + 0x20);
  if (iVar10 < 0xa954) {
    if (iVar10 < 0x7754) {
      if (iVar10 == 0x6851) {
LAB_03e819a4:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar19 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar14 = *(long *)(lVar19 + 0x88);
          if (lVar14 == 0) goto LAB_03e81c74;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
        lVar14 = lVar14 + lVar22 * 0x18;
        iVar10 = FUN_03e886a0(in_stack_00000020,*(undefined8 *)(lVar19 + 0x80),
                              *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                              lVar19 + 0x90);
        if (iVar10 != 3) {
          return 0;
        }
        lVar11 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)PTR_DAT_04579e70;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
        if (lVar11 == 0) goto LAB_03e81c74;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e81c10;
        iVar10 = -0x80000000;
        if (*(float *)(lVar11 + 0x20) != INFINITY) {
          iVar10 = (int)*(float *)(lVar11 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          lVar11 = FUN_03e7577c(in_stack_00000020);
          uVar8 = *(undefined4 *)(in_stack_00000020 + 0x494);
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x698);
          uVar29 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
          lVar14 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar14);
            lVar14 = *(long *)PTR_DAT_04579e70;
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
                FUN_03e92b28(lVar11,uVar8,uVar13,uVar29,iVar10,iVar1,0);
                goto LAB_03e81bfc;
              }
              goto LAB_03e81c74;
            }
            goto LAB_03e81c10;
          }
          goto LAB_03e81c74;
        }
        goto LAB_03e81bfc;
      }
      if (iVar10 != 0x7753) {
        return 0;
      }
    }
    else {
      if (iVar10 == 0x80fb) goto LAB_03e81948;
      if (iVar10 == 0x9a51) goto LAB_03e819a4;
      if (iVar10 != 0xa953) {
        return 0;
      }
    }
    lVar19 = *plVar16;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04579e70 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_03e81c74;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
    lVar11 = FUN_03e94a0c(lVar19,*(undefined4 *)(lVar14 + lVar22 * 0x18 + 0x24),1,&stack0x00000268,0
                         );
    *plVar16 = lVar11;
    thunk_FUN_01f51358(plVar16,lVar11);
    iVar10 = 0;
LAB_03e81bf4:
    *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
  }
  else {
    if (0x2ef43 < iVar10) {
      if (iVar10 < 0x4828a) {
        if (iVar10 != 0x3246a) {
          if (iVar10 != 0x44d63) {
            return 0;
          }
          goto LAB_03e81b1c;
        }
      }
      else if (iVar10 != 0x4828a) {
        if ((iVar10 != 0x18b5dd) && (iVar10 != 0x2248dd)) {
          return 0;
        }
        goto LAB_03e81bfc;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ee6d7c();
        lVar19 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
        lVar14 = *(long *)(lVar19 + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
      }
      if (1 < *(uint *)(lVar14 + 0x18)) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar19 + 0x80),
                                     *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                                     &stack0x00000070);
        iVar10 = -0x80000000;
        if (fVar23 != INFINITY) {
          iVar10 = (int)fVar23;
        }
        if (iVar10 == -0x8000) {
          return 0;
        }
        if ((*plVar16 != 0) && (lVar11 = FUN_03e936c0(*plVar16,0), lVar11 != 0)) {
          if (*(int *)(lVar11 + 0x18) + -1 < iVar10) {
            return 0;
          }
          goto LAB_03e81bf4;
        }
        goto LAB_03e81c74;
      }
      goto LAB_03e81c10;
    }
    if (iVar10 == 0xb2fb) {
LAB_03e81948:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ee6d7c();
        lVar19 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
        lVar14 = *(long *)(lVar19 + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
      lVar14 = lVar14 + lVar22 * 0x18;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)FUN_03e8874c(lVar11,*(undefined8 *)(lVar19 + 0x80),
                                   *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                   &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar23 != 0.0;
    }
    else {
      if (iVar10 != 0x2ef43) {
        return 0;
      }
LAB_03e81b1c:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ee6d7c();
        lVar19 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
        lVar14 = *(long *)(lVar19 + 0x88);
        if (lVar14 == 0) goto LAB_03e81c74;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_03e81c10;
      lVar14 = lVar14 + lVar22 * 0x18;
      uVar8 = FUN_03e88454(lVar11,*(undefined8 *)(lVar19 + 0x80),*(undefined4 *)(lVar14 + 0x2c),
                           *(undefined4 *)(lVar14 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
    }
  }
LAB_03e81bfc:
  uVar9 = uVar9 + 1;
  lVar11 = *(long *)PTR_DAT_04579e70;
  goto LAB_03e8177c;
LAB_03e7fc3c:
  plVar16 = (long *)PTR_DAT_04579e70;
  lVar11 = *(long *)PTR_DAT_04579e70;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *plVar16;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar19 = *(long *)(lVar14 + 0x88);
  if (lVar19 == 0) goto LAB_03e81c74;
  uVar8 = (undefined4)(uVar26 >> 0x20);
  uVar29 = (undefined4)(uVar27 >> 0x20);
  if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_03e80150:
    uVar20 = (uint)uVar12;
    uVar9 = (uint)*(byte *)(in_stack_00000020 + 0x4ef);
    if (uVar20 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
      uVar9 = (uint)(uVar12 >> 0x18) & 0xff;
    }
    FUN_03e5704c(uVar26 & 0xffffffff,uVar8,uVar27 & 0xffffffff,uVar29,&stack0x000002f8,
                 uVar20 & 0xff0000 | uVar9 << 0x18 | uVar20 & 0xff00 | uVar20 & 0xff,0);
    in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,in_stack_00000308);
    FUN_0276f634(in_stack_00000020 + 0x550,&stack0x00000070,*(undefined8 *)PTR_DAT_0457ac80);
    return 1;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *plVar16;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x88);
    plVar16 = (long *)PTR_DAT_04579e70;
    if (lVar19 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
  lVar22 = (long)(int)uVar9;
  if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_03e80150;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *plVar16;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar19 = *(long *)(lVar14 + 0x88);
    if (lVar19 == 0) goto LAB_03e81c74;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
  iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
  if (iVar10 < 0xa826) {
    if ((iVar10 == 0x7625) || (iVar10 == 0xa825)) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)PTR_DAT_04579e70;
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar19 = *(long *)(lVar14 + 0x88);
        if (lVar19 == 0) goto LAB_03e81c74;
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
      if (*(int *)(lVar19 + lVar22 * 0x18 + 0x28) == 4) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          lVar11 = thunk_FUN_01ee6d7c();
          lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
          lVar19 = *(long *)(lVar14 + 0x88);
          if (lVar19 == 0) goto LAB_03e81c74;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_03e81c10;
        uVar12 = FUN_03e88454(lVar11,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar19 + 0x2c),
                              *(undefined4 *)(lVar19 + 0x30));
      }
    }
  }
  else if (iVar10 == 0x44d63) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01ee6d7c();
      lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x88);
      if (lVar19 == 0) goto LAB_03e81c74;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_03e81c10;
    lVar19 = lVar19 + lVar22 * 0x18;
    uVar12 = FUN_03e88454(lVar11,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar19 + 0x2c),
                          *(undefined4 *)(lVar19 + 0x30));
    uVar12 = uVar12 & 0xffffffff;
  }
  else if (iVar10 == 0xe63719) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)(*(long *)PTR_DAT_04579e70 + 0xb8);
      lVar19 = *(long *)(lVar14 + 0x88);
      if (lVar19 == 0) {
LAB_03e81c74:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar9) {
LAB_03e81c10:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar19 = lVar19 + lVar22 * 0x18;
    iVar10 = FUN_03e886a0(in_stack_00000020,*(undefined8 *)(lVar14 + 0x80),
                          *(undefined4 *)(lVar19 + 0x2c),*(undefined4 *)(lVar19 + 0x30),
                          lVar14 + 0x90);
    if (iVar10 != 4) {
      return 0;
    }
    lVar11 = *(long *)PTR_DAT_04579e70;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)PTR_DAT_04579e70;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
    if (lVar11 == 0) goto LAB_03e81c74;
    uVar20 = *(uint *)(lVar11 + 0x18);
    if ((((uVar20 == 0) || (uVar20 == 1)) || (uVar20 < 3)) || (uVar20 == 3)) goto LAB_03e81c10;
    uVar34 = *(undefined4 *)(lVar11 + 0x20);
    uVar33 = *(undefined4 *)(lVar11 + 0x24);
    uVar31 = *(undefined4 *)(lVar11 + 0x28);
    uVar28 = *(undefined4 *)(lVar11 + 0x2c);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03e56d7c(uVar34,uVar33,uVar31,uVar28,&stack0x00000310,0);
    uVar28 = (undefined4)uVar27;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar31 = FUN_03e56e6c(uVar26 & 0xffffffff,0);
    uVar26 = CONCAT44(uVar8,uVar31);
    uVar27 = CONCAT44(uVar29,uVar28);
  }
  uVar9 = uVar9 + 1;
  goto LAB_03e7fc3c;
code_r0x03e7c508:
  thunk_FUN_01ee6d7c();
  param_1 = (long *)PTR_DAT_04579e70;
  goto code_r0x03e7c514;
}


