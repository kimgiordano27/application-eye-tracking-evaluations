/*
FUNCTION_NAME: FUN_01be107c
ENTRY_POINT: 01be107c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


undefined8
FUN_01be107c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* catch() { ... } // from try @ 01be1054 with catch @ 01be1084 */
                    /* catch() { ... } // from try @ 01be1034 with catch @ 01be108c */
  if ((DAT_03fed2b1 & 1) == 0) {
                    /* catch() { ... } // from try @ 01be0ff0 with catch @ 01be10a0 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed2b1 = 1;
  }
  lVar4 = *(long *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_5 + 0x40) = 0;
    lVar1 = FUN_038f1768(0);
    if (lVar1 == 0) goto LAB_01be1244;
    uVar5 = FUN_038f0bd4(lVar1,0);
    *(undefined4 *)(param_5 + 0x44) = uVar5;
    *(undefined4 *)(param_5 + 0x48) = param_2;
    *(undefined4 *)(param_5 + 0x4c) = param_3;
    *(undefined4 *)(param_5 + 0x50) = param_4;
    if (lVar4 == 0) goto LAB_01be1244;
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    uVar5 = 0;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_01be1244;
      uVar5 = FUN_03900b28(*(long *)(lVar4 + 0x20),0);
    }
    *(undefined4 *)(param_5 + 0x54) = uVar5;
  }
  fVar10 = *(float *)(param_5 + 0x40);
  if (*(float *)(param_5 + 0x28) < fVar10) {
    return 0;
  }
  fVar6 = (float)FUN_03925cf4(0);
  fVar10 = fVar10 + fVar6;
  *(float *)(param_5 + 0x40) = fVar10;
  fVar10 = fVar10 / *(float *)(param_5 + 0x28);
  fVar6 = fVar10;
  if (1.0 < fVar10) {
    fVar6 = 1.0;
  }
  if (fVar10 < 0.0) {
    fVar6 = 0.0;
  }
  lVar1 = FUN_038f1768(0);
  if (lVar1 != 0) {
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar10 = (float)*(undefined8 *)(param_5 + 0x44);
    fVar7 = (float)((ulong)*(undefined8 *)(param_5 + 0x44) >> 0x20);
    fVar8 = (float)*(undefined8 *)(param_5 + 0x4c);
    fVar9 = (float)((ulong)*(undefined8 *)(param_5 + 0x4c) >> 0x20);
    fVar7 = fVar7 + ((float)((ulong)*(undefined8 *)(param_5 + 0x2c) >> 0x20) - fVar7) * fVar6;
    FUN_038f0c70(CONCAT44(fVar7,fVar10 + ((float)*(undefined8 *)(param_5 + 0x2c) - fVar10) * fVar6),
                 fVar7,fVar8 + ((float)*(undefined8 *)(param_5 + 0x34) - fVar8) * fVar6,
                 fVar9 + ((float)((ulong)*(undefined8 *)(param_5 + 0x34) >> 0x20) - fVar9) * fVar6,
                 lVar1,0);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar3,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar4 + 0x20) == 0) goto LAB_01be1244;
        FUN_03900b64(*(float *)(param_5 + 0x54) +
                     fVar6 * (*(float *)(param_5 + 0x3c) - *(float *)(param_5 + 0x54)),
                     *(long *)(lVar4 + 0x20),0);
      }
      *(undefined8 *)(param_5 + 0x18) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x18),0);
      *(undefined4 *)(param_5 + 0x10) = 1;
      return 1;
    }
  }
LAB_01be1244:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


