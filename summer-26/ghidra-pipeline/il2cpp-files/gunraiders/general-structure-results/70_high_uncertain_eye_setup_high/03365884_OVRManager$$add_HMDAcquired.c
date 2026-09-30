/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 03365884
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDAcquired(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_03374f50();
  thunk_FUN_01c273e8(
                    Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
                    );
  FUN_0336f2b8();
  uVar1 = FUN_03365da0();
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


