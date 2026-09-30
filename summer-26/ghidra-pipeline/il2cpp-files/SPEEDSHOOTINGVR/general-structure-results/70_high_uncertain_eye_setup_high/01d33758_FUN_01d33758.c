/*
FUNCTION_NAME: FUN_01d33758
ENTRY_POINT: 01d33758
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_01d33758(undefined8 param_1,long param_2,undefined4 param_3,int param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined *puVar4;
  
  if (param_2 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar2 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be10);
    FUN_01c5e120(uVar2,uVar5,0);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_023579e0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar5);
  }
  if (param_4 < 0) {
    uVar2 = thunk_FUN_010303a8(PTR_DAT_0234be50);
    uVar2 = FUN_01d75474(uVar2,0);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar5 = thunk_FUN_010400dc();
    puVar4 = PTR_DAT_0234be48;
  }
  else {
    if (-1 < param_5) {
      if (param_5 <= *(int *)(param_2 + 0x18) - param_4) {
        if (param_5 != 0) {
          lVar1 = 0;
          if (*(int *)(param_2 + 0x18) != 0) {
            lVar1 = param_2 + 0x20;
          }
          uVar2 = OVRManager__IsOpenXRLoaderActive(lVar1,param_3,param_4,param_5,0);
          return uVar2;
        }
        return 0xffffffff;
      }
      uVar2 = thunk_FUN_010303a8(PTR_DAT_0234be38);
      uVar2 = FUN_01d75474(uVar2,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar5 = thunk_FUN_010400dc();
      FUN_01c65ad0(uVar5,uVar2,0);
      goto LAB_01d338c0;
    }
    uVar2 = thunk_FUN_010303a8(PTR_DAT_0234be60);
    uVar2 = FUN_01d75474(uVar2,0);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar5 = thunk_FUN_010400dc();
    puVar4 = PTR_DAT_0234be58;
  }
  uVar3 = thunk_FUN_010303a8(puVar4);
  FUN_01c62494(uVar5,uVar3,uVar2,0);
LAB_01d338c0:
  uVar2 = thunk_FUN_010303a8(PTR_DAT_023579e0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,uVar2);
}


