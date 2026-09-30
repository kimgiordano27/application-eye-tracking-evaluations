/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05698328
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
  long unaff_x19;
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char cStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_02d965b8(System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
  FUN_02d965b8(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
  FUN_02d965b8(System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo);
  FUN_02d965b8(System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x85c) = 1;
  _cStack0000000000000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  _cStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_05697a28();
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000038 = in_stack_00000008;
  _cStack0000000000000030 = in_stack_00000000;
  FUN_05697aa4(&stack0x00000018);
  lVar1 = 0;
  if ((cStack0000000000000030 != '\0') && (cStack0000000000000018 != '\0')) {
    auVar2 = FUN_0433ad74(&stack0x00000030,
                          *(undefined8 *)
                           System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                         );
    auVar3 = FUN_0433b208(&stack0x00000018,
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


