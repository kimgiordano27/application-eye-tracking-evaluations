/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05c04c0c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    thunk_FUN_037aeb94(param_1,unaff_x21);
    unaff_w20 = unaff_w20 + 1;
    do {
      lVar1 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = lVar1 + 0x38;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
    } while (*(int *)(lVar1 + 0x28) < 0);
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_047f3abc(&stack0x00000060,*(undefined8 *)(lVar1 + 0x30));
    unaff_x21 = thunk_FUN_037784fc(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((unaff_x21 != 0) &&
       (lVar1 = thunk_FUN_037787d0(unaff_x21,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
    break;
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    param_1 = unaff_x22 + (long)(int)unaff_w20 + 4;
    *param_1 = unaff_x21;
  }
  uVar2 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,0);
}


