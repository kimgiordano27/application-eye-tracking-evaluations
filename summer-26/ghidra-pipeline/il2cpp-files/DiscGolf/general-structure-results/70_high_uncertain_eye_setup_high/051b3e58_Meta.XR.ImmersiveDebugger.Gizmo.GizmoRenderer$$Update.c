/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 051b3e58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long lStack_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(int *)((long)param_1 + 0xc) == 0) {
LAB_051b3e98:
    FUN_05509628(0);
  }
  else {
    if (*param_1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_051b3f14;
    }
    if (*(int *)((long)param_1 + 0xc) == *(int *)(*param_1 + 0x20) + 1) goto LAB_051b3e98;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02dcfd18();
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  lStack_38 = param_1[3];
  local_40 = param_1[2];
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&local_40);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
LAB_051b3f14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


