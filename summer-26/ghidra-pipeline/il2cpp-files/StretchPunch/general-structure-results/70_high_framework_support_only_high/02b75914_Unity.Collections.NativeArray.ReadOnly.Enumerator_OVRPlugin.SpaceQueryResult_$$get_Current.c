/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 02b75914
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__get_Current
               (long param_1,long *param_2)

{
  ulong uVar1;
  long unaff_x19;
  uint unaff_w20;
  
                    /* catch() { ... } // from try @ 02b758b4 with catch @ 02b75914 */
                    /* catch() { ... } // from try @ 02b758cc with catch @ 02b75918 */
  if (*(uint *)(param_1 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
                    /* catch() { ... } // from try @ 02b75888 with catch @ 02b75920
                       catch() { ... } // from try @ 02b758fc with catch @ 02b75920 */
  if (param_2 != (long *)0x0) {
    param_1 = param_1 + (ulong)unaff_w20 * 0x20;
    uVar1 = (**(code **)(*param_2 + 0x1b8))
                      (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(unaff_x19 + 8),
                       *(undefined4 *)(unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 0x10),param_2,
                       *(undefined8 *)(*param_2 + 0x1c0));
    return (uVar1 & 1) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


