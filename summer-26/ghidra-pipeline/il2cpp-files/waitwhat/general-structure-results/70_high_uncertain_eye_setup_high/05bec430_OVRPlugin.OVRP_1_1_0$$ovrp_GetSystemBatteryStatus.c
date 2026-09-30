/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryStatus
ENTRY_POINT: 05bec430
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_7
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  long *plVar6;
  uint uVar7;
  
  plVar6 = *(long **)(unaff_x21 + 0x448);
  if ((*(byte *)(unaff_x19 + 0xd72) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c4240);
    FUN_03188a78(PTR_DAT_07113448);
    *(undefined1 *)(unaff_x19 + 0xd72) = 1;
  }
  if (*(int *)(*plVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = FUN_05bec2f8();
  if (**(long **)(*plVar6 + 0xb8) == 0) {
OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c4240,
                       *(undefined4 *)(**(long **)(*plVar6 + 0xb8) + 0x18));
  lVar4 = *plVar6;
  uVar7 = 0;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *plVar6;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
      return lVar3;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *plVar6;
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) break;
    if (lVar2 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    uVar1 = *(uint *)(lVar5 + (long)(int)uVar7 * 4 + 0x20);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    if (lVar3 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    if (*(uint *)(lVar3 + 0x18) <= uVar7) break;
    lVar5 = (long)(int)uVar7;
    uVar7 = uVar7 + 1;
    *(bool *)(lVar3 + lVar5 + 0x20) =
         (*(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) == 0 || uVar1 == 3) || uVar1 == 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


