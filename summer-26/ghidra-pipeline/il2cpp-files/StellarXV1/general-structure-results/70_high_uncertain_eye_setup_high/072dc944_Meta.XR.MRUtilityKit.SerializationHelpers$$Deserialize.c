/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Deserialize
ENTRY_POINT: 072dc944
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SerializationHelpers__Deserialize(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
  uVar2 = thunk_FUN_040daa88(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_040dedf8(PTR_DAT_092c3f50);
    FUN_074e74a4();
    FUN_072dc7e4();
    return 0;
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_PTR_08d635d8,0);
}


