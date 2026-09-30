/*
FUNCTION_NAME: FUN_01c3f11c
ENTRY_POINT: 01c3f11c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_01c3f11c(undefined1 param_1 [16],undefined8 param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  
  if ((DAT_03fed587 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed587 = 1;
  }
  if ((char)param_4[4] == '\0') {
    return;
  }
  if ((param_4[6] == 0) || (lVar2 = FUN_0391c27c(param_4[6],0), lVar2 == 0)) goto LAB_01c3f3a4;
  uVar8 = FUN_03928d34(lVar2,0);
  if (param_4[7] == 0) goto LAB_01c3f3a4;
  uVar10 = param_2;
  uVar11 = param_3;
  uVar9 = FUN_03928d34(param_4[7],0);
  uVar3 = uVar11;
  lVar2 = FUN_0391c27c(param_4,0);
  fVar12 = (float)uVar3;
  if (lVar2 == 0) goto LAB_01c3f3a4;
  FUN_03928d34(lVar2,0);
  lVar2 = FUN_0391c27c(param_4,0);
  if (lVar2 == 0) goto LAB_01c3f3a4;
  fVar7 = (float)FUN_03928d34(lVar2,0);
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  fVar7 = (float)uVar9 - fVar7;
  fVar12 = (float)uVar11 - fVar12;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (SQRT(fVar12 * fVar12 + fVar7 * fVar7 + 0.0) <= 0.0) {
    return;
  }
  lVar2 = param_4[0x12];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar2,0);
  if ((uVar3 & 1) == 0) {
    plVar6 = (long *)param_4[0x12];
LAB_01c3f2cc:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(plVar6,0);
    if ((uVar3 & 1) != 0) {
      if (param_4[0x12] == 0) goto LAB_01c3f3a4;
      if (*(int *)(param_4[0x12] + 0x20) == 1) {
        pcVar5 = *(code **)(*param_4 + 0x1e8);
        uVar4 = *(undefined8 *)(*param_4 + 0x1f0);
        plVar6 = param_4;
        goto LAB_01c3f318;
      }
    }
    lVar2 = param_4[0xf];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03923030(lVar2,0);
    if ((uVar9 & 1) != 0) {
      if (param_4[0xf] == 0) goto LAB_01c3f3a4;
      FUN_0395b9a4((ulong)(uint)fVar7,0,(ulong)(uint)fVar12,param_4[0xf],0);
    }
  }
  else {
    plVar6 = (long *)param_4[0x12];
    if (plVar6 == (long *)0x0) goto LAB_01c3f3a4;
    if ((int)plVar6[4] != 0) goto LAB_01c3f2cc;
    uVar10 = 0;
    pcVar5 = *(code **)(*plVar6 + 0x208);
    uVar4 = *(undefined8 *)(*plVar6 + 0x210);
    uVar9 = (ulong)(uint)fVar7;
    uVar11 = (ulong)(uint)fVar12;
LAB_01c3f318:
    (*pcVar5)(uVar9,uVar10,uVar11,plVar6,uVar4);
  }
  if (param_4[6] != 0) {
    lVar2 = FUN_0391c27c(param_4[6],0);
    if (lVar2 != 0) {
      FUN_03928dd4(uVar8,param_2,param_3 & 0xffffffff,lVar2,0);
      return;
    }
  }
LAB_01c3f3a4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


