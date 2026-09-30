/*
FUNCTION_NAME: FUN_02dcf204
ENTRY_POINT: 02dcf204
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_02dcf204(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  
  uVar15 = param_3._4_4_;
  fVar13 = param_3._0_4_;
  uVar12 = param_2._4_4_;
  fVar10 = param_2._0_4_;
  fVar11 = fVar10;
  if ((DAT_03fefedd & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fefedd = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(param_4 + 0x28) == 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar7,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = 0x60;
      if (*(int *)(param_4 + 0x28) != 1) {
        lVar4 = 0x68;
      }
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_02dcf424;
      lVar4 = *(long *)(param_4 + lVar4);
      fVar9 = (float)FUN_03929130(*(long *)(param_4 + 0x30),0);
      if ((*(long *)(param_4 + 0x30) == 0) ||
         (fVar8 = fVar11, fVar14 = fVar13, uVar7 = FUN_03928d34(*(long *)(param_4 + 0x30),0),
         lVar4 == 0)) goto LAB_02dcf424;
      uVar1 = CONCAT44(uVar12,fVar8);
      uVar2 = CONCAT44(uVar15,fVar14);
      fVar11 = fVar11 * param_1;
      uVar12 = 0;
      fVar13 = fVar13 * param_1;
      uVar15 = 0;
      FUN_0395b168(fVar9 * param_1,fVar11,fVar13,uVar7,uVar1,uVar2,lVar4,1,0);
    }
  }
  else {
    lVar4 = 0x60;
    if (*(int *)(param_4 + 0x28) != 1) {
      lVar4 = 0x68;
    }
    lVar6 = *(long *)(param_4 + lVar4);
    lVar4 = FUN_0391c27c(param_4,0);
    if (lVar4 == 0) goto LAB_02dcf424;
    fVar8 = (float)FUN_039290b4(lVar4,0);
    fVar9 = param_1;
    if (*(char *)(param_4 + 0x4c) != '\0') {
      fVar9 = -param_1;
    }
    if (lVar6 == 0) goto LAB_02dcf424;
    fVar13 = fVar13 * fVar9;
    uVar15 = 0;
    fVar11 = fVar11 * fVar9;
    uVar12 = 0;
    FUN_0395b004(fVar8 * fVar9,fVar11,fVar13,lVar6,1,0);
  }
  uVar7 = *(undefined8 *)(param_4 + 0x38);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03923030(uVar7,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = 0x60;
    if (*(int *)(param_4 + 0x28) != 1) {
      lVar4 = 0x68;
    }
    if (*(long *)(param_4 + 0x38) != 0) {
      lVar4 = *(long *)(param_4 + lVar4);
      fVar9 = (float)FUN_039291ac(*(long *)(param_4 + 0x38),0);
      if ((*(long *)(param_4 + 0x38) != 0) &&
         (fVar8 = fVar11, fVar14 = fVar13, uVar7 = FUN_03928d34(*(long *)(param_4 + 0x38),0),
         lVar4 != 0)) {
        FUN_0395b168(fVar9 * fVar10,fVar11 * fVar10,fVar13 * fVar10,uVar7,CONCAT44(uVar12,fVar8),
                     CONCAT44(uVar15,fVar14),lVar4,1,0);
        goto LAB_02dcf3dc;
      }
    }
LAB_02dcf424:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_02dcf3dc:
  fVar13 = *(float *)(param_4 + 0x44);
  fVar11 = (float)FUN_03925dbc(0);
  fVar9 = *(float *)(param_4 + 0x48);
  *(float *)(param_4 + 0x44) = fVar13 + param_1 / fVar11;
  fVar11 = (float)FUN_03925dbc(0);
  *(float *)(param_4 + 0x48) = fVar9 + fVar10 / fVar11;
  return;
}


