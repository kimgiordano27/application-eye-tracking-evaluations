/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$BeginInvoke
ENTRY_POINT: 01b324c8
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


uint Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__BeginInvoke
               (undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  uVar2 = (*(code *)*param_1)();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uStack000000000000000c = *(undefined4 *)(unaff_x21 + 8);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),&stack0x0000000c);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),&stack0x00000008);
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_01b325a8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
FUN_01b325a8:
    uVar1 = (*(code *)*puVar4)();
  }
  return uVar1 & 1;
}


