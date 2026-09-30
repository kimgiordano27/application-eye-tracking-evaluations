/*
FUNCTION_NAME: FUN_06b47ed4
ENTRY_POINT: 06b47ed4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06b47ed4(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if ((DAT_0755fe8b & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<ValueTuple<object,_ValueTuple<Type,_int>>>_get_Current__
                );
    FUN_03188a78(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                );
    FUN_03188a78(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                );
    DAT_0755fe8b = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    if (*(int *)(*(long *)(param_2 + 0x18) + 0x18) < 1) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0698f888(iVar1 == 0,0);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_04376c28(*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                    );
        puVar2 = 
        Method_System_Collections_Generic_List_Enumerator<ValueTuple<object,_ValueTuple<Type,_int>>>_get_Current__
        ;
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_04282494(*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<ValueTuple<object,_ValueTuple<Type,_int>>>_get_Current__
                      );
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_04282494(*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                         *(undefined8 *)puVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


