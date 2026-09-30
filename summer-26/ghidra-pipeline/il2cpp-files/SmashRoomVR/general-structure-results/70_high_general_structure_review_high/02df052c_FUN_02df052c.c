/*
FUNCTION_NAME: FUN_02df052c
ENTRY_POINT: 02df052c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_13;telemetry_or_network_hits_5
*/


void FUN_02df052c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5,long param_6,undefined8 *param_7,float *param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_03ff0019 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0019 = 1;
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  fVar9 = *(float *)(*(undefined8 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *param_7 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(float *)(param_7 + 1) = fVar9;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar8 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined8 *)(param_8 + 2) =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  *(undefined8 *)param_8 = uVar8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(param_6,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(param_5,0);
    if ((uVar2 & 1) != 0) {
      if ((((param_6 != 0) && (lVar3 = FUN_0391c27c(param_6,0), param_5 != 0)) &&
          (lVar4 = FUN_0391c27c(param_5,0), lVar4 != 0)) && (FUN_03928d34(lVar4,0), lVar3 != 0)) {
        uVar5 = FUN_0392a520(lVar3,0);
        *(undefined4 *)param_7 = uVar5;
        *(float *)((long)param_7 + 4) = fVar9;
        *(float *)(param_7 + 1) = param_3;
        lVar3 = FUN_0391c27c(param_6,0);
        if (lVar3 != 0) {
          FUN_039274a0(lVar3,0);
          fVar6 = (float)FUN_03914250(0);
          fVar10 = fVar9;
          fVar11 = param_3;
          fVar12 = param_4;
          lVar3 = FUN_0391c27c(param_5,0);
          if (lVar3 != 0) {
            fVar7 = (float)FUN_039274a0(lVar3,0);
            *param_8 = (fVar9 * fVar11 + param_4 * fVar7 + fVar6 * fVar12) - param_3 * fVar10;
            param_8[1] = (param_3 * fVar7 + param_4 * fVar10 + fVar9 * fVar12) - fVar6 * fVar11;
            param_8[2] = (fVar6 * fVar10 + param_4 * fVar11 + param_3 * fVar12) - fVar9 * fVar7;
            param_8[3] = ((param_4 * fVar12 - fVar6 * fVar7) - fVar9 * fVar10) - param_3 * fVar11;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


