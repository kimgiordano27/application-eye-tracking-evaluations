/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d5c30
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  bool in_ZR;
  int iVar1;
  long unaff_x19;
  long unaff_x22;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  FUN_036cf930();
  *(long *)(unaff_x19 + 0x60) = unaff_x22;
  thunk_FUN_01656ef8();
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x22 + 0x68);
    thunk_FUN_01656ef8();
    if ((*(byte *)(unaff_x22 + 0x70) >> 1 & 1) != 0) {
      FUN_01fbafc0();
    }
    iVar1 = FUN_036f2cf8();
    if (iVar1 != 0) {
      FUN_01fbafc0();
    }
    *(undefined4 *)(unaff_x19 + 0x5c) = 2;
    FUN_036d6848();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


