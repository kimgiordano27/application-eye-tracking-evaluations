/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0492a064
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_05027ef4();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(unaff_x21 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = 0;
    lVar7 = lVar5 + 0x2c;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (-1 < *(int *)(lVar7 + -0xc)) {
        in_stack_00000040 = 0;
        uStack0000000000000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000058 = 0;
        uStack0000000000000050 = 0;
        uStack0000000000000054 = 0;
        FUN_0390f090(&stack0x00000040,*(undefined4 *)(lVar7 + -4));
        lVar2 = thunk_FUN_02d9d164(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar4,0);
        }
        if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        unaff_x22[(long)(int)unaff_w20 + 4] = lVar2;
        thunk_FUN_02dd37b4(unaff_x22 + (long)(int)unaff_w20 + 4,lVar2);
        unaff_w20 = unaff_w20 + 1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x24;
    } while (uVar1 != uVar6);
  }
  return;
}


