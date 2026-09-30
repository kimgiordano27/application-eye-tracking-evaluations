/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$OnHoverChanged
ENTRY_POINT: 01b28b58
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x25;
  
  lVar1 = FUN_0103c244();
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10),&stack0x00000008);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244(lVar1);
  }
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10),&stack0x00000004);
  lVar1 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_01b28bec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b28bec:
  (*(code *)*puVar2)();
  return;
}


