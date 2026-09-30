/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 02919bb4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar1 = thunk_FUN_01ad4b8c(param_2,*param_1);
  if ((uVar1 & 1) != 0) {
    uVar4 = *unaff_x20;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(uVar4);
  }
  uVar4 = thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__
                            );
  uVar1 = thunk_FUN_01ad4b8c(uVar4,*(undefined8 *)*unaff_x20);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x20;
    __cxa_end_catch();
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar4 = thunk_FUN_01afaadc();
    uVar2 = thunk_FUN_01ad9084(StringLiteral_2908);
    FUN_030406e8(uVar4,uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_Method_Unity_VisualScripting_Member_<>c_<_ctor>b__5_0___03b4f5b8,0);
}


