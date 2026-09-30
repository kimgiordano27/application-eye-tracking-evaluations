/*
FUNCTION_NAME: FUN_03570fc4
ENTRY_POINT: 03570fc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03570fc4(undefined4 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((DAT_0412dfe0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    DAT_0412dfe0 = 1;
  }
  puVar1 = OVRPlugin_Size3f_TypeInfo;
  if ((param_3 & 1) != 0) {
    lVar2 = *(long *)OVRPlugin_Size3f_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar5 == 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar3,*(undefined8 *)PTR_DAT_03cc8bb0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
      *puVar4 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
    }
    else {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      FUN_021e4d64(lVar5,*(undefined8 *)PTR_DAT_03ccbbf8);
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03571120(param_1,param_2,param_3 & 1,param_4,param_5,param_6);
  return;
}


