/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 02b75908
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Reset(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  
  plVar1 = (long *)FUN_021bb388();
  lVar3 = *(long *)(unaff_x21 + 0x18);
                    /* catch() { ... } // from try @ 02b758a4 with catch @ 02b75910 */
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (plVar1 != (long *)0x0) {
      lVar3 = lVar3 + (ulong)unaff_w20 * 0x20;
      uVar2 = (**(code **)(*plVar1 + 0x1b8))
                        (*(undefined4 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),
                         *(undefined4 *)(lVar3 + 0x38),*(undefined4 *)(unaff_x19 + 8),
                         *(undefined4 *)(unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 0x10),plVar1,
                         *(undefined8 *)(*plVar1 + 0x1c0));
      return (uVar2 & 1) != 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


