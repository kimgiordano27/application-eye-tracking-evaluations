/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 04d6250c
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


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0xb7a) = unaff_w23;
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_04d62d38();
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      return *(undefined8 *)(unaff_x19 + 0x24);
    }
                    /* WARNING: Subroutine does not return */
    FUN_067318bc(*(long *)(unaff_x19 + 0x30),0);
  }
  if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* WARNING: Subroutine does not return */
  FUN_068befc0(0);
}


