/*
FUNCTION_NAME: FUN_05f53090
ENTRY_POINT: 05f53090
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_05f53090(long param_1)

{
  bool bVar1;
  ulong uVar2;
  uint *puVar3;
  
  if ((DAT_06b84151 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    DAT_06b84151 = 1;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 400) != 0)) {
    uVar2 = FUN_0583d7f0(*(long *)(param_1 + 400),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x188) == 0) goto LAB_05f53110;
      puVar3 = (uint *)FUN_037b0144(*(long *)(param_1 + 0x188),
                                    *(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
      bVar1 = ((*puVar3 ^ 0xffffffff) & 3) == 0;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
LAB_05f53110:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


