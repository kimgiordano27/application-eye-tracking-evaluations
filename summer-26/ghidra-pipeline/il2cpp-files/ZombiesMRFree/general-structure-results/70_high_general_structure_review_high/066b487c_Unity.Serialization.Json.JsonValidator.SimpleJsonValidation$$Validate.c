/*
FUNCTION_NAME: Unity.Serialization.Json.JsonValidator.SimpleJsonValidation$$Validate
ENTRY_POINT: 066b487c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_Serialization_Json_JsonValidator_SimpleJsonValidation__Validate(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  uVar1 = FUN_066af98c();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    uVar2 = FUN_066afa98();
    if (*(int *)(*(long *)
                  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)
                          System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                        );
    }
    lVar3 = FUN_06653348(0);
    if (lVar3 != 0) {
      FUN_06660638(lVar3,uVar2,0,0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


