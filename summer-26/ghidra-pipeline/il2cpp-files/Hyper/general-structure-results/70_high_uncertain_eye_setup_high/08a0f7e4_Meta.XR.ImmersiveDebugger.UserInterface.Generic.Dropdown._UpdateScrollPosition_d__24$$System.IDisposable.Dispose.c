/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 08a0f7e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
               (long param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar3;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xa88);
  plVar3 = *(long **)(unaff_x21 + 0x120);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x19;
  }
  uVar2 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_04983f60(*unaff_x24);
  FUN_063d4f5c(uVar1,uVar2,*unaff_x20,0);
  uVar2 = thunk_FUN_04983f60(*unaff_x23);
  FUN_06ec46b8(uVar2,uVar1,*puVar4);
  **(undefined8 **)(*plVar3 + 0xb8) = uVar2;
  thunk_FUN_049ee3d8(*(undefined8 *)(*plVar3 + 0xb8),uVar2);
  return;
}


