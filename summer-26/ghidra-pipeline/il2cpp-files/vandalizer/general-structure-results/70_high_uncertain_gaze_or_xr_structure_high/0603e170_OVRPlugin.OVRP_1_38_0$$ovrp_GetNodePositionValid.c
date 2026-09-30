/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 0603e170
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0603e1e0) */

void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != 1) {
    FUN_05afc4a0(&stack0x000000d0,*(undefined8 *)PTR_DAT_075f2cb8);
                    /* WARNING: Subroutine does not return */
    FUN_0330aab0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_05afc4a0(&stack0x000000d0,*(undefined8 *)PTR_DAT_075f2cb8);
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2388(lVar2);
}


