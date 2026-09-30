/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03c697d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  puVar1 = (undefined8 *)thunk_FUN_02d9d688();
  in_stack_00000068 = puVar1[5];
  in_stack_00000060 = puVar1[4];
  in_stack_00000078 = puVar1[7];
  in_stack_00000070 = puVar1[6];
  in_stack_00000048 = puVar1[1];
  in_stack_00000040 = *puVar1;
  in_stack_00000058 = puVar1[3];
  in_stack_00000050 = puVar1[2];
  FUN_03627c58(*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000040,0,
               *(undefined4 *)(unaff_x20 + 0x18),
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0)
                                    + 0x20) + 0xc0) + 0x150));
  return;
}


