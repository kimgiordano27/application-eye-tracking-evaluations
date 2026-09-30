/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 01463d84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest(void)

{
  int iVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x26;
  
  thunk_FUN_00d32864();
  lVar2 = *unaff_x19;
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x19;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_00d62348(*unaff_x26);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0136b58c(lVar2,uVar3,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
                 ,0);
    *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) = lVar2;
  }
  iVar1 = FUN_01322f74();
  if (iVar1 != -1) {
    FUN_01324ac8();
  }
  return 1;
}


