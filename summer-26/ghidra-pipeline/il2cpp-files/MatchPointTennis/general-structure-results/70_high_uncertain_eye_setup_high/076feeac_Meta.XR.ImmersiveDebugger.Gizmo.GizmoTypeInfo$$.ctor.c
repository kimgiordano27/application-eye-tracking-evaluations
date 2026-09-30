/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypeInfo$$.ctor
ENTRY_POINT: 076feeac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypeInfo___ctor(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  
  if (((param_1 & 1) == 0) || (**(char **)(*(long *)PTR_DAT_09f2ff08 + 0xb8) != '\0')) {
    return;
  }
  **(char **)(*(long *)PTR_DAT_09f2ff08 + 0xb8) = '\x01';
  *(undefined1 *)(unaff_x19 + 0x68) = 1;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_09539308(0,0,0x42200000,*(long *)(unaff_x19 + 0x48),0);
    lVar1 = *(long *)(unaff_x19 + 0x28);
    if (lVar1 != 0) {
      FUN_076febcc(*(undefined4 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 0x3c),
                   *(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x44));
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        FUN_076f2788(*(long *)(unaff_x19 + 0x58),2);
        if ((*(long *)(unaff_x19 + 0x50) != 0) &&
           (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x100), lVar1 != 0)) {
          FUN_09542270(lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


