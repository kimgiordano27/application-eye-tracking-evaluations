/*
FUNCTION_NAME: FUN_01c4a6ac
ENTRY_POINT: 01c4a6ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


undefined8
FUN_01c4a6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  uVar5 = param_2;
  uVar6 = param_3;
  if ((DAT_03fed5e7 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed5e7 = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_70 = 0;
  if ((param_5 != 0) &&
     (lVar3 = FUN_0391c27c(param_5,0),
     puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__, lVar3 != 0)) {
    uVar8 = FUN_03928d34(lVar3,0);
    uVar2 = FUN_03920150(*(undefined4 *)(param_4 + 0x4c),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar10 = param_2;
    uVar12 = param_3;
    uVar4 = FUN_039562dc(param_1,param_2,param_3,uVar8,uVar5,uVar6,&local_80,uVar2,1,0);
    fVar11 = (float)uVar12;
    fVar9 = (float)uVar10;
    if ((uVar4 & 1) != 0) {
      fVar7 = (float)FUN_03959c54(&local_80,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = FUN_03959ba8(&local_80,0);
      if (lVar3 == 0) goto LAB_01c4a89c;
      fVar7 = (float)param_1 - fVar7;
      fVar9 = (float)param_2 - fVar9;
      fVar11 = (float)param_3 - fVar11;
      uVar5 = FUN_0391c2b8(lVar3,0);
      uVar6 = FUN_0391c2b8(param_5,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_0391f968(uVar5,uVar6,0);
      if ((DAT_00b55330 < SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9)) &&
         ((uVar4 & 1) != 0)) {
        return 1;
      }
    }
    return 0;
  }
LAB_01c4a89c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


