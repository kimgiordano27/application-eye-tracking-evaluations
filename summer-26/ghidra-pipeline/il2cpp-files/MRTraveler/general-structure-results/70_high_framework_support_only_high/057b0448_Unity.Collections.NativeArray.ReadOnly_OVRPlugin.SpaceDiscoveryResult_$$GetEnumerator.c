/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 057b0448
PROGRAM: MRTraveler-libil2cpp.so
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
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w24;
  undefined8 in_stack_00000018;
  
  uVar1 = in_stack_00000018;
  do {
    in_stack_00000018 = uVar1;
    thunk_FUN_03cf4e64(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000018);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_03cf1244(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar2 = thunk_FUN_0715d3b4();
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    uVar1 = unaff_x21;
  } while (unaff_w19 < *(uint *)(unaff_x22 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


