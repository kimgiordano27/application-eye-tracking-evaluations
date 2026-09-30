/*
FUNCTION_NAME: FUN_072e540c
ENTRY_POINT: 072e540c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_072e540c(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_28;
  
  lVar3 = param_1;
  if ((DAT_07ef2aac & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<EventProvider_Registration>_get_Current__
                );
    lVar3 = FUN_03642964(
                        Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                        );
    DAT_07ef2aac = 1;
  }
  puVar1 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
  local_28 = 0;
  lVar3 = FUN_072e5144(lVar3,param_2);
  if (lVar3 != 0) {
    FUN_072e5304(param_1,param_2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (param_2 != 0) {
    lVar3 = FUN_073266c4(param_2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_072e5520;
      FUN_0422b414(*(long *)(param_1 + 0x60),param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<EventProvider_Registration>_get_Current__
                  );
    }
    local_28 = *(undefined8 *)(param_2 + 0x260);
    iVar2 = FUN_0732f648(&local_28,0);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        local_28 = *(undefined8 *)(param_2 + 0x260);
        uVar4 = FUN_0733091c(&local_28,iVar5,0);
        FUN_072e540c(param_1,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
    return;
  }
LAB_072e5520:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


