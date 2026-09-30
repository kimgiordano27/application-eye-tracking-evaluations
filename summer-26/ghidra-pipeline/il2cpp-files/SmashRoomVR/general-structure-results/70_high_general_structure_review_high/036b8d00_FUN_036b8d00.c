/*
FUNCTION_NAME: FUN_036b8d00
ENTRY_POINT: 036b8d00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_036b8d00(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03ff7500 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_444);
    thunk_FUN_01ad9084(PTR_DAT_03d9ca90);
    thunk_FUN_01ad9084(PTR_DAT_03d9ca98);
    DAT_03ff7500 = 1;
  }
  if ((*(char *)((long)param_1 + 0x3fd) != '\0') &&
     ((uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
      (uVar2 & 1) != 0 || (*(char *)((long)param_1 + 0x6ac) != '\0')))) {
    lVar4 = param_1[0xe5];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_039acd84(param_1,0);
      param_1[0xe5] = lVar4;
      thunk_FUN_01b4f09c(param_1 + 0xe5,lVar4);
      lVar4 = param_1[0xe5];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    lVar4 = param_1[0x1f];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_036dfed8(param_1,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = FUN_039230bc(lVar4,0);
      uVar3 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d9ca90,uVar3,*(undefined8 *)PTR_DAT_03d9ca98,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f3474(uVar3,param_1,0);
      return;
    }
    if (((char)param_1[0x6e] != '\0') || (*(char *)((long)param_1 + 0x3fc) != '\0')) {
      if (*(char *)((long)param_1 + 0x301) != '\0') {
        (**(code **)(*param_1 + 0x828))(param_1,*(undefined8 *)(*param_1 + 0x830));
      }
      FUN_036e12c0(param_1,0);
      if (*(int *)(*(long *)StringLiteral_444 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036cca50(0);
      if ((char)param_1[0x47] == '\0') {
        fVar5 = *(float *)((long)param_1 + 0x254);
        fVar6 = *(float *)(param_1 + 0x4a);
      }
      else {
        fVar7 = *(float *)((long)param_1 + 0x1ec);
        fVar5 = *(float *)((long)param_1 + 0x254);
        fVar6 = *(float *)(param_1 + 0x4a);
        fVar8 = fVar5;
        if (fVar7 <= fVar5) {
          fVar8 = fVar7;
        }
        if (fVar7 < fVar6) {
          fVar8 = fVar6;
        }
        *(float *)((long)param_1 + 0x1e4) = fVar8;
      }
      *(float *)((long)param_1 + 0x23c) = fVar5;
      *(float *)(param_1 + 0x48) = fVar6;
      *(undefined4 *)((long)param_1 + 700) = 0;
      *(undefined4 *)((long)param_1 + 0x2d4) = 0;
      *(undefined1 *)(param_1 + 0x5f) = 0;
      *(undefined1 *)(param_1 + 0x6e) = 0;
      *(undefined1 *)((long)param_1 + 0x3fc) = 0;
      *(undefined1 *)((long)param_1 + 0x6ac) = 0;
      *(undefined1 *)((long)param_1 + 0x24c) = 0;
      *(undefined4 *)((long)param_1 + 0x244) = 0;
      do {
        (**(code **)(*param_1 + 0xa18))(param_1,*(undefined8 *)(*param_1 + 0xa20));
        *(int *)((long)param_1 + 0x244) = *(int *)((long)param_1 + 0x244) + 1;
      } while (*(char *)((long)param_1 + 0x24c) == '\0');
    }
  }
  return;
}


