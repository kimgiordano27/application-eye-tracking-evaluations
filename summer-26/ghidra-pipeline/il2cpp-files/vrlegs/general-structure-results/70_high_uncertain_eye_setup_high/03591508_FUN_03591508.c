/*
FUNCTION_NAME: FUN_03591508
ENTRY_POINT: 03591508
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03591508(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_34 [4];
  
  puVar3 = OVRPlugin_Size3f_TypeInfo;
  if ((DAT_0412e07b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    DAT_0412e07b = 1;
  }
  local_34[0] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x25c);
  uVar2 = *(undefined4 *)(param_1 + 0x214);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_03570fc4(0x2026,param_2,0,uVar1,uVar2,local_34,0);
  if (lVar4 == 0) {
    if (param_2 == 0) {
LAB_03591754:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(param_2 + 0x138);
    if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
      uVar1 = *(undefined4 *)(param_1 + 0x25c);
      uVar2 = *(undefined4 *)(param_1 + 0x214);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar3,0);
      }
      lVar4 = FUN_035714e4(0x2026,param_2,lVar4,1,uVar1,uVar2,local_34,0);
      if (lVar4 != 0) goto LAB_035915a8;
    }
    auVar7 = FUN_03597770(0,0);
    uVar5 = auVar7._8_8_;
    if (auVar7._0_8_ != 0) {
      auVar7 = FUN_03597770(0);
      uVar5 = auVar7._8_8_;
      if (auVar7._0_8_ == 0) goto LAB_03591754;
      if (0 < *(int *)(auVar7._0_8_ + 0x18)) {
        uVar5 = FUN_03597770(0);
        uVar1 = *(undefined4 *)(param_1 + 0x25c);
        uVar2 = *(undefined4 *)(param_1 + 0x214);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        lVar4 = FUN_035714e4(0x2026,param_2,uVar5,1,uVar1,uVar2,local_34,0);
        uVar5 = 0;
        if (lVar4 != 0) goto LAB_035915a8;
      }
    }
    uVar5 = FUN_03597650(0,uVar5);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar6 = FUN_036cee6c(uVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar5 = FUN_03597650(0);
    uVar1 = *(undefined4 *)(param_1 + 0x25c);
    uVar2 = *(undefined4 *)(param_1 + 0x214);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar3);
    }
    lVar4 = FUN_03570fc4(0x2026,uVar5,1,uVar1,uVar2,local_34,0);
    if (lVar4 == 0) {
      return;
    }
  }
LAB_035915a8:
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0359f744(&local_60,lVar4,0,0);
  *(undefined8 *)(param_1 + 0x668) = uStack_48;
  *(undefined8 *)(param_1 + 0x660) = uStack_50;
  *(undefined8 *)(param_1 + 0x658) = uStack_58;
  *(undefined8 *)(param_1 + 0x650) = local_60;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x650,0);
  return;
}


