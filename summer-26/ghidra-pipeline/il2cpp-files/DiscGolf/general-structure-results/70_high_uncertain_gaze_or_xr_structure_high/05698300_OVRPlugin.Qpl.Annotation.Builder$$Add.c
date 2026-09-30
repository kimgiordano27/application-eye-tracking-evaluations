/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05698300
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_Qpl_Annotation_Builder__Add(void)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_06dbc85c & 1) == 0) {
    FUN_02d965b8(System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo);
    FUN_02d965b8(System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_02d965b8(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
    FUN_02d965b8(System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo);
    FUN_02d965b8(System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo);
    DAT_06dbc85c = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_05697a28(&local_80);
  local_40 = local_70;
  uStack_48 = uStack_78;
  local_50 = local_80;
  FUN_05697aa4(&local_68);
  lVar1 = 0;
  if (((char)local_50 != '\0') && ((char)local_68 != '\0')) {
    auVar2 = FUN_0433ad74(&local_50,
                          *(undefined8 *)
                           System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                         );
    auVar3 = FUN_0433b208(&local_68,
                          *(undefined8 *)
                           System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo);
    lVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                              );
    FUN_0567d0b0(lVar1,0);
    *(undefined1 (*) [16])(lVar1 + 0x30) = auVar2;
    LeanTween__value(lVar1 + 0x38,0);
    *(undefined1 (*) [16])(lVar1 + 0x40) = auVar3;
  }
  return lVar1;
}


