/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 02654350
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose(void)

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
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
  while( true ) {
                    /* try { // try from 02654350 to 02754353 has its CatchHandler @ 026543bc */
    uStack0000000000000000 = 0;
    uStack0000000000000008 = 0;
    FUN_03013558();
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) break;
    lVar1 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = uStack0000000000000008;
    *puVar2 = uStack0000000000000000;
    unaff_w20 = unaff_w20 + 1;
    thunk_FUN_01b4f09c(puVar2,0);
    do {
      puVar2 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar2 + 6;
      if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_026544bc;
    } while (*(int *)(puVar2 + 3) < 0);
    in_stack_00000068 = *(undefined4 *)(puVar2 + 5);
    in_stack_00000060 = puVar2[4];
    thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                       &stack0x00000060);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) break;
    in_stack_00000040 = puVar2[8];
    in_stack_00000038 = puVar2[7];
    in_stack_00000030 = *unaff_x26;
    thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                       &stack0x00000030);
  }
LAB_026544bc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


