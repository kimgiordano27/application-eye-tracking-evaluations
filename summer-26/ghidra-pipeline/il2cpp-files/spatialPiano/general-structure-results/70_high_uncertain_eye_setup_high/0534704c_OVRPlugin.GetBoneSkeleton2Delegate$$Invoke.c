/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 0534704c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate__Invoke(undefined8 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_1 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar1 = *param_1;
    unaff_x20 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
    FUN_05054f60(unaff_x20,uVar1,
                 *(undefined8 *)Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x20;
  }
  *(long *)(unaff_x19 + 0x58) = unaff_x20;
  thunk_FUN_060ed17c();
  return;
}


