/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 031ff87c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(param_2 + 0x40)) {
    puVar1 = (undefined8 *)thunk_FUN_01f11920();
    in_stack_00000030 = *(undefined4 *)(puVar1 + 2);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    FUN_024745ac(*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000020,0,
                 *(undefined4 *)(unaff_x20 + 0x18),
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                0xd0) + 0x20) + 0xc0) + 0x150));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc();
}


