/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 05cb7ab0
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator(void)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  int iVar3;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  _iStack0000000000000008 = 0;
  while (uVar2 = FUN_08523ba8(), (uVar2 & 1) != 0) {
    iVar1 = iStack0000000000000008;
    iVar3 = iStack000000000000000c;
    if (iStack000000000000000c < iStack0000000000000008) {
      do {
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0406aaec();
        }
        FUN_087271f8();
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  return;
}


