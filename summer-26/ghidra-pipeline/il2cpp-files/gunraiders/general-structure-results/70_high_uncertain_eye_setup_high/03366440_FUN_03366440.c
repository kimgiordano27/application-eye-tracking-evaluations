/*
FUNCTION_NAME: FUN_03366440
ENTRY_POINT: 03366440
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03366440(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  if ((DAT_0453352a & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__);
    FUN_01c5d288(PTR_DAT_042304a8);
    FUN_01c5d288(PTR_DAT_0423a6d0);
    DAT_0453352a = 1;
  }
  puVar3 = Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__;
  puVar2 = PTR_DAT_0423a6d0;
  puVar1 = PTR_DAT_042304a8;
  puVar6 = Method_System_Collections_Generic_List_Enumerator<MasterAudio_AudioInfo>_get_Current__;
  if ((param_3 & 1) != 0) {
    puVar6 = Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_Dispose__;
    if (param_2 != 0) {
      if (param_2 == 4) {
        lVar4 = *(long *)PTR_DAT_0423a6d0;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar2;
        }
        FUN_03359f08(param_1,9,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),1);
        return *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      }
      if (param_2 != 8) goto OVRManager__remove_InputFocusLost;
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      lVar4 = *(long *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar3;
      }
      FUN_03359f08(param_1,8,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xb8),1);
      local_28 = 0x7ff8000000000000;
      uVar5 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&local_28);
      return uVar5;
    }
  }
OVRManager__remove_InputFocusLost:
  uVar5 = thunk_FUN_01c273e8(puVar6);
  uVar5 = FUN_0335992c(param_1,uVar5);
  uVar7 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar5,uVar7);
}


