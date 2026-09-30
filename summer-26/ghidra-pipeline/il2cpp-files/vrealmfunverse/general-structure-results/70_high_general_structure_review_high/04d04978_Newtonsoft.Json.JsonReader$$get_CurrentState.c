/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$get_CurrentState
ENTRY_POINT: 04d04978
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__get_CurrentState(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar1 = PTR_DAT_0632ff18;
  if ((DAT_066c84bf & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0632ff18);
    DAT_066c84bf = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d04804(param_1,param_3);
  if ((param_1 == 0x25c2) && (4 < param_2)) {
    thunk_FUN_02ba3594(PTR_DAT_06312a10);
    FUN_0275e12c();
    uVar3 = FUN_04d0494c();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06329fa8);
    uVar4 = FUN_04dbdb84(uVar4,0);
    puVar1 = PTR_DAT_06312310;
    uStack000000000000000c = 1;
    uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000008 + 4);
    uStack0000000000000008 = 4;
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    uVar3 = FUN_04c0b0ac(uVar3,uVar4,uVar5,uVar2,0);
  }
  else {
    if (param_2 - 1U < 0xc) {
      return;
    }
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_0632f568);
    uVar3 = FUN_04dbdb84(uVar3,0);
  }
  thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
  uVar4 = thunk_FUN_02b79644();
  uVar5 = thunk_FUN_02ba3594(PTR_DAT_0632efb0);
  FUN_04cf1968(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_0632ff38);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar3);
}


