/*
FUNCTION_NAME: FUN_01c01534
ENTRY_POINT: 01c01534
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_20;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c01534(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
                    /* try { // try from 01c01554 to 01d0155f has its CatchHandler @ 01c01578 */
                    /* try { // try from 01c01560 to 01d0158b has its CatchHandler @ 01c01524 */
  if ((DAT_03fed382 & 1) == 0) {
                    /* catch() { ... } // from try @ 01c01554 with catch @ 01c01578 */
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
                    /* try { // try from 01c0158c to 01d01603 has its CatchHandler @ 01c0158c
                       catch() { ... } // from try @ 01c0158c with catch @ 01c0158c
                       catch() { ... } // from try @ 01c01618 with catch @ 01c0158c */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_TypeUtility_<GetTypesSafely>d__35_MoveNext__);
    DAT_03fed382 = 1;
  }
  iVar13 = *(int *)(param_4 + 0x10);
  lVar11 = *(long *)(param_4 + 0x20);
  if (iVar13 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar11 == 0) goto LAB_01c018d0;
    uVar6 = *(undefined8 *)(lVar11 + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(uVar6,0);
  }
  else {
    if (iVar13 == 1) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      lVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar7,*(undefined8 *)
                          Method_Unity_VisualScripting_TypeUtility_<GetTypesSafely>d__35_MoveNext__,
                   0);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0x38);
        *plVar12 = lVar7;
        thunk_FUN_01b4f09c(plVar12,lVar7);
        if (*plVar12 != 0) {
          lVar7 = FUN_0391fab4(*plVar12,0);
          lVar8 = FUN_0391c27c(lVar11,0);
          if ((lVar8 != 0) && (FUN_03928d34(lVar8,0), lVar7 != 0)) {
            FUN_03928dd4(lVar7,0);
            puVar5 = 
            Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__;
            puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__;
            puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
            puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            fVar1 = DAT_00b55298;
            if (0.0 < *(float *)(lVar11 + 0x2c)) {
              iVar13 = 1;
              do {
                uVar6 = *(undefined8 *)(lVar11 + 0x20);
                lVar7 = FUN_0391c27c(lVar11,0);
                if (lVar7 == 0) goto LAB_01c018d0;
                fVar14 = (float)FUN_03928d34(lVar7,0);
                uVar17 = (ulong)(uint)*(float *)(lVar11 + 0x28);
                fVar15 = (float)FUN_0391a0e8(-*(float *)(lVar11 + 0x28),0);
                lVar7 = FUN_0391c27c(lVar11,0);
                if (lVar7 == 0) goto LAB_01c018d0;
                FUN_03928d34(lVar7,0);
                lVar7 = FUN_0391c27c(lVar11,0);
                if (lVar7 == 0) goto LAB_01c018d0;
                FUN_03928d34(lVar7,0);
                fVar16 = (float)FUN_0391a0e8(-*(float *)(lVar11 + 0x28),0);
                if (DAT_03fed256 == '\0') {
                  thunk_FUN_01ad9084(puVar3);
                  DAT_03fed256 = '\x01';
                }
                if (*plVar12 == 0) goto LAB_01c018d0;
                puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                uVar19 = *puVar10;
                uVar20 = puVar10[1];
                uVar21 = puVar10[2];
                uVar18 = puVar10[3];
                uVar9 = FUN_0391fab4(*plVar12,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                param_3 = param_3 + fVar16;
                lVar7 = FUN_01f25ab0(fVar14 + fVar15,uVar17,param_3,uVar19,uVar20,uVar21,uVar18,
                                     uVar6,uVar9,*(undefined8 *)puVar4);
                if (lVar7 == 0) goto LAB_01c018d0;
                lVar7 = FUN_01ed712c(lVar7,*(undefined8 *)puVar5);
                if ((*(long *)(lVar11 + 0x40) == 0) || (lVar7 == 0)) goto LAB_01c018d0;
                FUN_038ea5f0(*(float *)(*(long *)(lVar11 + 0x40) + 0x20) * fVar1,lVar7,0);
                fVar14 = (float)iVar13;
                iVar13 = iVar13 + 1;
              } while (fVar14 < *(float *)(lVar11 + 0x2c));
            }
            uVar18 = *(undefined4 *)(lVar11 + 0x30);
            uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                      );
            FUN_03924d70(uVar18,uVar6,0);
            *(undefined8 *)(param_4 + 0x18) = uVar6;
            thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar6);
            *(undefined4 *)(param_4 + 0x10) = 2;
            return 1;
          }
        }
      }
LAB_01c018d0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (iVar13 == 0) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x40400000,uVar6,0);
      *(undefined8 *)(param_4 + 0x18) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar6);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}


