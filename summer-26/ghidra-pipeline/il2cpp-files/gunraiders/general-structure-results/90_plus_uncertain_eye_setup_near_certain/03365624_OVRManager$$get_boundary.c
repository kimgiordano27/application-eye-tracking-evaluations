/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 03365624
PROGRAM: gunraiders-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_boundary(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x24;
  long in_stack_00000068;
  
  lVar1 = FUN_03374f50(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(lVar1 + 0x10) < 0x17d) {
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_03295500(0);
    FUN_03365e1c(lVar1,uVar2);
    *(undefined4 *)(unaff_x19 + 0xa8) = 0;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    FUN_03359f08();
    if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_042305b0);
  FUN_019b5f60();
  uVar2 = FUN_03295500(0);
  uVar3 = FUN_03374f50();
  uVar4 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
                            );
  FUN_0336f2b8(uVar4,uVar2,uVar3,0);
  uVar2 = FUN_03365da0();
  uVar3 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


