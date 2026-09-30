/*
FUNCTION_NAME: FUN_072e527c
ENTRY_POINT: 072e527c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_072e527c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
  if ((DAT_07ef2aab & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_07ef2aab = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
  ;
  if (param_1 != 0) {
    uVar3 = FUN_073266c4(param_1,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0);
    thunk_FUN_0367fd24(uVar3,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


