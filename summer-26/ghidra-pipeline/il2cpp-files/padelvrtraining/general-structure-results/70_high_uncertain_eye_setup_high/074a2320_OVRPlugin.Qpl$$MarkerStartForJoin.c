/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 074a2320
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  
  while( true ) {
    FUN_0708a550(param_1,param_2,param_3,param_4);
    lVar2 = FUN_071c5e18(unaff_x22,0);
    uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
    iVar1 = FUN_07089ed0(uVar3,0);
    param_2 = FUN_071c5e0c(lVar2 + iVar1,0);
    unaff_w21 = unaff_w21 + 1;
    iVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
    if (iVar1 <= unaff_w21) break;
    param_1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c(*unaff_x24);
    }
    param_3 = 0;
    param_4 = 0;
    unaff_x22 = param_2;
  }
  return;
}


