/*
FUNCTION_NAME: System.Buffer$$Memmove<OVRPlugin.Vector4f>
ENTRY_POINT: 043603e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Buffer__Memmove<OVRPlugin_Vector4f>
               (long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* catch() { ... } // from try @ 0436037c with catch @ 043603ec
                       catch() { ... } // from try @ 043603dc with catch @ 043603ec */
  if (param_1 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    FUN_066af6a0(uVar4,uVar5,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = PTR_DAT_084914a0;
    if ((int)param_2 < 0) {
      puVar1 = PTR_DAT_08486d40;
    }
    uVar5 = thunk_FUN_03af1434(puVar1);
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
      if (1 < param_3) {
        param_1 = param_1 + (ulong)param_2 * 0x10;
        puVar7 = (undefined8 *)(param_1 + 0x30);
        puVar6 = (undefined8 *)(param_1 + (ulong)param_3 * 0x10 + 0x10);
        do {
          uVar5 = *puVar6;
          uVar3 = puVar7[-1];
          uVar4 = puVar7[-2];
          puVar7[-1] = puVar6[1];
          puVar7[-2] = uVar5;
          puVar6[1] = uVar3;
          *puVar6 = uVar4;
          bVar2 = puVar7 < puVar6 + -2;
          puVar7 = puVar7 + 2;
          puVar6 = puVar6 + -2;
        } while (bVar2);
      }
      return;
    }
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084914a8);
    FUN_066b6070(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,param_4);
}


