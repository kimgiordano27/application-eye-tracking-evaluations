/*
FUNCTION_NAME: FUN_05bec41c
ENTRY_POINT: 05bec41c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


long FUN_05bec41c(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  puVar2 = PTR_DAT_07113448;
  if ((DAT_0754ed72 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c4240);
    FUN_03188a78(PTR_DAT_07113448);
    DAT_0754ed72 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar3 = FUN_05bec2f8();
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c4240,
                       *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
  lVar5 = *(long *)puVar2;
  uVar7 = 0;
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar2;
    }
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    if (*(int *)(lVar6 + 0x18) <= (int)uVar7) {
      return lVar4;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar2;
      lVar6 = **(long **)(lVar5 + 0xb8);
      if (lVar6 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar7) break;
    if (lVar3 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    uVar1 = *(uint *)(lVar6 + (long)(int)uVar7 * 4 + 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    if (lVar4 == 0) goto OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) break;
    lVar6 = (long)(int)uVar7;
    uVar7 = uVar7 + 1;
    *(bool *)(lVar4 + lVar6 + 0x20) =
         (*(int *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) == 0 || uVar1 == 3) || uVar1 == 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


