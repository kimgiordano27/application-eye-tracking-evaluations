/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 02cac33c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer(void)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5
            (in_stack_00000008,
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_get_Item__
             ,in_stack_00000000,0);
  return;
}


