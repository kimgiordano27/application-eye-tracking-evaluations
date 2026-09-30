/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 05e548b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


uint UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *unaff_x19;
  long lVar3;
  long *unaff_x21;
  
                    /* try { // try from 05e548b0 to 05f54e63 has its CatchHandler @ 05e548b0
                       catch() { ... } // from try @ 05e548b0 with catch @ 05e548b0
                       catch() { ... } // from try @ 05e55068 with catch @ 05e548b0
                       catch() { ... } // from try @ 05e55128 with catch @ 05e548b0
                       catch() { ... } // from try @ 05e55188 with catch @ 05e548b0
                       catch() { ... } // from try @ 05e551cc with catch @ 05e548b0
                       catch() { ... } // from try @ 05e552b0 with catch @ 05e548b0 */
  *unaff_x19 = param_2;
  thunk_FUN_02dd37b4();
  lVar3 = *unaff_x19;
  uVar1 = 0;
  if (lVar3 != 0) goto LAB_05e54900;
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606a004(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      return uVar1 & 1;
    }
    if ((uVar1 & 1) == 0) {
      if (lVar3 == 0) {
LAB_05e54944:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar1 = FUN_0607b08c(lVar3,0);
    }
    else {
      if (lVar3 == 0) goto LAB_05e54944;
      uVar1 = 1;
    }
    FUN_0607b140(lVar3,0,0);
LAB_05e54900:
    lVar3 = thunk_FUN_060795f8(lVar3,0);
  } while( true );
}


