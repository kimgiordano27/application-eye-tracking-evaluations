/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 033eb02c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar2 = StringLiteral_2477;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (unaff_x20 != 0) {
    bVar3 = FUN_032e188c();
    *(byte *)(unaff_x19 + 0x10) = bVar3 & 1;
    uVar5 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar5,0);
    FUN_032df734();
    FUN_033eaf94();
    return;
  }
  thunk_FUN_01dd295c(StringLiteral_1111);
  uVar5 = thunk_FUN_01de27b8();
  uVar4 = thunk_FUN_01dd295c(StringLiteral_2755);
  FUN_032870b8(uVar5,uVar4,0);
  uVar4 = thunk_FUN_01dd295c(StringLiteral_9312);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar5,uVar4);
}


