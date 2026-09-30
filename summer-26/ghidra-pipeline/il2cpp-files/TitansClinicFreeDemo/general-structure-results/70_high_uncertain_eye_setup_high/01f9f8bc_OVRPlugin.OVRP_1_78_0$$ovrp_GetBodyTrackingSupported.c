/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingSupported
ENTRY_POINT: 01f9f8bc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f9f8e4) */

undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingSupported(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  FUN_01e5b748(&stack0x00000008,0);
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_011e1944();
  }
  if (param_2 != 1) {
    FUN_01e5b7ec(&stack0x00000010,0);
                    /* WARNING: Subroutine does not return */
    FUN_012f5474(uStack0000000000000000);
  }
  plVar1 = (long *)__cxa_begin_catch(uStack0000000000000000);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_01e5b7ec(&stack0x00000010,0);
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011e1944(lVar2);
}


