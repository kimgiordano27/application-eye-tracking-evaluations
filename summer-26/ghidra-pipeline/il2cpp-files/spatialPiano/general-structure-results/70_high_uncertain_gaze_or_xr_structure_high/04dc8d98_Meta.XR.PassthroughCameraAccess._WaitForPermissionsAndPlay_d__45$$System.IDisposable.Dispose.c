/*
FUNCTION_NAME: Meta.XR.PassthroughCameraAccess.<WaitForPermissionsAndPlay>d__45$$System.IDisposable.Dispose
ENTRY_POINT: 04dc8d98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_permission_setup
*/


void Meta_XR_PassthroughCameraAccess_<WaitForPermissionsAndPlay>d__45__System_IDisposable_Dispose
               (long param_1)

{
  int iVar1;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  long in_stack_00001008;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x1e0);
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d0 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d0 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  memcpy(&stack0x00000008,unaff_x20,0x1000);
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  iVar1 = FUN_04dc6930(&stack0x00000008,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
  iVar1 = FUN_0609d588((long)unaff_x20 + 2,unaff_x19 + 2,(long)iVar1,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00001008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


