/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0906bab4
PROGRAM: Hyper-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  int in_stack_00000010;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c();
  }
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
  uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000010 * 8) = uVar2;
    in_stack_00000010 = in_stack_00000010 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac435b0);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac46630);
    FUN_07b6c824(unaff_x19 + 2,uVar2,uVar5);
    return;
  }
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&PTR_PTR_0a568bf8,0);
}


