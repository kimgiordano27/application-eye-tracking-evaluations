/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 037a9c94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceQueryResult>
               (long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02dcfd74(param_4);
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_2 == (long *)0x0) {
LAB_037a9ed8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*param_2 + 0x218))(&local_50,param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  uStack_88 = puStack_48;
  local_90 = local_50;
  uStack_78 = uStack_38;
  uStack_80 = uStack_40;
  if ((int)param_1[0x14] <= (int)param_1[2]) {
    lVar2 = thunk_FUN_02db5310(*(undefined8 *)
                                (*param_1 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x50) * 0x10
                                + 0x140));
    (**(code **)(lVar2 + 8))(param_1,param_2,param_3,&local_90,lVar2);
    return;
  }
  uVar1 = FUN_037c5850(&local_90,&uStack_98,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
LAB_037a9dfc:
    *(undefined4 *)((long)param_1 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_0357c328(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0) goto LAB_037a9ed8;
      puStack_48 = (undefined8 *)uStack_88;
      local_50 = local_90;
      uStack_38 = uStack_78;
      uStack_40 = uStack_80;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,&local_50,&local_70,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto LAB_037a9dfc;
    }
    FUN_063cf4e0(&local_a8,param_1,param_2,0);
    local_50 = 0;
    puStack_48 = &local_a8;
    FUN_037e7f64(param_1,&local_90,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68));
    FUN_063cf530(&local_a8,0);
    uVar1 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_1[0x16] == '\0')) {
      puStack_48 = (undefined8 *)uStack_88;
      local_50 = local_90;
      uStack_38 = uStack_78;
      uStack_40 = uStack_80;
      (**(code **)(*param_2 + 0x228))(param_2,param_3,&local_50,*(undefined8 *)(*param_2 + 0x230));
    }
  }
  return;
}


