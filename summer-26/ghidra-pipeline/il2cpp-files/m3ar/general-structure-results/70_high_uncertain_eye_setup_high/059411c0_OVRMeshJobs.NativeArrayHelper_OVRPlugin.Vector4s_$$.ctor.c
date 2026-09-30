/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 059411c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>___ctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = FUN_05940b34();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
      thunk_FUN_0406e000();
                    /* try { // try from 05941218 to 05a4121f has its CatchHandler @ 0594132c */
      uVar2 = OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose();
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


