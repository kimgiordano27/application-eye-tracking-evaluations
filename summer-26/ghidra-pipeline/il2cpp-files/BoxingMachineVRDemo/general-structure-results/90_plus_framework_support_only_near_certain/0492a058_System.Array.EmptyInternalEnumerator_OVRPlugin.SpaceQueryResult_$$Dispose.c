/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0492a058
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  plVar2 = (long *)thunk_FUN_02d9d438(param_2,*param_1);
  if (plVar2 == (long *)0x0) {
    FUN_05027ef4();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(unaff_x21 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar7 = 0;
    lVar8 = lVar6 + 0x2c;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (-1 < *(int *)(lVar8 + -0xc)) {
        in_stack_00000040 = 0;
        uStack0000000000000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000058 = 0;
        uStack0000000000000050 = 0;
        uStack0000000000000054 = 0;
        FUN_0390f090(&stack0x00000040,*(undefined4 *)(lVar8 + -4));
        lVar3 = thunk_FUN_02d9d164(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_02d9d438(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar5,0);
        }
        if (*(uint *)(plVar2 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        plVar2[(long)(int)unaff_w20 + 4] = lVar3;
        thunk_FUN_02dd37b4(plVar2 + (long)(int)unaff_w20 + 4,lVar3);
        unaff_w20 = unaff_w20 + 1;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x24;
    } while (uVar1 != uVar7);
  }
  return;
}


