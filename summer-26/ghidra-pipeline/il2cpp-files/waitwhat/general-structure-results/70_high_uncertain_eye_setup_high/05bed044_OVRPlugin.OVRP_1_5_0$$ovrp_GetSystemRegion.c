/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 05bed044
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  float fVar5;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05bed094;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bed094:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_069e9470(lVar2,0);
    lVar2 = FUN_0506e670();
    if (lVar2 != 0) {
      return fVar5 * *(float *)(lVar2 + 0x60);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


