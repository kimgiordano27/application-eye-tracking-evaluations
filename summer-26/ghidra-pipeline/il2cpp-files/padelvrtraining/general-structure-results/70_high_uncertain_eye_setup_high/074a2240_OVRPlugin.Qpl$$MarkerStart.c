/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 074a2240
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__MarkerStart(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x24;
  
  iVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0;
    iVar1 = 0;
    do {
      uVar4 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x24);
      }
      iVar2 = FUN_07089ed0(uVar4,0);
      iVar1 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
      iVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
    } while (iVar3 < iVar2);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar4 = FUN_070891c0(iVar1,0);
  iVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
  if (0 < iVar1) {
    iVar1 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x24);
      }
      FUN_0708a550(uVar5,uVar7,0,0);
      lVar6 = FUN_071c5e18(uVar7,0);
      uVar7 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
      iVar3 = FUN_07089ed0(uVar7,0);
      uVar7 = FUN_071c5e0c(lVar6 + iVar3,0);
      iVar1 = iVar1 + 1;
      iVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
    } while (iVar1 < iVar3);
  }
  return uVar4;
}


