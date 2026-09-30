/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<Raycast>g__GetRaycastResultForEye|38_0
ENTRY_POINT: 072a3d90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__<Raycast>g__GetRaycastResultForEye_38_0(void)

{
  uint uVar1;
  undefined1 in_CY;
  long lVar2;
  long lVar3;
  long unaff_x19;
  ulong uVar4;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  uint unaff_w26;
  long unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  
  while (!(bool)in_CY) {
    if (unaff_x23 == 0) goto LAB_072a40a0;
    uVar4 = 0;
    do {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar4) goto LAB_072a409c;
      if ((long)*(int *)(unaff_x27 + uVar4 * 4) < (long)unaff_x28) {
        lVar2 = *(long *)(unaff_x19 + 0x180);
        if (lVar2 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_072a409c;
        lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x28) goto LAB_072a409c;
        if (*(int *)(lVar2 + unaff_x28 * 4 + 0x20) == 7) goto LAB_072a3e18;
        if ((unaff_x21 & 1) == 0) {
          FUN_072a4e38();
        }
        else {
          lVar2 = *(long *)(unaff_x19 + 0xf8);
          if (lVar2 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_072a409c;
          lVar2 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_072a40a0;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_072a409c;
          FUN_072a4c7c();
        }
      }
      else {
LAB_072a3e18:
        if ((unaff_w22 >> 1 & 1) == 0) {
          FUN_072a4bd4();
        }
        else {
          FUN_072a4ab8();
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 3);
    if (unaff_x29 == 0xc) {
      if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_072a40a0;
      if (0xd < *(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18)) {
        uVar4 = 0;
        goto LAB_072a3ed8;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_072a40a0;
    uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18);
    if ((ulong)uVar1 <= unaff_x29 + 1) break;
    in_CY = uVar1 <= (uint)unaff_x29;
    unaff_x28 = unaff_x29;
    unaff_x29 = unaff_x29 + 1;
  }
LAB_072a409c:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
LAB_072a3ed8:
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) {
LAB_072a40a0:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
  lVar2 = *(long *)(lVar2 + 0x28);
  if (lVar2 == 0) goto LAB_072a40a0;
  if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_072a409c;
  lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_072a40a0;
  if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_072a409c;
  lVar3 = *(long *)(unaff_x19 + 0x158);
  if (*(int *)(lVar2 + 0x4c) == 7) {
    if ((unaff_w22 >> 1 & 1) == 0) {
      if (lVar3 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_072a409c;
      FUN_072a4bd4();
    }
    else {
      if (lVar3 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_072a409c;
      FUN_072a4ab8();
    }
  }
  else if ((unaff_x21 & 1) == 0) {
    if (lVar3 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_072a409c;
    FUN_072a4e38();
  }
  else {
    if (lVar3 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_072a409c;
    lVar2 = *(long *)(unaff_x19 + 0xf8);
    if (lVar2 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_072a409c;
    lVar2 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a40a0;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_072a409c;
    FUN_072a4c7c();
  }
  uVar4 = uVar4 + 1;
  if (uVar4 == 3) {
    return;
  }
  goto LAB_072a3ed8;
}


