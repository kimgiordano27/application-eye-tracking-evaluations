/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.DeleteConflictErrorResponseAllOfData$$.ctor
ENTRY_POINT: 05f0f908
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


void Unity_Services_CloudSave_Internal_Models_DeleteConflictErrorResponseAllOfData___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  long unaff_x20;
  long *plVar7;
  long unaff_x25;
  undefined8 *puVar8;
  long unaff_x26;
  undefined8 *puVar9;
  long unaff_x27;
  undefined8 *puVar10;
  long unaff_x28;
  undefined8 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar4 = Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Item__;
  puVar3 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  puVar2 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__;
  puVar1 = Method_OVRTaskBuilder<OVRPlugin_Result>_Create__;
  puVar11 = *(undefined8 **)(unaff_x28 + 0x3d8);
  puVar6 = *(undefined8 **)(unaff_x19 + 0x9d0);
  puVar10 = *(undefined8 **)(unaff_x27 + 1000);
  plVar7 = *(long **)(unaff_x20 + 0x528);
  puVar9 = *(undefined8 **)(unaff_x26 + 0x3f0);
  puVar8 = *(undefined8 **)(unaff_x25 + 0x9d8);
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
  uVar5 = thunk_FUN_02dd3144(*puVar11);
  FUN_05f09b68(uVar5,0,*puVar6);
  in_stack_00000018 = 0;
  FUN_0489e668(&stack0x00000018,uVar5,*puVar10);
  uVar5 = *puVar9;
  **(undefined8 **)(*plVar7 + 0xb8) = in_stack_00000018;
  uVar5 = thunk_FUN_02dd3144(uVar5);
  FUN_05f09c30(uVar5,0,*puVar8);
  in_stack_00000010 = 0;
  FUN_0489e668(&stack0x00000010,uVar5,*(undefined8 *)puVar1);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(*(long *)(*plVar7 + 0xb8) + 8) = in_stack_00000010;
  uVar5 = thunk_FUN_02dd3144(uVar5);
  FUN_05f09cf8(uVar5,0,*(undefined8 *)puVar4);
  in_stack_00000008 = 0;
  FUN_0489e668(&stack0x00000008,uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x10) = in_stack_00000008;
  return;
}


