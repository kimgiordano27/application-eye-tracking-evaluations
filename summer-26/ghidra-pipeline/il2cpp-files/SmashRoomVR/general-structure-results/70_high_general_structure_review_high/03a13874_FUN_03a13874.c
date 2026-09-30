/*
FUNCTION_NAME: FUN_03a13874
ENTRY_POINT: 03a13874
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_03a13874(undefined8 param_1,void *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined1 auStack_488 [168];
  undefined1 auStack_3e0 [168];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined1 auStack_270 [272];
  undefined1 auStack_160 [276];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_03ffce94 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffce94 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_38 = 0;
  local_40 = 0;
  local_44[0] = 0;
  local_48 = 0;
  local_4c = 0;
  if ((DAT_00b550f0 <= *(float *)((long)param_2 + 8)) &&
     (DAT_00b550f0 <= *(float *)((long)param_2 + 0xc))) {
    uVar3 = *(undefined8 *)((long)param_2 + 0x88);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)((long)param_2 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        UnityEngine_UI_Scrollbar__Update
                  (param_1,*(undefined8 *)((long)param_2 + 0x78),
                   *(undefined4 *)((long)param_2 + 0x108),&local_40,local_44,&local_48,&local_4c);
        uVar3 = *(undefined8 *)((long)param_2 + 0x78);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_0391f968(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          FUN_03a99f94(&local_320,local_40 & 0xffffffff,local_40._4_4_,(undefined4)local_38,
                       local_38._4_4_,param_2,0);
          memcpy(auStack_488,&local_320,0xa4);
          FUN_03a8f630(&local_338,0,auStack_488,0);
        }
        else {
          FUN_03a99f94(&local_320,local_40 & 0xffffffff,local_40._4_4_,(undefined4)local_38,
                       local_38._4_4_,param_2,0);
          memcpy(auStack_3e0,&local_320,0xa4);
          FUN_03a8f6fc(&local_338,0,auStack_3e0,0);
        }
        uStack_318 = uStack_330;
        local_320 = local_338;
        local_310 = local_328;
        local_490 = local_328;
        uStack_498 = uStack_330;
        local_4a0 = local_338;
        FUN_03a1274c(param_1,&local_4a0,*(undefined8 *)((long)param_2 + 0x78),local_48,local_44[0],
                     *(undefined8 *)((long)param_2 + 0x90),*(undefined4 *)((long)param_2 + 0x108),
                     local_4c);
      }
      else {
        memcpy(auStack_270,param_2,0x110);
        FUN_03a13e54(param_1,auStack_270);
      }
    }
    else {
      memcpy(auStack_160,param_2,0x110);
      FUN_03a13a90(param_1,auStack_160);
    }
  }
  return;
}


