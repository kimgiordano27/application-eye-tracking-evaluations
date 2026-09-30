/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 05166b30
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)FUN_02d9a5d4();
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782478)) {
    FUN_055327c0(plVar3,0);
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88(plVar3);
}


