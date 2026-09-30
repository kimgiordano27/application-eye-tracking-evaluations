/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 03365460
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_instance(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x24;
  undefined8 in_stack_00000020;
  long in_stack_00000068;
  
  if (*(int *)(**(long **)(param_1 + 0x5b0) + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03295500(0);
  uVar1 = FUN_032ba038();
  if ((uVar1 & 1) == 0) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar2 = FUN_03295500(0);
    uVar3 = FUN_03374f50();
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
                              );
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
  FUN_0336d2c4(in_stack_00000020,0);
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


