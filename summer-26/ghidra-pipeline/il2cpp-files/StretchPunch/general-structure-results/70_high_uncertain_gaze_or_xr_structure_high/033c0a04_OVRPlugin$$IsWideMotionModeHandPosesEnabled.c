/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 033c0a04
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_possible_biometrics_hits_2
*/


undefined8 OVRPlugin__IsWideMotionModeHandPosesEnabled(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  
  while (uVar3 = (**(code **)(param_1 + 0x1c8))(param_2,*(undefined8 *)(param_1 + 0x1d0)),
        unaff_x23 != 0) {
    uVar4 = FUN_03278c78(unaff_x23,uVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      uVar5 = (uint)uVar3;
      if ((int)uVar5 <= (int)unaff_w26) goto LAB_033c0a80;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_033c0b40;
    }
    else {
      if (unaff_x19 == 0) break;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w26) goto LAB_033c0b40;
      *(int *)(unaff_x19 + unaff_x28 * 4 + 0x20) = (int)unaff_x24;
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_033c0b40;
      *(undefined1 *)(unaff_x20 + unaff_x24 + 0x20) = unaff_w25;
      uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
LAB_033c0a80:
      while( true ) {
        uVar5 = (uint)uVar3;
        if (unaff_w26 == uVar5) {
          return 0;
        }
        unaff_x24 = unaff_x24 + 1;
        if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
          if ((int)uVar5 < 1) {
            return 1;
          }
          if (unaff_x19 == 0) goto LAB_033c0b44;
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          uVar4 = 0;
          uVar6 = 0;
          goto LAB_033c0ab4;
        }
        if (0 < (int)uVar5) break;
        unaff_w26 = 0;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_033c0b40;
      unaff_w26 = 0;
      unaff_x27 = (long *)(unaff_x21 + unaff_x24 * 8 + 0x20);
    }
    if (uVar5 <= unaff_w26) goto LAB_033c0b40;
    unaff_x28 = (long)(int)unaff_w26;
    param_2 = *(long **)(unaff_x22 + unaff_x28 * 8 + 0x20);
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
    unaff_x23 = *unaff_x27;
  }
LAB_033c0b44:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
LAB_033c0ab4:
  if (uVar1 <= uVar4) {
LAB_033c0b40:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  puVar7 = (uint *)(unaff_x19 + uVar4 * 4 + 0x20);
  uVar2 = uVar6;
  if ((*puVar7 == 0xffffffff) && ((int)uVar6 < (int)uVar5)) {
    if (unaff_x20 == 0) goto LAB_033c0b44;
    do {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_033c0b40;
      if (*(char *)(unaff_x20 + (int)uVar6 + 0x20) == '\0') {
        *puVar7 = uVar6;
        uVar2 = uVar6 + 1;
        break;
      }
      uVar6 = uVar6 + 1;
      uVar2 = uVar5;
    } while (uVar5 != uVar6);
  }
  uVar6 = uVar2;
  uVar4 = uVar4 + 1;
  if ((long)(int)uVar5 <= (long)uVar4) {
    return 1;
  }
  goto LAB_033c0ab4;
}


