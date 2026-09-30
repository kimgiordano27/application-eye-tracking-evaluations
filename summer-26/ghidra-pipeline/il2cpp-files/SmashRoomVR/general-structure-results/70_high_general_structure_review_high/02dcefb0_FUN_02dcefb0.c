/*
FUNCTION_NAME: FUN_02dcefb0
ENTRY_POINT: 02dcefb0
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


void FUN_02dcefb0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  uVar12 = param_3._4_4_;
  fVar10 = param_3._0_4_;
  uVar9 = param_2._4_4_;
  fVar8 = param_2._0_4_;
  if ((DAT_03fefedc & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fefedc = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(param_4 + 0x28) == 0) {
    uVar5 = *(undefined8 *)(param_4 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar5,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = 0x60;
      if (*(int *)(param_4 + 0x28) != 1) {
        lVar2 = 0x68;
      }
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_02dcf200;
      lVar2 = *(long *)(param_4 + lVar2);
      fVar7 = (float)FUN_03929130(*(long *)(param_4 + 0x30),0);
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_02dcf200;
      fVar13 = *(float *)(param_4 + 0x44);
      fVar6 = fVar8;
      fVar11 = fVar10;
      uVar5 = FUN_03928d34(*(long *)(param_4 + 0x30),0);
      if (lVar2 == 0) goto LAB_02dcf200;
      fVar8 = fVar8 * fVar13;
      fVar10 = fVar10 * fVar13;
      FUN_0395b168(fVar7 * fVar13,fVar8,fVar10,uVar5,CONCAT44(uVar9,fVar6),CONCAT44(uVar12,fVar11),
                   lVar2,0,0);
    }
  }
  else {
    lVar2 = 0x60;
    if (*(int *)(param_4 + 0x28) != 1) {
      lVar2 = 0x68;
    }
    lVar4 = *(long *)(param_4 + lVar2);
    lVar2 = FUN_0391c27c(param_4,0);
    if (lVar2 == 0) goto LAB_02dcf200;
    fVar6 = (float)FUN_039290b4(lVar2,0);
    fVar7 = *(float *)(param_4 + 0x44);
    if (*(char *)(param_4 + 0x4c) != '\0') {
      fVar7 = -*(float *)(param_4 + 0x44);
    }
    if (lVar4 == 0) goto LAB_02dcf200;
    fVar10 = fVar10 * fVar7;
    fVar8 = fVar8 * fVar7;
    FUN_0395b004(fVar6 * fVar7,fVar8,fVar10,lVar4,0,0);
  }
  lVar2 = 0x60;
  if (*(int *)(param_4 + 0x28) != 1) {
    lVar2 = 0x68;
  }
  lVar4 = *(long *)(param_4 + lVar2);
  lVar2 = FUN_0391c27c(param_4,0);
  if ((lVar2 != 0) && (fVar7 = (float)FUN_03929130(lVar2,0), lVar4 != 0)) {
    fVar6 = *(float *)(param_4 + 0x40);
    fVar10 = fVar10 * fVar6;
    uVar12 = 0;
    fVar8 = fVar8 * fVar6;
    uVar9 = 0;
    FUN_0395b004(fVar7 * fVar6,fVar8,fVar10,lVar4,0,0);
    uVar5 = *(undefined8 *)(param_4 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = 0x60;
    if (*(int *)(param_4 + 0x28) != 1) {
      lVar2 = 0x68;
    }
    if (*(long *)(param_4 + 0x38) != 0) {
      lVar2 = *(long *)(param_4 + lVar2);
      fVar7 = (float)FUN_039291ac(*(long *)(param_4 + 0x38),0);
      if (*(long *)(param_4 + 0x38) != 0) {
        fVar13 = *(float *)(param_4 + 0x48);
        fVar6 = fVar8;
        fVar11 = fVar10;
        uVar5 = FUN_03928d34(*(long *)(param_4 + 0x38),0);
        if (lVar2 != 0) {
          FUN_0395b168(fVar7 * fVar13,fVar8 * fVar13,fVar10 * fVar13,uVar5,CONCAT44(uVar9,fVar6),
                       CONCAT44(uVar12,fVar11),lVar2,0,0);
          return;
        }
      }
    }
  }
LAB_02dcf200:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


