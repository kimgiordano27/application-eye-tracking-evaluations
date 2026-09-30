/*
FUNCTION_NAME: GameAnalyticsSDK.Wrapper.GA_Wrapper$$StartTimer
ENTRY_POINT: 0123dd5c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void GameAnalyticsSDK_Wrapper_GA_Wrapper__StartTimer
               (long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,long param_6
               ,long param_7,long param_8)

{
  ulong uVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulong in_x9;
  undefined2 *puVar5;
  long lVar6;
  ulong *unaff_x20;
  undefined2 *puVar7;
  void *unaff_x26;
  ulong uVar8;
  
  if ((in_x9 & 1) == 0) {
    puVar7 = (undefined2 *)((long)unaff_x20 + 2);
  }
  else {
    puVar7 = (undefined2 *)unaff_x20[2];
  }
  if (param_3 < 0x3fffffffffffffe7) {
    uVar1 = param_3 << 1;
    if (param_3 << 1 <= param_4 + param_3) {
      uVar1 = param_4 + param_3;
    }
    uVar8 = 0xb;
    if (10 < uVar1) {
      uVar8 = uVar1 + 8 & 0xfffffffffffffff8;
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011e21ec("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = param_1 + 1;
  }
  puVar3 = operator_new(uVar8 << 1);
  puVar4 = puVar3;
  puVar5 = puVar7;
  for (lVar6 = param_6; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_8 != 0) {
    memcpy(puVar3 + param_6,unaff_x26,param_8 << 1);
  }
  if (param_5 - param_7 != param_6) {
    lVar6 = (param_7 + param_6) - param_5;
    puVar4 = puVar3 + param_6 + param_8;
    puVar5 = puVar7 + param_6 + param_7;
    do {
      bVar2 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar2);
  }
  if (param_3 != 10) {
    operator_delete(puVar7);
  }
  uVar1 = (param_5 - param_7) + param_8;
  *unaff_x20 = uVar8 | 1;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = (ulong)puVar3;
  puVar3[uVar1] = 0;
  return;
}


