/*
FUNCTION_NAME: FUN_05ed8548
ENTRY_POINT: 05ed8548
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_20
*/


void FUN_05ed8548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar10 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  puVar9 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__;
  puVar8 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__;
  puVar7 = Method_OVRTaskBuilder<OVRPlugin_Result>_Create__;
  puVar6 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
  ;
  puVar5 = Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
  puVar4 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
  ;
  puVar3 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
  ;
  puVar2 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
  ;
  puVar1 = PTR_DAT_06a0e558;
  if ((DAT_06dc3f36 & 1) == 0) {
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                );
    FUN_02d965b8(PTR_DAT_06a0e558);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    DAT_06dc3f36 = 1;
  }
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_05f09b68(uVar11,0,*(undefined8 *)puVar3,0);
  local_68 = 0;
  FUN_0489e668(&local_68,uVar11,*(undefined8 *)puVar4);
  uVar11 = *(undefined8 *)puVar5;
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = local_68;
  uVar11 = thunk_FUN_02dd3144(uVar11);
  FUN_05f09c30(uVar11,0,*(undefined8 *)puVar6,0);
  local_70 = 0;
  FUN_0489e668(&local_70,uVar11,*(undefined8 *)puVar7);
  uVar11 = *(undefined8 *)puVar8;
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = local_70;
  uVar11 = thunk_FUN_02dd3144(uVar11);
  FUN_05f09cf8(uVar11,0,*(undefined8 *)puVar9,0);
  local_78 = 0;
  FUN_0489e668(&local_78,uVar11,*(undefined8 *)puVar10);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = local_78;
  return;
}


