/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 06c73390
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long in_stack_00000018;
  
  if ((DAT_07a50673 & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_IDictionary<string,_IDigest>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IDictionary<string,_int>_TypeInfo);
    DAT_07a50673 = 1;
  }
  in_stack_00000018 = 0;
  if (param_1[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_0460182c(param_1[0x24],&stack0x00000018,
               *(undefined8 *)System_Collections_Generic_IDictionary<string,_IDigest>_TypeInfo);
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  *(long *)(in_stack_00000018 + 0x20) = (long)param_1;
  thunk_FUN_0329bf60((long *)(in_stack_00000018 + 0x20),param_1);
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x10) = param_2;
    thunk_FUN_0329bf60((undefined8 *)(in_stack_00000018 + 0x10),param_2);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = param_3;
    thunk_FUN_0329bf60((undefined8 *)(in_stack_00000018 + 0x18),param_3);
    if (in_stack_00000018 != 0) {
      *(undefined1 *)(in_stack_00000018 + 0x28) = 1;
      (**(code **)(*param_1 + 0x478))
                (param_1,param_2,param_3,in_stack_00000018,*(undefined8 *)(*param_1 + 0x480));
      FUN_04d12598();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


