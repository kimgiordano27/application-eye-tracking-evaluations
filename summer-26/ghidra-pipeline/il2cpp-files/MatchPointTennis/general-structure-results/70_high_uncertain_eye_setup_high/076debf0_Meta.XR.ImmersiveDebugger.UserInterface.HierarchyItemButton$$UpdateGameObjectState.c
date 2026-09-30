/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 076debf0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w21;
  long *plVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
code_r0x076debf0:
  FUN_05bade44();
LAB_076dec04:
  do {
    unaff_w21 = unaff_w21 + 1;
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar3 + 0xb8);
    if (lVar6 == 0) goto LAB_076ded88;
    if (*(int *)(lVar6 + 0x18) <= unaff_w21) {
      return;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar6 == 0) goto LAB_076ded88;
    }
    lVar3 = FUN_05badb74(lVar6,unaff_w21,*unaff_x24);
    if (lVar3 == 0) goto LAB_076ded88;
    uVar4 = FUN_076db918();
  } while ((uVar4 & 1) == 0);
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x23;
  }
  lVar6 = **(long **)(lVar3 + 0xb8);
  if (lVar6 != 0) {
    plVar7 = (long *)(*(long **)(lVar3 + 0xb8))[6];
    lVar3 = FUN_05badb74(lVar6,unaff_w21,*unaff_x24);
    if ((lVar3 != 0) && (plVar7 != (long *)0x0)) {
      iVar2 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(lVar3 + 0x28));
      if (iVar2 < 0) goto LAB_076dec04;
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar3 = *unaff_x23;
      }
      if ((**(long **)(lVar3 + 0xb8) != 0) &&
         (uVar5 = FUN_05badb74(**(long **)(lVar3 + 0xb8),unaff_w21,*unaff_x24), unaff_x19 != 0)) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_044bb4b4();
            goto LAB_076dec04;
          }
          goto code_r0x076debf0;
        }
      }
    }
  }
LAB_076ded88:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


