/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 0276453c
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    FUN_027645fc();
    iVar1 = unaff_w25 + -1;
    if (iVar1 == 0 || unaff_w25 < 1) break;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    unaff_w25 = iVar1;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
  }
  if (1 < unaff_w24) {
    do {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02763c6c();
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_027645fc();
      unaff_w21 = unaff_w21 + -1;
    } while (2 < (unaff_w21 - unaff_w22) + 2);
  }
  return;
}


