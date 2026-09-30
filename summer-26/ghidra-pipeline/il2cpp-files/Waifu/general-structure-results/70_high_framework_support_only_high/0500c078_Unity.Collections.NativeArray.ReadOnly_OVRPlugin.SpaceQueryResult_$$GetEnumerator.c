/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 0500c078
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w24;
  undefined8 in_stack_00000018;
  
  while( true ) {
    FUN_03398650(**(undefined8 **)(param_1 + 0xc0),param_3);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0338f618(lVar2);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar1 = FUN_06891484();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    param_1 = *(long *)(unaff_x20 + 0x20);
    param_3 = &stack0x00000018;
    in_stack_00000018 = unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


