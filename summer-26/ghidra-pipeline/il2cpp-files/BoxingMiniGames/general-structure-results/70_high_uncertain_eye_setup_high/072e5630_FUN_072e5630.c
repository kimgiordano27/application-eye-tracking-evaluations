/*
FUNCTION_NAME: FUN_072e5630
ENTRY_POINT: 072e5630
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_072e5630(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_07ef2aae & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<EventProvider_Registration>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_07ef2aae = 1;
  }
  uVar2 = FUN_07382778(param_1,param_2,param_3,0);
  puVar1 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
  if ((param_3 & 1) == 0) {
    return;
  }
  lVar3 = FUN_072e5144(uVar2,param_2);
  if (lVar3 == 0) {
    FUN_072e5384(param_1,param_2);
  }
  else {
    FUN_072e5304(param_1,param_2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (param_2 != 0) {
    lVar3 = FUN_073266c4(param_2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
    if (lVar3 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_0422b414(*(long *)(param_1 + 0x60),param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<EventProvider_Registration>_get_Current__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


