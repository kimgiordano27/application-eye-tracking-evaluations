/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 033c3f18
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_systemDisplayFrequenciesAvailable(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8523);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    *(undefined1 *)(unaff_x22 + 0x9a6) = 1;
  }
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *unaff_x21;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar1);
  }
  uVar2 = FUN_033acf6c();
  if (lVar4 != 0) {
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      uVar2 = *(uint *)(lVar4 + (long)(int)uVar2 * 4 + 0x20);
      uVar3 = FUN_033acf6c();
      return uVar2 >> (ulong)(uVar3 & 0x1f) & 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


