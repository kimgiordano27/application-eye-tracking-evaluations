/*
FUNCTION_NAME: FUN_03180e98
ENTRY_POINT: 03180e98
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


undefined8 FUN_03180e98(undefined8 param_1,long param_2,long *param_3,long *param_4,float *param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_03ff21dc & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80d50);
    thunk_FUN_01ad9084(PTR_DAT_03d80d58);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff21dc = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) == 1) {
      *param_5 = 0.0;
      lVar2 = FUN_02b59714(param_2,0,*(undefined8 *)PTR_DAT_03d80d58);
      *param_4 = lVar2;
      thunk_FUN_01b4f09c(param_4,lVar2);
      *param_3 = lVar2;
      thunk_FUN_01b4f09c(param_3,lVar2);
      return 1;
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      *param_4 = 0;
      thunk_FUN_01b4f09c(param_4,0);
      *param_3 = 0;
      thunk_FUN_01b4f09c(param_3,0);
LAB_0318100c:
      *param_5 = 0.0;
      return 0;
    }
    lVar2 = FUN_03181150(param_1,param_2,0);
    *param_3 = lVar2;
    thunk_FUN_01b4f09c(param_3,lVar2);
    lVar2 = FUN_031812ec(param_1,param_2,0);
    *param_4 = lVar2;
    thunk_FUN_01b4f09c(param_4,lVar2);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    lVar2 = *param_3;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *param_4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar2,0,0);
      if ((uVar3 & 1) != 0) goto LAB_0318100c;
    }
    lVar2 = *param_4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      *param_4 = *param_3;
      thunk_FUN_01b4f09c(param_4);
      if (*param_3 == 0) goto LAB_0318114c;
      FUN_031849a8(*param_3,0);
      lVar2 = FUN_03181150(param_2,1);
      *param_3 = lVar2;
      thunk_FUN_01b4f09c(param_3,lVar2);
    }
    lVar2 = *param_3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      *param_3 = *param_4;
      thunk_FUN_01b4f09c(param_3);
      if (*param_4 == 0) goto LAB_0318114c;
      FUN_031849a8(*param_4,0);
      lVar2 = FUN_031812ec(param_2,1);
      *param_4 = lVar2;
      thunk_FUN_01b4f09c(param_4,lVar2);
    }
    if (*param_4 != 0) {
      fVar4 = (float)FUN_031849a8(*param_4,0);
      if (*param_3 != 0) {
        fVar5 = (float)FUN_031849a8(*param_3,0);
        fVar6 = 0.0;
        if (fVar4 - fVar5 != 0.0) {
          if (*param_3 == 0) goto LAB_0318114c;
          fVar6 = (float)FUN_031849a8(*param_3,0);
          fVar6 = ((float)param_1 - fVar6) / (fVar4 - fVar5);
        }
        *param_5 = fVar6;
        return 1;
      }
    }
  }
LAB_0318114c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


