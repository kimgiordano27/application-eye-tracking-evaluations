/*
FUNCTION_NAME: FUN_075c57bc
ENTRY_POINT: 075c57bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_075c57bc(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((DAT_0826e85b & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_0826e85b = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_86_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_86_0_TypeInfo)) {
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 == (long *)0x0) {
        if (param_2 != (long *)0x0) {
          return (ulong)(param_2[2] == 0);
        }
      }
      else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x075c5858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,param_2[2],*(undefined8 *)(*plVar2 + 0x140));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  return 0;
}


