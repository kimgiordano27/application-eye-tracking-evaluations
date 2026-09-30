/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 027f1708
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


void OVRPlugin__get_tiledMultiResSupported(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((DAT_04125189 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cefcf0);
    FUN_01ab69ac(PTR_DAT_03cd7210);
    FUN_01ab69ac(PTR_DAT_03cfd5d8);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04125189 = 1;
  }
  uVar7 = *param_2;
  *param_2 = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2,param_1);
  lVar2 = FUN_027efd58(param_1);
  puVar1 = PTR_DAT_03cc0330;
  if (lVar2 == 0) {
    FUN_027f1424(param_1);
  }
  else {
    lVar3 = *(long *)PTR_DAT_03cc0330;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cefcf0);
      FUN_027dea88(lVar3,0,*(undefined8 *)PTR_DAT_03cfd5d8);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      plVar5 = (long *)(*(long *)(lVar4 + 0xb8) + 0x40);
      *plVar5 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar3);
    }
    if (*(int *)(*(long *)PTR_DAT_03cd7210 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027dfbcc(lVar2,lVar3,param_1,1);
  }
  uVar6 = FUN_025cb0a0(0);
  if ((uVar6 & 1) != 0) {
    FUN_025cb0b4(0,2,0);
  }
  FUN_027ee76c(param_1,1);
  *param_2 = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2,uVar7);
  return;
}


