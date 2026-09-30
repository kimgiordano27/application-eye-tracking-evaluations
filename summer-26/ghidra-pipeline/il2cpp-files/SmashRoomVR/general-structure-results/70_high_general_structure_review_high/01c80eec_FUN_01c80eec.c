/*
FUNCTION_NAME: FUN_01c80eec
ENTRY_POINT: 01c80eec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_01c80eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar6 = param_2;
  uVar9 = param_3;
  if ((DAT_03fed7cd & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_391);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
                    /* try { // try from 01c80f5c to 01d80f5f has its CatchHandler @ 01c80fdc */
                    /* try { // try from 01c80f60 to 01d80fef has its CatchHandler @ 01c80c28 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* catch() { ... } // from try @ 01c80e3c with catch @ 01c80f64 */
                    /* catch() { ... } // from try @ 01c80d18 with catch @ 01c80f68 */
    DAT_03fed7cd = 1;
  }
  fVar8 = (float)uVar6;
  fVar10 = (float)uVar9;
                    /* catch() { ... } // from try @ 01c80d4c with catch @ 01c80f6c */
  uVar6 = *(undefined8 *)(param_8 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar6,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_8 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = param_2;
    uVar11 = param_3;
    lVar4 = FUN_01f259b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar6,
                         *(undefined8 *)puVar1);
    fVar8 = (float)uVar9;
    fVar10 = (float)uVar11;
    if (lVar4 == 0) goto LAB_01c810cc;
    lVar4 = FUN_01ed712c(lVar4,*(undefined8 *)StringLiteral_391);
    uVar3 = FUN_03923030(lVar4,0);
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) goto LAB_01c810cc;
      FUN_01c65c44(lVar4,param_9,0);
    }
  }
  if (param_9 != 0) {
    lVar4 = FUN_03959e14(param_9,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar3 = FUN_0391f968(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar5 = FUN_0391c27c(param_8,0);
    if ((lVar5 != 0) && (fVar7 = (float)FUN_039291ac(lVar5,0), lVar4 != 0)) {
      fVar12 = *(float *)(param_8 + 0x30);
      FUN_0395b168(fVar7 * fVar12,fVar8 * fVar12,fVar10 * fVar12,param_1,param_2,param_3,lVar4,2,0);
      return;
    }
  }
LAB_01c810cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


