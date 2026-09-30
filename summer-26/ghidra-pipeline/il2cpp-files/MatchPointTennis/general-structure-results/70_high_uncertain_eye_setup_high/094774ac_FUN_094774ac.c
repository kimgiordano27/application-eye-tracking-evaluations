/*
FUNCTION_NAME: FUN_094774ac
ENTRY_POINT: 094774ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_094774ac(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ushort local_80;
  ushort local_7e;
  undefined2 local_7c;
  ushort local_7a;
  ushort local_78;
  ushort local_76;
  ushort local_74;
  ushort local_72;
  ushort local_70;
  ushort local_6e;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  undefined2 local_66;
  ushort local_60;
  ushort local_5c;
  ushort local_58;
  ushort local_54;
  ushort local_50;
  ushort local_4c;
  ushort local_48;
  ushort local_44;
  ushort local_40;
  ushort local_3c;
  ushort local_38;
  ushort local_34;
  
  if ((DAT_0a53f246 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09fd34d0);
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(PTR_DAT_09f35098);
    FUN_04447ba8(PTR_DAT_09fd34d8);
    FUN_04447ba8(PTR_DAT_09fd34e0);
    FUN_04447ba8(PTR_DAT_09fd34e8);
    FUN_04447ba8(PTR_DAT_09fd34f0);
    FUN_04447ba8(PTR_DAT_09fd34f8);
    FUN_04447ba8(PTR_DAT_09fd3500);
    FUN_04447ba8(PTR_DAT_09fd3508);
    DAT_0a53f246 = 1;
  }
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  uVar6 = FUN_09477890();
  puVar3 = PTR_DAT_09f35098;
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_09f35098 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  iVar5 = FUN_09477350();
  if (iVar5 != 0) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_09fd34d0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_09476fd4();
  if (DAT_0a529025 == '\0') {
    FUN_04447ba8(PTR_DAT_09f55080);
    DAT_0a529025 = '\x01';
  }
  puVar2 = PTR_DAT_09f1e538;
  lVar9 = **(long **)(*(long *)PTR_DAT_09f55080 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_09531730(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) goto LAB_0947788c;
    local_34 = (ushort)*(byte *)(lVar9 + 0x20);
    local_38 = (ushort)*(byte *)(lVar9 + 0x22);
    uVar1 = *(undefined4 *)(lVar9 + 0x1c);
    iVar5 = FUN_094d65a8(0);
    local_7a = (ushort)(iVar5 == 1);
    local_40 = (ushort)*(byte *)(lVar9 + 0x23);
    local_76 = (ushort)*(byte *)(lVar9 + 0x24);
    local_74 = (ushort)*(byte *)(lVar9 + 0x26);
    local_72 = (ushort)*(byte *)(lVar9 + 0x27);
    local_70 = (ushort)*(byte *)(lVar9 + 0x2c);
    local_6e = (ushort)*(byte *)(lVar9 + 0x2d);
    local_6c = (ushort)*(byte *)(lVar9 + 0x2e);
    local_6a = (ushort)*(byte *)(lVar9 + 0x2f);
    local_7e = local_38;
    local_80 = local_34;
    local_7c = (undefined2)uVar1;
    local_78 = (ushort)*(byte *)(lVar9 + 0x23);
    local_60 = (ushort)*(byte *)(lVar9 + 0x21);
    local_68 = (ushort)*(byte *)(lVar9 + 0x21);
    local_66 = (undefined2)*(undefined4 *)(lVar9 + 0x28);
    local_5c = local_6a;
    local_58 = local_6c;
    local_54 = local_6e;
    local_50 = local_70;
    local_4c = local_72;
    local_48 = local_74;
    local_44 = local_76;
    local_3c = local_7a;
    FUN_09477bb0(&local_80);
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *(long *)puVar3;
  }
  Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor
            (param_1,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_09fd3508,
             *(undefined8 *)PTR_DAT_09fd34d8);
  Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor
            (param_1,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
             *(undefined8 *)PTR_DAT_09fd3500,*(undefined8 *)PTR_DAT_09fd34e0);
  lVar7 = FUN_094773e4(param_1);
  if ((lVar7 == 0) && (lVar7 = FUN_09477448(param_1), lVar7 == 0)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c33b0(*(undefined8 *)PTR_DAT_09fd34f8,0);
  }
  else {
    lVar7 = FUN_094773e4(param_1);
    if (lVar7 == 0) {
      puVar8 = (undefined8 *)PTR_DAT_09fd34f0;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar8 = (undefined8 *)PTR_DAT_09fd34f0;
      }
    }
    else {
      lVar7 = FUN_09477448(param_1);
      if (lVar7 != 0) {
        FUN_09477c28();
        goto LAB_09477820;
      }
      puVar8 = (undefined8 *)PTR_DAT_09fd34e8;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar8 = (undefined8 *)PTR_DAT_09fd34e8;
      }
    }
    FUN_094c6b48(*puVar8,0);
  }
LAB_09477820:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_09531730(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) {
LAB_0947788c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(lVar9 + 0x28) == 3) {
      FUN_09476530(1);
    }
  }
  lVar9 = FUN_094773e4(param_1);
  bVar4 = false;
  if (lVar9 != 0) {
    lVar9 = FUN_09477448(param_1);
    bVar4 = lVar9 != 0;
  }
  return bVar4;
}


