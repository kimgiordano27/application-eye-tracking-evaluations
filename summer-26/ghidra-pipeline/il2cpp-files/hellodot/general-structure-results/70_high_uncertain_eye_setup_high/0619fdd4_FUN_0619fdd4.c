/*
FUNCTION_NAME: FUN_0619fdd4
ENTRY_POINT: 0619fdd4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0619fdd4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  if ((DAT_06a83d51 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_51_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_52_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_53_0_TypeInfo);
    DAT_06a83d51 = 1;
  }
  iVar2 = FUN_05ef05b4(0,3,0);
  if (iVar2 == 1) {
    if (param_2 == 0) goto LAB_0619fe88;
    lVar3 = *(long *)(param_2 + 0x58);
    puVar1 = (undefined8 *)OVRPlugin_OVRP_1_52_0_TypeInfo;
  }
  else if (iVar2 == 0) {
    if (param_2 == 0) goto LAB_0619fe88;
    lVar3 = *(long *)(param_2 + 0x58);
    puVar1 = (undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo;
  }
  else {
    if (param_2 == 0) goto LAB_0619fe88;
    lVar3 = *(long *)(param_2 + 0x58);
    puVar1 = (undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo;
  }
  if (lVar3 != 0) {
    FUN_033b0770(lVar3,*puVar1);
    return;
  }
LAB_0619fe88:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


