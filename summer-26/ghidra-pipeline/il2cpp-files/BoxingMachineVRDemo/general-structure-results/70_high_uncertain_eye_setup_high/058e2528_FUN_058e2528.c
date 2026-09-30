/*
FUNCTION_NAME: FUN_058e2528
ENTRY_POINT: 058e2528
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_058e2528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_80 = param_2;
  uStack_78 = param_3;
  if ((DAT_06b80b69 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_PoseStatef_TypeInfo);
    FUN_02d6084c(OVRPlugin_Posef_TypeInfo);
    FUN_02d6084c(OVRPlugin_Quatf_TypeInfo);
    FUN_02d6084c(OVRPlugin_Result_TypeInfo);
    FUN_02d6084c(OVRPlugin_Size3f_TypeInfo);
    DAT_06b80b69 = 1;
  }
  local_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_62 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_5a = 0;
  if (*(long *)(param_1 + 0xf0) == 0) goto LAB_058e26fc;
  lVar4 = FUN_05816274(&local_80,0);
  local_88 = 0;
  lVar5 = FUN_0582a6ec(param_1 + 0x58,0);
  if (lVar4 == lVar5) {
    uVar6 = 0;
LAB_058e264c:
    FUN_03dce408(&local_88,uVar6,*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
  }
  else {
    lVar5 = FUN_0582a6ec(param_1 + 0x88,0);
    if (lVar4 == lVar5) {
      uVar6 = 1;
      goto LAB_058e264c;
    }
    lVar5 = FUN_0582a6ec(param_1 + 0x70,0);
    if (lVar4 == lVar5) {
      uVar6 = 2;
      goto LAB_058e264c;
    }
    lVar5 = FUN_0582a6ec(param_1 + 0xa0,0);
    if (lVar4 == lVar5) {
      uVar6 = 3;
      goto LAB_058e264c;
    }
    lVar5 = FUN_0582a6ec(param_1 + 0xb8,0);
    if (lVar4 == lVar5) {
      uVar6 = 4;
      goto LAB_058e264c;
    }
  }
  if ((char)local_88 != '\0') {
    uVar6 = FUN_058162a4(&local_80,0);
    uVar2 = FUN_0585bec0(0,uVar6,0);
    FUN_034533c4(*(undefined8 *)(param_1 + 0xf0),&local_70,
                 *(undefined8 *)OVRPlugin_PoseStatef_TypeInfo);
    uVar3 = FUN_03dce420(&local_88,*(undefined8 *)OVRPlugin_Size3f_TypeInfo);
    FUN_058f4680(&local_50,&local_70,uVar3,uVar2 & 1,0);
    uStack_3a = CONCAT62(uStack_58,local_5a);
    uStack_48 = uStack_68;
    local_50 = local_70;
    uStack_42 = uStack_62;
    uStack_40 = uStack_60;
    FUN_034604a8(*(undefined8 *)(param_1 + 0xf0),&local_50,0,0,
                 *(undefined8 *)OVRPlugin_Posef_TypeInfo);
  }
LAB_058e26fc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


