/*
FUNCTION_NAME: FUN_01c49004
ENTRY_POINT: 01c49004
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


void FUN_01c49004(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  
  if ((DAT_03fed5d5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5d5 = 1;
  }
  if (*(char *)(param_5 + 0x20) == '\0') {
    return;
  }
  if (*(char *)(param_5 + 0x21d) == '\0') {
    return;
  }
  if (*(char *)(param_5 + 0x250) != '\0') {
    lVar1 = *(long *)(param_5 + 0x248);
    if (*(char *)(param_5 + 0x251) != '\0') {
      if ((lVar1 == 0) || (lVar1 = FUN_0391c27c(lVar1,0), lVar1 == 0)) goto LAB_01c493ac;
      fVar11 = *(float *)(param_5 + 0x230);
      fVar9 = *(float *)(param_5 + 0x22c);
      fVar6 = (float)FUN_03927438(*(undefined4 *)(param_5 + 0x228),lVar1,0);
      fVar14 = fVar9;
      fVar8 = fVar11;
      lVar1 = FUN_0391c27c(param_5,0);
      if (lVar1 == 0) goto LAB_01c493ac;
      fVar7 = (float)FUN_03928d34(lVar1,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_00b5568c <
          SQRT((fVar8 - fVar11) * (fVar8 - fVar11) +
               (fVar7 - fVar6) * (fVar7 - fVar6) + (fVar14 - fVar9) * (fVar14 - fVar9))) {
        lVar1 = FUN_0391c27c(param_5,0);
        if (((*(long *)(param_5 + 0x248) == 0) ||
            (lVar2 = FUN_0391c27c(*(long *)(param_5 + 0x248),0), lVar2 == 0)) ||
           (FUN_03927438(*(undefined4 *)(param_5 + 0x228),*(undefined4 *)(param_5 + 0x22c),
                         *(undefined4 *)(param_5 + 0x230),lVar2,0), lVar1 == 0)) goto LAB_01c493ac;
        FUN_03928dd4(lVar1,0);
      }
      lVar1 = FUN_0391c27c(param_5,0);
      if (lVar1 == 0) goto LAB_01c493ac;
      uVar3 = FUN_03928c2c(lVar1,0);
      uVar5 = *(undefined8 *)(param_5 + 0x220);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_0391f968(uVar3,uVar5,0);
      if ((uVar4 & 1) != 0) {
        lVar1 = FUN_0391c27c(param_5,0);
        if (lVar1 == 0) goto LAB_01c493ac;
        FUN_039294c8(lVar1,*(undefined8 *)(param_5 + 0x220),0);
      }
      goto LAB_01c4938c;
    }
    if ((lVar1 == 0) || (lVar1 = FUN_0391c27c(lVar1,0), lVar1 == 0)) goto LAB_01c493ac;
    uVar12 = (ulong)*(uint *)(param_5 + 0x230);
    uVar10 = (ulong)*(uint *)(param_5 + 0x22c);
    uVar3 = FUN_03927438(*(undefined4 *)(param_5 + 0x228),lVar1,0);
    uVar4 = uVar10;
    uVar13 = uVar12;
    lVar1 = FUN_0391c27c(param_5,0);
    param_3 = (float)uVar13;
    fVar14 = (float)uVar4;
    if (lVar1 == 0) goto LAB_01c493ac;
    fVar8 = (float)FUN_03928d34(lVar1,0);
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    fVar8 = fVar8 - (float)uVar3;
    fVar14 = fVar14 - (float)uVar10;
    param_3 = param_3 - (float)uVar12;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    param_3 = param_3 * param_3;
    param_2 = DAT_00b555b8;
    if (DAT_00b555b8 < SQRT(param_3 + fVar8 * fVar8 + fVar14 * fVar14)) {
      lVar1 = FUN_0391c27c(param_5,0);
      if (lVar1 == 0) goto LAB_01c493ac;
      FUN_03928dd4(uVar3,uVar10,uVar12,lVar1,0);
      param_3 = (float)uVar12;
      param_2 = (float)uVar10;
    }
  }
  if (*(char *)(param_5 + 0x251) != '\0') {
    lVar1 = FUN_0391c27c(param_5,0);
    if (((*(long *)(param_5 + 0x248) == 0) ||
        (lVar2 = FUN_0391c27c(*(long *)(param_5 + 0x248),0), lVar2 == 0)) ||
       (fVar14 = (float)FUN_039274a0(lVar2,0), lVar1 == 0)) {
LAB_01c493ac:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    fVar8 = *(float *)(param_5 + 0x240);
    fVar6 = *(float *)(param_5 + 0x234);
    fVar9 = *(float *)(param_5 + 0x238);
    fVar11 = *(float *)(param_5 + 0x23c);
    FUN_03928f54((param_2 * fVar11 + param_4 * fVar6 + fVar14 * fVar8) - param_3 * fVar9,
                 (param_3 * fVar6 + param_4 * fVar9 + param_2 * fVar8) - fVar14 * fVar11,
                 (fVar14 * fVar9 + param_4 * fVar11 + param_3 * fVar8) - param_2 * fVar6,
                 ((param_4 * fVar8 - fVar14 * fVar6) - param_2 * fVar9) - param_3 * fVar11,lVar1,0);
  }
LAB_01c4938c:
  *(undefined1 *)(param_5 + 0x21d) = 0;
  return;
}


