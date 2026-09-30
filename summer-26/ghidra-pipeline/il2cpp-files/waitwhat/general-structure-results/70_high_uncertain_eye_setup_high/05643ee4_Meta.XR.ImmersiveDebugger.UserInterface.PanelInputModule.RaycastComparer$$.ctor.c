/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule.RaycastComparer$$.ctor
ENTRY_POINT: 05643ee4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer___ctor(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  lVar3 = *param_1;
  thunk_FUN_03195150();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    lVar3 = FUN_05643f88(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    thunk_FUN_03195150();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    **(long **)(lVar1 + 0xb8) = lVar3;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  return lVar3;
}


