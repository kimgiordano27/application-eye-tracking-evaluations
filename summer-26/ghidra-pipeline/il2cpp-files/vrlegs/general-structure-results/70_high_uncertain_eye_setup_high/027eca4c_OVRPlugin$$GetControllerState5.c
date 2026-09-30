/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 027eca4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState5(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_DAT_03cc0330;
  if ((DAT_04125133 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04125133 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  thunk_FUN_01a4b338();
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if ((uVar1 & 0x1600000) == 0) {
    if (param_2 == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
      uVar3 = thunk_FUN_01a89e68();
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cd7388);
      FUN_026a44fc(uVar3,uVar4,0);
      goto LAB_027ecbb4;
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) {
        lVar2 = FUN_01aa50f0(param_1 + 0x28,param_2,0);
        if (lVar2 == 0) {
          FUN_027eed28(param_1,1);
          return;
        }
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar3 = thunk_FUN_01a89e68();
        puVar5 = PTR_DAT_03cfd440;
      }
      else {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar3 = thunk_FUN_01a89e68();
        puVar5 = PTR_DAT_03cfd438;
      }
    }
    else {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar3 = thunk_FUN_01a89e68();
      puVar5 = PTR_DAT_03cfd430;
    }
  }
  else {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar3 = thunk_FUN_01a89e68();
    puVar5 = PTR_DAT_03cfd428;
  }
  uVar4 = thunk_FUN_01a6ca08(puVar5);
  FUN_0276a4a8(uVar3,uVar4,0);
LAB_027ecbb4:
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfd448);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar4);
}


