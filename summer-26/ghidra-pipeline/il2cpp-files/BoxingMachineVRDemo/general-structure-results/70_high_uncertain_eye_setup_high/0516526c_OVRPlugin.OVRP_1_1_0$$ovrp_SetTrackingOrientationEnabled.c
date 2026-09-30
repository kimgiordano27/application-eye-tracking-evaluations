/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 0516526c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051652e8) */

undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long lVar2;
  
  if (param_2 != 1) {
    FUN_04a7a49c(&stack0x00000020,*unaff_x20);
                    /* WARNING: Subroutine does not return */
    FUN_02e42304(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_04a7a49c(&stack0x00000020,*unaff_x20);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar2);
  }
  return 0;
}


