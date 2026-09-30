/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 040e42e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<MatchInfo>(void)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long lVar2;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_04c65310(&stack0x00000040,*(undefined8 *)PTR_DAT_07d96ac8);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar2);
  }
  unaff_x19[2] = in_stack_00000030;
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  return;
}


