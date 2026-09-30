/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 05c04bb8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar4;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uStack0000000000000018 = param_2._8_8_;
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  do {
    uStack0000000000000028 = in_stack_00000088;
    uStack0000000000000020 = in_stack_00000080;
    lVar1 = thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8)
                              );
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_037787d0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_037aeb94(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
    unaff_w20 = unaff_w20 + 1;
    do {
      puVar4 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar4 + 7;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
    } while (*(int *)(puVar4 + 5) < 0);
    uStack0000000000000020 = puVar4[0xb];
    uStack0000000000000008 = puVar4[8];
    uStack0000000000000000 = *unaff_x26;
    uStack0000000000000018 = puVar4[10];
    uStack0000000000000010 = puVar4[9];
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_047f3abc(&stack0x00000060,puVar4[6]);
    uStack0000000000000000 = in_stack_00000060;
    uStack0000000000000008 = in_stack_00000068;
    uStack0000000000000010 = in_stack_00000070;
    uStack0000000000000018 = in_stack_00000078;
  } while( true );
}


