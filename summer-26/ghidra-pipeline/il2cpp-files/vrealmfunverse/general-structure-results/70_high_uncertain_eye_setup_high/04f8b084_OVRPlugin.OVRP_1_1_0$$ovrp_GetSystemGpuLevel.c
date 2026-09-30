/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemGpuLevel
ENTRY_POINT: 04f8b084
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemGpuLevel(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  
  plVar1 = (long *)FUN_04f8a35c();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_1_0__ovrp_SetSystemGpuLevel;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02b7654c(plVar1,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,5);
OVRPlugin_OVRP_1_1_0__ovrp_SetSystemGpuLevel:
                    /* WARNING: Could not recover jumptable at 0x04f8b0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,unaff_w19,puVar2[1]);
  return;
}


