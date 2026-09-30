/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0419f35c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar2 + 0x40)) {
      puVar1 = (undefined8 *)thunk_FUN_02dd328c();
      FUN_038e88a8(*(undefined8 *)(unaff_x19 + 0x10),*puVar1,puVar1[1],0,
                   *(undefined4 *)(unaff_x19 + 0x18),
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                  0xd0) + 0x20) + 0xc0) + 0x148));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


