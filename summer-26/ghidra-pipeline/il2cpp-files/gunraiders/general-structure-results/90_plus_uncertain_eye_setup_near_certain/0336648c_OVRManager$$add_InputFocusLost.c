/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 0336648c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager__add_InputFocusLost(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x22 + 0x52a) = in_w8;
  puVar2 = PTR_DAT_0423a6d0;
  puVar1 = PTR_DAT_042304a8;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<MasterAudio_AudioInfo>_get_Current__;
  if ((unaff_x21 & 1) != 0) {
    puVar4 = Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_Dispose__;
    if (unaff_w20 != 0) {
      if (unaff_w20 == 4) {
        if (*(int *)(*(long *)PTR_DAT_0423a6d0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03359f08();
        return *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      }
      if (unaff_w20 != 8) goto OVRManager__remove_InputFocusLost;
    }
    if (*(int *)(unaff_x19 + 0x5c) == 0) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__ + 0xe0
                  ) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03359f08();
      in_stack_00000008 = 0x7ff8000000000000;
      uVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&stack0x00000008);
      return uVar3;
    }
  }
OVRManager__remove_InputFocusLost:
  thunk_FUN_01c273e8(puVar4);
  uVar3 = FUN_0335992c();
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar5);
}


