/*
FUNCTION_NAME: FUN_072e5524
ENTRY_POINT: 072e5524
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_072e5524(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_28;
  
  puVar1 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
  if ((DAT_07ef2aad & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_07ef2aad = 1;
  }
  local_28 = 0;
  FUN_072e5384(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (param_2 != 0) {
    lVar3 = FUN_073266c4(param_2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_072e562c;
      FUN_0422aaf4(*(long *)(param_1 + 0x60),param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                  );
    }
    local_28 = *(undefined8 *)(param_2 + 0x260);
    iVar2 = FUN_0732f648(&local_28,0);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        local_28 = *(undefined8 *)(param_2 + 0x260);
        uVar4 = FUN_0733091c(&local_28,iVar5,0);
        FUN_072e5524(param_1,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
    return;
  }
LAB_072e562c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


