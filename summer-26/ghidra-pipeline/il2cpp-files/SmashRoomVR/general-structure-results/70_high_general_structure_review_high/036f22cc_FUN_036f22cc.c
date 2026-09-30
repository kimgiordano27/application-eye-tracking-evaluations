/*
FUNCTION_NAME: FUN_036f22cc
ENTRY_POINT: 036f22cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_036f22cc(long param_1,long param_2)

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
  
  puVar3 = PTR_DAT_03d9cb18;
  if ((DAT_03ff7637 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9cb10);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb18);
    DAT_03ff7637 = 1;
  }
  local_34[0] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x25c);
  uVar2 = *(undefined4 *)(param_1 + 0x214);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_036d1ff4(0x2026,param_2,0,uVar1,uVar2,local_34,0);
  if (lVar4 == 0) {
    if (param_2 == 0) {
LAB_036f2518:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *(long *)(param_2 + 0x138);
    if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
      uVar1 = *(undefined4 *)(param_1 + 0x25c);
      uVar2 = *(undefined4 *)(param_1 + 0x214);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3,0);
      }
      lVar4 = FUN_036d2514(0x2026,param_2,lVar4,1,uVar1,uVar2,local_34,0);
      if (lVar4 != 0) goto LAB_036f236c;
    }
    auVar7 = FUN_036fba04(0,0);
    uVar5 = auVar7._8_8_;
    if (auVar7._0_8_ != 0) {
      auVar7 = FUN_036fba04(0);
      uVar5 = auVar7._8_8_;
      if (auVar7._0_8_ == 0) goto LAB_036f2518;
      if (0 < *(int *)(auVar7._0_8_ + 0x18)) {
        uVar5 = FUN_036fba04(0);
        uVar1 = *(undefined4 *)(param_1 + 0x25c);
        uVar2 = *(undefined4 *)(param_1 + 0x214);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        lVar4 = FUN_036d2514(0x2026,param_2,uVar5,1,uVar1,uVar2,local_34,0);
        uVar5 = 0;
        if (lVar4 != 0) goto LAB_036f236c;
      }
    }
    uVar5 = FUN_036fb8e4(0,uVar5);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar6 = FUN_0391f968(uVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar5 = FUN_036fb8e4(0);
    uVar1 = *(undefined4 *)(param_1 + 0x25c);
    uVar2 = *(undefined4 *)(param_1 + 0x214);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    lVar4 = FUN_036d1ff4(0x2026,uVar5,1,uVar1,uVar2,local_34,0);
    if (lVar4 == 0) {
      return;
    }
  }
LAB_036f236c:
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_03703ae8(&local_60,lVar4,0,0);
  *(undefined8 *)(param_1 + 0x668) = uStack_48;
  *(undefined8 *)(param_1 + 0x660) = uStack_50;
  *(undefined8 *)(param_1 + 0x658) = uStack_58;
  *(undefined8 *)(param_1 + 0x650) = local_60;
  thunk_FUN_01b4f09c(param_1 + 0x650,0);
  return;
}


