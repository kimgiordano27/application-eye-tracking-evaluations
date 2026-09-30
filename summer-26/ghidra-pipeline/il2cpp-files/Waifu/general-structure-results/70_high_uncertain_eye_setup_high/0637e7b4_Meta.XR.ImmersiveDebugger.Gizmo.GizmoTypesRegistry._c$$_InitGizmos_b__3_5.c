/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_5
ENTRY_POINT: 0637e7b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_5
               (long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + (unaff_x20 & 0xffff) * 0x24;
    uVar2 = *(ulong *)(lVar1 + 0x14);
    uVar3 = *(undefined8 *)(lVar1 + 0x1c);
    if (0 < *(int *)(*(long *)(param_1 + 0x10) + (unaff_x20 & 0xffff) * 0x24 + 0xc)) {
      FUN_042b8e7c(param_2,*(undefined8 *)(lVar1 + 4),
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eb560 + 0x20) + 0xc0) + 0x60));
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      if (0 < (int)uVar3) {
        FUN_0429e43c(*(long *)(unaff_x19 + 0x20),uVar2 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eaff8 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_043952f8(*(long *)(unaff_x19 + 0x28),unaff_x20 & 0xffffffff,DAT_083ebeb0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


