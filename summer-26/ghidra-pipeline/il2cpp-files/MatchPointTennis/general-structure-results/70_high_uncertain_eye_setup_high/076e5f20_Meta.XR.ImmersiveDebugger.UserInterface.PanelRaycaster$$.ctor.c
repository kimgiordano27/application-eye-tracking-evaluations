/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$.ctor
ENTRY_POINT: 076e5f20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined1 in_w8;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xe8a) = in_w8;
  puVar1 = PTR_DAT_09f259c8;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar4 = *(long *)PTR_DAT_09f259c8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar4 = *(long *)puVar1;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_076e5fd4;
    iVar2 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(unaff_x20 + 0x10));
    if (-1 < iVar2) {
      return 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar4 = *(long *)puVar1;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x30);
    if (plVar5 == (long *)0x0) {
LAB_076e5fd4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(unaff_x20 + 0x18));
    uVar3 = ~uVar3 >> 0x1f;
  }
  return uVar3;
}


