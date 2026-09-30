/*
FUNCTION_NAME: FUN_0210b7c8
ENTRY_POINT: 0210b7c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void FUN_0210b7c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                    );
  uVar1 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar2 = thunk_FUN_00d48444(PTR_DAT_033efcb8);
  FUN_017a9608(uVar1,uVar2,0);
                    /* try { // try from 0210b808 to 0220b82f has its CatchHandler @ 0210ba8c */
  uVar2 = thunk_FUN_00d48444(Method_OVREyeGaze_OnPermissionGranted__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar2);
}


