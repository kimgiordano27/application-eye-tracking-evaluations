/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 072a1698
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_EnvironmentDepthRaycaster__Raycast(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int iVar8;
  ulong uVar9;
  uint unaff_w23;
  int unaff_w24;
  long unaff_x25;
  ulong uVar10;
  
  if (*(int *)(in_x9 + unaff_x25 * 4 + 0x20) == 2) {
    if (unaff_w24 < 1) {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x38),0,8,0);
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x20),0,6,0);
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x28),0,6,0);
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x30),0,6,0);
      iVar8 = 0;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x108);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w23) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + param_1 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      if (*(char *)(lVar7 + unaff_x25 + 0x20) == '\0') {
        iVar8 = unaff_w24 * 0x12;
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar7 = *(long *)(unaff_x20 + 0x180);
          if (lVar7 == 0) goto LAB_072a2490;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
          lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_072a2490;
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
          if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
          lVar7 = *(long *)(lVar7 + 0x38);
          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
          if (lVar7 == 0) goto LAB_072a2490;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_072a2494;
          lVar5 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(lVar7 + lVar5 + 0x20) = uVar1;
        } while (uVar9 != 8);
        iVar8 = unaff_w24 * 0x11;
        uVar9 = 3;
      }
      uVar9 = uVar9 | 8;
      do {
        lVar7 = *(long *)(unaff_x20 + 0x180);
        if (lVar7 == 0) goto LAB_072a2490;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
        lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a2490;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
        lVar7 = *(long *)(lVar7 + 0x20);
        uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
        if (lVar7 == 0) goto LAB_072a2490;
        uVar10 = uVar9 - 8;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_072a2494;
        lVar5 = *(long *)(unaff_x20 + 0x180);
        *(undefined4 *)(lVar7 + uVar9 * 4) = uVar1;
        if (lVar5 == 0) goto LAB_072a2490;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
        lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a2490;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
        lVar7 = *(long *)(lVar7 + 0x28);
        uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
        if (lVar7 == 0) goto LAB_072a2490;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_072a2494;
        lVar5 = *(long *)(unaff_x20 + 0x180);
        *(undefined4 *)(lVar7 + uVar9 * 4) = uVar1;
        if (lVar5 == 0) goto LAB_072a2490;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
        lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a2490;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
        lVar7 = *(long *)(lVar7 + 0x30);
        uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
        if (lVar7 == 0) goto LAB_072a2490;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_072a2494;
        *(undefined4 *)(lVar7 + uVar9 * 4) = uVar1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0xe);
    }
    if (0 < unaff_w21) {
      lVar7 = 0xe;
      while (lVar5 = *(long *)(unaff_x20 + 0x180), lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
        lVar5 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) == 0) break;
        lVar5 = *(long *)(lVar5 + 0x20);
        uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
        if (lVar5 == 0) break;
        uVar9 = lVar7 - 8;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_072a2494;
        lVar6 = *(long *)(unaff_x20 + 0x180);
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar1;
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w19) goto LAB_072a2494;
        lVar5 = *(long *)(lVar6 + unaff_x25 * 8 + 0x20);
        if (lVar5 == 0) break;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) == 0) break;
        lVar5 = *(long *)(lVar5 + 0x28);
        uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_072a2494;
        lVar6 = *(long *)(unaff_x20 + 0x180);
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar1;
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w19) goto LAB_072a2494;
        lVar5 = *(long *)(lVar6 + unaff_x25 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) == 0) break;
        lVar5 = *(long *)(lVar5 + 0x30);
        uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_072a2494;
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar1;
        lVar7 = lVar7 + 1;
        if (lVar7 == 0x14) {
          return iVar8 + unaff_w21 * 0x12;
        }
      }
      goto LAB_072a2490;
    }
    lVar7 = *(long *)(unaff_x20 + 0x180);
    if (lVar7 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_072a2490;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a2494;
    FUN_0769c874(*(undefined8 *)(lVar7 + 0x20),6,6,0);
    lVar7 = *(long *)(unaff_x20 + 0x180);
    if (lVar7 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2494;
    FUN_0769c874(*(undefined8 *)(lVar7 + 0x28),6,6,0);
    lVar7 = *(long *)(unaff_x20 + 0x180);
    if (lVar7 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a2494;
    uVar2 = *(undefined8 *)(lVar7 + 0x30);
    uVar3 = 6;
    uVar4 = 6;
    goto LAB_072a246c;
  }
  if (unaff_w23 == 0) {
LAB_072a1798:
    if (unaff_w24 < 1) {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x38),0,6,0);
      iVar8 = 0;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x20) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x24) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x28) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x2c) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x30) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_072a2494;
      *(undefined4 *)(lVar7 + 0x34) = uVar1;
      iVar8 = unaff_w24 * 6;
    }
    if (unaff_w23 != 0) {
      lVar7 = *(long *)(unaff_x20 + 0xd8);
      if (lVar7 == 0) goto LAB_072a2490;
      goto LAB_072a19f4;
    }
FUN_072a1a20:
    if (unaff_w24 < 1) {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x38),6,5,0);
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x38) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) == 0) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x3c) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 9) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x40) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 10) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x44) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 0xb) goto LAB_072a2494;
      *(undefined4 *)(lVar7 + 0x48) = uVar1;
      iVar8 = iVar8 + unaff_w24 * 5;
    }
    if (unaff_w23 != 0) {
      lVar7 = *(long *)(unaff_x20 + 0xd8);
      if (lVar7 == 0) goto LAB_072a2490;
      goto LAB_072a1c28;
    }
LAB_072a1c54:
    if (unaff_w21 < 1) {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar7 + 0x38),0xb,5,0);
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x180);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x4c) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 0xd) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x50) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 0xe) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x54) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar7 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar7 + 0x18) < 0xf) goto LAB_072a2494;
      lVar5 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar7 + 0x58) = uVar1;
      if (lVar5 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar7 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffff0) == 0) goto LAB_072a2494;
      *(undefined4 *)(lVar7 + 0x5c) = uVar1;
      iVar8 = iVar8 + unaff_w21 * 5;
    }
    if (unaff_w23 != 0) {
      lVar7 = *(long *)(unaff_x20 + 0xd8);
      if (lVar7 == 0) goto LAB_072a2490;
      goto LAB_072a1e5c;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    if (lVar7 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar5 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_072a2490;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a2494;
    if (*(int *)(lVar5 + 0x20) == 0) goto LAB_072a1798;
    iVar8 = 0;
LAB_072a19f4:
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar5 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a2494;
    if (*(int *)(lVar5 + 0x24) == 0) goto FUN_072a1a20;
LAB_072a1c28:
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar5 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_072a2494;
    if (*(int *)(lVar5 + 0x28) == 0) goto LAB_072a1c54;
LAB_072a1e5c:
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(int *)(lVar7 + 0x2c) != 0) {
      return iVar8;
    }
  }
  if (unaff_w21 < 1) {
    lVar7 = *(long *)(unaff_x20 + 0x180);
    if (lVar7 != 0) {
      if (unaff_w19 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a2490;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
          uVar2 = *(undefined8 *)(lVar7 + 0x38);
          uVar3 = 0x10;
          uVar4 = 5;
LAB_072a246c:
          FUN_0769c874(uVar2,uVar3,uVar4,0);
          return iVar8;
        }
      }
LAB_072a2494:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x180);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
      if (lVar7 != 0) {
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) != 0) {
          lVar7 = *(long *)(lVar7 + 0x38);
          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 0x11) goto LAB_072a2494;
            lVar5 = *(long *)(unaff_x20 + 0x180);
            *(undefined4 *)(lVar7 + 0x60) = uVar1;
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
              lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
              if (lVar7 != 0) {
                if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
                if (*(long *)(unaff_x20 + 0xc0) != 0) {
                  lVar7 = *(long *)(lVar7 + 0x38);
                  uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
                  if (lVar7 != 0) {
                    if (*(uint *)(lVar7 + 0x18) < 0x12) goto LAB_072a2494;
                    lVar5 = *(long *)(unaff_x20 + 0x180);
                    *(undefined4 *)(lVar7 + 100) = uVar1;
                    if (lVar5 != 0) {
                      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
                      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
                      if (lVar7 != 0) {
                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
                        if (*(long *)(unaff_x20 + 0xc0) != 0) {
                          lVar7 = *(long *)(lVar7 + 0x38);
                          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
                          if (lVar7 != 0) {
                            if (*(uint *)(lVar7 + 0x18) < 0x13) goto LAB_072a2494;
                            lVar5 = *(long *)(unaff_x20 + 0x180);
                            *(undefined4 *)(lVar7 + 0x68) = uVar1;
                            if (lVar5 != 0) {
                              if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
                              lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
                              if (lVar7 != 0) {
                                if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
                                if (*(long *)(unaff_x20 + 0xc0) != 0) {
                                  lVar7 = *(long *)(lVar7 + 0x38);
                                  uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 0x14) goto LAB_072a2494;
                                    lVar5 = *(long *)(unaff_x20 + 0x180);
                                    *(undefined4 *)(lVar7 + 0x6c) = uVar1;
                                    if (lVar5 != 0) {
                                      if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_072a2494;
                                      lVar7 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
                                      if (lVar7 != 0) {
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0)
                                        goto LAB_072a2494;
                                        if (*(long *)(unaff_x20 + 0xc0) != 0) {
                                          lVar7 = *(long *)(lVar7 + 0x38);
                                          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21
                                                              );
                                          if (lVar7 != 0) {
                                            if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                              *(undefined4 *)(lVar7 + 0x70) = uVar1;
                                              return iVar8 + unaff_w21 * 5;
                                            }
                                            goto LAB_072a2494;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_072a2490:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


