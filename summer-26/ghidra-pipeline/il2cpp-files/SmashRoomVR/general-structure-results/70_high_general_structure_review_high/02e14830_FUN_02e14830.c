/*
FUNCTION_NAME: FUN_02e14830
ENTRY_POINT: 02e14830
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_20;telemetry_or_network_hits_4
*/


void FUN_02e14830(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff012e & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4050);
    thunk_FUN_01ad9084(StringLiteral_4598);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4599);
    thunk_FUN_01ad9084(StringLiteral_4600);
    thunk_FUN_01ad9084(StringLiteral_3288);
    DAT_03ff012e = 1;
  }
  plVar8 = (long *)(param_1 + 0x68);
  lVar6 = *plVar8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar6,0);
  if ((uVar2 & 1) == 0) {
    FUN_01e8b8bc(param_1,plVar8,*(undefined8 *)StringLiteral_4598);
  }
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  lVar6 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  uVar3 = *puVar5;
  plVar7 = (long *)(param_1 + 0x70);
  lVar10 = *plVar7;
  *(undefined8 *)(param_1 + 0xac) = puVar5[1];
  *(undefined8 *)(param_1 + 0xa4) = uVar3;
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  uVar3 = *puVar5;
  *(undefined8 *)(param_1 + 0xbc) = puVar5[1];
  *(undefined8 *)(param_1 + 0xb4) = uVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar10,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_01e8b0b4(param_1,*(undefined8 *)StringLiteral_4050);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    thunk_FUN_01b4f09c(plVar7,uVar3);
  }
  lVar6 = *plVar8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar6 = *plVar8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar6,0);
  if ((uVar2 & 1) == 0) goto LAB_02e14aa4;
  if (*plVar8 == 0) goto LAB_02e14d24;
  lVar6 = *(long *)(*plVar8 + 0x48);
  if (lVar6 == 0) {
LAB_02e14aa4:
    if (*(char *)(param_1 + 0x35) != '\0') {
      lVar6 = *plVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar6,0,0);
      uVar3 = 0;
      uVar9 = *(undefined8 *)StringLiteral_4600;
      if ((uVar2 & 1) != 0) {
        if (*plVar7 == 0) goto LAB_02e14d24;
        uVar3 = FUN_039230bc(*plVar7,0);
      }
      uVar4 = FUN_039230bc(param_1,0);
      uVar3 = FUN_02ee6d10(uVar9,uVar3,*(undefined8 *)StringLiteral_3288,uVar4,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f336c(uVar3,0);
    }
  }
  else {
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_02e14aa4;
    if (((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_02e14d24;
    lVar6 = *(long *)(lVar6 + 0x28);
    if (lVar6 == 0) goto LAB_02e14aa4;
    fVar14 = *(float *)(lVar6 + 0x20);
    fVar15 = *(float *)(lVar6 + 0x24);
    fVar11 = (float)FUN_039145fc(*(undefined4 *)(lVar6 + 0x1c),fVar14,fVar15,
                                 *(undefined4 *)(lVar6 + 0x28),0);
    fVar14 = fVar14 * DAT_00b556e8;
    fVar15 = fVar15 * DAT_00b556e8;
    fVar12 = (float)FUN_03914cb4(fVar11 * DAT_00b556e8,0);
    fVar14 = fVar14 * DAT_00b552c8;
    fVar15 = fVar15 * DAT_00b552c8;
    fVar11 = DAT_00b552c8;
    uVar13 = FUN_03914564(fVar12 * DAT_00b552c8,0);
    *(undefined4 *)(param_1 + 0xb4) = uVar13;
    *(float *)(param_1 + 0xb8) = fVar14;
    *(float *)(param_1 + 0xbc) = fVar15;
    *(float *)(param_1 + 0xc0) = fVar11;
    if (((*(long *)(param_1 + 0x68) == 0) ||
        (lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x48), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0 ||
        (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)))) goto LAB_02e14d24;
    uVar13 = *(undefined4 *)(lVar6 + 0x18);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar6 + 0x10);
    *(undefined4 *)(param_1 + 0xd8) = uVar13;
  }
  lVar6 = *plVar8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar6,0);
  if ((uVar2 & 1) != 0) {
    if (*plVar8 == 0) goto LAB_02e14d24;
    lVar6 = *(long *)(*plVar8 + 0x48);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar3,0);
      if ((uVar2 & 1) != 0) {
        if (((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x48), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_02e14d24;
        lVar6 = *(long *)(lVar6 + 0x20);
        if ((lVar6 != 0) && (*(char *)(param_1 + 0x34) != '\0')) {
          fVar14 = *(float *)(lVar6 + 0x20);
          fVar15 = *(float *)(lVar6 + 0x24);
          fVar11 = (float)FUN_039145fc(*(undefined4 *)(lVar6 + 0x1c),fVar14,fVar15,
                                       *(undefined4 *)(lVar6 + 0x28),0);
          fVar14 = fVar14 * DAT_00b556e8;
          fVar15 = fVar15 * DAT_00b556e8;
          fVar12 = (float)FUN_03914cb4(fVar11 * DAT_00b556e8,0);
          fVar14 = fVar14 * DAT_00b552c8;
          fVar15 = fVar15 * DAT_00b552c8;
          fVar11 = DAT_00b552c8;
          uVar13 = FUN_03914564(fVar12 * DAT_00b552c8,0);
          *(undefined4 *)(param_1 + 0xa4) = uVar13;
          *(float *)(param_1 + 0xa8) = fVar14;
          *(float *)(param_1 + 0xac) = fVar15;
          *(float *)(param_1 + 0xb0) = fVar11;
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (((lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x48), lVar6 != 0 &&
               (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) &&
              (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)))) {
            uVar13 = *(undefined4 *)(lVar6 + 0x18);
            *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(lVar6 + 0x10);
            *(undefined4 *)(param_1 + 0xcc) = uVar13;
            return;
          }
          goto LAB_02e14d24;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    return;
  }
  lVar6 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar6,0,0);
  uVar3 = 0;
  uVar9 = *(undefined8 *)StringLiteral_4599;
  if ((uVar2 & 1) != 0) {
    if (*plVar7 == 0) {
LAB_02e14d24:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = FUN_039230bc(*plVar7,0);
  }
  uVar4 = FUN_039230bc(param_1,0);
  uVar3 = FUN_02ee6d10(uVar9,uVar3,*(undefined8 *)StringLiteral_3288,uVar4,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
  }
  FUN_038f336c(uVar3,0);
  return;
}


