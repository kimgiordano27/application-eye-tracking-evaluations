/*
FUNCTION_NAME: FUN_059b7b74
ENTRY_POINT: 059b7b74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_059b7b74(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
                    /* try { // try from 059b7b74 to 05ab7c07 has its CatchHandler @ 059b7af4 */
  if ((DAT_06dc14c9 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_88_0_TypeInfo);
    DAT_06dc14c9 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_88_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_88_0_TypeInfo)) {
      uVar2 = FUN_059b7b54(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


