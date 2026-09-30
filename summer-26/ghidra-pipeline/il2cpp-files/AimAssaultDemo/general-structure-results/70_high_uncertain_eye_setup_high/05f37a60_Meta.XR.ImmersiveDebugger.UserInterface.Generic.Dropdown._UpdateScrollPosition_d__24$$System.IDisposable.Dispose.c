/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 05f37a60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(param_2 + 0x40)) {
    thunk_FUN_03778a20();
    uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}


