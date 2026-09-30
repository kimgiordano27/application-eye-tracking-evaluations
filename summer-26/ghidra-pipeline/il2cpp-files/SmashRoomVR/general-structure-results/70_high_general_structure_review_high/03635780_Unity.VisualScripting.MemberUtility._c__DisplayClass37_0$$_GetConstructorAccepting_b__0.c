/*
FUNCTION_NAME: Unity.VisualScripting.MemberUtility.<>c__DisplayClass37_0$$<GetConstructorAccepting>b__0
ENTRY_POINT: 03635780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_MemberUtility_<>c__DisplayClass37_0__<GetConstructorAccepting>b__0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03d9a938);
  *(undefined1 *)(unaff_x21 + 0x2a1) = 1;
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x20;
  }
  lVar3 = **(long **)(lVar1 + 0xb8);
  if (lVar3 != 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = **(long **)(*unaff_x20 + 0xb8);
      if (lVar3 == 0) goto LAB_03635868;
    }
                    /* WARNING: Could not recover jumptable at 0x03635800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
    return;
  }
  lVar1 = FUN_0391c2b8();
  if ((lVar1 != 0) &&
     (lVar1 = FUN_01ed712c(lVar1,*(undefined8 *)
                                  Method_System_Collections_Stack_StackEnumerator_get_Current__),
     lVar1 != 0)) {
    uVar2 = FUN_03900d8c(lVar1,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    FUN_03923b08(uVar2,1,0);
    return;
  }
LAB_03635868:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


