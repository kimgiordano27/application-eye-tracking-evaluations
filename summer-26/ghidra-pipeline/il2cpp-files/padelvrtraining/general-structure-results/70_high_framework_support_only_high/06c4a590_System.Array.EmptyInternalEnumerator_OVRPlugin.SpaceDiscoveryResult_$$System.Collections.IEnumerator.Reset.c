/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06c4a590
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 *unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (-1 < in_w8) {
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_058198f4(&stack0x00000010,*(undefined8 *)(unaff_x26 + -2),*unaff_x26,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
      lVar1 = thunk_FUN_03d2eb70(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03d2ee44(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
      thunk_FUN_03d1023c(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
      unaff_w20 = unaff_w20 + 1;
    }
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x23 == unaff_x25) {
      return;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) break;
    in_w8 = unaff_x26[2];
    unaff_x26 = unaff_x26 + 6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


