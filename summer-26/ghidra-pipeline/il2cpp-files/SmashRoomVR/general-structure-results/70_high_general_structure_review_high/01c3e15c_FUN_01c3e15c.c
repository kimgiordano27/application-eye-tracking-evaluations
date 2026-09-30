/*
FUNCTION_NAME: FUN_01c3e15c
ENTRY_POINT: 01c3e15c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


void FUN_01c3e15c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03fed581 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
                      );
    DAT_03fed581 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((*(float *)(param_3 + 0x68) == 0.0) && (*(float *)(param_3 + 0x6c) == 0.0)) {
    return;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x78);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_3 + 0x78) == 0) ||
       (lVar3 = FUN_0391c27c(*(long *)(param_3 + 0x78),0), lVar3 == 0)) goto LAB_01c3e36c;
    FUN_03928d34(lVar3,0);
    if (*(float *)(param_3 + 0x68) <= param_2) {
      if ((*(long *)(param_3 + 0x78) == 0) ||
         (lVar3 = FUN_0391c27c(*(long *)(param_3 + 0x78),0), lVar3 == 0)) goto LAB_01c3e36c;
      FUN_03928d34(lVar3,0);
      if (param_2 <= *(float *)(param_3 + 0x6c)) goto LAB_01c3e28c;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(*(undefined8 *)
                  Field_<PrivateImplementationDetails>_A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
                 ,0);
    if ((*(long *)(param_3 + 0x78) == 0) ||
       (lVar3 = FUN_0391c27c(*(long *)(param_3 + 0x78),0), lVar3 == 0)) goto LAB_01c3e36c;
    param_2 = *(float *)(param_3 + 0x10c);
    FUN_03928dd4(*(undefined4 *)(param_3 + 0x108),param_2,*(undefined4 *)(param_3 + 0x110),lVar3,0);
  }
LAB_01c3e28c:
  uVar4 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_3 + 0x80) != 0) &&
     (lVar3 = FUN_0391c27c(*(long *)(param_3 + 0x80),0), lVar3 != 0)) {
    FUN_03928d34(lVar3,0);
    if (*(float *)(param_3 + 0x68) <= param_2) {
      if ((*(long *)(param_3 + 0x80) == 0) ||
         (lVar3 = FUN_0391c27c(*(long *)(param_3 + 0x80),0), lVar3 == 0)) goto LAB_01c3e36c;
      FUN_03928d34(lVar3,0);
      if (param_2 <= *(float *)(param_3 + 0x6c)) {
        return;
      }
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(*(undefined8 *)
                  Field_<PrivateImplementationDetails>_A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
                 ,0);
    if ((*(long *)(param_3 + 0x80) != 0) &&
       (lVar3 = FUN_0391c27c(*(long *)(param_3 + 0x80),0), lVar3 != 0)) {
      FUN_03928dd4(*(undefined4 *)(param_3 + 0x108),*(undefined4 *)(param_3 + 0x10c),
                   *(undefined4 *)(param_3 + 0x110),lVar3,0);
      return;
    }
  }
LAB_01c3e36c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


