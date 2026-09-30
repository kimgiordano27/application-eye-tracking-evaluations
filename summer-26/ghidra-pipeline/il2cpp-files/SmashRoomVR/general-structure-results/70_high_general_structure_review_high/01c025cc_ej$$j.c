/*
FUNCTION_NAME: ej$$j
ENTRY_POINT: 01c025cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_18;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined4 ej__j(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 in_stack_00000028;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = FUN_01f25754(uVar5,*(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
  if (lVar1 != 0) {
    lVar1 = FUN_0391fab4(lVar1,0);
    lVar2 = FUN_0391c27c();
    if ((lVar2 != 0) && (FUN_03928d34(lVar2,0), lVar1 != 0)) {
      FUN_03928dd4(lVar1,0);
      *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x28));
      *(undefined4 *)(unaff_x19 + 0x30) = 0;
      plVar3 = (long *)(unaff_x19 + 0x28);
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) < 1) {
          *plVar3 = 0;
          thunk_FUN_01b4f09c(plVar3,0);
          if (unaff_x20 == 0) goto LAB_01c027d8;
          uVar5 = FUN_0391c2b8();
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          FUN_03923a44(0x40400000,uVar5,0);
          uVar6 = 0;
        }
        else {
          if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar1 = *(long *)(lVar1 + 0x20);
          if (lVar1 == 0) goto LAB_01c027d8;
          uVar5 = FUN_03959e14(lVar1,0);
                    /* try { // try from 01c026a0 to 01d026ab has its CatchHandler @ 01c026d4 */
                    /* try { // try from 01c026ac to 01d026e7 has its CatchHandler @ 01c025a8 */
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar4 = FUN_0391f968(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            lVar1 = FUN_03959e14(lVar1,0);
            if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x28) == 0)) goto LAB_01c027d8;
            uVar6 = *(undefined4 *)(unaff_x20 + 0x24);
            uVar5 = FUN_03928d34(*(long *)(unaff_x20 + 0x28),0);
            if (lVar1 == 0) goto LAB_01c027d8;
            FUN_0395b33c(uVar6,uVar5,param_2,param_3,*(undefined4 *)(unaff_x20 + 0x20),lVar1,0);
          }
          uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(DAT_00b555a8,uVar5,0);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
          thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar5);
          *(undefined4 *)(unaff_x19 + 0x10) = 2;
          uVar6 = 1;
        }
        return uVar6;
      }
    }
  }
LAB_01c027d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


