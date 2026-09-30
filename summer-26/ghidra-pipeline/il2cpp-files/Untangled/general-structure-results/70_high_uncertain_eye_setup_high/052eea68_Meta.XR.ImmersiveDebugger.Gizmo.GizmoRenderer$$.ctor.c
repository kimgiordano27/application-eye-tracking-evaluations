/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$.ctor
ENTRY_POINT: 052eea68
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  if (in_w8 == 0) {
    FUN_02f07e70(PTR_DAT_06d07c90);
    *(undefined1 *)(unaff_x22 + 0x30a) = 1;
  }
  puVar1 = PTR_DAT_06d07c90;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_06d07c90 + 0xb8);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(unaff_x22 + 0x30a) == '\0') {
      FUN_02f07e70(PTR_DAT_06d07c90);
      *(undefined1 *)(unaff_x22 + 0x30a) = 1;
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
    lVar3 = FUN_066c67b0();
    if ((lVar3 == 0) || (FUN_066d48c0(lVar3,0), lVar5 == 0)) goto LAB_052eeb34;
    FUN_052a04c0(lVar5,uVar4,0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_04759f10();
    return;
  }
LAB_052eeb34:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


