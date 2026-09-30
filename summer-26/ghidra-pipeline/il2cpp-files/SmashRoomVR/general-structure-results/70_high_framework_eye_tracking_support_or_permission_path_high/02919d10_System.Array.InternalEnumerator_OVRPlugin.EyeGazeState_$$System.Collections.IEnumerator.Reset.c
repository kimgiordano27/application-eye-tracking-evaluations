/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02919d10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = thunk_FUN_01ad9084(StringLiteral_2609);
  uVar2 = thunk_FUN_01ad4b8c(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_01ad9084(StringLiteral_11494,0);
    uVar1 = FUN_02ec8cb0();
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                      );
    uVar4 = thunk_FUN_01afaadc();
    FUN_02fd7c54(uVar4,uVar1,0);
    uVar1 = thunk_FUN_01ad9084(StringLiteral_11495);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,uVar1);
  }
  uVar1 = thunk_FUN_01ad9084(StringLiteral_2907);
  uVar2 = thunk_FUN_01ad4b8c(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) != 0) {
    uVar1 = *param_1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(uVar1);
  }
  uVar1 = thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__
                            );
  uVar2 = thunk_FUN_01ad4b8c(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) != 0) {
    uVar5 = *param_1;
    __cxa_end_catch();
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar1 = thunk_FUN_01afaadc();
    uVar4 = thunk_FUN_01ad9084(StringLiteral_2908);
    FUN_030406e8(uVar1,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_Method_Unity_VisualScripting_Member_<>c_<_ctor>b__5_0___03b4f5b8,0);
}


