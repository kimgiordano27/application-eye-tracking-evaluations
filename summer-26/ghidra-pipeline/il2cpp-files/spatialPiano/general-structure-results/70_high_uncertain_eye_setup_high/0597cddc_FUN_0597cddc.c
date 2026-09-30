/*
FUNCTION_NAME: FUN_0597cddc
ENTRY_POINT: 0597cddc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0597cddc(float param_1,long *param_2)

{
  if ((DAT_06bc19e4 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
                );
    DAT_06bc19e4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0597ce48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xbc8))
            (param_1 - *(float *)((long)param_2 + 0x3dc),*(undefined4 *)((long)param_2 + 900),
             (int)param_2[0x70],param_2,*(undefined8 *)(*param_2 + 0xbd0));
  return;
}


