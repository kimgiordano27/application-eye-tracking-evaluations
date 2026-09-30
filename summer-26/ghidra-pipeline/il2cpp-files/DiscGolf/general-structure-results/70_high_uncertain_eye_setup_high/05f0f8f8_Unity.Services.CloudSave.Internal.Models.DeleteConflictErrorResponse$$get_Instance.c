/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.DeleteConflictErrorResponse$$get_Instance
ENTRY_POINT: 05f0f8f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_12
*/


void Unity_Services_CloudSave_Internal_Models_DeleteConflictErrorResponse__get_Instance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x28;
  undefined8 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar8 = Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Item__;
  puVar7 = Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Count__;
  puVar6 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  puVar5 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__;
  puVar4 = Method_OVRTaskBuilder<OVRPlugin_Result>_Create__;
  puVar3 = Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
  puVar2 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
  ;
  puVar1 = PTR_DAT_06a0e528;
  puVar11 = *(undefined8 **)(unaff_x28 + 0x3d8);
  puVar10 = *(undefined8 **)(unaff_x19 + 0x9d0);
  if ((DAT_06dc4103 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Item__);
    FUN_02d965b8(
                Method_System_Collections_ObjectModel_ReadOnlyCollection<CustomAttributeTypedArgument>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Count__);
    FUN_02d965b8(PTR_DAT_06a0e528);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    DAT_06dc4103 = 1;
  }
  uVar9 = thunk_FUN_02dd3144(*puVar11);
  FUN_05f09b68(uVar9,0,*puVar10);
  in_stack_00000018 = 0;
  FUN_0489e668(&stack0x00000018,uVar9,*(undefined8 *)puVar2);
  uVar9 = *(undefined8 *)puVar3;
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = in_stack_00000018;
  uVar9 = thunk_FUN_02dd3144(uVar9);
  FUN_05f09c30(uVar9,0,*(undefined8 *)puVar7);
  in_stack_00000010 = 0;
  FUN_0489e668(&stack0x00000010,uVar9,*(undefined8 *)puVar4);
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = in_stack_00000010;
  uVar9 = thunk_FUN_02dd3144(uVar9);
  FUN_05f09cf8(uVar9,0,*(undefined8 *)puVar8);
  in_stack_00000008 = 0;
  FUN_0489e668(&stack0x00000008,uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = in_stack_00000008;
  return;
}


