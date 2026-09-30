/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 038f4748
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar6;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar2 = FUN_068485f0();
  if ((int)uVar2 < 1) {
    bVar1 = false;
  }
  else {
    uVar6 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000028,
             (void *)((long)unaff_x21 + uVar6 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      in_stack_00000020 = in_stack_00000028;
      uVar3 = FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618(lVar5);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar5;
      uVar4 = FUN_06891484(&stack0x00000008,uVar3);
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar6 = uVar6 + 1;
      bVar1 = uVar6 < uVar2;
    } while (uVar2 != uVar6);
  }
  return bVar1;
}


