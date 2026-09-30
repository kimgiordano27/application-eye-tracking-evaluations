/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 05c04afc
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___cctor
               (undefined1 param_1 [16],long param_2,undefined8 param_3)

{
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000098;
  
  uVar3 = param_1._8_8_;
  uVar2 = param_1._0_8_;
  while( true ) {
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = uVar2;
    unaff_w20 = unaff_w20 + 1;
    thunk_FUN_037aeb94((undefined8 *)(param_2 + 0x20),param_3);
    do {
      puVar1 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar1 + 7;
      if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x25) {
                    /* try { // try from 05c04b20 to 05d04b2b has its CatchHandler @ 05c04bcc */
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_05c04c44;
    } while (*(int *)(puVar1 + 5) < 0);
    in_stack_00000098 = puVar1[6];
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                       &stack0x00000098);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) break;
    in_stack_00000080 = puVar1[0xb];
    in_stack_00000068 = puVar1[8];
    in_stack_00000060 = *unaff_x26;
    in_stack_00000078 = puVar1[10];
    in_stack_00000070 = puVar1[9];
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                       &stack0x00000060);
    FUN_061df224();
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) break;
    uVar3 = 0;
    uVar2 = 0;
    param_2 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
    param_3 = 0;
  }
LAB_05c04c44:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


