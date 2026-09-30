/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Reset
ENTRY_POINT: 04d4085c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset(void)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar2;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (!(bool)in_CY) {
    FUN_055cd8c4();
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) break;
    lVar2 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
    puVar1 = (undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *puVar1 = 0;
    unaff_w20 = unaff_w20 + 1;
    thunk_FUN_02f411dc(puVar1,0);
    do {
      lVar2 = unaff_x25;
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = lVar2 + 0x20;
      if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x24) {
        return;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) goto LAB_04d409c0;
    } while (*(int *)(lVar2 + 8) < 0);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x18);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x10);
    thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                       &stack0x00000020);
    in_CY = *(uint *)(unaff_x22 + 0x18) <= unaff_x24;
  }
LAB_04d409c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


