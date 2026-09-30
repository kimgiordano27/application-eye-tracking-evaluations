/*
FUNCTION_NAME: FUN_01bd4318
ENTRY_POINT: 01bd4318
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


undefined8
FUN_01bd4318(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  if ((DAT_03fed23a & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_SaveSystemAdvanced_<autoDelay>d__13_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 01bd4368 to 01cd438b has its CatchHandler @ 01bd4368
                       catch() { ... } // from try @ 01bd4368 with catch @ 01bd4368
                       catch() { ... } // from try @ 01bd4398 with catch @ 01bd4368 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed23a = 1;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  uVar9 = *param_5;
  uVar10 = param_5[1];
  uVar11 = param_5[2];
  uVar1 = FUN_03920150(*(undefined4 *)(param_4 + 0x2c),0);
                    /* try { // try from 01bd438c to 01cd4397 has its CatchHandler @ 01bd43ac */
                    /* try { // try from 01bd4398 to 01cd43bf has its CatchHandler @ 01bd4368 */
  uVar2 = FUN_03920150(*(undefined4 *)(param_4 + 0x4c),0);
  uVar3 = FUN_03920154(uVar2 | uVar1,0);
                    /* catch() { ... } // from try @ 01bd438c with catch @ 01bd43ac */
  if ((*(long *)(param_4 + 0x30) != 0) && (lVar5 != 0)) {
    uVar6 = param_2;
    uVar8 = param_3;
    uVar4 = FUN_01bcdf54(param_1,param_2,param_3,uVar9,uVar10,uVar11,lVar5,uVar3,
                         *(long *)(param_4 + 0x30) + 0x10);
    fVar7 = (float)uVar6;
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 01bd44ec to 01cd450f has its CatchHandler @ 01bd44ec
                       catch() { ... } // from try @ 01bd44ec with catch @ 01bd44ec
                       catch() { ... } // from try @ 01bd451c with catch @ 01bd44ec */
      return 0;
    }
    if (((*(long *)(param_4 + 0x30) != 0) &&
        (lVar5 = FUN_03959ba8(*(long *)(param_4 + 0x30) + 0x10,0), lVar5 != 0)) &&
       (lVar5 = FUN_0391c2b8(lVar5,0), lVar5 != 0)) {
      lVar5 = FUN_01ed712c(lVar5,*(undefined8 *)
                                  Method_SaveSystemAdvanced_<autoDelay>d__13_System_Collections_IEnumerator_Reset__
                          );
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(lVar5,0,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
        uVar6 = FUN_03928d34(*(long *)(lVar5 + 0x30),0);
        fVar12 = *(float *)(param_4 + 0x48);
        lVar5 = *(long *)(param_4 + 0x20);
        uVar1 = FUN_03920150(*(undefined4 *)(param_4 + 0x2c),0);
        uVar2 = FUN_03920150(*(undefined4 *)(param_4 + 0x4c),0);
        uVar3 = FUN_03920154(uVar1 & (uVar2 ^ 0xffffffff),0);
        if ((*(long *)(param_4 + 0x30) != 0) && (lVar5 != 0)) {
          uVar4 = FUN_01bcdf54(param_1,param_2,param_3,uVar6,fVar7 + fVar12,uVar8,lVar5,uVar3,
                               *(long *)(param_4 + 0x30) + 0x10);
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          *param_5 = (int)uVar6;
          param_5[1] = fVar7;
          param_5[2] = (int)uVar8;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


