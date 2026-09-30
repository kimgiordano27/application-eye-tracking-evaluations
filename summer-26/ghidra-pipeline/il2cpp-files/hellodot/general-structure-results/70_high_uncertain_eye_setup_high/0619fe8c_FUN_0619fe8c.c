/*
FUNCTION_NAME: FUN_0619fe8c
ENTRY_POINT: 0619fe8c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0619fe8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  if ((DAT_06a83d53 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_54_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_126_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_49_0_TypeInfo);
    DAT_06a83d53 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_126_0_TypeInfo;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
    if (lVar4 != 0) {
      FUN_0616f92c(lVar4,0);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar4 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar1),
         puVar3 = OVRPlugin_OVRP_1_54_0_TypeInfo, puVar2 = OVRPlugin_OVRP_1_49_0_TypeInfo,
         lVar4 != 0)) {
        lVar4 = FUN_0446d200(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo,
                             *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
        if (lVar4 != 0) {
          FUN_0616f92c(lVar4,0);
          if (((*(long *)(param_1 + 0x10) != 0) &&
              (lVar4 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar1), lVar4 != 0))
             && (lVar4 = FUN_0446d200(lVar4,*(undefined8 *)puVar2,*(undefined8 *)puVar3), lVar4 != 0
                )) {
            FUN_0616f92c(lVar4,0);
            FUN_0619ff78(param_1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


