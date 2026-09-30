/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_9
ENTRY_POINT: 077002a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_9(void)

{
  long *plVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  int in_w9;
  int in_w10;
  long unaff_x19;
  int *unaff_x20;
  
  *(int *)(unaff_x19 + 0x38) = in_w10 + in_w9;
  if (in_w10 + in_w9 == in_w8) {
    plVar1 = *(long **)(unaff_x19 + 0x58);
    if (plVar1 == (long *)0x0) goto LAB_07700470;
    (**(code **)(*plVar1 + 0x558))
              (plVar1,*(undefined8 *)PTR_DAT_09f2ff38,*(undefined8 *)(*plVar1 + 0x560));
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (((lVar3 == 0) || (*(long *)(unaff_x19 + 0x40) == 0)) ||
       (plVar1 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0x50), plVar1 == (long *)0x0))
    goto LAB_07700470;
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x5c),
               *(undefined4 *)(lVar3 + 0x60),*(undefined4 *)(lVar3 + 100),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
  }
  else {
    uVar2 = FUN_07a3b850();
    plVar1 = *(long **)(unaff_x19 + 0x58);
    if (plVar1 == (long *)0x0) goto LAB_07700470;
    (**(code **)(*plVar1 + 0x558))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x560));
  }
  lVar3 = *(long *)(unaff_x19 + 0x50);
  FUN_09516910(0,DAT_01c75bd8,0,0);
  if (lVar3 != 0) {
    FUN_0953a418(lVar3,0);
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_076f2788(*(long *)(unaff_x19 + 0x60),2);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07700460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  ((float)*unaff_x20,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      return;
    }
  }
LAB_07700470:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


