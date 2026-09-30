/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRLocatable.TrackingSpacePose>$$Copy
ENTRY_POINT: 05ea2644
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;functionality_gaze_retrieval_or_extraction
*/


undefined4 Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__Copy(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 in_w8;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xa1b) = in_w8;
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item();
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
    uVar2 = 0;
  }
  else if (*(long *)(unaff_x19 + 0x30) == 0) {
    uVar2 = 1;
  }
  else {
    plVar3 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x10);
    if (plVar3 == (long *)0x0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      lVar4 = *plVar3;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09285a10 + 0x130);
      if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
         (uVar2 = 2,
         *(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_09285a10)) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}


