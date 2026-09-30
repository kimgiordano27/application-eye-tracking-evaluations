/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04d62424
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(ulong param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cfa08,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x22 + 0xb79) = 1;
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_04d62d38();
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
    uVar1 = 0;
  }
  else if (*(long *)(unaff_x19 + 0x30) == 0) {
    uVar1 = 1;
  }
  else {
    plVar2 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x10);
    if (plVar2 == (long *)0x0) {
      uVar1 = 2;
    }
    else {
      lVar3 = *plVar2;
      uVar1 = 2;
      if ((*(byte *)(DAT_083cfa08 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
         (uVar1 = 2,
         *(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_083cfa08 + 0x130) * 8 + -8) ==
         DAT_083cfa08)) {
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}


