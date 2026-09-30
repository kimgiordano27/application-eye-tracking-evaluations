/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$set_Counter
ENTRY_POINT: 076dec84
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__set_Counter(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w21;
  long *plVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  do {
    uVar3 = FUN_076db918();
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar4 = *unaff_x23;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) break;
      plVar7 = (long *)(*(long **)(lVar4 + 0xb8))[6];
      lVar4 = FUN_05badb74(lVar5,unaff_w21,*unaff_x24);
      if ((lVar4 == 0) || (plVar7 == (long *)0x0)) break;
      iVar2 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(lVar4 + 0x28));
      if (iVar2 == 0) {
        lVar4 = *unaff_x23;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar4 = *unaff_x23;
        }
        if ((**(long **)(lVar4 + 0xb8) == 0) ||
           (uVar6 = FUN_05badb74(**(long **)(lVar4 + 0xb8),unaff_w21,*unaff_x24), unaff_x19 == 0))
        break;
        lVar4 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar4 == 0) break;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44();
        }
      }
    }
    unaff_w21 = unaff_w21 + 1;
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar4 = *unaff_x23;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= unaff_w21) {
      return;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar5 == 0) break;
    }
    lVar4 = FUN_05badb74(lVar5,unaff_w21,*unaff_x24);
  } while (lVar4 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


