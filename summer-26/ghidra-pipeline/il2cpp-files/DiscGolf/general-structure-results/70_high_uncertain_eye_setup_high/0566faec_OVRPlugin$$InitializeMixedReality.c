/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 0566faec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeMixedReality(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long unaff_x23;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = 0;
  param_1 = param_1 & 0xffffffff;
  while (uVar7 < param_1) {
    lVar8 = *(long *)(unaff_x23 + uVar7 * 8 + 0x20);
    if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar1)) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) goto LAB_0566fc64;
        lVar6 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
        if (lVar6 == 0) goto LAB_0566fc60;
        if (*(char *)(lVar6 + 0x38) != '\0') {
          lVar5 = *(long *)(lVar6 + 0x28);
          if (lVar5 == 0) goto LAB_0566fc60;
          uVar2 = FUN_0634b218(lVar5,0);
          if (((uVar2 & 1) != 0) && (*(char *)(lVar5 + 0x70) != '\0')) {
            if (unaff_x20 == 0) {
LAB_0566fc60:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar4 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar4 == 0) goto LAB_0566fc60;
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *plVar3 = lVar6;
              LeanTween__value(plVar3,lVar6);
            }
            else {
              FUN_040101ec();
            }
            if (unaff_x19 == 0) goto LAB_0566fc60;
            lVar6 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_0566fc60;
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar3 = lVar5;
              LeanTween__value(plVar3,lVar5);
            }
            else {
              FUN_040101ec();
            }
          }
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
    uVar7 = uVar7 + 1;
    if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)uVar7) {
      return;
    }
  }
LAB_0566fc64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


