/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor$$GetHoverMeshMatrix
ENTRY_POINT: 034f1b00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x034f1b98) */

void UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__GetHoverMeshMatrix
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000060;
  
                    /* try { // try from 034f1b00 to 035f1b0b has its CatchHandler @ 034f1b20 */
  if (param_2 != 1) {
    if (in_stack_00000060._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000060._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return;
}


