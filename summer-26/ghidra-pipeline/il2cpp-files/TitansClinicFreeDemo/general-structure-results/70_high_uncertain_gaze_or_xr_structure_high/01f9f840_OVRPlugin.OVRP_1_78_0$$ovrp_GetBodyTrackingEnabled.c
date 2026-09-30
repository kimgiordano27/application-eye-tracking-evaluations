/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 01f9f840
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01f9f8e4) */
/* WARNING: Removing unreachable block (ram,0x01f9f8b4) */

undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch();
    lVar2 = *plVar1;
    __cxa_end_catch();
    FUN_01e5b748(&stack0x00000008,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011e1944(lVar2);
    }
    FUN_01e5b7ec(&stack0x00000010,0);
  }
  else {
    FUN_01e5b748(&stack0x00000008,0);
    if (param_2 != 1) {
      FUN_01e5b7ec(&stack0x00000010,0);
                    /* WARNING: Subroutine does not return */
      FUN_012f5474(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    FUN_01e5b7ec(&stack0x00000010,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011e1944(lVar2);
    }
  }
  return 0;
}


