/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$UnregisterRaycaster
ENTRY_POINT: 052d48c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__UnregisterRaycaster(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  
  FUN_02f07e70();
  *(undefined1 *)(unaff_x21 + 0xea) = 1;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x138);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x138);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(char *)(lVar3 + 0x178) == '\0') {
      bVar1 = *(char *)(lVar3 + 0x179) != '\0';
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}


