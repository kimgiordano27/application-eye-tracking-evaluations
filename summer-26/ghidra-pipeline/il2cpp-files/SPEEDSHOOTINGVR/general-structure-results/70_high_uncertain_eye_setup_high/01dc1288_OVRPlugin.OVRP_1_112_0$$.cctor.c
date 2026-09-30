/*
FUNCTION_NAME: OVRPlugin.OVRP_1_112_0$$.cctor
ENTRY_POINT: 01dc1288
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_112_0___cctor(long *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  
  if (in_w8 - param_3 < param_4) {
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar2 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_02354d90);
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02350eb0);
    FUN_01c62494(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0235aaf0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar3);
  }
  if (param_4 != 0) {
    lVar1 = 0;
    if (in_w8 != 0) {
      lVar1 = param_2 + 0x20;
    }
                    /* WARNING: Could not recover jumptable at 0x01dc12c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x298))
                      (param_1,lVar1 + param_3,param_4,0,*(undefined8 *)(*param_1 + 0x2a0));
    return uVar2;
  }
  return 0;
}


