/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceDiscoveryResults
ENTRY_POINT: 033d4a28
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceDiscoveryResults(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x23;
  
  FUN_01d7d918(StringLiteral_1175);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_9030);
  FUN_01d7d918(StringLiteral_9031);
  FUN_01d7d918(StringLiteral_9032);
  FUN_01d7d918(StringLiteral_9033);
  *(undefined1 *)(unaff_x23 + 0xa3d) = 1;
  puVar2 = StringLiteral_1175;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (unaff_x19 != 0) {
    FUN_033c9700();
    uVar4 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar4,0);
    FUN_032dfad4();
    FUN_033a87c8(*(undefined8 *)puVar2,0);
    FUN_032dfad4();
    FUN_033a87c8(*(undefined8 *)puVar2,0);
    FUN_032dfad4();
    FUN_032e11f0();
    return;
  }
  thunk_FUN_01dd295c(StringLiteral_1111);
  uVar4 = thunk_FUN_01de27b8();
  uVar3 = thunk_FUN_01dd295c(StringLiteral_2755);
  FUN_032870b8(uVar4,uVar3,0);
  uVar3 = thunk_FUN_01dd295c(StringLiteral_9035);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar3);
}


