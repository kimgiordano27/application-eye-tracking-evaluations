/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 033c0644
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStatePose(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int in_w8;
  undefined8 *unaff_x19;
  uint unaff_w20;
  undefined8 uVar7;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  uint unaff_w29;
  long in_stack_00000038;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_033ab18c();
  if ((uVar2 & 1) == 0) {
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) goto LAB_033bfa24;
    plVar6 = *(long **)(unaff_x23 + (long)(int)unaff_w20 * 8 + 0x20);
    if ((plVar6 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200)),
       unaff_x22 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01de26bc(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
    goto LAB_033c07f0;
    uVar1 = *(uint *)(unaff_x22 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    uVar7 = *unaff_x19;
    uVar3 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar4 = thunk_FUN_033b4750(uVar7,uVar3,0);
    if (unaff_x22 == (long *)0x0) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01de26bc(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
LAB_033c07f0:
      uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,0);
    }
    uVar1 = *(uint *)(unaff_x22 + 3);
  }
  if (unaff_w20 < uVar1) {
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar4;
    thunk_FUN_01e10808(unaff_x22 + (long)(int)unaff_w20 + 4,lVar4);
    *unaff_x28 = unaff_x22;
    thunk_FUN_01e10808();
    if (unaff_w29 < *(uint *)(unaff_x24 + 0x18)) {
      return *unaff_x26;
    }
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


