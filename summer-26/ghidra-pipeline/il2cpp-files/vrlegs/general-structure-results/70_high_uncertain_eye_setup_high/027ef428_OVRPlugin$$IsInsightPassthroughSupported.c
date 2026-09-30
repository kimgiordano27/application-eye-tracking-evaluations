/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 027ef428
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__IsInsightPassthroughSupported
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined4 param_6,uint param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_04125136 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04125136 = 1;
  }
  if (param_5 != 0) {
    lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0330);
    FUN_027ed758(lVar1,param_2,param_3,param_1,param_4,param_6,param_7 | 0x2000,param_5);
    if (lVar1 != 0) {
      FUN_027eed28(lVar1,0);
      return lVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
  uVar2 = thunk_FUN_01a89e68();
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cd7388);
  FUN_026a44fc(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfd538);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar3);
}


