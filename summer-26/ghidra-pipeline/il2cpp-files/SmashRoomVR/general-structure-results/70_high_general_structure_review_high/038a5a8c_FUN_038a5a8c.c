/*
FUNCTION_NAME: FUN_038a5a8c
ENTRY_POINT: 038a5a8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


undefined8 FUN_038a5a8c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_03ff8ae0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da9118);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2679);
    thunk_FUN_01ad9084(PTR_DAT_03da9140);
    DAT_03ff8ae0 = 1;
  }
  if ((int)param_1[4] == 2) {
LAB_038a5af4:
    uVar2 = 1;
  }
  else {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = FUN_02b2f3cc(param_1[5],(int)param_1[4],*(undefined8 *)PTR_DAT_03da9118);
    puVar1 = StringLiteral_2679;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)StringLiteral_2679 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03feddc6 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_2679);
        DAT_03feddc6 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        FUN_038a46c0();
        uVar3 = FUN_038a5cf4(param_1);
        if ((uVar3 & 1) != 0) goto LAB_038a5af4;
        (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff8d1a == '\0') {
          thunk_FUN_01ad9084(StringLiteral_2679);
          DAT_03ff8d1a = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar1;
        }
        puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
        *puVar5 = 0;
        thunk_FUN_01b4f09c(puVar5,0);
        FUN_038a3678(0);
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2e04(*(undefined8 *)PTR_DAT_03da9140,0);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


