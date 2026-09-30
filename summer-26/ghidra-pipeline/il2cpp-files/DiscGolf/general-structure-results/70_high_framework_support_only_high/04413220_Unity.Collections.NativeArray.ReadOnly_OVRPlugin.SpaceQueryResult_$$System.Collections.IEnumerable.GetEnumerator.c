/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04413220
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar2;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while( true ) {
    if ((*(ushort *)(**(long **)(param_1 + 0xc0) + 0x135) & 1) == 0) {
      FUN_02dcfd18(**(long **)(param_1 + 0xc0));
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    uVar2 = *unaff_x27;
    *(undefined8 *)(unaff_x26 + 0x18) = unaff_x27[1];
    *(undefined8 *)(unaff_x26 + 0x10) = uVar2;
    uVar1 = thunk_FUN_05542350();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    unaff_x27 = unaff_x27 + 2;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x25 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    thunk_FUN_02dd2d7c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000020);
    param_1 = *(long *)(unaff_x20 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


