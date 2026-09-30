/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryLevel
ENTRY_POINT: 05bec494
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryLevel(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  uint uVar5;
  
  lVar2 = FUN_03188b1c();
  lVar3 = *unaff_x21;
  uVar5 = 0;
  do {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar3 = *unaff_x21;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) {
OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(lVar4 + 0x18) <= (int)uVar5) {
      return lVar2;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar3 = *unaff_x21;
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_05bec560:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x19 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    uVar1 = *(uint *)(lVar4 + (long)(int)uVar5 * 4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05bec560;
    if (lVar2 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_05bec560;
    lVar4 = (long)(int)uVar5;
    uVar5 = uVar5 + 1;
    *(bool *)(lVar2 + lVar4 + 0x20) =
         (*(int *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) == 0 || uVar1 == 3) || uVar1 == 0x10;
  } while( true );
}


