/*
FUNCTION_NAME: FUN_07ded22c
ENTRY_POINT: 07ded22c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_15
*/


void FUN_07ded22c(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  char cVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0899a1dd & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_Posef_TypeInfo);
    FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    DAT_0899a1dd = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  local_40 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar4 = false;
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_07ded594;
  }
  FUN_04e9b100(&local_88,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
  local_40 = local_68;
  puStack_58 = puStack_80;
  local_60 = local_88;
  uStack_48 = uStack_70;
  local_50 = local_78;
  local_88 = 0;
  puStack_80 = &local_60;
  do {
    uVar5 = FUN_061dc36c(&local_60,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      FUN_061dc368(&local_60,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_07ded3cc;
      FUN_04e9de50(&local_b0,*(long *)(param_1 + 0x18),*(undefined8 *)OVRPlugin_Posef_TypeInfo);
      puVar2 = OVRPlugin_OVRP_1_98_0_TypeInfo;
      local_88 = 0;
      puStack_80 = &local_b0;
      goto LAB_07ded380;
    }
  } while ((int)local_50 != param_2);
  FUN_061dc368(&local_60,*(undefined8 *)puVar2);
LAB_07ded3b0:
  bVar4 = true;
LAB_07ded4a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_07ded594:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
LAB_07ded380:
  uVar5 = FUN_061dc5b8(&local_b0,*(undefined8 *)puVar2);
  if ((uVar5 & 1) != 0) goto code_r0x07ded390;
  FUN_061dc5b4(&local_b0,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
LAB_07ded3cc:
  if (param_2 < 0x30001) {
    if (param_2 == 0x10003) {
      cVar6 = *(char *)(param_1 + 0x50);
      goto LAB_07ded49c;
    }
    if (param_2 == 0x30000) {
      cVar6 = *(char *)(param_1 + 0x28);
      goto LAB_07ded49c;
    }
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if (param_2 < 0x50002) {
      if (param_2 == 0x3000a) {
        cVar6 = *(char *)(param_1 + 0x74);
      }
      else if (param_2 == 0x50000) {
        cVar6 = *(char *)(param_1 + 0xcc);
      }
      else {
        if (param_2 != 0x50001) goto LAB_07ded4a4;
        cVar6 = *(char *)(param_1 + 0xec);
      }
    }
    else if (param_2 == 0x50002) {
      cVar6 = *(char *)(param_1 + 0x90);
    }
    else if (param_2 == 0x50003) {
      cVar6 = *(char *)(param_1 + 0xac);
    }
    else {
      if (param_2 != 0x70005) goto LAB_07ded4a4;
      cVar6 = *(char *)(param_1 + 0x104);
    }
LAB_07ded49c:
    bVar4 = cVar6 != '\0';
  }
  goto LAB_07ded4a4;
code_r0x07ded390:
  if ((int)local_a0 == param_2) goto code_r0x07ded39c;
  goto LAB_07ded380;
code_r0x07ded39c:
  FUN_061dc5b4(&local_b0,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
  goto LAB_07ded3b0;
}


