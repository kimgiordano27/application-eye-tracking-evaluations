/*
FUNCTION_NAME: FUN_06a02a14
ENTRY_POINT: 06a02a14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a02a14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_40 [16];
  
  puVar2 = 
  Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  puVar1 = PTR_DAT_0727fcb8;
  if ((DAT_076e2872 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727fcb8);
    DAT_076e2872 = 1;
  }
  local_40 = FUN_05013e90(param_1,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d29df == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_0727fcb8);
    DAT_076d29df = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = FUN_06a4561c(local_40,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),
                       *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),0);
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
  ;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar6 = *(long *)puVar1;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    plVar5 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x18);
    if ((plVar5 != (long *)0x0) &&
       (*plVar5 ==
        *(long *)
         Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
       )) {
      FUN_06a02820(plVar5,param_1);
    }
  }
  return;
}


