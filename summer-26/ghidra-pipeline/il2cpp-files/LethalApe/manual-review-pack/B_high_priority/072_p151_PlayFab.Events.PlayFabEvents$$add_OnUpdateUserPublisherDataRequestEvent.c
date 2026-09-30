/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnUpdateUserPublisherDataRequestEvent
ENTRY_POINT: 0184239c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void PlayFab_Events_PlayFabEvents__add_OnUpdateUserPublisherDataRequestEvent(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') || (*(char *)(param_1 + 0x58) == '\0')
       ) {
      return;
    }
    lVar1 = FUN_01eed2b4(param_1,0);
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = FUN_01eed2b4(param_1,0);
    if (((lVar2 != 0) && (FUN_01efaa5c(lVar2,0), lVar3 != 0)) &&
       (PlayFab_Events_PlayFabEvents__remove_OnValidateAmazonIAPReceiptRequestEvent(lVar3),
       lVar1 != 0)) {
      UnityEngine_UIElements_ScheduledItem__get_delayMs(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


