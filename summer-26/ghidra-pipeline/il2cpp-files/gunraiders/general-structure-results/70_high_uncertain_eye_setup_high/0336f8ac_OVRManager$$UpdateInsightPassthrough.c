/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 0336f8ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UpdateInsightPassthrough(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x23 + 0x586) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  iVar1 = FUN_0336fad0();
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 3) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar2 = FUN_03295500(0);
    FUN_019b2708();
    uVar3 = thunk_FUN_01c5d21c();
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UsingEntry>_MoveNext__
                              );
    uVar3 = FUN_033704d4(uVar4,uVar2,uVar3);
    thunk_FUN_01c273e8(PTR_DAT_04237cd0);
    uVar2 = thunk_FUN_01c496e0();
    FUN_032d1aa4(uVar2,uVar3,0);
  }
  else if (iVar1 == 2) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar2 = FUN_03295500(0);
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UsingEntry>_get_Current__
                              );
    uVar3 = FUN_0336f2b8(uVar3,uVar2);
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar2 = thunk_FUN_01c496e0();
    uVar4 = thunk_FUN_01c273e8(
                              Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo
                              );
    FUN_0323fce4(uVar2,uVar3,uVar4,0);
  }
  else {
    if (iVar1 != 1) {
      thunk_FUN_01c273e8(PTR_DAT_04237cd0);
      uVar2 = thunk_FUN_01c496e0();
      uVar3 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_MoveNext__
                                );
      FUN_032d1aa4(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_Dispose__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar2,uVar3);
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar2 = FUN_03295500(0);
    FUN_019b2708();
    uVar3 = thunk_FUN_01c5d21c();
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UsingEntry>_Dispose__
                              );
    uVar3 = FUN_033704d4(uVar4,uVar2,uVar3);
    thunk_FUN_01c273e8(PTR_DAT_0422f998);
    uVar2 = thunk_FUN_01c496e0();
    FUN_03308b88(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


