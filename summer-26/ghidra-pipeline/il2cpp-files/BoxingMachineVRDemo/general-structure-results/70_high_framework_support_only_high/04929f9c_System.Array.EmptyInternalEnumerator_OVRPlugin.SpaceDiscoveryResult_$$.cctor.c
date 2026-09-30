/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 04929f9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___cctor(void)

{
  long lVar1;
  undefined8 *puVar2;
  int in_w8;
  int in_w9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  do {
    if (-1 < in_w9) {
      in_stack_00000068._4_4_ = *(undefined4 *)((long)unaff_x26 + -4);
      thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                         (long)&stack0x00000068 + 4);
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
LAB_0492a16c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      in_stack_00000050 = unaff_x26[2];
      in_stack_00000048 = unaff_x26[1];
      in_stack_00000040 = *unaff_x26;
      thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                         &stack0x00000040);
      FUN_04fa5ef4();
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) goto LAB_0492a16c;
      lVar1 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
      puVar2 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *puVar2 = 0;
      unaff_w20 = unaff_w20 + 1;
      thunk_FUN_02dd37b4(puVar2,0);
      in_w8 = *(int *)(unaff_x21 + 0x20);
    }
    unaff_x25 = unaff_x25 + 1;
    if ((long)in_w8 <= (long)unaff_x25) {
      return;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_0492a16c;
    in_w9 = *(int *)(unaff_x26 + 3);
    unaff_x26 = (undefined8 *)((long)unaff_x26 + 0x24);
  } while( true );
}


