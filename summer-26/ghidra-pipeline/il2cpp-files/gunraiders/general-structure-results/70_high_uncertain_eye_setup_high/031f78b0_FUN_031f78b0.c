/*
FUNCTION_NAME: FUN_031f78b0
ENTRY_POINT: 031f78b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * FUN_031f78b0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if ((DAT_045326e3 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_16_0_TypeInfo);
    DAT_045326e3 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_16_0_TypeInfo;
  if (*(long *)(param_1 + 0xb8) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xb8) + 0x20) < 1) {
      plVar2 = (long *)thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
      FUN_03313b6c(plVar2,0);
    }
    else {
      plVar2 = (long *)FUN_031f7994();
      if (plVar2 == (long *)0x0) goto LAB_031f7958;
      if (*plVar2 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar2);
      }
      *(undefined4 *)(plVar2 + 8) = 0;
      *(undefined1 *)((long)plVar2 + 0x44) = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[2] = 0;
      *(undefined4 *)(plVar2 + 5) = 0;
      plVar2[6] = 0;
      *(undefined8 *)((long)plVar2 + 0x36) = 0;
    }
    return plVar2;
  }
LAB_031f7958:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


