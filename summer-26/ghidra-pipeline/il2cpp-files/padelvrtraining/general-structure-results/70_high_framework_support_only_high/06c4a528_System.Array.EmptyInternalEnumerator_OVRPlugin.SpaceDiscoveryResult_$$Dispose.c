/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 06c4a528
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 *unaff_x26;
  undefined4 *puVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while( true ) {
    puVar6 = unaff_x26;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar6 + 6;
      if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_06c4a63c;
      piVar1 = puVar6 + 2;
      puVar6 = unaff_x26;
    } while (*piVar1 < 0);
    uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70)
                              );
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) break;
    in_stack_00000028._4_4_ = *unaff_x26;
    uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78)
                               ,(long)&stack0x00000028 + 4);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_07143704(&stack0x00000010,uVar3,uVar4,0);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22) break;
    lVar2 = unaff_x23 + (long)(int)unaff_w22 * 0x10;
    puVar5 = (undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
    *puVar5 = in_stack_00000010;
    unaff_w22 = unaff_w22 + 1;
    thunk_FUN_03d1023c(puVar5,0);
  }
LAB_06c4a63c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


