/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_85
ENTRY_POINT: 01dc4090
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


void OVRPlugin_<>c__<_cctor>b__819_85
               (long *param_1,long param_2,int param_3,int param_4,uint param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_0247dabb & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_023509b0);
    FUN_00fdc2e4(PTR_DAT_02351a00);
    DAT_0247dabb = 1;
  }
  puVar1 = PTR_DAT_023509b0;
  if (param_2 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02354d90);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_023578e8);
    FUN_01c66c10(uVar3,uVar4,uVar5,0);
  }
  else {
    if ((param_4 < 0) || (param_3 < 0)) {
      puVar1 = PTR_DAT_0234be20;
      if (-1 < param_3) {
        puVar1 = PTR_DAT_0234be58;
      }
      uVar4 = thunk_FUN_010303a8(puVar1);
      thunk_FUN_010303a8(PTR_DAT_0234be28);
      uVar5 = thunk_FUN_010400dc();
      uVar3 = thunk_FUN_010303a8(PTR_DAT_0234be30);
      FUN_01c62494(uVar5,uVar4,uVar3,0);
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0235ac00);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar5,uVar4);
    }
    if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
      auVar6 = FUN_01a2d1a0(param_2,*(undefined8 *)PTR_DAT_02351a00);
      lVar2 = FUN_011b22cc(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar1);
                    /* WARNING: Could not recover jumptable at 0x01dc4148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))
                (param_1,lVar2 + param_3,param_4,param_5 & 1,*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar3 = thunk_FUN_010400dc();
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02354d90);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02350eb0);
    FUN_01c62494(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0235ac00);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar4);
}


