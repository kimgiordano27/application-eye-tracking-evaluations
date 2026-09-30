/*
FUNCTION_NAME: FUN_01c7a940
ENTRY_POINT: 01c7a940
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_01c7a940(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_03fed783 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_326);
    thunk_FUN_01ad9084(StringLiteral_327);
    thunk_FUN_01ad9084(StringLiteral_328);
    thunk_FUN_01ad9084(StringLiteral_329);
    thunk_FUN_01ad9084(StringLiteral_330);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed783 = 1;
  }
  local_60 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_11c = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_124 = 0;
  uStack_130 = 0;
  lVar1 = FUN_01c7a358();
  if (lVar1 == 0) goto LAB_01c7ab38;
  if (*(char *)(lVar1 + 0x5c) == '\0') {
    (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    return;
  }
  local_b4 = 0xffffffff;
  local_b8[0] = 0;
  if (param_1[0x14] == 0) goto LAB_01c7ab38;
  uVar2 = FUN_0381f384(param_1[0x14],&local_50,&local_b4,&local_b0,&local_b4,local_b8,0);
  if ((uVar2 & 1) != 0) {
    if ((char)local_b0 != '\0') {
      FUN_02d093e0(&local_190,&local_b0,*(undefined8 *)StringLiteral_329);
      memcpy(&local_110,&local_190,0x50);
      uVar2 = FUN_03b322a8(&local_110,0);
      if ((uVar2 & 1) == 0) goto LAB_01c7aa60;
LAB_01c7aaf0:
      lVar1 = param_1[0x15];
      if (lVar1 == 0) goto LAB_01c7ab38;
      uVar3 = 1;
      goto LAB_01c7ab0c;
    }
LAB_01c7aa60:
    if ((char)local_50 != '\0') {
      FUN_02d08eb4(&local_190,&local_50,*(undefined8 *)StringLiteral_330);
      uStack_138 = uStack_188;
      local_140 = local_190;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      uStack_11c = uStack_16c;
      local_124 = local_174;
      uStack_120 = uStack_170;
      lVar1 = FUN_03959ba8(&local_140,0);
      if ((lVar1 == 0) || (lVar1 = FUN_0391c2b8(lVar1,0), lVar1 == 0)) goto LAB_01c7ab38;
      uVar3 = FUN_01ed712c(lVar1,*(undefined8 *)StringLiteral_326);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar2 = FUN_0391f968(uVar3,0,0);
      if ((uVar2 & 1) != 0) goto LAB_01c7aaf0;
    }
  }
  lVar1 = param_1[0x15];
  if (lVar1 == 0) {
LAB_01c7ab38:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar3 = 0;
LAB_01c7ab0c:
  FUN_0391b78c(lVar1,uVar3,0);
  return;
}


