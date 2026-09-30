/*
FUNCTION_NAME: FUN_01c36e70
ENTRY_POINT: 01c36e70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_4
*/


void FUN_01c36e70(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_03fed53d & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
                      );
    thunk_FUN_01ad9084(Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed53d = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_5 != 0) {
    fVar7 = (float)FUN_039544dc(param_5,0);
    fVar8 = param_3;
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    param_3 = param_3 * param_3;
    *(float *)(param_4 + 0x38) = SQRT(param_3 + fVar7 * fVar7 + param_2 * param_2);
    fVar7 = (float)FUN_039544e8(param_5,0);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    *(float *)(param_4 + 0x34) = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + param_3 * param_3);
    if (*(float *)(param_4 + 0x38) < *(float *)(param_4 + 0x30)) {
      return;
    }
    lVar2 = FUN_03954858(param_5,0);
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_01ed712c(lVar2,*(undefined8 *)
                                           Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
                                   );
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03923030(plVar3,0);
      if ((uVar4 & 1) == 0) {
        if (*(char *)(param_4 + 0x3c) == '\0') {
          return;
        }
        uVar5 = *(undefined8 *)(param_4 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        plVar3 = *(long **)(param_4 + 0x48);
        uVar9 = *(undefined4 *)(param_4 + 0x40);
      }
      else {
        uVar9 = *(undefined4 *)(param_4 + 0x20);
      }
      FUN_03954b9c(&local_a0,param_5,0,0);
      uStack_68 = uStack_98;
      local_70 = local_a0;
      uStack_58 = uStack_88;
      local_60 = uStack_90;
      uStack_48 = uStack_78;
      local_50 = local_80;
      FUN_0395ee3c(&local_70,0);
      puVar1 = Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__;
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_02d0b20c(&local_b0,
                   *(undefined8 *)Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
      FUN_03954b9c(&local_a0,param_5,0,0);
      uStack_68 = uStack_98;
      local_70 = local_a0;
      uStack_58 = uStack_88;
      local_60 = uStack_90;
      uStack_48 = uStack_78;
      local_50 = local_80;
      FUN_0395ee48(&local_70,0);
      local_a0 = 0;
      uStack_98 = 0;
      FUN_02d0b20c(&local_a0,*(undefined8 *)puVar1);
      uVar5 = FUN_0391c2b8(param_4,0);
      uVar6 = FUN_03954858(param_5,0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x188))
                  (uVar9,plVar3,local_b0,uStack_a8,local_a0,uStack_98,1,uVar5,uVar6,
                   *(undefined8 *)(*plVar3 + 400));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


