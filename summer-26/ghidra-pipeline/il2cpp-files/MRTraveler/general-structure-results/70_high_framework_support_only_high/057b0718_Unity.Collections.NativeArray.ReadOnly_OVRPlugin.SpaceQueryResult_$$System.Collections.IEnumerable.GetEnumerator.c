/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 057b0718
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar3 = *unaff_x26;
    unaff_x25[1] = unaff_x26[1];
    *unaff_x25 = uVar3;
    uVar1 = thunk_FUN_0715d3b4();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x27 = unaff_x27 + -1;
    unaff_x26 = unaff_x26 + 2;
    if (unaff_x27 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    thunk_FUN_03cf4e64(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000020);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03cf1244(lVar2);
    }
  } while (unaff_w19 < *(uint *)(unaff_x23 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


