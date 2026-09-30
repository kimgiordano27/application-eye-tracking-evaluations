/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$get_Counter
ENTRY_POINT: 076dec7c
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


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__get_Counter
               (long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong unaff_x21;
  long *plVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  while (lVar3 = FUN_05badb74(param_1,param_2,param_3), lVar3 != 0) {
    uVar4 = FUN_076db918();
    if ((uVar4 & 1) != 0) {
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar3 = *unaff_x23;
      }
      lVar5 = **(long **)(lVar3 + 0xb8);
      if (lVar5 == 0) break;
      plVar7 = (long *)(*(long **)(lVar3 + 0xb8))[6];
      lVar3 = FUN_05badb74(lVar5,unaff_x21 & 0xffffffff,*unaff_x24);
      if ((lVar3 == 0) || (plVar7 == (long *)0x0)) break;
      iVar2 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(lVar3 + 0x28));
      if (iVar2 == 0) {
        lVar3 = *unaff_x23;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar3 = *unaff_x23;
        }
        if ((**(long **)(lVar3 + 0xb8) == 0) ||
           (uVar6 = FUN_05badb74(**(long **)(lVar3 + 0xb8),unaff_x21 & 0xffffffff,*unaff_x24),
           unaff_x19 == 0)) break;
        lVar3 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar3 == 0) break;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44();
        }
      }
    }
    uVar1 = (int)unaff_x21 + 1;
    param_2 = (ulong)uVar1;
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *unaff_x23;
    }
    param_1 = **(long **)(lVar3 + 0xb8);
    if (param_1 == 0) break;
    if (*(int *)(param_1 + 0x18) <= (int)uVar1) {
      return;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_1 = **(long **)(*unaff_x23 + 0xb8);
      if (param_1 == 0) break;
    }
    param_3 = *unaff_x24;
    unaff_x21 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


