/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04176b60
PROGRAM: Untangled-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    puVar1 = (undefined8 *)(param_1 + unaff_x22);
    uStack0000000000000010 = puVar1[2];
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    if (unaff_x20 == 0) break;
    in_stack_00000020 = uStack0000000000000000;
    in_stack_00000028 = uStack0000000000000008;
    in_stack_00000030 = uStack0000000000000010;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x18;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


