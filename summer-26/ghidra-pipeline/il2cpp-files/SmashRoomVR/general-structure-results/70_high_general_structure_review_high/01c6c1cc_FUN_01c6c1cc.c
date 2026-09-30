/*
FUNCTION_NAME: FUN_01c6c1cc
ENTRY_POINT: 01c6c1cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_17;telemetry_or_network_hits_4
*/


long FUN_01c6c1cc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  
                    /* try { // try from 01c6c1cc to 01d6c22b has its CatchHandler @ 01c6c0e8 */
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed707 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_231);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 01c6c22c to 01d6c243 has its CatchHandler @ 01c6c38c */
    DAT_03fed707 = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar6,0);
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 01c6c274 to 01d6c283 has its CatchHandler @ 01c6c388 */
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_5 + 0x40) != 0) {
        uVar6 = *(undefined8 *)(param_5 + 0x20);
                    /* try { // try from 01c6c290 to 01d6c297 has its CatchHandler @ 01c6c374 */
        lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x40),0);
        if (lVar3 != 0) {
          uVar8 = FUN_03928d34(lVar3,0);
          if ((*(long *)(param_5 + 0x40) != 0) &&
             (uVar11 = param_2, uVar13 = param_3, lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x40),0),
             lVar3 != 0)) {
            uVar9 = FUN_039274a0(lVar3,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar3 = FUN_01f259b0(uVar8,param_2,param_3,uVar9,uVar11,uVar13,param_4,uVar6,
                                 *(undefined8 *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__
                                );
            fVar10 = (float)param_2;
            fVar12 = (float)param_3;
            if (lVar3 != 0) {
              lVar4 = FUN_0391fab4(lVar3,0);
              if (((*(long *)(param_5 + 0x40) != 0) &&
                  (lVar5 = FUN_0391c27c(*(long *)(param_5 + 0x40),0), lVar5 != 0)) &&
                 (FUN_03928d34(lVar5,0), lVar4 != 0)) {
                FUN_03928dd4(lVar4,0);
                lVar4 = FUN_0391fab4(lVar3,0);
                if (((*(long *)(param_5 + 0x40) != 0) &&
                    (lVar5 = FUN_0391c27c(*(long *)(param_5 + 0x40),0), lVar5 != 0)) &&
                   (FUN_039274a0(lVar5,0), lVar4 != 0)) {
                  FUN_03928f54(lVar4,0);
                  lVar4 = FUN_01ed7390(lVar3,*(undefined8 *)StringLiteral_231);
                  if ((*(long *)(param_5 + 0x40) != 0) &&
                     (fVar7 = (float)FUN_039291ac(*(long *)(param_5 + 0x40),0), lVar4 != 0)) {
                    FUN_0395ae9c(fVar7 * param_1,fVar10 * param_1,fVar12 * param_1,lVar4,2,0);
                    lVar4 = FUN_01c71b24(0);
                    uVar6 = *(undefined8 *)(param_5 + 0x30);
                    lVar5 = FUN_0391fab4(lVar3,0);
                    if ((lVar5 != 0) && (FUN_03928d34(lVar5,0), lVar4 != 0)) {
                      FUN_01c71c98(lVar4,uVar6,0);
                      uVar2 = FUN_03923030(*(undefined8 *)(param_5 + 0x38),0);
                      if ((uVar2 & 1) == 0) {
                        return lVar3;
                      }
                      if (*(long *)(param_5 + 0x38) != 0) {
                        FUN_03951fd4(*(long *)(param_5 + 0x38),0);
                        return lVar3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return 0;
}


