/*
FUNCTION_NAME: FUN_03569e18
ENTRY_POINT: 03569e18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03569e18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_24;
  
  if ((DAT_0412dfba & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(OVRPlugin_Hand_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_Operator_OpType_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    DAT_0412dfba = 1;
  }
  puVar2 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  bVar3 = false;
  if (*(int *)(param_1 + 0x48) == 1) {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = FUN_03776950(param_1 + 0x50,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    iVar5 = FUN_0377715c(uVar7,uVar4,0);
    bVar3 = iVar5 == 0;
  }
  puVar2 = PTR_DAT_03cc4750;
  FUN_0356ac08(param_1,3,bVar3,1);
  FUN_0356ac08(param_1,9,bVar3,1);
  FUN_0356ac08(param_1,10,bVar3,0);
  FUN_0356ac08(param_1,0xb,bVar3,0);
  FUN_0356ac08(param_1,0xd,bVar3,0);
  FUN_0356ac08(param_1,0x61c,bVar3,0);
  FUN_0356ac08(param_1,0x200b,bVar3,0);
  FUN_0356ac08(param_1,0x200e,bVar3,0);
  FUN_0356ac08(param_1,0x200f,bVar3,0);
  FUN_0356ac08(param_1,0x2028,bVar3,0);
  FUN_0356ac08(param_1,0x2029,bVar3,0);
  FUN_0356ac08(param_1,0x2060,bVar3,0);
  lVar1 = param_1 + 0x50;
  fVar8 = (float)FUN_03776990(lVar1,0);
  if (fVar8 == 0.0) {
    if (*(long *)(param_1 + 200) == 0) goto LAB_0356a168;
    local_58 = 0x58;
    uVar6 = FUN_0219c130(*(long *)(param_1 + 200),&local_58,*(undefined8 *)puVar2);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) goto LAB_0356a168;
      local_24 = 0x58;
      FUN_0219b634(*(long *)(param_1 + 200),&local_24,&local_58,
                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if ((CONCAT44(uStack_54,local_58) == 0) || (*(long *)(param_1 + 0xb8) == 0))
      goto LAB_0356a168;
      local_24 = *(undefined4 *)(CONCAT44(uStack_54,local_58) + 0x28);
      FUN_0219b634(*(long *)(param_1 + 0xb8),&local_24,&local_58,
                   *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
      if (CONCAT44(uStack_54,local_58) == 0) goto LAB_0356a168;
      FUN_03776e6c(&local_58,CONCAT44(uStack_54,local_58),0);
      local_40 = CONCAT44(uStack_54,local_58);
      uStack_38 = uStack_50;
      local_30 = local_48;
      FUN_03776cac(&local_40,0);
      FUN_03776998(lVar1,0);
    }
  }
  fVar8 = (float)FUN_037769a0(lVar1,0);
  if (fVar8 != 0.0) {
    return;
  }
  if (*(long *)(param_1 + 200) != 0) {
    local_58 = 0x78;
    uVar6 = FUN_0219c130(*(long *)(param_1 + 200),&local_58,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 200) != 0) {
      local_24 = 0x78;
      FUN_0219b634(*(long *)(param_1 + 200),&local_24,&local_58,
                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if ((CONCAT44(uStack_54,local_58) != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
        local_24 = *(undefined4 *)(CONCAT44(uStack_54,local_58) + 0x28);
        FUN_0219b634(*(long *)(param_1 + 0xb8),&local_24,&local_58,
                     *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_03776e6c(&local_58,CONCAT44(uStack_54,local_58),0);
          local_40 = CONCAT44(uStack_54,local_58);
          uStack_38 = uStack_50;
          local_30 = local_48;
          FUN_03776cac(&local_40,0);
          FUN_037769a8(lVar1,0);
          return;
        }
      }
    }
  }
LAB_0356a168:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


