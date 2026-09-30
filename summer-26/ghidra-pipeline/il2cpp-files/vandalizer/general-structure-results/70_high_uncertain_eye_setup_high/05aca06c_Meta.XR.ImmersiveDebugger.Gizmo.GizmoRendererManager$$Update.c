/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 05aca06c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *unaff_x19;
  
  FUN_05e229e0();
  lVar3 = *unaff_x19;
  if (lVar3 == 0) {
LAB_05aca0f4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar5 = uVar2;
    if (uVar1 <= uVar5) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      goto LAB_05aca0e4;
    }
    lVar4 = *(long *)(lVar3 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar5 + 1;
    if (lVar4 == 0) goto LAB_05aca0f4;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar5 + 1;
  } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x30 + 0x20) < 0);
  lVar4 = lVar4 + (long)(int)uVar5 * 0x30;
  lVar3 = *(long *)(lVar4 + 0x28);
  unaff_x19[3] = *(long *)(lVar4 + 0x30);
  unaff_x19[2] = lVar3;
LAB_05aca0e4:
  return uVar5 < uVar1;
}


