/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 033654bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_display(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x24;
  undefined8 in_stack_00000028;
  long in_stack_00000068;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  iVar1 = FUN_03370bd0();
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar2 = FUN_03295500(0);
      uVar3 = FUN_03374f50();
      puVar5 = 
      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__;
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar2 = FUN_03295500(0);
      uVar3 = FUN_03374f50();
      puVar5 = 
      Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
      ;
    }
    uVar4 = thunk_FUN_01c273e8(puVar5);
    FUN_0336f2b8(uVar4,uVar2,uVar3,0);
    uVar2 = FUN_03365da0();
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,uVar3);
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ +
              0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_0336cdb0(in_stack_00000028._4_4_,0);
  *(undefined4 *)(unaff_x19 + 0xa8) = 0;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  FUN_03359f08();
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000068) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


