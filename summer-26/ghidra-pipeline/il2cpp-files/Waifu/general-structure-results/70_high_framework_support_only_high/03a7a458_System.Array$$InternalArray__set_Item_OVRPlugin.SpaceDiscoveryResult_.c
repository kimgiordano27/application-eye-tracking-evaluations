/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03a7a458
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


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>
              (long param_1,undefined1 param_2 [16])

{
  int iVar1;
  ulong uVar2;
  undefined8 in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack0000000000000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar3 = param_2._0_8_;
  uVar4 = param_2._8_8_;
  do {
    unaff_x26[2] = in_x9;
    unaff_x26[1] = uVar4;
    *unaff_x26 = uVar3;
    lStack0000000000000008 = param_1;
    uVar2 = FUN_06891484(&stack0x00000008,unaff_x22);
    if ((uVar2 & 1) != 0) {
LAB_03a7a484:
      iVar1 = FUN_0334d06c();
      return iVar1 + (int)unaff_x23;
    }
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x25 == unaff_x23) {
      unaff_x23 = 0xffffffff;
      goto LAB_03a7a484;
    }
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000040 = unaff_x21[2];
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    unaff_x22 = FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    in_x9 = in_stack_00000058;
    uVar3 = in_stack_00000048;
    uVar4 = in_stack_00000050;
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0338f618(param_1);
      in_x9 = in_stack_00000058;
      uVar3 = in_stack_00000048;
      uVar4 = in_stack_00000050;
    }
  } while( true );
}


