/*
FUNCTION_NAME: UnityEngine.Screen$$GetScreenOrientation
ENTRY_POINT: 0358684c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x0358bce0) */

uint UnityEngine_Screen__GetScreenOrientation(long param_1)

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
  undefined8 *puVar12;
  undefined8 uVar13;
  uint in_w8;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  uint *puVar17;
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
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
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
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  ulong in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  ulong in_stack_00000310;
  
  while( true ) {
    if (in_w8 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar14 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar14 + 0x80);
    if (lVar18 == 0) goto LAB_0358c010;
    if ((long)*(int *)(lVar18 + 0x18) <= (long)unaff_x24) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_0358bfac;
    uVar9 = *unaff_x21;
    if (uVar9 == 0x3c) {
      return 0;
    }
    uVar20 = (uint)unaff_x24;
    if (uVar9 == 0x3e) break;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x80);
    if (lVar14 == 0) goto LAB_0358c010;
    if (*(uint *)(lVar14 + 0x18) <= unaff_x24) goto LAB_0358bfac;
    *(short *)(lVar14 + unaff_x24 * 2 + 0x20) = (short)uVar9;
    if (unaff_w19 != '\x01') goto switchD_03586908_caseD_3;
    unaff_w19 = '\x01';
    switch(unaff_w23) {
    case 0:
      if (((uVar9 < 0x2f) && ((1L << ((ulong)uVar9 & 0x3f) & 0x680000000000U) != 0)) ||
         (uVar9 - 0x30 < 10)) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_0358c010;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
        lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
        iVar10 = *(int *)(lVar14 + 0x30);
        unaff_w23 = 1;
LAB_03586970:
        *(undefined4 *)(lVar14 + 0x28) = unaff_w23;
        *(uint *)(lVar14 + 0x2c) = uVar20;
        *(int *)(lVar14 + 0x30) = iVar10 + 1;
      }
      else {
        if (uVar9 != 0x22) {
          if (uVar9 == 0x23) {
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
            if (lVar14 != 0) {
              if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
                iVar10 = *(int *)(lVar14 + 0x30);
                unaff_w23 = 4;
                goto LAB_03586970;
              }
              goto LAB_0358bfac;
            }
            goto LAB_0358c010;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
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
            goto LAB_0358bfac;
          }
          goto LAB_0358c010;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_0358c010;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
        lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
        unaff_w23 = 2;
        *(undefined4 *)(lVar14 + 0x28) = 2;
        *(uint *)(lVar14 + 0x2c) = uVar20 + 1;
      }
      in_stack_00000028._4_4_ = 0;
      unaff_w19 = '\x01';
      goto UnityEngine_Graphics__get_preserveFramebufferAlpha;
    case 1:
      if ((int)uVar9 < 0x65) {
        if (uVar9 == 0x20) {
LAB_03586b60:
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_0358c010;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
          in_stack_00000028._4_4_ = 0;
        }
        else {
          if (uVar9 != 0x25) {
LAB_03586c58:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
            if (lVar14 != 0) {
              if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
                iVar10 = *(int *)(lVar14 + 0x30);
                unaff_w23 = 1;
                goto LAB_03586c9c;
              }
              goto LAB_0358bfac;
            }
            goto LAB_0358c010;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_0358c010;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
          in_stack_00000028._4_4_ = 2;
        }
      }
      else {
        if (uVar9 == 0x70) goto LAB_03586b60;
        if (uVar9 != 0x65) goto LAB_03586c58;
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_0358c010;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
        in_stack_00000028._4_4_ = 1;
      }
      *(int *)(lVar14 + (long)(int)unaff_w26 * 0x18 + 0x34) = in_stack_00000028._4_4_;
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_0358c010;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26 + 1) goto LAB_0358bfac;
LAB_03586bd8:
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
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar14 != 0) {
          unaff_w26 = unaff_w26 + 1;
          if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
            unaff_w23 = 0;
            in_stack_00000028._4_4_ = 0;
            *(undefined8 *)(lVar14 + 0x20) = 0;
            *(undefined8 *)(lVar14 + 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x30) = 0;
            goto LAB_03586d84;
          }
          goto LAB_0358bfac;
        }
        goto LAB_0358c010;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar14 != 0) {
        if (unaff_w26 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
          unaff_w19 = '\x01';
          unaff_w23 = 2;
          *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
          *(uint *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) * 0x21 ^ uVar9;
          break;
        }
        goto LAB_0358bfac;
      }
      goto LAB_0358c010;
    case 4:
      if (uVar9 == 0x20) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar14 != 0) {
          if (unaff_w26 + 1 < *(uint *)(lVar14 + 0x18)) {
            in_stack_00000028._4_4_ = 0;
            goto LAB_03586bd8;
          }
          goto LAB_0358bfac;
        }
        goto LAB_0358c010;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_0358c010;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      iVar10 = *(int *)(lVar14 + 0x30);
      unaff_w23 = 4;
LAB_03586c9c:
      unaff_w19 = '\x01';
      *(int *)(lVar14 + 0x30) = iVar10 + 1;
    }
switchD_03586908_caseD_3:
    if (uVar9 == 0x3d) {
      unaff_w19 = '\x01';
    }
    if ((uVar9 == 0x20) && (unaff_w19 == '\0')) {
      if ((unaff_x25 & 1) != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_0358c010;
      unaff_w26 = unaff_w26 + 1;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
      unaff_w23 = 0;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      unaff_x25 = 1;
      in_stack_00000028._4_4_ = 0;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
LAB_03586d10:
      unaff_w19 = '\0';
    }
    else if (unaff_w19 == '\x02') {
      if (uVar9 == 0x20) goto LAB_03586d10;
LAB_03586d84:
      unaff_w19 = '\x02';
    }
    else if (unaff_w19 == '\0') {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_0358c010;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0358bfac;
      lVar14 = lVar14 + (long)(int)unaff_w26 * 0x18;
      unaff_w19 = '\0';
      *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) * 7 + uVar9;
    }
UnityEngine_Graphics__get_preserveFramebufferAlpha:
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_x27 + (int)unaff_x24) {
      return 0;
    }
    unaff_x29 = unaff_x27 + unaff_x24;
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_0358bfac;
    unaff_x21 = (uint *)(unaff_x22 + (long)(int)(uint)unaff_x29 * (long)unaff_w28 + 0x20);
    in_w8 = *unaff_x21;
  }
  *in_stack_00000018 = unaff_w20 + uVar20;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar14 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar14 + 0x80);
    if (lVar18 == 0) goto LAB_0358c010;
  }
  puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_0358bfac;
  *(undefined2 *)(lVar18 + unaff_x24 * 2 + 0x20) = 0;
  if (*(char *)(in_stack_00000020 + 0x430) != '\0') {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)puVar5;
      lVar14 = *(long *)(param_1 + 0xb8);
    }
    lVar14 = *(long *)(lVar14 + 0x88);
    if (lVar14 == 0) goto LAB_0358c010;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0358bfac;
    if (*(int *)(lVar14 + 0x20) != 0x33542d3) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)puVar5;
        lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar14 == 0) goto LAB_0358c010;
      }
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0358bfac;
      if (*(int *)(lVar14 + 0x20) != 0x2f23db3) {
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *(long *)puVar5;
  }
  lVar14 = *(long *)(param_1 + 0xb8);
  lVar18 = *(long *)(lVar14 + 0x88);
  if (lVar18 == 0) goto LAB_0358c010;
  if (*(int *)(lVar18 + 0x18) == 0) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(int *)(lVar18 + 0x20) == 0x33542d3) {
LAB_03586f88:
    *(undefined1 *)(in_stack_00000020 + 0x430) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *(long *)puVar5;
    lVar14 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar14 + 0x88);
    if (lVar18 == 0) goto LAB_0358c010;
  }
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
  if (*(int *)(lVar18 + 0x20) == 0x2f23db3) goto LAB_03586f88;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *(long *)puVar5;
    lVar14 = *(long *)(param_1 + 0xb8);
  }
  lVar18 = *(long *)(lVar14 + 0x80);
  if (lVar18 == 0) goto LAB_0358c010;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
  sVar4 = *(short *)(lVar18 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *(long *)puVar5;
    lVar14 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar14 + 0x80);
  }
  if (uVar20 == 4 && sVar4 == 0x23) {
    uVar13 = 4;
LAB_035870c4:
    uVar8 = FUN_0359237c(param_1,lVar18,uVar13);
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar13 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
  }
  else {
    if (lVar18 == 0) goto LAB_0358c010;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
    sVar4 = *(short *)(lVar18 + 0x20);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)puVar5;
      lVar14 = *(long *)(param_1 + 0xb8);
      lVar18 = *(long *)(lVar14 + 0x80);
    }
    if (uVar20 == 5 && sVar4 == 0x23) {
      uVar13 = 5;
      goto LAB_035870c4;
    }
    if (lVar18 == 0) goto LAB_0358c010;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
    sVar4 = *(short *)(lVar18 + 0x20);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)puVar5;
      lVar14 = *(long *)(param_1 + 0xb8);
      lVar18 = *(long *)(lVar14 + 0x80);
    }
    if (uVar20 == 7 && sVar4 == 0x23) {
      uVar13 = 7;
      goto LAB_035870c4;
    }
    if (lVar18 == 0) goto LAB_0358c010;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
    sVar4 = *(short *)(lVar18 + 0x20);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)puVar5;
      lVar14 = *(long *)(param_1 + 0xb8);
    }
    if (uVar20 == 9 && sVar4 == 0x23) {
      lVar18 = *(long *)(lVar14 + 0x80);
      uVar13 = 9;
      goto LAB_035870c4;
    }
    lVar18 = *(long *)(lVar14 + 0x88);
    if (lVar18 == 0) goto LAB_0358c010;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
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
LAB_03589294:
              return (uint)bVar6;
            }
            if (0x1be < (int)uVar9) {
              if (0xe < uVar9 - 0x290) {
                return 0;
              }
              return 0x4010U >> (ulong)(uVar9 - 0x290 & 0x1f) & 1;
            }
            if (uVar9 == 0x1bc) {
LAB_03589494:
              if (((*(byte *)(in_stack_00000020 + 600) >> 6 & 1) == 0) &&
                 (cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x40,0),
                 cVar7 == '\0')) {
                *(uint *)(in_stack_00000020 + 0x25c) =
                     *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffbf;
              }
              FUN_0209afdc(in_stack_00000020 + 0x530,&stack0x00000070,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                          );
              *(undefined4 *)(in_stack_00000020 + 0x15c) = uStack0000000000000070;
              return 1;
            }
            if (uVar9 != 0x1be) {
              return 0;
            }
LAB_03588bc8:
            if ((*(byte *)(in_stack_00000020 + 600) >> 2 & 1) == 0) {
              FUN_0209afdc(in_stack_00000020 + 0x510,&stack0x00000070,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                          );
              *(undefined4 *)(in_stack_00000020 + 0x158) = uStack0000000000000070;
              cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,4,0);
              if (cVar7 == '\0') {
                *(uint *)(in_stack_00000020 + 0x25c) =
                     *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffb;
              }
            }
            FUN_0209afdc(in_stack_00000020 + 0x510,&stack0x00000070,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                        );
            *(undefined4 *)(in_stack_00000020 + 0x158) = uStack0000000000000070;
            return 1;
          }
          if ((int)uVar9 < 0x193) {
            if ((int)uVar9 < 0x74) {
              if (uVar9 != 0x69) {
                if (uVar9 != 0x73) {
                  return 0;
                }
                goto LAB_03589148;
              }
              goto LAB_0358953c;
            }
            if (uVar9 == 0x75) goto LAB_0358a2e0;
            if (uVar9 == 0x18b) goto LAB_0358a3f8;
            if (uVar9 != 0x192) {
              return 0;
            }
          }
          else {
            if ((int)uVar9 < 0x19f) {
              if (uVar9 == 0x19c) goto LAB_03589494;
              if (uVar9 != 0x19e) {
                return 0;
              }
              goto LAB_03588bc8;
            }
            if (uVar9 == 0x1aa) {
              return 1;
            }
            if (uVar9 == 0x1ab) {
LAB_0358a3f8:
              if ((*(byte *)(in_stack_00000020 + 600) & 1) != 0) {
                return 1;
              }
              cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,1,0);
              if (cVar7 == '\0') {
                *(uint *)(in_stack_00000020 + 0x25c) =
                     *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffe;
                FUN_0209bd58(in_stack_00000020 + 0x218,&stack0x00000070,
                             *(undefined8 *)QFSW_QC_QuantumSerializer_<>c_TypeInfo);
                *(undefined4 *)(in_stack_00000020 + 0x214) = uStack0000000000000070;
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
          FUN_0209afdc(in_stack_00000020 + 0x5d0,&stack0x00000070,
                       *(undefined8 *)System_Collections_Queue_QueueEnumerator_TypeInfo);
          *(undefined4 *)(in_stack_00000020 + 0x5f0) = uStack0000000000000070;
          cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,2,0);
          if (cVar7 != '\0') {
            return 1;
          }
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffffd;
          goto LAB_03589864;
        }
        if ((int)uVar9 < -0x32f64d99) {
          if ((int)uVar9 < -0x64bbe162) {
            if ((int)uVar9 < -0x70449a55) {
              if (uVar9 == 0x8f9a8677) {
LAB_03589e0c:
                FUN_0209afdc(in_stack_00000020 + 0x218,&stack0x00000070,
                             *(undefined8 *)
                              RootMotion_FinalIK_RagdollUtility_<DisableRagdollSmooth>d__21_TypeInfo
                            );
                if (*(int *)(in_stack_00000020 + 0x25c) == 1) {
                  uStack0000000000000070 = 700;
                }
                else {
                  FUN_0209bd58(in_stack_00000020 + 0x218,&stack0x00000070,
                               *(undefined8 *)QFSW_QC_QuantumSerializer_<>c_TypeInfo);
                }
                *(undefined4 *)(in_stack_00000020 + 0x214) = uStack0000000000000070;
                return 1;
              }
              if (uVar9 != 0x8fbb65aa) {
                return 0;
              }
              goto LAB_035893f0;
            }
            if (uVar9 == 0x91e417d1) goto LAB_03588a38;
            if (uVar9 != 0x92d31273) {
              if (uVar9 != 0x9b441e9d) {
                return 0;
              }
              goto LAB_03587fc0;
            }
          }
          else {
            if ((int)uVar9 < -0x6147ec0e) {
              if (uVar9 != 0x9c8f61ca) {
                if (uVar9 != 0x9eb813f1) {
                  return 0;
                }
LAB_03588a38:
                if ((*(byte *)(in_stack_00000020 + 600) >> 5 & 1) != 0) {
                  return 1;
                }
                cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x20,0);
                if (cVar7 != '\0') {
                  return 1;
                }
                uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffdf;
                goto LAB_03589864;
              }
LAB_035893f0:
              if ((*(byte *)(in_stack_00000020 + 600) >> 3 & 1) != 0) {
                return 1;
              }
              cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,8,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffff7;
              goto LAB_03589864;
            }
            if (uVar9 != 0x9fa70e93) {
              if (uVar9 != 0xcb42bfbd) {
                if (uVar9 != 0xcd09b266) {
                  return 0;
                }
                goto LAB_0358a464;
              }
LAB_03587fc0:
              if (*(int *)(param_1 + 0xe0) == 0) {
                param_1 = thunk_FUN_01a58e78();
                lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                lVar18 = *(long *)(lVar14 + 0x88);
                if (lVar18 == 0) goto LAB_0358c010;
              }
              if (*(int *)(lVar18 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                             *(undefined4 *)(lVar18 + 0x2c),
                                             *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 0) {
                  fVar32 = DAT_00d389a8;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = fVar23 * fVar32;
                }
                else if (in_stack_00000028._4_4_ == 1) {
                  fVar32 = DAT_00d389a8;
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
                goto LAB_0358b7c4;
              }
              goto LAB_0358bfac;
            }
          }
LAB_035881fc:
          if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
            return 1;
          }
          cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x10,0);
          if (cVar7 != '\0') {
            return 1;
          }
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
LAB_03589864:
          *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
          return 1;
        }
        if (-0x13b73942 < (int)uVar9) {
          if ((int)uVar9 < 0x4a) {
            if (uVar9 == 0x42) {
LAB_0358986c:
              *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 1;
              FUN_035a050c(in_stack_00000020 + 0x260,1,0);
              *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
              return 1;
            }
            if (uVar9 != 0x49) {
              return 0;
            }
LAB_0358953c:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 2;
            FUN_035a050c(in_stack_00000020 + 0x260,2,0);
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
            if (1 < *(uint *)(lVar18 + 0x18)) {
              if (*(int *)(lVar18 + 0x38) == 0x43833) {
LAB_035895f0:
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_0358c010;
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)FUN_03592a88(lVar14,*(undefined8 *)
                                                       (*(long *)(lVar14 + 0xb8) + 0x80),
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
LAB_0358a924:
                  uVar13 = *(undefined8 *)
                            QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass37_0_TypeInfo;
                  plVar15 = (long *)(in_stack_00000020 + 0x5d0);
                  goto LAB_0358b3c8;
                }
              }
              else {
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_0358c010;
                }
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  if (*(int *)(lVar18 + 0x38) == 0x2da13) goto LAB_035895f0;
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    bVar3 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b8);
                    uVar9 = (uint)bVar3;
                    *(uint *)(in_stack_00000020 + 0x5f0) = (uint)bVar3;
                    goto LAB_0358a924;
                  }
                  goto LAB_0358c010;
                }
              }
            }
          }
          else if (uVar9 == 0x53) {
LAB_03589148:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x40;
            FUN_035a050c(in_stack_00000020 + 0x260,0x40,0);
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
            if (1 < *(uint *)(lVar18 + 0x18)) {
              if (*(int *)(lVar18 + 0x38) == 0x44d63) {
LAB_035891fc:
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_0358c010;
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  uVar13 = FUN_03592790(lVar14,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x44),
                                        *(undefined4 *)(lVar18 + 0x48));
                  *(int *)(in_stack_00000020 + 0x15c) = (int)uVar13;
                  bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
                  if (((uint)((ulong)uVar13 >> 0x18) & 0xff) <=
                      (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                    bVar3 = (byte)((ulong)uVar13 >> 0x18);
                  }
                  *(byte *)(in_stack_00000020 + 0x15f) = bVar3;
                  uVar9 = *(uint *)(in_stack_00000020 + 0x15c);
                  goto LAB_0358ab38;
                }
              }
              else {
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_0358c010;
                }
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  if (*(int *)(lVar18 + 0x38) == 0x2ef43) goto LAB_035891fc;
                  uVar9 = *(uint *)(in_stack_00000020 + 0x4ec);
                  *(uint *)(in_stack_00000020 + 0x15c) = uVar9;
LAB_0358ab38:
                  uVar13 = *(undefined8 *)
                            QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
                  plVar15 = (long *)(in_stack_00000020 + 0x530);
                  goto LAB_0358b3c8;
                }
              }
            }
          }
          else {
            if (uVar9 != 0x55) {
              if (uVar9 != 0x62) {
                return 0;
              }
              goto LAB_0358986c;
            }
LAB_0358a2e0:
            *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 4;
            FUN_035a050c(in_stack_00000020 + 0x260,4,0);
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
            if (1 < *(uint *)(lVar18 + 0x18)) {
              if (*(int *)(lVar18 + 0x38) == 0x44d63) {
LAB_0358a394:
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                if (lVar18 == 0) goto LAB_0358c010;
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  uVar13 = FUN_03592790(lVar14,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x44),
                                        *(undefined4 *)(lVar18 + 0x48));
                  *(int *)(in_stack_00000020 + 0x158) = (int)uVar13;
                  bVar3 = *(byte *)(in_stack_00000020 + 0x4ef);
                  if (((uint)((ulong)uVar13 >> 0x18) & 0xff) <=
                      (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                    bVar3 = (byte)((ulong)uVar13 >> 0x18);
                  }
                  *(byte *)(in_stack_00000020 + 0x15b) = bVar3;
                  uVar9 = *(uint *)(in_stack_00000020 + 0x158);
                  goto LAB_0358ad58;
                }
              }
              else {
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_0358c010;
                }
                if (1 < *(uint *)(lVar18 + 0x18)) {
                  if (*(int *)(lVar18 + 0x38) == 0x2ef43) goto LAB_0358a394;
                  uVar9 = *(uint *)(in_stack_00000020 + 0x4ec);
                  *(uint *)(in_stack_00000020 + 0x158) = uVar9;
LAB_0358ad58:
                  uVar13 = *(undefined8 *)
                            QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
                  plVar15 = (long *)(in_stack_00000020 + 0x510);
                  goto LAB_0358b3c8;
                }
              }
            }
          }
          goto LAB_0358bfac;
        }
        if (-0x3239ec63 < (int)uVar9) {
          if (uVar9 == 0xe5711531) goto LAB_03589f18;
          if (uVar9 == 0xe571a456) goto LAB_03589f2c;
          uVar20 = 0xec48c6be;
          goto FUN_03587930;
        }
        if (uVar9 != 0xcdc58478) {
          uVar20 = 0xcdc6139d;
UnityEngine_Graphics__DrawTexture:
          if (uVar9 != uVar20) {
            return 0;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01a58e78();
            lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar14 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x2c),
                                         *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00d389a8;
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
                goto LAB_0358afb8;
              }
              fVar32 = DAT_00d389a8;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
            }
            *(float *)(in_stack_00000020 + 0x408) = fVar23;
LAB_0358afb8:
            *(float *)(in_stack_00000020 + 0x640) = *(float *)(in_stack_00000020 + 0x640) + fVar23;
            return 1;
          }
          goto LAB_0358bfac;
        }
LAB_03589c04:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01a58e78();
          lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar18 = *(long *)(lVar14 + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                     *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                     &stack0x00000070);
        if (fVar23 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ != 2) {
          if (in_stack_00000028._4_4_ == 1) {
            fVar32 = DAT_00d389a8;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
          }
          else {
            if (in_stack_00000028._4_4_ != 0) {
              return 1;
            }
            fVar32 = DAT_00d389a8;
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
          memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          iVar10 = FUN_03776950(&stack0x00000290,0);
          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
            memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar24 = (float)FUN_03776960(&stack0x00000290,0);
            if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
              fVar30 = DAT_00d389a8;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar30 = 1.0;
              }
              memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x50),0x60);
              fVar25 = (float)FUN_03776970(&stack0x00000290,0);
              *(float *)(in_stack_00000020 + 0x2c0) =
                   (fVar32 / (float)iVar10) * fVar24 * fVar30 * ((fVar23 * fVar25) / 100.0);
              return 1;
            }
          }
        }
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((int)uVar9 < 0x79c2) {
        if ((int)uVar9 < 0x19a7) {
          if ((int)uVar9 < 0x11cd) {
            if ((int)uVar9 < 0xc90) {
              bVar6 = uVar9 == 0xb9d;
              goto LAB_03589294;
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
LAB_03587e20:
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar18 = *(long *)(lVar14 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar18 + 0x2c),
                                           *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 2) {
                *(float *)(in_stack_00000020 + 0x640) =
                     (fVar23 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
                return 1;
              }
              fVar32 = DAT_00d389a8;
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
              goto LAB_0358b268;
            }
            goto LAB_0358bfac;
          }
          if ((int)uVar9 < 0x1287) {
            if (uVar9 == 0x1278) {
LAB_035899f4:
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                fVar24 = *(float *)(in_stack_00000020 + 0x404);
                memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar23 = (float)FUN_03776a00(&stack0x00000290,0);
                fVar32 = 1.0;
                if (0.0 < fVar23) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_0358c010;
                  memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar32 = (float)FUN_03776a00(&stack0x00000290,0);
                }
                *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
                _uStack0000000000000070 =
                     CONCAT44(uStack0000000000000074,*(undefined4 *)(in_stack_00000020 + 0x61c));
                FUN_0209b210(in_stack_00000020 + 0x620,&stack0x00000070,
                             *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_1_TypeInfo);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
                  memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  iVar10 = FUN_03776950(&stack0x00000290,0);
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                            0x60);
                    fVar32 = (float)FUN_03776960(&stack0x00000290,0);
                    if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                      fVar30 = *(float *)(in_stack_00000020 + 0x61c);
                      fVar24 = DAT_00d389a8;
                      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                        fVar24 = 1.0;
                      }
                      memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50)
                              ,0x60);
                      fVar25 = (float)FUN_037769f0(&stack0x00000290,0);
                      *(float *)(in_stack_00000020 + 0x61c) =
                           fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                                    *(float *)(in_stack_00000020 + 0x404);
                      FUN_035a050c(in_stack_00000020 + 0x260,0x100,0);
                      uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x100;
                      goto LAB_03589b5c;
                    }
                  }
                }
              }
              goto LAB_0358c010;
            }
            uVar20 = 0x1286;
          }
          else {
            if (uVar9 == 0x18ec) goto LAB_03587e20;
            if (uVar9 == 0x1998) goto LAB_035899f4;
            uVar20 = 0x19a6;
          }
          if (uVar9 != uVar20) {
            return 0;
          }
          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
            fVar24 = *(float *)(in_stack_00000020 + 0x404);
            memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar23 = (float)FUN_037769e0(&stack0x00000290,0);
            fVar32 = 1.0;
            if (0.0 < fVar23) {
              if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_0358c010;
              memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar32 = (float)FUN_037769e0(&stack0x00000290,0);
            }
            *(float *)(in_stack_00000020 + 0x404) = fVar24 * fVar32;
            _uStack0000000000000070 =
                 CONCAT44(uStack0000000000000074,*(undefined4 *)(in_stack_00000020 + 0x61c));
            FUN_0209b210(in_stack_00000020 + 0x620,&stack0x00000070,
                         *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_1_TypeInfo);
            if (*(long *)(in_stack_00000020 + 0x100) != 0) {
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8);
              memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              iVar10 = FUN_03776950(&stack0x00000290,0);
              if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_03776960(&stack0x00000290,0);
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  fVar30 = *(float *)(in_stack_00000020 + 0x61c);
                  fVar24 = DAT_00d389a8;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar24 = 1.0;
                  }
                  memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar25 = (float)FUN_037769d0(&stack0x00000290,0);
                  *(float *)(in_stack_00000020 + 0x61c) =
                       fVar30 + (fVar23 / (float)iVar10) * fVar32 * fVar24 * fVar25 *
                                *(float *)(in_stack_00000020 + 0x404);
                  FUN_035a050c(in_stack_00000020 + 0x260,0x80,0);
                  uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x80;
LAB_03589b5c:
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
LAB_03589bf8:
                *(undefined1 *)(in_stack_00000020 + 0x2db) = 0;
                return 1;
              }
              uVar20 = 0x5171;
            }
            else {
              if (uVar9 == 0x517f) goto LAB_0358978c;
              if (uVar9 == 0x57e5) goto LAB_03589bf8;
              uVar20 = 0x5891;
            }
            if (uVar9 != uVar20) {
              return 0;
            }
            if ((*(byte *)(in_stack_00000020 + 0x25d) & 1) == 0) {
              return 1;
            }
            if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
              FUN_0209b778(in_stack_00000020 + 0x620,&stack0x00000070,
                           *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c_TypeInfo);
              *(undefined4 *)(in_stack_00000020 + 0x61c) = uStack0000000000000070;
              if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_0358c010;
              fVar24 = *(float *)(in_stack_00000020 + 0x404);
              memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
              fVar23 = (float)FUN_03776a00(&stack0x00000290,0);
              fVar32 = 1.0;
              if (0.0 < fVar23) {
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_0358c010;
                memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar32 = (float)FUN_03776a00(&stack0x00000290,0);
              }
              *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
            }
            cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x100,0);
            if (cVar7 != '\0') {
              return 1;
            }
            uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffeff;
            goto LAB_03589864;
          }
          if ((int)uVar9 < 0x6f60) {
            if (uVar9 == 0x589f) {
LAB_0358978c:
              if (-1 < *(char *)(in_stack_00000020 + 0x25c)) {
                return 1;
              }
              if (*(float *)(in_stack_00000020 + 0x404) < 1.0) {
                FUN_0209b778(in_stack_00000020 + 0x620,&stack0x00000070,
                             *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c_TypeInfo);
                *(undefined4 *)(in_stack_00000020 + 0x61c) = uStack0000000000000070;
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_0358c010;
                fVar24 = *(float *)(in_stack_00000020 + 0x404);
                memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60)
                ;
                fVar23 = (float)FUN_037769e0(&stack0x00000290,0);
                fVar32 = 1.0;
                if (0.0 < fVar23) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_0358c010;
                  memmove(&stack0x00000290,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),
                          0x60);
                  fVar32 = (float)FUN_037769e0(&stack0x00000290,0);
                }
                *(float *)(in_stack_00000020 + 0x404) = fVar24 / fVar32;
              }
              cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x80,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffff7f;
              goto LAB_03589864;
            }
            if (uVar9 != 0x6f5f) {
              return 0;
            }
LAB_0358824c:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if ((*(int *)(lVar18 + 0x18) == 0) || (*(int *)(lVar18 + 0x18) == 1)) goto LAB_0358bfac;
            iVar10 = *(int *)(lVar18 + 0x24);
            if ((iVar10 == 0x2d93756b) || (iVar10 == 0x1f31f54b)) {
              if (*(int *)(param_1 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar14 = **(long **)(param_1 + 0xb8);
              if (lVar14 != 0) {
                if (*(int *)(lVar14 + 0x18) != 0) {
                  *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar14 + 0x28);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000020 + 0x100);
                  lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  if (lVar14 == 0) goto LAB_0358c010;
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar14 + 0x38);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000020 + 0x118);
                    *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                    lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                    if (lVar14 == 0) goto LAB_0358c010;
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                      uVar13 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                      puVar12 = (undefined8 *)&stack0x00000230;
                      goto LAB_035870e8;
                    }
                  }
                }
                goto LAB_0358bfac;
              }
            }
            else {
              iVar1 = *(int *)(lVar18 + 0x38);
              iVar2 = *(int *)(lVar18 + 0x3c);
              FUN_03557c60(iVar10,&stack0x00000310,0);
              puVar5 = PTR_DAT_03cbdf88;
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_036d35a8(in_stack_00000310,0,0);
              if ((uVar11 & 1) != 0) {
                lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar18 = *(long *)(lVar14 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x70);
                if (lVar19 == 0) {
                  in_stack_00000310 = 0;
                }
                else {
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  lVar14 = *(long *)(lVar18 + 0x88);
                  if (lVar14 == 0) goto LAB_0358c010;
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0358bfac;
                  uVar13 = FUN_025c65fc(0,*(undefined8 *)(lVar18 + 0x80),
                                        *(undefined4 *)(lVar14 + 0x2c),
                                        *(undefined4 *)(lVar14 + 0x30),0);
                  iStack0000000000000030 = iVar10;
                  (**(code **)(lVar19 + 0x18))
                            (*(undefined8 *)(lVar19 + 0x40),&stack0x00000030,uVar13,&stack0x00000070
                             ,*(undefined8 *)(lVar19 + 0x28));
                  in_stack_00000310 = _uStack0000000000000070;
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_036d35a8(in_stack_00000310,0,0);
                if ((uVar11 & 1) != 0) {
                  uVar13 = FUN_0359766c(0);
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar14);
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_0358c010;
                  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
                  uVar21 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x2c),
                                        *(undefined4 *)(lVar18 + 0x30),0);
                  uVar13 = FUN_025b1328(uVar13,uVar21,0);
                  in_stack_00000310 =
                       FUN_01fe050c(uVar13,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_036d35a8(in_stack_00000310,0,0);
                if ((uVar11 & 1) != 0) {
                  return 0;
                }
                FUN_035578dc(in_stack_00000310,0);
              }
              if (iVar2 == 0 && iVar1 == 0) {
                if (in_stack_00000310 != 0) {
                  *(undefined8 *)(in_stack_00000020 + 0x118) =
                       *(undefined8 *)(in_stack_00000310 + 0x20);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000020 + 0x118);
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  uVar9 = FUN_03557fec(uVar13,in_stack_00000310,*(long *)(lVar14 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                  *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                  lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  if (lVar14 != 0) {
                    if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                      plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                      puVar12 = (undefined8 *)&stack0x000001f0;
                      goto LAB_0358b93c;
                    }
                    goto LAB_0358bfac;
                  }
                }
              }
              else {
                if ((iVar1 != 0x629fdf7) && (iVar1 != 0x454d9f7)) {
                  return 0;
                }
                uVar11 = FUN_03557e7c(iVar2,&stack0x00000308,0);
                if ((uVar11 & 1) == 0) {
                  uVar13 = FUN_0359766c(0);
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar14);
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 != 0) {
                    if (1 < *(uint *)(lVar18 + 0x18)) {
                      uVar21 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                            *(undefined4 *)(lVar18 + 0x44),
                                            *(undefined4 *)(lVar18 + 0x48),0);
                      uVar13 = FUN_025b1328(uVar13,uVar21,0);
                      uVar13 = FUN_01fe050c(uVar13,*(undefined8 *)PTR_DAT_03cbe248);
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)puVar5);
                      }
                      uVar11 = FUN_036d35a8(uVar13,0,0);
                      if ((uVar11 & 1) != 0) {
                        return 0;
                      }
                      FUN_03557af0(iVar2,uVar13,0);
                      *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000020 + 0x118);
                      uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                      lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar14 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      }
                      uVar9 = FUN_03557fec(uVar13,in_stack_00000310,*(long *)(lVar14 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                      *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                      lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                      if (lVar14 == 0) goto LAB_0358c010;
                      if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                        plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                        in_stack_00000188 = *(undefined8 *)(lVar14 + 0x38);
                        in_stack_00000180 = *(undefined8 *)(lVar14 + 0x30);
                        in_stack_00000198 = *(undefined8 *)(lVar14 + 0x48);
                        in_stack_00000190 = *(undefined8 *)(lVar14 + 0x40);
                        in_stack_000001a0 = *(undefined8 *)(lVar14 + 0x50);
                        in_stack_00000178 = *(undefined8 *)(lVar14 + 0x28);
                        in_stack_00000170 = *(undefined8 *)(lVar14 + 0x20);
                        puVar12 = &stack0x00000170;
                        goto LAB_0358b93c;
                      }
                    }
                    goto LAB_0358bfac;
                  }
                }
                else {
                  *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000308;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000020 + 0x118);
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  uVar9 = FUN_03557fec(uVar13,in_stack_00000310,*(long *)(lVar14 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                  *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                  lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  if (lVar14 != 0) {
                    if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                      plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                      in_stack_000001c8 = *(undefined8 *)(lVar14 + 0x38);
                      in_stack_000001c0 = *(undefined8 *)(lVar14 + 0x30);
                      in_stack_000001d8 = *(undefined8 *)(lVar14 + 0x48);
                      in_stack_000001d0 = *(undefined8 *)(lVar14 + 0x40);
                      in_stack_000001e0 = *(undefined8 *)(lVar14 + 0x50);
                      in_stack_000001b8 = *(undefined8 *)(lVar14 + 0x28);
                      in_stack_000001b0 = *(undefined8 *)(lVar14 + 0x20);
                      puVar12 = &stack0x000001b0;
LAB_0358b93c:
                      FUN_0209ad50(plVar15,puVar12,*(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo
                                  );
                      lVar14 = in_stack_00000020 + 0x100;
                      *(ulong *)(in_stack_00000020 + 0x100) = in_stack_00000310;
                      goto LAB_035883e4;
                    }
                    goto LAB_0358bfac;
                  }
                }
              }
            }
          }
          else {
            if (uVar9 == 0x7625) {
LAB_03589f38:
              *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x200;
              FUN_035a050c(in_stack_00000020 + 0x260,0x200,0);
              puVar5 = OVRPlugin_Mesh_TypeInfo;
              if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (DAT_0412df1c == '\0') {
                FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                DAT_0412df1c = '\x01';
              }
              lVar14 = *(long *)puVar5;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)puVar5;
              }
              uVar27 = (*(ulong **)(lVar14 + 0xb8))[1];
              uVar26 = **(ulong **)(lVar14 + 0xb8);
              uVar9 = 0;
              uVar11 = 0x4000ffff;
              do {
                plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *plVar15;
                }
                lVar18 = *(long *)(lVar14 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x88);
                if (lVar19 == 0) goto LAB_0358c010;
                uVar8 = (undefined4)(uVar26 >> 0x20);
                uVar29 = (undefined4)(uVar27 >> 0x20);
                if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_0358a508:
                  uVar20 = (uint)uVar11;
                  uVar9 = (uint)*(byte *)(in_stack_00000020 + 0x4ef);
                  if (uVar20 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x4ef)) {
                    uVar9 = (uint)(uVar11 >> 0x18) & 0xff;
                  }
                  FUN_035683a4(uVar26 & 0xffffffff,uVar8,uVar27 & 0xffffffff,uVar29,&stack0x00000318
                               ,uVar20 & 0xff0000 | uVar9 << 0x18 | uVar20 & 0xff00 | uVar20 & 0xff,
                               0);
                  FUN_0209b210(in_stack_00000020 + 0x550,&stack0x00000270,
                               *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_0_TypeInfo
                              );
                  return 1;
                }
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *plVar15;
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (lVar19 == 0) goto LAB_0358c010;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0358bfac;
                lVar22 = (long)(int)uVar9;
                if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_0358a508;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *plVar15;
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  if (lVar19 == 0) goto LAB_0358c010;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0358bfac;
                iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
                if (iVar10 < 0xa826) {
                  if ((iVar10 == 0x7625) || (iVar10 == 0xa825)) {
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar18 = *(long *)(lVar14 + 0xb8);
                      lVar19 = *(long *)(lVar18 + 0x88);
                      if (lVar19 == 0) goto LAB_0358c010;
                    }
                    if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0358bfac;
                    if (*(int *)(lVar19 + lVar22 * 0x18 + 0x28) == 4) {
                      if (*(int *)(lVar14 + 0xe0) == 0) {
                        lVar14 = thunk_FUN_01a58e78();
                        lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                        lVar19 = *(long *)(lVar18 + 0x88);
                        if (lVar19 == 0) goto LAB_0358c010;
                      }
                      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0358bfac;
                      uVar11 = FUN_03592790(lVar14,*(undefined8 *)(lVar18 + 0x80),
                                            *(undefined4 *)(lVar19 + 0x2c),
                                            *(undefined4 *)(lVar19 + 0x30));
                    }
                  }
                }
                else if (iVar10 == 0x44d63) {
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    lVar14 = thunk_FUN_01a58e78();
                    lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                    lVar19 = *(long *)(lVar18 + 0x88);
                    if (lVar19 == 0) goto LAB_0358c010;
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0358bfac;
                  lVar19 = lVar19 + lVar22 * 0x18;
                  uVar11 = FUN_03592790(lVar14,*(undefined8 *)(lVar18 + 0x80),
                                        *(undefined4 *)(lVar19 + 0x2c),
                                        *(undefined4 *)(lVar19 + 0x30));
                  uVar11 = uVar11 & 0xffffffff;
                }
                else if (iVar10 == 0xe63719) {
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                    lVar19 = *(long *)(lVar18 + 0x88);
                    if (lVar19 == 0) goto LAB_0358c010;
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0358bfac;
                  lVar19 = lVar19 + lVar22 * 0x18;
                  iVar10 = FUN_035929dc(in_stack_00000020,*(undefined8 *)(lVar18 + 0x80),
                                        *(undefined4 *)(lVar19 + 0x2c),
                                        *(undefined4 *)(lVar19 + 0x30),lVar18 + 0x90);
                  if (iVar10 != 4) {
                    return 0;
                  }
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                  if (lVar14 == 0) goto LAB_0358c010;
                  uVar20 = *(uint *)(lVar14 + 0x18);
                  if ((((uVar20 == 0) || (uVar20 == 1)) || (uVar20 < 3)) || (uVar20 == 3))
                  goto LAB_0358bfac;
                  uVar34 = *(undefined4 *)(lVar14 + 0x20);
                  uVar33 = *(undefined4 *)(lVar14 + 0x24);
                  uVar31 = *(undefined4 *)(lVar14 + 0x28);
                  uVar28 = *(undefined4 *)(lVar14 + 0x2c);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_03568238(uVar34,uVar33,uVar31,uVar28,&stack0x00000330,0);
                  uVar28 = (undefined4)uVar27;
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar31 = Unity_Loading_ContentLoadInterface__ContentSceneFile_IsHandleValid
                                     (uVar26 & 0xffffffff,0);
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
              goto LAB_035898f0;
            }
LAB_03587a3c:
            if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
              return 1;
            }
            if (*(char *)(in_stack_00000020 + 0x3f5) != '\0') {
              return 1;
            }
            lVar14 = *(long *)(in_stack_00000020 + 0x368);
            if (lVar14 != 0) {
              lVar18 = *(long *)(lVar14 + 0x48);
              if (lVar18 != 0) {
                uVar9 = *(uint *)(lVar14 + 0x28);
                lVar19 = (long)(int)uVar9;
                if (*(int *)(lVar18 + 0x18) < (int)(uVar9 + 1)) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff025c((long *)(lVar14 + 0x48),uVar9 + 1,
                               *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c_TypeInfo);
                  lVar14 = *(long *)(in_stack_00000020 + 0x368);
                  if (lVar14 == 0) goto LAB_0358c010;
                }
                lVar14 = *(long *)(lVar14 + 0x48);
                if (lVar14 != 0) {
                  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                  plVar15 = (long *)(lVar14 + lVar19 * 0x28 + 0x20);
                  *plVar15 = in_stack_00000020;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar15,in_stack_00000020);
                  if ((*(long *)(in_stack_00000020 + 0x368) != 0) &&
                     (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48), lVar14 != 0))
                  {
                    lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                    lVar18 = *(long *)(lVar18 + 0xb8);
                    lVar22 = *(long *)(lVar18 + 0x88);
                    if (lVar22 != 0) {
                      if ((*(int *)(lVar22 + 0x18) != 0) && (uVar9 < *(uint *)(lVar14 + 0x18))) {
                        *(undefined4 *)(lVar14 + lVar19 * 0x28 + 0x28) =
                             *(undefined4 *)(lVar22 + 0x24);
                        if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
                           (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x48),
                           lVar14 == 0)) goto LAB_0358c010;
                        if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                          lVar14 = lVar14 + lVar19 * 0x28;
                          *(undefined4 *)(lVar14 + 0x34) =
                               *(undefined4 *)(in_stack_00000020 + 0x494);
                          iVar10 = *(int *)(lVar22 + 0x2c);
                          *(int *)(lVar14 + 0x2c) = iVar10 + unaff_w20;
                          uVar8 = *(undefined4 *)(lVar22 + 0x30);
                          *(undefined4 *)(lVar14 + 0x30) = uVar8;
                          FUN_03567c88(lVar14 + 0x20,*(undefined8 *)(lVar18 + 0x80),iVar10,uVar8,0);
                          return 1;
                        }
                      }
                      goto LAB_0358bfac;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0358c010;
      }
      if (0x22ef4 < (int)uVar9) {
        if ((int)uVar9 < 0x260f5) {
          if (0x23290 < (int)uVar9) {
            if (uVar9 == 0x238b8) goto LAB_03589e64;
            if (uVar9 == 0x25a2e) goto LAB_03589e8c;
            uVar20 = 0x60f4;
LAB_0358776c:
            if (uVar9 != (uVar20 | 0x20000)) {
              return 0;
            }
            if ((*(byte *)(in_stack_00000020 + 0x259) >> 1 & 1) != 0) {
              return 1;
            }
            FUN_0209afdc(in_stack_00000020 + 0x550,&stack0x00000070,
                         *(undefined8 *)UnityEngine_UIElements_RadioButton_UxmlFactory_TypeInfo);
            cVar7 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x200,0);
            if (cVar7 != '\0') {
              return 1;
            }
            uVar9 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffdff;
            goto LAB_03589864;
          }
          if (uVar9 != 0x22f09) {
            uVar20 = 0x3290;
            goto LAB_03588aa8;
          }
        }
        else {
          if (0x26490 < (int)uVar9) {
            if (uVar9 == 0x26ab8) {
LAB_03589e64:
              FUN_0209afdc(in_stack_00000020 + 0x1f0,&stack0x00000070,
                           *(undefined8 *)
                            RengeGames_HealthBars_RadialSegmentedHealthBar_<UpdateShader>d__333_TypeInfo
                          );
              *(undefined4 *)(in_stack_00000020 + 0x1e8) = uStack0000000000000070;
              return 1;
            }
            if (uVar9 != 0x2d7ad) {
              uVar20 = 0x2d8fe;
              goto LAB_0358897c;
            }
            goto LAB_03589b64;
          }
          if (uVar9 != 0x26109) {
            uVar20 = 0x6490;
LAB_03588aa8:
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
        lVar14 = *(long *)(in_stack_00000020 + 0x368);
        if ((lVar14 != 0) && (lVar18 = *(long *)(lVar14 + 0x48), lVar18 != 0)) {
          uVar9 = *(uint *)(lVar14 + 0x28);
          if ((int)*(uint *)(lVar18 + 0x18) <= (int)uVar9) {
            return 1;
          }
          if (uVar9 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar9 * 0x28;
            *(int *)(lVar18 + 0x38) = *(int *)(in_stack_00000020 + 0x494) - *(int *)(lVar18 + 0x34);
            *(uint *)(lVar14 + 0x28) = uVar9 + 1;
            return 1;
          }
          goto LAB_0358bfac;
        }
        goto LAB_0358c010;
      }
      if ((int)uVar9 < 0xa83b) {
        if (0x7fe9 < (int)uVar9) {
          if (uVar9 == 0xa15f) goto LAB_0358824c;
          if (uVar9 == 0xa825) goto LAB_03589f38;
          if (uVar9 != 0xa83a) {
            return 0;
          }
          goto LAB_03587a3c;
        }
        if (uVar9 == 0x79d7) goto LAB_035894f4;
        if (uVar9 != 0x7fe9) {
          return 0;
        }
      }
      else {
        if ((int)uVar9 < 0xabd8) {
          if (uVar9 == 0xabc1) {
LAB_035898f0:
            *(undefined1 *)(in_stack_00000020 + 0x2da) = 1;
            return 1;
          }
          if (uVar9 != 0xabd7) {
            return 0;
          }
LAB_035894f4:
          if (*(int *)(in_stack_00000020 + 0x2e0) == 5) {
            *(undefined4 *)(in_stack_00000020 + 0x4d8) = 0;
            *(int *)(in_stack_00000020 + 0x4b0) = *(int *)(in_stack_00000020 + 0x4b0) + 1;
            *(float *)(in_stack_00000020 + 0x640) =
                 *(float *)(in_stack_00000020 + 0x408) + 0.0 + *(float *)(in_stack_00000020 + 0x40c)
            ;
            *(undefined1 *)(in_stack_00000020 + 0x33c) = 1;
            return 1;
          }
          return 1;
        }
        if (uVar9 != 0xb1e9) {
          if (uVar9 == 0x2282e) {
LAB_03589e8c:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209afdc(lVar14 + 0x10,&stack0x00000070,
                         *(undefined8 *)UnityEngine_UIElements_RadioButtonGroup_UxmlFactory_TypeInfo
                        );
            uVar13 = in_stack_00000088;
            uVar11 = _uStack0000000000000070;
            *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_00000078;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_00000020 + 0x100);
            *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_00000020 + 0x118,uVar13);
            *(int *)(in_stack_00000020 + 0x120) = (int)uVar11;
            return 1;
          }
          uVar20 = 0x2ef4;
          goto LAB_0358776c;
        }
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        param_1 = thunk_FUN_01a58e78();
        lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar18 = *(long *)(lVar14 + 0x88);
        if (lVar18 == 0) goto LAB_0358c010;
      }
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                   *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                   &stack0x00000070);
      if (fVar23 == -32768.0) {
        return 0;
      }
      if (in_stack_00000028._4_4_ == 2) {
        fVar23 = (fVar23 * *(float *)(in_stack_00000020 + 0x1e4)) / 100.0;
LAB_0358aff4:
        *(float *)(in_stack_00000020 + 0x1e8) = fVar23;
        _uStack0000000000000070 = CONCAT44(uStack0000000000000074,fVar23);
      }
      else {
        if (in_stack_00000028._4_4_ == 1) {
          fVar23 = fVar23 * *(float *)(in_stack_00000020 + 0x1e4);
          goto LAB_0358aff4;
        }
        if (in_stack_00000028._4_4_ != 0) {
          return 0;
        }
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x80);
        if (lVar18 == 0) goto LAB_0358c010;
        if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_0358bfac;
        if (*(short *)(lVar18 + 0x2a) == 0x2b) {
LAB_035890f8:
          fVar23 = fVar23 + *(float *)(in_stack_00000020 + 0x1e4);
          goto LAB_0358aff4;
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x80);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_0358bfac;
        if (*(short *)(lVar18 + 0x2a) == 0x2d) goto LAB_035890f8;
        *(float *)(in_stack_00000020 + 0x1e8) = fVar23;
        _uStack0000000000000070 = CONCAT44(uStack0000000000000074,fVar23);
      }
      plVar15 = (long *)(in_stack_00000020 + 0x1f0);
      uVar13 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<CreateCommandOverloads>d__33_TypeInfo
      ;
LAB_0358b3cc:
      puVar12 = (undefined8 *)&stack0x00000070;
      goto LAB_035870e8;
    }
    if (0x691282 < (int)uVar9) {
      if ((int)uVar9 < 0x3434823) {
        if ((int)uVar9 < 0x765e9b) {
          if ((int)uVar9 < 0x719366) {
            if ((int)uVar9 < 0x6afe3e) {
              if (uVar9 == 0x6a5e93) goto LAB_03589668;
              if (uVar9 != 0x6afe3d) {
                return 0;
              }
LAB_03589280:
              *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
              return 1;
            }
            if (uVar9 == 0x6ba308) {
LAB_0358a458:
              *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
              return 1;
            }
            if (uVar9 != 0x6ccb9a) {
              if (uVar9 != 0x719365) {
                return 0;
              }
              goto LAB_03587d30;
            }
LAB_0358912c:
            *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
            return 1;
          }
          if (0x73f193 < (int)uVar9) {
            if (uVar9 == 0x74913d) goto LAB_03589280;
            if (uVar9 == 0x753608) goto LAB_0358a458;
            if (uVar9 != 0x765e9a) {
              return 0;
            }
            goto LAB_0358912c;
          }
          if (uVar9 != 0x72a582) {
            if (uVar9 != 0x73f193) {
              return 0;
            }
LAB_03589668:
            FUN_0209afdc(in_stack_00000020 + 0x410,&stack0x00000070,
                         *(undefined8 *)
                          RengeGames_HealthBars_RadialSegmentedHealthBar_<UpdateShader>d__333_TypeInfo
                        );
            *(undefined4 *)(in_stack_00000020 + 0x40c) = uStack0000000000000070;
            return 1;
          }
LAB_03589990:
          if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
            return 1;
          }
          uVar9 = *(int *)(in_stack_00000020 + 0x494) - 1;
          if (0 < *(int *)(in_stack_00000020 + 0x494)) {
            fVar23 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac);
            *(float *)(in_stack_00000020 + 0x640) = fVar23;
            if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
               (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar14 == 0))
            goto LAB_0358c010;
            if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
            *(float *)(lVar14 + (ulong)uVar9 * 0x178 + 0x144) = fVar23;
          }
          *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
          return 1;
        }
        if (0xe6a57a < (int)uVar9) {
          if ((int)uVar9 < 0x2d9fc44) {
            if (uVar9 == 0xf4aac9) goto LAB_03589704;
            if (uVar9 != 0x2d9fc43) {
              return 0;
            }
          }
          else {
            if (uVar9 == 0x3004302) {
LAB_03587314:
              *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
              return 1;
            }
            if (uVar9 != 0x31d0163) {
              if (uVar9 != 0x3434822) {
                return 0;
              }
              goto LAB_03587314;
            }
          }
          goto LAB_035881fc;
        }
        if ((int)uVar9 < 0xa3a05b) {
          if (uVar9 != 0x8b5eea) {
            uVar20 = 0xa3a05a;
LAB_03588c60:
            if (uVar9 != uVar20) {
              return 0;
            }
            *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
            return 1;
          }
        }
        else {
          if (uVar9 == 0xb1a5a9) {
LAB_03589704:
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar18 = *(long *)(lVar14 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar18 + 0x2c),
                                           *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 1) {
                fVar32 = DAT_00d389a8;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
              }
              else {
                if (in_stack_00000028._4_4_ != 0) {
                  return 0;
                }
                fVar32 = DAT_00d389a8;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
              }
              *(float *)(in_stack_00000020 + 0x61c) = fVar23;
              return 1;
            }
            goto LAB_0358bfac;
          }
          if (uVar9 != 0xce640a) {
            uVar20 = 0xe6a57a;
            goto LAB_03588c60;
          }
        }
LAB_03588c78:
        uVar13 = 0x10;
        uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
LAB_03589e54:
        *(uint *)(in_stack_00000020 + 0x25c) = uVar9;
        FUN_035a050c(in_stack_00000020 + 0x260,uVar13,0);
        return 1;
      }
      if ((int)uVar9 < 0x1eaf47a2) {
        if (0x14495107 < (int)uVar9) {
          if (0x161e7507 < (int)uVar9) {
            if (uVar9 == 0x16504b66) {
LAB_0358989c:
              if (*(int *)(param_1 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              }
              FUN_0209afdc(lVar14 + 0x10,&stack0x00000070,
                           *(undefined8 *)
                            UnityEngine_UIElements_RadioButtonGroup_UxmlFactory_TypeInfo);
              uVar8 = uStack0000000000000070;
              *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000088;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000020 + 0x118);
              *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
              return 1;
            }
            if (uVar9 == 0x1b40b577) goto LAB_03589e0c;
            if (uVar9 != 0x1eaf47a1) {
              return 0;
            }
LAB_03589e40:
            uVar13 = 8;
            uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 8;
            goto LAB_03589e54;
          }
          if (uVar9 == 0x147b2766) goto LAB_0358989c;
          uVar20 = 0x161e7507;
LAB_035883b4:
          if (uVar9 != uVar20) {
            return 0;
          }
          FUN_0209afdc(in_stack_00000020 + 0x588,&stack0x00000070,
                       *(undefined8 *)Mono_CSharp_Linq_QueryBlock_TransparentParameter_TypeInfo);
          lVar14 = in_stack_00000020 + 0x580;
          *(ulong *)(in_stack_00000020 + 0x580) = _uStack0000000000000070;
LAB_035883e4:
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar14);
          return 1;
        }
        if ((int)uVar9 < 0x454d9f8) {
          if (uVar9 == 0x4230398) goto LAB_03589c9c;
          if (uVar9 != 0x454d9f7) {
            return 0;
          }
        }
        else {
          if (uVar9 == 0x5f82798) {
LAB_03589c9c:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar18 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              uVar8 = *(undefined4 *)(lVar18 + 0x24);
              uVar11 = FUN_03557dc8(uVar8,&stack0x00000300,0);
              puVar5 = PTR_DAT_03cbdf88;
              if ((uVar11 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_036d35a8(in_stack_00000300,0,0);
                if ((uVar11 & 1) != 0) {
                  uVar13 = FUN_0359785c(0);
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar14);
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_0358c010;
                  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
                  uVar21 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x2c),
                                        *(undefined4 *)(lVar18 + 0x30),0);
                  uVar13 = FUN_025b1328(uVar13,uVar21,0);
                  in_stack_00000300 =
                       FUN_01fe050c(uVar13,*(undefined8 *)
                                            Crosstales_BWF_Manager_PunctuationManager_<getAllAsync>d__27_TypeInfo
                                   );
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_036d35a8(in_stack_00000300,0,0);
                if ((uVar11 & 1) != 0) {
                  return 0;
                }
                FUN_03557b90(uVar8,in_stack_00000300,0);
              }
              *(undefined8 *)(in_stack_00000020 + 0x580) = in_stack_00000300;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000020 + 0x580);
              uVar9 = 1;
              *(undefined1 *)(in_stack_00000020 + 0x5b0) = 0;
              plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              do {
                lVar14 = *plVar15;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *plVar15;
                }
                lVar18 = *(long *)(lVar14 + 0xb8);
                lVar19 = *(long *)(lVar18 + 0x88);
                if (lVar19 == 0) goto LAB_0358c010;
                if (*(int *)(lVar19 + 0x18) <= (int)uVar9) {
LAB_0358acdc:
                  puVar12 = *(undefined8 **)(in_stack_00000020 + 0x580);
                  plVar15 = (long *)(in_stack_00000020 + 0x588);
                  uVar13 = *(undefined8 *)
                            QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass3_0_TypeInfo;
                  goto LAB_035870e8;
                }
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *plVar15;
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (lVar19 == 0) goto LAB_0358c010;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                lVar22 = (long)(int)uVar9;
                if (*(int *)(lVar19 + lVar22 * 0x18 + 0x20) == 0) goto LAB_0358acdc;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *plVar15;
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar19 = *(long *)(lVar18 + 0x88);
                  plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (lVar19 == 0) goto LAB_0358c010;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                iVar10 = *(int *)(lVar19 + lVar22 * 0x18 + 0x20);
                if ((iVar10 == 0xb2fb) || (iVar10 == 0x80fb)) {
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    lVar14 = thunk_FUN_01a58e78();
                    lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                    lVar19 = *(long *)(lVar18 + 0x88);
                    if (lVar19 == 0) goto LAB_0358c010;
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) break;
                  lVar19 = lVar19 + lVar22 * 0x18;
                  _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                  fVar23 = (float)FUN_03592a88(lVar14,*(undefined8 *)(lVar18 + 0x80),
                                               *(undefined4 *)(lVar19 + 0x2c),
                                               *(undefined4 *)(lVar19 + 0x30),&stack0x00000070);
                  *(bool *)(in_stack_00000020 + 0x5b0) = fVar23 != 0.0;
                  plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                uVar9 = uVar9 + 1;
              } while( true );
            }
            goto LAB_0358bfac;
          }
          if (uVar9 != 0x629fdf7) {
            uVar20 = 0x14495107;
            goto LAB_035883b4;
          }
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          iVar10 = *(int *)(lVar18 + 0x24);
          if ((iVar10 != 0x2d93756b) && (iVar10 != 0x1f31f54b)) {
            uVar11 = FUN_03557e7c(iVar10,&stack0x00000308,0);
            if ((uVar11 & 1) == 0) {
              uVar13 = FUN_0359766c(0);
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar14);
                lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
              if (lVar18 != 0) {
                if (*(int *)(lVar18 + 0x18) != 0) {
                  uVar21 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                        *(undefined4 *)(lVar18 + 0x2c),
                                        *(undefined4 *)(lVar18 + 0x30),0);
                  uVar13 = FUN_025b1328(uVar13,uVar21,0);
                  uVar13 = FUN_01fe050c(uVar13,*(undefined8 *)PTR_DAT_03cbe248);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                  }
                  uVar11 = FUN_036d35a8(uVar13,0,0);
                  if ((uVar11 & 1) != 0) {
                    return 0;
                  }
                  FUN_03557af0(iVar10,uVar13,0);
                  *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000020 + 0x118);
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
                  lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  uVar9 = FUN_03557fec(uVar13,uVar21,*(long *)(lVar14 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                  *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                  lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  if (lVar14 == 0) goto LAB_0358c010;
                  if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                    in_stack_000000c8 = *(undefined8 *)(lVar14 + 0x38);
                    in_stack_000000c0 = *(undefined8 *)(lVar14 + 0x30);
                    in_stack_000000d8 = *(undefined8 *)(lVar14 + 0x48);
                    in_stack_000000d0 = *(undefined8 *)(lVar14 + 0x40);
                    in_stack_000000e0 = *(undefined8 *)(lVar14 + 0x50);
                    in_stack_000000b8 = *(undefined8 *)(lVar14 + 0x28);
                    in_stack_000000b0 = *(undefined8 *)(lVar14 + 0x20);
                    uVar13 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                    plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                    puVar12 = &stack0x000000b0;
                    goto LAB_035870e8;
                  }
                }
                goto LAB_0358bfac;
              }
            }
            else {
              *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000308;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000020 + 0x118);
              uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
              uVar21 = *(undefined8 *)(in_stack_00000020 + 0x100);
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              uVar9 = FUN_03557fec(uVar13,uVar21,*(long *)(lVar14 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
              *(uint *)(in_stack_00000020 + 0x120) = uVar9;
              lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              if (lVar14 != 0) {
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                in_stack_00000108 = *(undefined8 *)(lVar14 + 0x38);
                in_stack_00000100 = *(undefined8 *)(lVar14 + 0x30);
                in_stack_00000118 = *(undefined8 *)(lVar14 + 0x48);
                in_stack_00000110 = *(undefined8 *)(lVar14 + 0x40);
                in_stack_00000120 = *(undefined8 *)(lVar14 + 0x50);
                in_stack_000000f8 = *(undefined8 *)(lVar14 + 0x28);
                in_stack_000000f0 = *(undefined8 *)(lVar14 + 0x20);
                uVar13 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                puVar12 = &stack0x000000f0;
                goto LAB_035870e8;
              }
            }
            goto LAB_0358c010;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar14 = **(long **)(param_1 + 0xb8);
          if (lVar14 == 0) goto LAB_0358c010;
          if (*(int *)(lVar14 + 0x18) != 0) {
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar14 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_00000020 + 0x118);
            *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
            lVar14 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            if (lVar14 == 0) goto LAB_0358c010;
            if (*(int *)(lVar14 + 0x18) != 0) {
              plVar15 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
              in_stack_00000138 = *(undefined8 *)(lVar14 + 0x28);
              in_stack_00000130 = *(undefined8 *)(lVar14 + 0x20);
              in_stack_00000148 = *(undefined8 *)(lVar14 + 0x38);
              in_stack_00000140 = *(undefined8 *)(lVar14 + 0x30);
              in_stack_00000160 = *(undefined8 *)(lVar14 + 0x50);
              in_stack_00000158 = *(undefined8 *)(lVar14 + 0x48);
              in_stack_00000150 = *(undefined8 *)(lVar14 + 0x40);
              uVar13 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
              puVar12 = &stack0x00000130;
              goto LAB_035870e8;
            }
          }
        }
      }
      else {
        if ((int)uVar9 < 0x2e9af08b) {
          if ((int)uVar9 < 0x21c6f46b) {
            if (uVar9 != 0x20d7f9c8) {
              uVar20 = 0x21c6f46a;
LAB_03588a88:
              if (uVar9 != uVar20) {
                return 0;
              }
              goto LAB_03588c78;
            }
          }
          else {
            if (uVar9 == 0x2b8343c1) goto LAB_03589e40;
            if (uVar9 != 0x2dabf5e8) {
              uVar20 = 0x2e9af08a;
              goto LAB_03588a88;
            }
          }
          uVar13 = 0x20;
          uVar9 = *(uint *)(in_stack_00000020 + 0x25c) | 0x20;
          goto LAB_03589e54;
        }
        if ((int)uVar9 < 0x421fe49e) {
          if (uVar9 != 0x419bc966) {
            if (uVar9 == 0x421f5578) goto LAB_03589c04;
            uVar20 = 0x421fe49d;
            goto UnityEngine_Graphics__DrawTexture;
          }
LAB_0358a464:
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01a58e78();
            lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar14 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x2c),
                                         *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00d389a8;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = fVar23 * fVar32;
            }
            else if (in_stack_00000028._4_4_ == 1) {
              fVar32 = DAT_00d389a8;
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
          if (uVar9 == 0x71174431) {
LAB_03589f18:
            *(undefined4 *)(in_stack_00000020 + 0x2c0) = 0xc6fffe00;
            return 1;
          }
          if (uVar9 == 0x7117d356) {
LAB_03589f2c:
            *(undefined4 *)(in_stack_00000020 + 0x408) = 0;
            return 1;
          }
          uVar20 = 0x77eef5be;
FUN_03587930:
          if (uVar9 != uVar20) {
            return 0;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01a58e78();
            lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar14 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x2c),
                                         *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            iVar10 = -0x80000000;
            if (fVar23 != INFINITY) {
              iVar10 = (int)fVar23;
            }
            if (iVar10 < 0x191) {
              if (iVar10 < 0xc9) {
                if ((iVar10 == 100) || (iVar10 == 200)) goto LAB_0358b384;
              }
              else if ((iVar10 == 300) || (iVar10 == 400)) goto LAB_0358b384;
            }
            else if (iVar10 < 0x259) {
              if ((iVar10 == 500) || (iVar10 == 600)) goto LAB_0358b384;
            }
            else if ((iVar10 == 700) || ((iVar10 == 800 || (iVar10 == 900)))) {
LAB_0358b384:
              *(int *)(in_stack_00000020 + 0x214) = iVar10;
            }
            uVar9 = *(uint *)(in_stack_00000020 + 0x214);
            plVar15 = (long *)(in_stack_00000020 + 0x218);
            puVar12 = (undefined8 *)QFSW_QC_QuantumParser_<>c_TypeInfo;
LAB_0358b3c4:
            uVar13 = *puVar12;
LAB_0358b3c8:
            _uStack0000000000000070 = CONCAT44(uStack0000000000000074,uVar9);
            goto LAB_0358b3cc;
          }
        }
      }
      goto LAB_0358bfac;
    }
    if (0x105b0c < (int)uVar9) {
      if ((int)uVar9 < 0x18b5de) {
        if ((int)uVar9 < 0x14b2e4) {
          if ((int)uVar9 < 0x10e5b0) {
            if (uVar9 == 0x10decb) goto LAB_0358912c;
            uVar20 = 0x10e5af;
            goto LAB_03589120;
          }
          if (uVar9 == 0x110d27) goto LAB_0358a2d0;
          if (uVar9 != 0x13a0c6) {
            if (uVar9 != 0x14b2e3) {
              return 0;
            }
            goto LAB_03587be8;
          }
          goto LAB_03588ae0;
        }
        if ((int)uVar9 < 0x169e9f) {
          if (uVar9 != 0x15fef4) {
            uVar20 = 0x169e9e;
            goto LAB_03588420;
          }
LAB_03589900:
          if (*(int *)(param_1 + 0xe0) == 0) {
            param_1 = thunk_FUN_01a58e78();
            lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar14 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x2c),
                                         *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
            if (fVar23 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar32 = DAT_00d389a8;
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
                goto LAB_0358b0c0;
              }
              fVar32 = DAT_00d389a8;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar32 = 1.0;
              }
              fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
            }
            *(float *)(in_stack_00000020 + 0x40c) = fVar23;
LAB_0358b0c0:
            _uStack0000000000000070 = CONCAT44(uStack0000000000000074,fVar23);
            FUN_0209ad50(in_stack_00000020 + 0x410,&stack0x00000070,
                         *(undefined8 *)
                          QFSW_QC_QuantumConsoleProcessor_<CreateCommandOverloads>d__33_TypeInfo);
            *(undefined4 *)(in_stack_00000020 + 0x640) = *(undefined4 *)(in_stack_00000020 + 0x40c);
            return 1;
          }
          goto LAB_0358bfac;
        }
        if (uVar9 == 0x174369) goto LAB_03589690;
        if (uVar9 == 0x186bfb) goto LAB_035880c8;
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
LAB_03588ae0:
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar18 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
                return 1;
              }
              _uStack0000000000000070 =
                   CONCAT44(uStack0000000000000074,*(undefined4 *)(lVar18 + 0x24));
              FUN_0209ad50(in_stack_00000020 + 0x5f8,&stack0x00000070,
                           *(undefined8 *)
                            QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass37_0_TypeInfo);
              uVar13 = FUN_0276793c(&stack0x000002f4,0);
              uVar21 = FUN_0276793c(in_stack_00000020 + 0x494,0);
              uVar13 = FUN_025be45c(*(undefined8 *)RootMotion_FinalIK_RagdollUtility_Child_TypeInfo,
                                    uVar13,*(undefined8 *)
                                            RootMotion_FinalIK_RagdollUtility_Rigidbone_TypeInfo,
                                    uVar21,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar13,0);
              return 1;
            }
          }
          else if (uVar9 == 0x1e45e3) {
LAB_03587be8:
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar18 = *(long *)(lVar14 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar18 + 0x2c),
                                           *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00d389a8;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
LAB_0358b218:
                *(float *)(in_stack_00000020 + 0x2ac) = fVar23;
                return 1;
              }
              if (in_stack_00000028._4_4_ == 1) {
                fVar32 = DAT_00d389a8;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = *(float *)(in_stack_00000020 + 0x1e8) * fVar23 * fVar32;
                goto LAB_0358b218;
              }
              goto LAB_035896f4;
            }
          }
          else {
            if (uVar9 == 0x1f91f4) goto LAB_03589900;
            uVar20 = 0x20319e;
LAB_03588420:
            if (uVar9 != uVar20) {
              return 0;
            }
            if (*(int *)(param_1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar14 = *(long *)(param_1 + 0xb8);
              lVar18 = *(long *)(lVar14 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            fVar23 = DAT_00d389a8;
            if (*(int *)(lVar18 + 0x18) != 0) {
              if (*(int *)(lVar18 + 0x28) != 1) {
                if (*(int *)(lVar18 + 0x28) != 0) {
                  return 0;
                }
                uVar9 = 1;
                fVar32 = 0.0;
                do {
                  if (*(int *)(param_1 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                  if (lVar14 == 0) goto LAB_0358c010;
                  if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
                    return 1;
                  }
                  if (*(int *)(param_1 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                    if (lVar14 == 0) goto LAB_0358c010;
                  }
                  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                  lVar18 = (long)(int)uVar9;
                  if (*(int *)(lVar14 + lVar18 * 0x18 + 0x20) == 0) {
                    return 1;
                  }
                  if (*(int *)(param_1 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar19 = *(long *)(param_1 + 0xb8);
                  lVar14 = *(long *)(lVar19 + 0x88);
                  if (lVar14 == 0) goto LAB_0358c010;
                  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                  iVar10 = *(int *)(lVar14 + lVar18 * 0x18 + 0x20);
                  if (iVar10 == 0x4d0e4) {
                    if (*(int *)(param_1 + 0xe0) == 0) {
                      param_1 = thunk_FUN_01a58e78();
                      lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                      lVar14 = *(long *)(lVar19 + 0x88);
                      if (lVar14 == 0) goto LAB_0358c010;
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                    lVar14 = lVar14 + lVar18 * 0x18;
                    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                    fVar24 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar19 + 0x80),
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x00000070);
                    if (fVar24 == -32768.0) {
                      return 0;
                    }
                    param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(param_1 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                    lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                    if (lVar14 == 0) goto LAB_0358c010;
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                    iVar10 = *(int *)(lVar14 + lVar18 * 0x18 + 0x34);
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
                      param_1 = thunk_FUN_01a58e78();
                      lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                      lVar14 = *(long *)(lVar19 + 0x88);
                      if (lVar14 == 0) goto LAB_0358c010;
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                    lVar14 = lVar14 + lVar18 * 0x18;
                    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                    fVar24 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar19 + 0x80),
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x00000070);
                    if (fVar24 == -32768.0) {
                      return 0;
                    }
                    param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(param_1 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                    lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
                    if (lVar14 == 0) goto LAB_0358c010;
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0358bfac;
                    iVar10 = *(int *)(lVar14 + lVar18 * 0x18 + 0x34);
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
                param_1 = thunk_FUN_01a58e78();
                lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                lVar18 = *(long *)(lVar14 + 0x88);
                if (lVar18 == 0) goto LAB_0358c010;
              }
              if (*(int *)(lVar18 + 0x18) != 0) {
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                             *(undefined4 *)(lVar18 + 0x2c),
                                             *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
                if (fVar23 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000028._4_4_ == 0) {
                  fVar32 = DAT_00d389a8;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar23 = fVar23 * fVar32;
                }
                else if (in_stack_00000028._4_4_ == 1) {
                  fVar32 = DAT_00d389a8;
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
LAB_0358b7c4:
                *(float *)(in_stack_00000020 + 0x354) = fVar23;
                return 1;
              }
            }
          }
          goto LAB_0358bfac;
        }
        if ((int)uVar9 < 0x21fefc) {
          if (uVar9 == 0x20d669) {
LAB_03589690:
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar18 = *(long *)(lVar14 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar18 + 0x2c),
                                           *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (in_stack_00000028._4_4_ == 0) {
                fVar32 = DAT_00d389a8;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar32 = 1.0;
                }
                fVar23 = fVar23 * fVar32;
              }
              else {
                if (in_stack_00000028._4_4_ != 1) {
LAB_035896f4:
                  if (in_stack_00000028._4_4_ == 2) {
                    return 0;
                  }
                  return 1;
                }
                fVar32 = DAT_00d389a8;
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
LAB_035880c8:
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar18 = *(long *)(lVar14 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(int *)(lVar18 + 0x18) != 0) {
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar18 + 0x2c),
                                           *(undefined4 *)(lVar18 + 0x30),&stack0x00000070);
              if (fVar23 == -32768.0) {
                return 0;
              }
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              puVar5 = PTR_DAT_03cbded8;
              uVar26 = 0;
              uVar27 = (ulong)(uint)(fVar23 * DAT_00d38a10);
              puVar16 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uVar8 = *puVar16;
              uVar29 = puVar16[1];
              uVar28 = puVar16[2];
              uVar11 = FUN_036c0af4(0,0,uVar27,0);
              if (DAT_0411f16a == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f16a = '\x01';
              }
              uStack0000000000000004 =
                   (undefined4)
                   ((ulong)*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc) >> 0x20);
              goto LAB_0358939c;
            }
          }
          goto LAB_0358bfac;
        }
        if (uVar9 != 0x2248dd) {
          if (uVar9 == 0x680065) {
LAB_03587d30:
            if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
              FUN_0209bef8(in_stack_00000020 + 0x5f8,&stack0x0000028c,
                           *(undefined8 *)QFSW_QC_QuantumPreprocessor_<>c_TypeInfo);
              uVar13 = FUN_0276793c(&stack0x0000028c,0);
              uVar21 = FUN_0276793c(&stack0x0000028c,0);
              uVar13 = FUN_025be45c(*(undefined8 *)RootMotion_FinalIK_RagdollUtility_Child_TypeInfo,
                                    uVar13,*(undefined8 *)
                                            Unity_Entities_RateUtils_VariableRateManager_TypeInfo,
                                    uVar21,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar13,0);
            }
            FUN_0209afdc(in_stack_00000020 + 0x5f8,&stack0x00000070,
                         *(undefined8 *)System_Collections_Queue_QueueEnumerator_TypeInfo);
            return 1;
          }
          if (uVar9 != 0x691282) {
            return 0;
          }
          goto LAB_03589990;
        }
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + 0x88);
        if (lVar18 == 0) goto LAB_0358c010;
      }
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
      iVar10 = *(int *)(lVar18 + 0x24);
      *(undefined4 *)(in_stack_00000020 + 0x6a4) = 0xffffffff;
      if (*(int *)(lVar18 + 0x28) == 0) {
LAB_03587568:
        puVar5 = PTR_DAT_03cbdf88;
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_036cee6c(uVar13,0,0);
        if ((uVar11 & 1) == 0) {
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x690);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_036cee6c(uVar13,0,0);
          if ((uVar11 & 1) != 0) {
UnityEngine_HDROutputSettings__get_main:
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x690);
            goto LAB_0358b9b0;
          }
          puVar12 = (undefined8 *)(in_stack_00000020 + 0x690);
          uVar13 = *puVar12;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_036d35a8(uVar13,0,0);
          if ((uVar11 & 1) != 0) {
            uVar13 = FUN_035977a8(0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar5);
            }
            uVar11 = FUN_036cee6c(uVar13,0,0);
            if ((uVar11 & 1) == 0) {
              uVar13 = FUN_01fe050c(*(undefined8 *)
                                     Unity_Entities_RateUtils_FixedRateCatchUpManager_TypeInfo,
                                    *(undefined8 *)
                                     Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                                   );
            }
            else {
              uVar13 = FUN_035977a8(0);
            }
            *puVar12 = uVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar13);
            goto UnityEngine_HDROutputSettings__get_main;
          }
        }
        else {
          uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_0358b9b0:
          *(undefined8 *)(in_stack_00000020 + 0x698) = uVar13;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000020 + 0x698);
        }
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x698);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_036d35a8(uVar13,0,0);
        if ((uVar11 & 1) != 0) {
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
        if (*(int *)(lVar18 + 0x28) == 1) goto LAB_03587568;
        uVar11 = FUN_03557d14(iVar10,&stack0x000002f8,0);
        puVar5 = PTR_DAT_03cbdf88;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_036d35a8(in_stack_000002f8,0,0);
          if ((uVar11 & 1) != 0) {
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar18 = *(long *)(lVar14 + 0xb8);
            lVar19 = *(long *)(lVar18 + 0x78);
            in_stack_000002f8 = 0;
            if (lVar19 != 0) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              }
              lVar14 = *(long *)(lVar18 + 0x88);
              if (lVar14 == 0) goto LAB_0358c010;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0358bfac;
              uVar13 = FUN_025c65fc(0,*(undefined8 *)(lVar18 + 0x80),*(undefined4 *)(lVar14 + 0x2c),
                                    *(undefined4 *)(lVar14 + 0x30),0);
              iStack0000000000000030 = iVar10;
              (**(code **)(lVar19 + 0x18))
                        (*(undefined8 *)(lVar19 + 0x40),&stack0x00000030,uVar13,&stack0x00000070,
                         *(undefined8 *)(lVar19 + 0x28));
              in_stack_000002f8 = _uStack0000000000000070;
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_036d35a8(in_stack_000002f8,0,0);
            if ((uVar11 & 1) != 0) {
              uVar13 = FUN_035977c4(0);
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar14);
                lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
              if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0358bfac;
              uVar21 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),0)
              ;
              uVar13 = FUN_025b1328(uVar13,uVar21,0);
              in_stack_000002f8 =
                   FUN_01fe050c(uVar13,*(undefined8 *)
                                        Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                               );
            }
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_036d35a8(in_stack_000002f8,0,0);
          if ((uVar11 & 1) != 0) {
            return 0;
          }
          FUN_035579d8(iVar10,in_stack_000002f8,0);
        }
        *(ulong *)(in_stack_00000020 + 0x698) = in_stack_000002f8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020 + 0x698)
        ;
      }
      lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar18 = *(long *)(lVar14 + 0xb8);
      lVar19 = *(long *)(lVar18 + 0x88);
      if (lVar19 == 0) goto LAB_0358c010;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0358bfac;
      if (*(int *)(lVar19 + 0x28) == 1) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          lVar14 = thunk_FUN_01a58e78();
          lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar19 = *(long *)(lVar18 + 0x88);
          if (lVar19 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0358bfac;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar23 = (float)FUN_03592a88(lVar14,*(undefined8 *)(lVar18 + 0x80),
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
           (lVar14 = UnityEngine_Material__DisableKeyword(*(long *)(in_stack_00000020 + 0x698),0),
           lVar14 == 0)) goto LAB_0358c010;
        if (*(int *)(lVar14 + 0x18) + -1 < iVar10) {
          return 0;
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      uVar9 = 0;
      uVar8 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x68);
      plVar15 = (long *)(in_stack_00000020 + 0x698);
      *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
LAB_0358bb18:
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar19 = *(long *)(lVar14 + 0xb8);
      lVar18 = *(long *)(lVar19 + 0x88);
      if (lVar18 == 0) goto LAB_0358c010;
      if (*(int *)(lVar18 + 0x18) <= (int)uVar9) {
LAB_0358bfb0:
        if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
          return 0;
        }
        lVar18 = *plVar15;
        if (lVar18 != 0) {
          uVar13 = *(undefined8 *)(lVar18 + 0x20);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          uVar8 = FUN_03558224(uVar13,lVar18,*(long *)(lVar14 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
          *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
          *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
          return 1;
        }
        goto LAB_0358c010;
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar19 = *(long *)(lVar14 + 0xb8);
        lVar18 = *(long *)(lVar19 + 0x88);
        if (lVar18 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0358bfac;
      lVar22 = (long)(int)uVar9;
      if (*(int *)(lVar18 + lVar22 * 0x18 + 0x20) == 0) goto LAB_0358bfb0;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar19 = *(long *)(lVar14 + 0xb8);
        lVar18 = *(long *)(lVar19 + 0x88);
        if (lVar18 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0358bfac;
      iVar10 = *(int *)(lVar18 + lVar22 * 0x18 + 0x20);
      if (iVar10 < 0xa954) {
        if (iVar10 < 0x7754) {
          if (iVar10 == 0x6851) {
LAB_0358bd40:
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar18 = *(long *)(lVar19 + 0x88);
              if (lVar18 == 0) goto LAB_0358c010;
            }
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0358bfac;
            lVar18 = lVar18 + lVar22 * 0x18;
            iVar10 = FUN_035929dc(in_stack_00000020,*(undefined8 *)(lVar19 + 0x80),
                                  *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                  lVar19 + 0x90);
            if (iVar10 != 3) {
              return 0;
            }
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
            if (lVar14 == 0) goto LAB_0358c010;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0358bfac;
            iVar10 = -0x80000000;
            if (*(float *)(lVar14 + 0x20) != INFINITY) {
              iVar10 = (int)*(float *)(lVar14 + 0x20);
            }
            *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
            if (*(char *)(in_stack_00000020 + 0x431) == '\0') goto LAB_0358bf98;
            lVar14 = FUN_0357fa1c(in_stack_00000020);
            uVar8 = *(undefined4 *)(in_stack_00000020 + 0x494);
            uVar13 = *(undefined8 *)(in_stack_00000020 + 0x698);
            uVar29 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
            lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar18);
              lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x90);
            if (lVar18 == 0) goto LAB_0358c010;
            if ((*(uint *)(lVar18 + 0x18) < 2) || (*(uint *)(lVar18 + 0x18) == 2))
            goto LAB_0358bfac;
            if (lVar14 == 0) goto LAB_0358c010;
            iVar10 = -0x80000000;
            if (*(float *)(lVar18 + 0x24) != INFINITY) {
              iVar10 = (int)*(float *)(lVar18 + 0x24);
            }
            iVar1 = -0x80000000;
            if (*(float *)(lVar18 + 0x28) != INFINITY) {
              iVar1 = (int)*(float *)(lVar18 + 0x28);
            }
            FUN_03599b64(lVar14,uVar8,uVar13,uVar29,iVar10,iVar1,0);
            goto LAB_0358bf98;
          }
          if (iVar10 != 0x7753) {
            return 0;
          }
        }
        else {
          if (iVar10 == 0x80fb) goto LAB_0358bce4;
          if (iVar10 == 0x9a51) goto LAB_0358bd40;
          if (iVar10 != 0xa953) {
            return 0;
          }
        }
        lVar19 = *plVar15;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0358bfac;
        lVar14 = FUN_0359ba84(lVar19,*(undefined4 *)(lVar18 + lVar22 * 0x18 + 0x24),1,
                              &stack0x00000288,0);
        *plVar15 = lVar14;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15,lVar14);
        iVar10 = 0;
LAB_0358bf90:
        *(int *)(in_stack_00000020 + 0x6a4) = iVar10;
      }
      else {
        if (0x2ef43 < iVar10) {
          if (iVar10 < 0x4828a) {
            if (iVar10 != 0x3246a) {
              if (iVar10 != 0x44d63) {
                return 0;
              }
              goto LAB_0358beb8;
            }
          }
          else if (iVar10 != 0x4828a) {
            if ((iVar10 != 0x18b5dd) && (iVar10 != 0x2248dd)) {
              return 0;
            }
            goto LAB_0358bf98;
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            lVar14 = thunk_FUN_01a58e78();
            lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar19 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (1 < *(uint *)(lVar18 + 0x18)) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar23 = (float)FUN_03592a88(lVar14,*(undefined8 *)(lVar19 + 0x80),
                                         *(undefined4 *)(lVar18 + 0x44),
                                         *(undefined4 *)(lVar18 + 0x48),&stack0x00000070);
            iVar10 = -0x80000000;
            if (fVar23 != INFINITY) {
              iVar10 = (int)fVar23;
            }
            if (iVar10 == -0x8000) {
              return 0;
            }
            if ((*plVar15 != 0) &&
               (lVar14 = UnityEngine_Material__DisableKeyword(*plVar15,0), lVar14 != 0)) {
              if (*(int *)(lVar14 + 0x18) + -1 < iVar10) {
                return 0;
              }
              goto LAB_0358bf90;
            }
            goto LAB_0358c010;
          }
          goto LAB_0358bfac;
        }
        if (iVar10 == 0xb2fb) {
LAB_0358bce4:
          if (*(int *)(lVar14 + 0xe0) == 0) {
            lVar14 = thunk_FUN_01a58e78();
            lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar19 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0358bfac;
          lVar18 = lVar18 + lVar22 * 0x18;
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03592a88(lVar14,*(undefined8 *)(lVar19 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
                                       ,&stack0x00000070);
          *(bool *)(in_stack_00000020 + 0x1b9) = fVar23 != 0.0;
        }
        else {
          if (iVar10 != 0x2ef43) {
            return 0;
          }
LAB_0358beb8:
          if (*(int *)(lVar14 + 0xe0) == 0) {
            lVar14 = thunk_FUN_01a58e78();
            lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar18 = *(long *)(lVar19 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0358bfac;
          lVar18 = lVar18 + lVar22 * 0x18;
          uVar8 = FUN_03592790(lVar14,*(undefined8 *)(lVar19 + 0x80),*(undefined4 *)(lVar18 + 0x2c),
                               *(undefined4 *)(lVar18 + 0x30));
          *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar8;
        }
      }
LAB_0358bf98:
      uVar9 = uVar9 + 1;
      lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      goto LAB_0358bb18;
    }
    if (0x4d122 < (int)uVar9) {
      if (0xefcec < (int)uVar9) {
        if ((int)uVar9 < 0xf8790) {
          if (uVar9 == 0xf80ab) goto LAB_0358912c;
          uVar20 = 0xf878f;
LAB_03589120:
          if (uVar9 != uVar20) {
            return 0;
          }
          return 1;
        }
        if (uVar9 == 0xfaf07) {
LAB_0358a2d0:
          *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
          return 1;
        }
        if (uVar9 == 0x104376) {
LAB_03589ef0:
          FUN_0209afdc(in_stack_00000020 + 0x280,&stack0x00000070,
                       *(undefined8 *)
                        Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_TypeInfo);
          *(undefined4 *)(in_stack_00000020 + 0x278) = uStack0000000000000070;
          return 1;
        }
        uVar20 = 0x105b0c;
LAB_035878c8:
        if (uVar9 != uVar20) {
          return 0;
        }
        FUN_0209afdc(in_stack_00000020 + 0x4f0,&stack0x00000070,
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                    );
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uStack0000000000000070;
        return 1;
      }
      if ((int)uVar9 < 0x4e24f) {
        if (uVar9 == 0x4d806) {
          return 0;
        }
        if (uVar9 != 0x4e24e) {
          return 0;
        }
LAB_03588da4:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01a58e78();
          lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar18 = *(long *)(lVar14 + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 1) {
            fVar32 = DAT_00d389a8;
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
            fVar32 = DAT_00d389a8;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar32 = 1.0;
            }
            fVar23 = *(float *)(in_stack_00000020 + 0x640) + fVar23 * fVar32;
          }
LAB_0358b268:
          *(float *)(in_stack_00000020 + 0x640) = fVar23;
          return 1;
        }
      }
      else {
        if (uVar9 != 0x4ff7e) {
          if (uVar9 == 0xee556) goto LAB_03589ef0;
          uVar20 = 0xefcec;
          goto LAB_035878c8;
        }
LAB_03587ef0:
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01a58e78();
          lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar18 = *(long *)(lVar14 + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar32 = DAT_00d389a8;
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
      goto LAB_0358bfac;
    }
    if ((int)uVar9 < 0x3a15f) {
      if (0x37302 < (int)uVar9) {
        if (uVar9 == 0x379e6) {
          return 0;
        }
        if (uVar9 != 0x3842e) {
          if (uVar9 != 0x3a15e) {
            return 0;
          }
          goto LAB_03587ef0;
        }
        goto LAB_03588da4;
      }
      if (uVar9 != 0x2ef43) {
        uVar20 = 0x37302;
        goto LAB_035892b4;
      }
    }
    else {
      if ((int)uVar9 < 0x4371f) {
        if (uVar9 == 0x435cd) {
LAB_03589b64:
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar18 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            iVar10 = *(int *)(lVar18 + 0x24);
            if (iVar10 < -0x1b4fbb34) {
              if (iVar10 == -0x1f38ae01) {
                uVar9 = 8;
              }
              else {
                if (iVar10 != -0x1b4fbb35) {
                  return 0;
                }
                uVar9 = 2;
              }
            }
            else if (iVar10 == 0x825ec40) {
              uVar9 = 4;
            }
            else if (iVar10 == 0x74b6c44) {
              uVar9 = 0x10;
            }
            else {
              if (iVar10 != 0x3998db) {
                return 0;
              }
              uVar9 = 1;
            }
            *(uint *)(in_stack_00000020 + 0x278) = uVar9;
            plVar15 = (long *)(in_stack_00000020 + 0x280);
            puVar12 = (undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass27_0_TypeInfo;
            goto LAB_0358b3c4;
          }
        }
        else {
          uVar20 = 0x4371e;
LAB_0358897c:
          if (uVar9 != uVar20) {
            return 0;
          }
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar14 = *(long *)(param_1 + 0xb8);
            lVar18 = *(long *)(lVar14 + 0x88);
            if (lVar18 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar18 + 0x18) != 0) {
            if (*(int *)(lVar18 + 0x30) != 3) {
              return 0;
            }
            if (*(int *)(param_1 + 0xe0) == 0) {
              param_1 = thunk_FUN_01a58e78();
              lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            lVar14 = *(long *)(lVar14 + 0x80);
            if (lVar14 == 0) goto LAB_0358c010;
            if ((7 < *(uint *)(lVar14 + 0x18)) && (*(uint *)(lVar14 + 0x18) != 8)) {
              uVar13 = FUN_03591da0(param_1,*(undefined2 *)(lVar14 + 0x2e));
              cVar7 = FUN_03591da0(uVar13,*(undefined2 *)(lVar14 + 0x30));
              *(char *)(in_stack_00000020 + 0x4ef) = cVar7 + (char)uVar13 * '\x10';
              return 1;
            }
          }
        }
        goto LAB_0358bfac;
      }
      if (uVar9 == 0x44760) {
        return 0;
      }
      if (uVar9 != 0x44d63) {
        uVar20 = 0x4d122;
LAB_035892b4:
        if (uVar9 != uVar20) {
          return 0;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          param_1 = thunk_FUN_01a58e78();
          lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar18 = *(long *)(lVar14 + 0x88);
          if (lVar18 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar18 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar23 = (float)FUN_03592a88(param_1,*(undefined8 *)(lVar14 + 0x80),
                                       *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30)
                                       ,&stack0x00000070);
          if (fVar23 == -32768.0) {
            return 0;
          }
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          puVar16 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uVar8 = *puVar16;
          uVar29 = puVar16[1];
          uVar28 = puVar16[2];
          if (DAT_0411f169 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdeb8);
            DAT_0411f169 = '\x01';
          }
          puVar17 = *(uint **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
          uVar11 = (ulong)*puVar17;
          uVar26 = (ulong)puVar17[1];
          uVar27 = (ulong)puVar17[2];
          in_d3 = (ulong)puVar17[3];
          uStack0000000000000004 = 0x3f800000;
LAB_0358939c:
          FUN_036bc7e0(&stack0x00000030,uVar8,uVar29,uVar28,uVar11,uVar26,uVar27,in_d3,0);
          *(undefined8 *)(in_stack_00000020 + 0x45c) = in_stack_00000058;
          *(undefined8 *)(in_stack_00000020 + 0x454) = in_stack_00000050;
          *(undefined8 *)(in_stack_00000020 + 0x46c) = in_stack_00000068;
          *(undefined8 *)(in_stack_00000020 + 0x464) = in_stack_00000060;
          *(undefined8 *)(in_stack_00000020 + 0x43c) = in_stack_00000038;
          *(ulong *)(in_stack_00000020 + 0x434) =
               CONCAT44(uStack0000000000000034,iStack0000000000000030);
          *(undefined8 *)(in_stack_00000020 + 0x44c) = in_stack_00000048;
          *(undefined8 *)(in_stack_00000020 + 0x444) = in_stack_00000040;
          *(undefined1 *)(in_stack_00000020 + 0x474) = 1;
          return 1;
        }
        goto LAB_0358bfac;
      }
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar14 = *(long *)(param_1 + 0xb8);
    }
    lVar18 = *(long *)(lVar14 + 0x80);
    if (lVar18 == 0) goto LAB_0358c010;
    if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_0358bfac;
    sVar4 = *(short *)(lVar18 + 0x2c);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar14 = *(long *)(param_1 + 0xb8);
      lVar18 = *(long *)(lVar14 + 0x80);
    }
    if (uVar20 == 10 && sVar4 == 0x23) {
      uVar13 = 10;
LAB_0358b424:
      uVar8 = FUN_0359237c(param_1,lVar18,uVar13);
    }
    else {
      if (lVar18 == 0) goto LAB_0358c010;
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_0358bfac;
      sVar4 = *(short *)(lVar18 + 0x2c);
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar14 = *(long *)(param_1 + 0xb8);
        lVar18 = *(long *)(lVar14 + 0x80);
      }
      if (uVar20 == 0xb && sVar4 == 0x23) {
        uVar13 = 0xb;
        goto LAB_0358b424;
      }
      if (lVar18 == 0) goto LAB_0358c010;
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_0358bfac;
      sVar4 = *(short *)(lVar18 + 0x2c);
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar14 = *(long *)(param_1 + 0xb8);
        lVar18 = *(long *)(lVar14 + 0x80);
      }
      if (uVar20 == 0xd && sVar4 == 0x23) {
        uVar13 = 0xd;
        goto LAB_0358b424;
      }
      if (lVar18 == 0) goto LAB_0358c010;
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_0358bfac;
      sVar4 = *(short *)(lVar18 + 0x2c);
      if (*(int *)(param_1 + 0xe0) == 0) {
        param_1 = thunk_FUN_01a58e78();
        lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      }
      if (uVar20 == 0xf && sVar4 == 0x23) {
        lVar18 = *(long *)(lVar14 + 0x80);
        uVar13 = 0xf;
        goto LAB_0358b424;
      }
      lVar14 = *(long *)(lVar14 + 0x88);
      if (lVar14 == 0) goto LAB_0358c010;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0358bfac;
      iVar10 = *(int *)(lVar14 + 0x24);
      if (iVar10 < 0x3829ca) {
        if (iVar10 < -0x232c3b1) {
          if (iVar10 == -0x3b2cd120) {
            uVar9 = 0xffe6d8ad;
          }
          else {
            if (iVar10 != -0x232c3b2) {
              return 0;
            }
            uVar9 = 0xfff020a0;
          }
        }
        else {
          if (iVar10 == 0x1e9d3) {
            uVar8 = 0x3f800000;
            goto FUN_0358c134;
          }
          if (iVar10 == 0x36863e) {
            uVar8 = 0;
            uVar29 = 0;
            goto LAB_0358c148;
          }
          if (iVar10 != 0x3829c9) {
            return 0;
          }
          uVar9 = 0xff808080;
        }
LAB_0358c100:
        *(uint *)(in_stack_00000020 + 0x4ec) = uVar9;
        plVar15 = (long *)(in_stack_00000020 + 0x4f0);
        puVar12 = (undefined8 *)
                  QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
        goto LAB_0358b3c4;
      }
      if (iVar10 < 0x7071a48) {
        if (iVar10 == 0x19536f0) {
          uVar9 = 0xff0080ff;
          goto LAB_0358c100;
        }
        if (iVar10 != 0x7071a47) {
          return 0;
        }
        uVar8 = 0;
FUN_0358c134:
        uVar29 = 0;
LAB_0358c138:
        uVar28 = 0;
      }
      else {
        if (iVar10 == 0x73d641b) {
          uVar8 = 0;
          uVar29 = 0x3f800000;
          goto LAB_0358c138;
        }
        if (iVar10 == 0x85daee7) {
          uVar8 = 0x3f800000;
          uVar29 = 0x3f800000;
LAB_0358c148:
          uVar28 = 0x3f800000;
        }
        else {
          if (iVar10 != 0x21063284) {
            return 0;
          }
          uVar8 = 0x3f800000;
          uVar29 = DAT_00d38808;
          uVar28 = DAT_00d388f0;
        }
      }
      uVar8 = FUN_01b6d7fc(uVar8,uVar29,uVar28,0x3f800000,0);
    }
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar8;
    uVar13 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
  }
  plVar15 = (long *)(in_stack_00000020 + 0x4f0);
  puVar12 = (undefined8 *)&stack0x00000070;
  _uStack0000000000000070 = CONCAT44(uStack0000000000000074,uVar8);
LAB_035870e8:
  FUN_0209ad50(plVar15,puVar12,uVar13);
  return 1;
}


