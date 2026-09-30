/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 048ce658
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_06f72008;
  if (unaff_w23 <= (int)unaff_w19) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
LAB_048ce704:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      in_stack_00000008._4_1_ = unaff_w22 & 1;
      uVar2 = thunk_FUN_0301043c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                                 (long)&stack0x00000008 + 4);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar1);
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) goto LAB_048ce704;
      uVar3 = FUN_05a67ce0(unaff_x21 + (int)unaff_w19 + 0x20,uVar2,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
      if ((uVar3 & 1) != 0) {
        return unaff_w19;
      }
      unaff_w19 = unaff_w19 - 1;
    } while (unaff_w23 <= (int)unaff_w19);
  }
  return 0xffffffff;
}


