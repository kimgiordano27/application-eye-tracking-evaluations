/*
FUNCTION_NAME: FUN_051e945c
ENTRY_POINT: 051e945c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_051e945c(ulong param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong local_28;
  
  if ((DAT_06bba5d7 & 1) == 0) {
    FUN_02f08768(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_02f08768(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_02f08768(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    DAT_06bba5d7 = 1;
  }
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  if ((param_1 & 0xff) != 0) {
    local_28 = 0;
    uVar2 = (uint)(param_1 >> 0x20);
    FUN_03e1bd20(&local_28,uVar2 & param_2,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    if (((local_28 & 0xff) == 0) || ((uint)(local_28 >> 0x20) != param_2)) {
      if (param_2 == 4) {
        local_28 = 0;
        FUN_03e1bd20(&local_28,uVar2 & 2,*(undefined8 *)puVar1);
        if ((local_28 >> 0x20 == 2) && ((local_28 & 0xff) != 0)) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}


