/*
FUNCTION_NAME: FUN_034d4fb0
ENTRY_POINT: 034d4fb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_034d4fb0(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02f41ef8(param_4);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  if (param_2 == (long *)0x0) {
System_Runtime_CompilerServices_Unsafe__SizeOf<OVRPlugin_SpaceDiscoveryResult>:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*param_2 + 0x218))(&local_50,param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  uStack_78 = puStack_48;
  local_80 = local_50;
  local_70 = local_40;
  if ((int)param_1[0x14] <= (int)param_1[2]) {
    lVar2 = thunk_FUN_02f2742c(*(undefined8 *)
                                (*param_1 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x50) * 0x10
                                + 0x140));
    (**(code **)(lVar2 + 8))(param_1,param_2,param_3,&local_80,lVar2);
    return;
  }
  uVar1 = FUN_034eaf5c(&local_80,&uStack_88,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
LAB_034d5128:
    *(undefined4 *)((long)param_1 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_0334615c(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0)
      goto System_Runtime_CompilerServices_Unsafe__SizeOf<OVRPlugin_SpaceDiscoveryResult>;
      puStack_48 = (undefined8 *)uStack_78;
      local_50 = local_80;
      local_40 = local_70;
      local_60 = 0;
      uStack_58 = 0;
      local_68 = 0;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,&local_50,&local_68,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto LAB_034d5128;
    }
    FUN_06176474(&local_98,param_1,param_2,0);
    local_50 = 0;
    puStack_48 = &local_98;
    FUN_0350f518(param_1,&local_80,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68));
    FUN_06176494(&local_98,0);
    uVar1 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_1[0x16] == '\0')) {
      puStack_48 = (undefined8 *)uStack_78;
      local_50 = local_80;
      local_40 = local_70;
      (**(code **)(*param_2 + 0x228))(param_2,param_3,&local_50,*(undefined8 *)(*param_2 + 0x230));
    }
  }
  return;
}


