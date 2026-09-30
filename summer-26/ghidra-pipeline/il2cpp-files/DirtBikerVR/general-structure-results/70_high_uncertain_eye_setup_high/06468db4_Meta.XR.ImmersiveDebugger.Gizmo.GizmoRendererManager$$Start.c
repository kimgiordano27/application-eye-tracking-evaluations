/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Start
ENTRY_POINT: 06468db4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Start(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar1 = FUN_03a8a81c();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 != 4) {
      if (unaff_x20 == 0) {
        uVar2 = thunk_FUN_03ad47ac(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar2,0);
      }
      goto LAB_06468df0;
    }
    pcVar3 = FUN_036958fc;
  }
  else {
    if (unaff_w22 != 5) {
LAB_06468df0:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_06468e00;
    }
    pcVar3 = FUN_0369591c;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
LAB_06468e00:
  *(code **)(unaff_x19 + 0x38) = FUN_03695884;
  return;
}


