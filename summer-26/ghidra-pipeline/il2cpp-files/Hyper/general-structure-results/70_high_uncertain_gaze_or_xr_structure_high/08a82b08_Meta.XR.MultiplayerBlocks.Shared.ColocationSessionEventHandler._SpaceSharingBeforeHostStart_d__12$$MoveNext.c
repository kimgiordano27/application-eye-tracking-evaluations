/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$MoveNext
ENTRY_POINT: 08a82b08
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__MoveNext
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *unaff_x19;
  int in_stack_00000010;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
  uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000000 + (long)in_stack_00000010 * 8) = uVar2;
    in_stack_00000010 = in_stack_00000010 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac111a0);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08c7f79c(unaff_x19 + 2,uVar2,0);
    return;
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_0a568bf8,0);
}


