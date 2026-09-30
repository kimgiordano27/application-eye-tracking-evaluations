/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueDestroyLayer
ENTRY_POINT: 090cd404
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  long *in_x10;
  int *piVar3;
  float fVar4;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
                    /* try { // try from 090cd448 to 091cd44b has its CatchHandler @ 090cd53c */
                    /* try { // try from 090cd44c to 091cd51f has its CatchHandler @ 090cd190 */
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_090cd450;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_090cd450:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    fVar4 = (float)FUN_0a18c388(lVar2,0);
    lVar2 = FUN_084e1388();
    if (lVar2 != 0) {
      return fVar4 * *(float *)(lVar2 + 0x70);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


