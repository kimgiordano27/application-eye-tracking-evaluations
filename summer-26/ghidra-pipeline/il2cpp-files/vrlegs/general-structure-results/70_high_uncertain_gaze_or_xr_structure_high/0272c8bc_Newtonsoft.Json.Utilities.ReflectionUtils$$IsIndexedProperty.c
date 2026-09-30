/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.ReflectionUtils$$IsIndexedProperty
ENTRY_POINT: 0272c8bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0272c908) */

void Newtonsoft_Json_Utilities_ReflectionUtils__IsIndexedProperty(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return;
}


