/*
FUNCTION_NAME: GameAnalyticsSDK.GameAnalytics$$PauseTimer
ENTRY_POINT: 0123ddb0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void GameAnalyticsSDK_GameAnalytics__PauseTimer(ulong param_1)

{
  ulong uVar1;
  bool in_CY;
  bool bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulong in_x9;
  undefined2 *puVar5;
  long lVar6;
  long unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  undefined2 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  void *unaff_x26;
  
  if (in_CY) {
    in_x9 = param_1;
  }
  if ((long)in_x9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_011e21ec("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  puVar3 = operator_new(in_x9 << 1);
  puVar4 = puVar3;
  puVar5 = unaff_x22;
  for (lVar6 = unaff_x25; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (unaff_x19 != 0) {
    memcpy(puVar3 + unaff_x25,unaff_x26,unaff_x19 << 1);
  }
  if (unaff_x24 - unaff_x23 != unaff_x25) {
    lVar6 = (unaff_x23 + unaff_x25) - unaff_x24;
    puVar4 = puVar3 + unaff_x25 + unaff_x19;
    puVar5 = unaff_x22 + unaff_x25 + unaff_x23;
    do {
      bVar2 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar2);
  }
  if (unaff_x21 != 10) {
    operator_delete(unaff_x22);
  }
  uVar1 = (unaff_x24 - unaff_x23) + unaff_x19;
  *unaff_x20 = in_x9 | 1;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = (ulong)puVar3;
  puVar3[uVar1] = 0;
  return;
}


