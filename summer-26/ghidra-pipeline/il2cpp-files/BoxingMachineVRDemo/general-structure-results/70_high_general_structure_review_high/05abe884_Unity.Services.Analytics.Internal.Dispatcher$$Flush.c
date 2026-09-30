/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$Flush
ENTRY_POINT: 05abe884
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__Flush(long param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_03d2c800(param_2,**(undefined8 **)(param_1 + 0x68));
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_03d8a8ac((long *)(unaff_x19 + 0x50),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_Future_DocumentReference_Action>_Remove__
                );
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRAnchor_Tracker_AsyncLock>__SetResult
              ((long *)(unaff_x19 + 0x58),*unaff_x20);
    return;
  }
  return;
}


