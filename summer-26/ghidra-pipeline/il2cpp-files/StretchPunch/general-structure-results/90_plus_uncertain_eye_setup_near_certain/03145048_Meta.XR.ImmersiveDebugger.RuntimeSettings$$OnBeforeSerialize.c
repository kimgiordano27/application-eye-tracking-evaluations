/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 03145048
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int unaff_w20;
  
  FUN_033d8040(param_1,0);
  if (unaff_w20 < 0) {
    FUN_033b3224(0xc,4,0);
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (unaff_w20 == 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      goto LAB_031450e4;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  uVar1 = FUN_01d7d9bc(lVar2,unaff_w20);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
LAB_031450e4:
  thunk_FUN_01e10808(param_1 + 0x10,uVar1);
  return;
}


