/*
FUNCTION_NAME: System.Predicate<OVRPlugin.BoneCapsule>$$Invoke
ENTRY_POINT: 046ae04c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Predicate<OVRPlugin_BoneCapsule>__Invoke
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_0333a630();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  uVar2 = FUN_032d5d54(param_4);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
      uVar3 = thunk_FUN_032f9fe8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(param_2 + 0x18) = FUN_02e26e44;
    goto LAB_046ae0a8;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
LAB_046ae0a8:
  *(code **)(param_2 + 0x38) = FUN_02e26dfc;
  return;
}


