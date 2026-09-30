/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 04412f50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 uVar6;
  long in_stack_00000008;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  do {
    uStack0000000000000038 = unaff_x21[1];
    uStack0000000000000030 = *unaff_x21;
    uStack0000000000000040 = unaff_x21[2];
    uVar1 = thunk_FUN_02dd2d7c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                               &stack0x00000030);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    puVar5 = (undefined8 *)(unaff_x25 + (long)(int)unaff_w19 * (long)unaff_w27);
    uVar6 = *puVar5;
    uVar4 = puVar5[2];
    *(undefined8 *)(unaff_x26 + 0x18) = puVar5[1];
    *(undefined8 *)(unaff_x26 + 0x10) = uVar6;
    *(undefined8 *)(unaff_x26 + 0x20) = uVar4;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_05542350(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
  } while (unaff_w19 < *(uint *)(unaff_x22 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


