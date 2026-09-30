/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 0906bad0
PROGRAM: Hyper-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  int in_stack_00000010;
  
  uVar1 = thunk_FUN_049a9d1c(param_1,*(undefined8 *)*unaff_x20);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x20;
    *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000010 * 8) = uVar5;
    in_stack_00000010 = in_stack_00000010 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac435b0);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac46630);
    FUN_07b6c824(unaff_x19 + 2,uVar5,uVar3);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0a568bf8,0);
}


