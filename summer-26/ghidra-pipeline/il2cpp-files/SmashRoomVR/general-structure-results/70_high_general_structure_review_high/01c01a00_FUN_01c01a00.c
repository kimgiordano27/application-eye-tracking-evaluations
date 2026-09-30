/*
FUNCTION_NAME: FUN_01c01a00
ENTRY_POINT: 01c01a00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_01c01a00(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  puVar1 = Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__;
  if ((DAT_03fed384 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__1__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
                    /* catch() { ... } // from try @ 01c01ab8 with catch @ 01c01a70 */
    thunk_FUN_01ad9084(Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_1__);
    thunk_FUN_01ad9084(Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
    thunk_FUN_01ad9084(Method_EzySlice_Triangulator_<>c_<MonotoneChain>b__2_0__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_<>c_<_ctor>b__47_0__
                      );
    thunk_FUN_01ad9084(Method_TurretScript_<AddForces>d__21_System_Collections_IEnumerator_Reset__);
                    /* try { // try from 01c01aac to 01d01ab7 has its CatchHandler @ 01c01ad4 */
    thunk_FUN_01ad9084(
                      Method_TurretScript_<RotateObject>d__19_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 01c01ab8 to 01d01af7 has its CatchHandler @ 01c01a70 */
    thunk_FUN_01ad9084(Method_TurretScript_<ShootDelay>d__20_System_Collections_IEnumerator_Reset__)
    ;
    DAT_03fed384 = 1;
  }
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 01c01aac with catch @ 01c01ad4 */
  FUN_03081994(lVar3,0);
  if (*(char *)(param_4 + 0x30) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar6 = FUN_03928d34(*(long *)(param_4 + 0x20),0);
    if ((*(long *)(param_4 + 0x20) != 0) &&
       (uVar8 = param_2, uVar9 = param_3, uVar7 = FUN_039291ac(*(long *)(param_4 + 0x20),0),
       puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__, lVar3 != 0)) {
      uVar10 = *(undefined4 *)(param_4 + 0x2c);
      uVar2 = FUN_03920150(*(undefined4 *)(param_4 + 0x34),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar4 = FUN_03955b94(uVar6,param_2,param_3,uVar7,uVar8,uVar9,uVar10,lVar3 + 0x10,uVar2,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = FUN_01b47fd0(*(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,5);
        if (lVar5 == 0) goto LAB_01c01d84;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_01c01d88:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)
              Method_TurretScript_<RotateObject>d__19_System_Collections_IEnumerator_Reset__;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x20));
        if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_01c01d88;
        *(undefined8 *)(lVar5 + 0x28) =
             *(undefined8 *)
              Method_TurretScript_<ShootDelay>d__20_System_Collections_IEnumerator_Reset__;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x28));
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_01c01d88;
        *(undefined8 *)(lVar5 + 0x30) =
             *(undefined8 *)Method_EzySlice_Triangulator_<>c_<MonotoneChain>b__2_0__;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x30));
        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_01c01d88;
        *(undefined8 *)(lVar5 + 0x38) =
             *(undefined8 *)
              Method_TurretScript_<AddForces>d__21_System_Collections_IEnumerator_Reset__;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x38));
        if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_01c01d88;
        *(undefined8 *)(lVar5 + 0x40) =
             *(undefined8 *)
              Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_<>c_<_ctor>b__47_0__;
        thunk_FUN_01b4f09c();
        uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__1__
                                  );
        FUN_02d7dbc4(uVar6,lVar3,
                     *(undefined8 *)Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_1__,0);
        uVar4 = FUN_01e79450(lVar5,uVar6,
                             *(undefined8 *)
                              Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__0__
                            );
        if ((uVar4 & 1) != 0) {
          lVar3 = FUN_03959ba8(lVar3 + 0x10,0);
          if (lVar3 == 0) goto LAB_01c01d84;
          uVar6 = FUN_0391c2b8(lVar3,0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          FUN_03923a90(uVar6,0);
        }
      }
      if ((*(long *)(param_4 + 0x40) != 0) && (*(long *)(param_4 + 0x50) != 0)) {
        FUN_038ea93c(*(float *)(*(long *)(param_4 + 0x40) + 0x20) * 0.25,*(long *)(param_4 + 0x50),
                     *(undefined8 *)(param_4 + 0x48),0);
        uVar6 = FUN_01c01d94(param_4);
        FUN_03920cb0(param_4,uVar6,0);
        uVar6 = FUN_01c01e00(param_4);
        FUN_03920cb0(param_4,uVar6,0);
        return;
      }
    }
  }
LAB_01c01d84:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


