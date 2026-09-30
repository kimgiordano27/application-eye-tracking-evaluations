/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 01f67e48
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_PassthroughCapabilities___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  long lStack_18;
  
  puVar2 = PTR_DAT_027ba7e8;
  lVar1 = tpidr_el0;
  lStack_18 = *(long *)(lVar1 + 0x28);
  uStack_d8 = param_7;
  if ((DAT_0293dd65 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba7e8);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    thunk_FUN_01279b34(PTR_DAT_027ba140);
    DAT_0293dd65 = 1;
  }
  iStack_a4 = 0;
  uStack_2e = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if ((param_1 < 0) || ((int)param_3 != 0)) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f6b6f0(param_2,param_3,&iStack_a4);
    lVar4 = FUN_01f30d70(param_4,0);
    iVar5 = iStack_a4;
    if (((uVar3 & 0xffdf) != 0x44) && ((uVar3 & 0xffdf) != 0x47 || 0 < iStack_a4)) {
      if ((uVar3 & 0xffdf) == 0x58) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01f6fe0c(param_1,uVar3 - 0x21,iVar5,param_5,param_6,uStack_d8);
      }
      else {
        uStack_2e = 0;
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_36 = 0;
        uStack_40 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_e0 = lVar4;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f6f73c(param_1,&uStack_a0);
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        OVRSimpleJSON_JSONNumber__Clone(&uStack_d0,&uStack_120,0x20,0);
        if ((uVar3 & 0xffff) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f6bfb4(&uStack_d0,&uStack_a0,param_2,param_3,lStack_e0);
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f6ba54(&uStack_d0,&uStack_a0,uVar3,iVar5,lStack_e0,0);
        }
        uVar3 = OVRSimpleJSON_JSONNumber__IsNumeric(&uStack_d0,param_5,param_6,uStack_d8,0);
      }
      goto LAB_01f67fc4;
    }
    if (param_1 < 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar6 = *(undefined8 *)(lVar4 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f6fb40(param_1,iVar5,uVar6,param_5,param_6,uStack_d8);
      goto LAB_01f67fc4;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    iVar5 = -1;
  }
  uVar3 = FUN_01f6f8bc(param_1,iVar5,param_5,param_6,uStack_d8);
LAB_01f67fc4:
  if (*(long *)(lVar1 + 0x28) != lStack_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


