/*
FUNCTION_NAME: FUN_0550dba0
ENTRY_POINT: 0550dba0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0550dba0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_06bbf5d8 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_87_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_88_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_89_0_TypeInfo);
    DAT_06bbf5d8 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = FUN_037835ec(*(long *)(param_1 + 0x10),param_3,
                           *(undefined8 *)OVRPlugin_OVRP_1_88_0_TypeInfo), lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar1 + 0x14) = param_4;
    if (*(long *)(lVar1 + 0x20) == 0) {
      if (lVar2 == 0) goto LAB_0550dc74;
      FUN_0378344c(lVar2,param_3,*(undefined8 *)OVRPlugin_OVRP_1_87_0_TypeInfo);
    }
    else {
      if (lVar2 == 0) goto LAB_0550dc74;
      FUN_03783694(lVar2,param_3,*(long *)(lVar1 + 0x20),
                   *(undefined8 *)OVRPlugin_OVRP_1_89_0_TypeInfo);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    return;
  }
LAB_0550dc74:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


