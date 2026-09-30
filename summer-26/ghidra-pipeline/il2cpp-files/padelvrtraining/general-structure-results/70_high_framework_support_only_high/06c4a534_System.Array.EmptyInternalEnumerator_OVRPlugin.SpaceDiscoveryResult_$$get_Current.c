/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 06c4a534
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 *unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  do {
    if ((long)in_w8 <= (long)unaff_x25) {
      return;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_06c4a63c;
    if (-1 < (int)unaff_x26[2]) {
      uVar2 = thunk_FUN_03d2eb70(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
LAB_06c4a63c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      in_stack_00000028._4_4_ = unaff_x26[6];
      uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                 (long)&stack0x00000028 + 4);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_07143704(&stack0x00000010,uVar2,uVar3,0);
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) goto LAB_06c4a63c;
      lVar1 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
      *puVar4 = in_stack_00000010;
      unaff_w20 = unaff_w20 + 1;
      thunk_FUN_03d1023c(puVar4,0);
      in_w8 = *(int *)(unaff_x21 + 0x20);
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 6;
  } while( true );
}


