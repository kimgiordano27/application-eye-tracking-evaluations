/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05c04adc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000098;
  
  while( true ) {
    FUN_061df224();
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) break;
    lVar1 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000008;
    *puVar2 = in_stack_00000000;
    unaff_w20 = unaff_w20 + 1;
    thunk_FUN_037aeb94(puVar2,0);
    do {
      puVar2 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar2 + 7;
      if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_05c04c44;
    } while (*(int *)(puVar2 + 5) < 0);
    in_stack_00000098 = puVar2[6];
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                       &stack0x00000098);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) break;
    in_stack_00000080 = puVar2[0xb];
    in_stack_00000068 = puVar2[8];
    in_stack_00000060 = *unaff_x26;
    in_stack_00000078 = puVar2[10];
    in_stack_00000070 = puVar2[9];
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                       &stack0x00000060);
    in_stack_00000000 = 0;
    in_stack_00000008 = 0;
  }
LAB_05c04c44:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


