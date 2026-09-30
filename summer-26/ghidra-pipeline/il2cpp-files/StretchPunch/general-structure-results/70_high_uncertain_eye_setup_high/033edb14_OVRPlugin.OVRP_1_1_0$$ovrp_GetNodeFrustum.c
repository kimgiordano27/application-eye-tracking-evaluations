/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodeFrustum
ENTRY_POINT: 033edb14
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodeFrustum(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int in_w8;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  
  plVar9 = *(long **)(unaff_x22 + 0x1f8);
  uVar10 = 0;
  *unaff_x19 = in_w8 + unaff_w21 * -0x10000;
  if (8 < unaff_w21) {
                    /* try { // try from 033edb34 to 034edb3b has its CatchHandler @ 033edf2c */
    uVar11 = 1000000000;
    do {
      uVar13 = unaff_x19[1];
      if (uVar13 == 0) {
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar12 = *(ulong *)(unaff_x19 + 2);
        uVar7 = uVar12 / 1000000000;
        *(ulong *)(unaff_x19 + 2) = uVar7;
        uVar5 = (int)uVar12 + (int)uVar7 * -1000000000;
      }
      else {
        iVar8 = unaff_x19[3];
        uVar5 = uVar13 % 1000000000;
        unaff_x19[1] = uVar13 / 1000000000;
        if (iVar8 != 0 || uVar5 != 0) {
          iVar1 = (int)(CONCAT44(uVar5,iVar8) / 1000000000);
          unaff_x19[3] = iVar1;
          uVar5 = iVar8 + iVar1 * -1000000000;
        }
        uVar13 = unaff_x19[2];
        uVar7 = (ulong)uVar13;
        if (uVar13 != 0 || uVar5 != 0) {
                    /* try { // try from 033edb7c to 034edb7f has its CatchHandler @ 033edf54 */
          uVar7 = CONCAT44(uVar5,uVar13) / 1000000000;
          iVar8 = (int)uVar7;
          uVar5 = uVar13 + iVar8 * -1000000000;
          uVar7 = uVar7 & 0xffffffff;
          unaff_x19[2] = iVar8;
        }
      }
      uVar13 = (uint)uVar7;
      if (unaff_w21 == 9) goto LAB_033edcb8;
      unaff_w21 = unaff_w21 - 9;
      uVar10 = uVar5 | uVar10;
    } while (8 < unaff_w21);
  }
  lVar4 = *plVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *plVar9;
  }
  lVar6 = **(long **)(lVar4 + 0xb8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(uint *)(lVar6 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  uVar5 = unaff_x19[1];
  uVar11 = *(uint *)(lVar6 + (ulong)unaff_w21 * 4 + 0x20);
  uVar7 = (ulong)uVar11;
  if (uVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar12 = *(ulong *)(unaff_x19 + 2);
    if (uVar12 == 0) {
      if (unaff_w20 < 3) {
        return;
      }
      uVar13 = 0;
      uVar5 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar12 / uVar7;
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      *(ulong *)(unaff_x19 + 2) = uVar3;
      uVar13 = (uint)uVar3;
      uVar5 = (int)uVar12 - uVar13 * uVar11;
    }
  }
  else {
    iVar8 = unaff_x19[3];
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar5 / uVar11;
    }
    uVar5 = uVar5 - uVar13 * uVar11;
    unaff_x19[1] = uVar13;
    if (iVar8 != 0 || uVar5 != 0) {
      iVar1 = 0;
      if (uVar7 != 0) {
        iVar1 = (int)(CONCAT44(uVar5,iVar8) / uVar7);
      }
      unaff_x19[3] = iVar1;
      uVar5 = iVar8 - uVar11 * iVar1;
    }
    uVar13 = unaff_x19[2];
    if (uVar13 != 0 || uVar5 != 0) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = (uint)(CONCAT44(uVar5,uVar13) / uVar7);
      }
      uVar5 = uVar13 - uVar11 * uVar2;
      unaff_x19[2] = uVar2;
      uVar13 = uVar2;
    }
  }
LAB_033edcb8:
  switch(unaff_w20) {
  case 0:
    if (((uint)((uVar13 & 1) != 0 || uVar10 != 0) | uVar5 << 1) <= uVar11) {
      return;
    }
    break;
  case 1:
    if (uVar5 * 2 < uVar11) {
      return;
    }
    break;
  case 2:
    goto switchD_033edcd8_caseD_2;
  case 3:
    if (uVar5 == 0 && uVar10 == 0) {
      return;
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (-1 < *unaff_x19) {
      return;
    }
    break;
  default:
    if (uVar5 == 0 && uVar10 == 0) {
      return;
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (*unaff_x19 < 0) {
      return;
    }
  }
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar4 = *(long *)(unaff_x19 + 2);
  *(long *)(unaff_x19 + 2) = lVar4 + 1;
  if (lVar4 == -1) {
    unaff_x19[1] = unaff_x19[1] + 1;
  }
switchD_033edcd8_caseD_2:
  return;
}


