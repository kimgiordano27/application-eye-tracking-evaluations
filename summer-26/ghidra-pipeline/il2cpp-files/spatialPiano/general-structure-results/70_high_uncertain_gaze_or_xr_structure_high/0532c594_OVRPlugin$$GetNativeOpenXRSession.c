/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 0532c594
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0x5c8);
  if ((param_1 & 1) == 0) {
    FUN_02f08768(Unity_XR_CompositionLayers_Emulation_EmulationColorScaleBiasPass_TypeInfo);
    FUN_02f08768(Unity_XR_CompositionLayers_Emulation_EmulatedLayerProvider_TypeInfo);
    FUN_02f08768(Unity_XR_CompositionLayers_Emulation_EmulatedLayerData_TypeInfo);
    FUN_02f08768(PTR_DAT_067ccdb8);
    *(undefined1 *)(unaff_x24 + 0x2e9) = 1;
  }
  uVar1 = thunk_FUN_02f45270(*unaff_x23);
  FUN_04abd50c(uVar1,*unaff_x20);
  uVar2 = *unaff_x22;
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = thunk_FUN_02f45270(uVar2);
  FUN_048ad59c(uVar1,*puVar3);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  FUN_05116b38(param_2,0);
  return;
}


