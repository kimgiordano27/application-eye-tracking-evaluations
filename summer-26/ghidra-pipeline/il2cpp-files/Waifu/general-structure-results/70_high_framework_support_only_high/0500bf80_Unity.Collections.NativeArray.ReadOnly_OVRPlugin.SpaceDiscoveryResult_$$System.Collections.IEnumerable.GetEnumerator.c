/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0500bf80
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined1 in_CY;
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long in_stack_00000008;
  undefined8 in_stack_00000028;
  
  while (!(bool)in_CY) {
    in_stack_00000028 = unaff_x21;
    uVar1 = FUN_03398650(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000028);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000008 = lVar3;
    uVar2 = FUN_06891484(&stack0x00000008,uVar1);
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    in_CY = *(uint *)(unaff_x22 + 0x18) <= unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


