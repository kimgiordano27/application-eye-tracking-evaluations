/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 01954bf4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  uVar1 = FUN_01953dcc(param_2,*(undefined8 *)(param_1 + 0xd8));
  if ((uVar1 & 1) == 0) {
    return 0xffffffff;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_0122e748(lVar3);
  }
  if (unaff_x21 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_0124baac();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60();
    }
  }
  uVar2 = FUN_01487110(*(undefined8 *)(unaff_x20 + 0x10),lVar3,0,*(undefined4 *)(unaff_x20 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                      + 0xd0) + 0x20) + 0xc0) + 0x150));
  return uVar2;
}


