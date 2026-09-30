/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 06c4a594
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 *unaff_x26;
  undefined4 *puVar5;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  do {
    uStack0000000000000010 = 0;
    uStack0000000000000018 = 0;
    FUN_058198f4(&stack0x00000010,*(undefined8 *)(unaff_x26 + -2),*unaff_x26,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
    lVar2 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8)
                              );
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar2;
    thunk_FUN_03d1023c(unaff_x22 + (long)(int)unaff_w20 + 4,lVar2);
    unaff_w20 = unaff_w20 + 1;
    puVar5 = unaff_x26;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar5 + 6;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      piVar1 = puVar5 + 2;
      puVar5 = unaff_x26;
    } while (*piVar1 < 0);
  } while( true );
}


