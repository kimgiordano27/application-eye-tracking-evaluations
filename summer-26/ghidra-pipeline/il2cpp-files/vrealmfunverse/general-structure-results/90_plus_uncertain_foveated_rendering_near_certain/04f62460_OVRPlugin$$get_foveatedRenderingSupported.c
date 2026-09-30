/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 04f62460
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  uStack000000000000004c = (undefined4)param_2;
  uStack0000000000000050 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000040 = param_1;
  FUN_04efb620();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    lVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_var);
    FUN_04f624c8(lVar1,lVar3);
    plVar2 = (long *)(unaff_x19 + 0x48);
    *plVar2 = lVar1;
    thunk_FUN_02bb0e9c(plVar2,lVar1);
    *(bool *)(unaff_x19 + 0x38) = *plVar2 != 0;
  }
  return;
}


