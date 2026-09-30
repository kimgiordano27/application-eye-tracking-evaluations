/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.DeleteItem400OneOf$$FromJson
ENTRY_POINT: 05f10be0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Unity_Services_CloudSave_Internal_Models_DeleteItem400OneOf__FromJson(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02d965b8();
  FUN_02d965b8(
              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
              );
  FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
  FUN_02d965b8(Method_System_Collections_ObjectModel_ReadOnlyCollection<MemberBinding>_get_Item__);
  FUN_02d965b8(
              Method_System_Collections_ObjectModel_ReadOnlyCollection<MemberBinding>_GetEnumerator__
              );
  FUN_02d965b8(Method_System_Collections_ObjectModel_ReadOnlyCollection<MemberBinding>_get_Count__);
  FUN_02d965b8(PTR_DAT_06a0e570);
  FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
  FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
  FUN_02d965b8(
              Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
              );
  *(undefined1 *)(unaff_x29 + 0x10e) = 1;
  uVar1 = thunk_FUN_02dd3144(*unaff_x28);
  FUN_05f09b68(uVar1,0,*unaff_x19);
  in_stack_00000018 = 0;
  FUN_0489e668(&stack0x00000018,uVar1,*unaff_x27);
  uVar1 = *unaff_x26;
  **(undefined8 **)(*unaff_x20 + 0xb8) = in_stack_00000018;
  uVar1 = thunk_FUN_02dd3144(uVar1);
  FUN_05f09c30(uVar1,0,*unaff_x25);
  in_stack_00000010 = 0;
  FUN_0489e668(&stack0x00000010,uVar1,*unaff_x24);
  uVar1 = *unaff_x23;
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = in_stack_00000010;
  uVar1 = thunk_FUN_02dd3144(uVar1);
  FUN_05f09cf8(uVar1,0,*unaff_x22);
  in_stack_00000008 = 0;
  FUN_0489e668(&stack0x00000008,uVar1,*unaff_x21);
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = in_stack_00000008;
  return;
}


