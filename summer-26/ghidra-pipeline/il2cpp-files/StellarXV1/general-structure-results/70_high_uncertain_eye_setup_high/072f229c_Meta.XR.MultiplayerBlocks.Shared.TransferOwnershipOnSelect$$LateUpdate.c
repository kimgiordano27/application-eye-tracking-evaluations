/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 072f229c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  int in_stack_00000048;
  undefined8 in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar3 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&PTR_PTR_08d635d8,0);
  }
  uVar5 = *unaff_x20;
  *(undefined8 *)(&stack0x00000040 + (long)in_stack_00000048 * 8) = uVar5;
  in_stack_00000048 = in_stack_00000048 + 1;
  __cxa_end_catch();
  lVar4 = *(long *)(unaff_x19 + 0x60);
  uVar1 = thunk_FUN_040dedf8(PTR_DAT_09287040);
  lVar2 = FUN_04077674(uVar1,2);
  uVar1 = in_stack_00000058;
  if (lVar2 != 0) {
    FUN_03b089e0(lVar2,in_stack_00000058);
    FUN_03b08cc0(lVar2,0,uVar1);
    FUN_03b089e0(lVar2,uVar5);
    FUN_03b08cc0(lVar2,1,uVar5);
    if (lVar4 != 0) {
      uVar1 = thunk_FUN_040dedf8(PTR_DAT_092b9200);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c48c8);
      FUN_03b10d1c(0x11,uVar1,lVar4,uVar5,lVar2);
      FUN_072f2aa4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


