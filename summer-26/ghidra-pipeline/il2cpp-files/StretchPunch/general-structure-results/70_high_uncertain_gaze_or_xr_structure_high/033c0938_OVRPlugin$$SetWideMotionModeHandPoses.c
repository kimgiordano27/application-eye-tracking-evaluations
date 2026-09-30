/*
FUNCTION_NAME: OVRPlugin$$SetWideMotionModeHandPoses
ENTRY_POINT: 033c0938
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_possible_biometrics_hits_2
*/


undefined8 OVRPlugin__SetWideMotionModeHandPoses(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar10;
  uint uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_4521);
    *(undefined1 *)(unaff_x20 + 0x9a0) = 1;
  }
  if (unaff_x22 != 0) {
    lVar3 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_4521,*(undefined4 *)(unaff_x22 + 0x18));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = (uint)uVar6;
    if (0 < (int)uVar5) {
      if (param_2 == 0) goto LAB_033c0b44;
      uVar11 = *(uint *)(param_2 + 0x18);
      uVar7 = 0;
      do {
        if (uVar11 <= uVar7) goto LAB_033c0b40;
        *(undefined4 *)(param_2 + 0x20 + uVar7 * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar5);
    }
    if (unaff_x21 != 0) {
      if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
        uVar7 = 0;
        uVar8 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
        do {
          if ((int)uVar6 < 1) {
            uVar11 = 0;
          }
          else {
            if (uVar8 <= uVar7) goto LAB_033c0b40;
            uVar11 = 0;
            while( true ) {
              if ((uint)uVar6 <= uVar11) goto LAB_033c0b40;
              plVar4 = *(long **)(unaff_x22 + (long)(int)uVar11 * 8 + 0x20);
              if (plVar4 == (long *)0x0) goto LAB_033c0b44;
              lVar10 = *(long *)(unaff_x21 + uVar7 * 8 + 0x20);
              uVar6 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
              if (lVar10 == 0) goto LAB_033c0b44;
              uVar8 = FUN_03278c78(lVar10,uVar6,0);
              if ((uVar8 & 1) != 0) break;
              uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
              uVar11 = uVar11 + 1;
              if ((int)uVar6 <= (int)uVar11) goto LAB_033c0a80;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_033c0b40;
            }
            if (param_2 == 0) goto LAB_033c0b44;
            if (*(uint *)(param_2 + 0x18) <= uVar11) goto LAB_033c0b40;
            *(int *)(param_2 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar7;
            if (lVar3 == 0) goto LAB_033c0b44;
            if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_033c0b40;
            *(undefined1 *)(lVar3 + uVar7 + 0x20) = 1;
            uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
          }
LAB_033c0a80:
          uVar5 = (uint)uVar6;
          if (uVar11 == uVar5) {
            return 0;
          }
          uVar8 = (ulong)*(uint *)(unaff_x21 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x21 + 0x18));
      }
      if (0 < (int)uVar5) {
        if (param_2 == 0) goto LAB_033c0b44;
        uVar1 = *(uint *)(param_2 + 0x18);
        uVar7 = 0;
        uVar11 = 0;
        do {
          if (uVar1 <= uVar7) {
LAB_033c0b40:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          puVar9 = (uint *)(param_2 + uVar7 * 4 + 0x20);
          uVar2 = uVar11;
          if ((*puVar9 == 0xffffffff) && ((int)uVar11 < (int)uVar5)) {
            if (lVar3 == 0) goto LAB_033c0b44;
            do {
              if (*(uint *)(lVar3 + 0x18) <= uVar11) goto LAB_033c0b40;
              if (*(char *)(lVar3 + (int)uVar11 + 0x20) == '\0') {
                *puVar9 = uVar11;
                uVar2 = uVar11 + 1;
                break;
              }
              uVar11 = uVar11 + 1;
              uVar2 = uVar5;
            } while (uVar5 != uVar11);
          }
          uVar11 = uVar2;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)uVar5);
      }
      return 1;
    }
  }
LAB_033c0b44:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


