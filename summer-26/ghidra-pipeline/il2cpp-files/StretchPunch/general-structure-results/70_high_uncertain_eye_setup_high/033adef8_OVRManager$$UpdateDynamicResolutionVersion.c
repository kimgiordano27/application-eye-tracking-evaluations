/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 033adef8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(void)

{
  long unaff_x19;
  undefined8 uVar1;
  long unaff_x23;
  
  FUN_01d7d918();
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_8530);
  *(undefined1 *)(unaff_x23 + 0x8d5) = 1;
  FUN_033c9700();
  if ((DAT_044a68d6 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1184);
    DAT_044a68d6 = 1;
  }
  uVar1 = *(undefined8 *)StringLiteral_1175;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a87c8(uVar1);
  if (unaff_x19 != 0) {
    FUN_032dfad4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


