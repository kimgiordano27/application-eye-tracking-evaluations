/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0<OVRPlugin.Vector3f>
ENTRY_POINT: 05be2a48
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>
               (void)

{
  long lVar1;
  undefined8 uVar2;
  ulong __n;
  long unaff_x19;
  long unaff_x20;
  code *pcVar3;
  undefined1 *__s;
  void *unaff_x23;
  ulong __n_00;
  undefined1 *__dest;
  long unaff_x28;
  long unaff_x29;
  
  __n_00 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0xfc);
  __dest = &stack0x00000000 + -(__n_00 + 0xf & 0x1fffffff0);
  __s = __dest + -(__n + 0xf & 0x1fffffff0);
  memset(__s,0,__n);
  lVar1 = *(long *)(unaff_x20 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  (**(code **)**(undefined8 **)(unaff_x19 + 0x38))(unaff_x29 + -0x28);
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
  FUN_04352ef4(__s,*(long *)(lVar1 + 0x80) + 0x20,unaff_x29 + -0x40);
  FUN_0434fc78(__s,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80) + 0x40);
  FUN_0434fc78(__s,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80) + 0x80);
  lVar1 = *(long *)(unaff_x19 + 0x38);
  if (-1 < *(int *)(*(long *)(lVar1 + 0x20) + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(__dest,unaff_x23,__n_00);
  FUN_04947f0c(__s,*(long *)(*(long *)(lVar1 + 0x18) + 0x80) + 0x60,__dest,__n_00);
  FUN_0434fc78(__s,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80) + 0xa0);
  FUN_0434fc78(__s,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80) + 0xc0,
               *(undefined8 *)(unaff_x29 + -0x48));
  FUN_04351880(__s,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80),0xffffffff)
  ;
  pcVar3 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
  uVar2 = thunk_FUN_049a5d94(__s,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80) +
                                 0x20);
  (*pcVar3)(uVar2,__s,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
  pcVar3 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38);
  uVar2 = thunk_FUN_049a5d94(__s,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x80) +
                                 0x20);
  (*pcVar3)(uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


