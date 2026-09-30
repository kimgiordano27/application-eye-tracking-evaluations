/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$.cctor
ENTRY_POINT: 01dc1178
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_110_0___cctor(long *param_1,long param_2,int param_3,long param_4,int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar1 = PTR_DAT_02354d90;
    if (param_4 != 0) {
      puVar1 = PTR_DAT_02355000;
    }
    uVar2 = thunk_FUN_010303a8(puVar1);
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
    uVar4 = thunk_FUN_010303a8(PTR_DAT_023578e8);
    FUN_01c66c10(uVar3,uVar2,uVar4,0);
  }
  else {
    if ((-1 < param_5) && (-1 < param_3)) {
                    /* WARNING: Could not recover jumptable at 0x01dc11a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 600))();
      return;
    }
    puVar1 = PTR_DAT_02355018;
    if (-1 < param_3) {
      puVar1 = PTR_DAT_02354f90;
    }
    uVar2 = thunk_FUN_010303a8(puVar1);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar3 = thunk_FUN_010400dc();
    uVar4 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar3,uVar2,uVar4,0);
  }
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235aae8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar2);
}


