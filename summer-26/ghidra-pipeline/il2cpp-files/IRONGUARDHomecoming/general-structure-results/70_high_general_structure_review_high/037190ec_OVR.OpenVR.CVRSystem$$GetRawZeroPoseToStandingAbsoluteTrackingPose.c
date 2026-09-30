/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetRawZeroPoseToStandingAbsoluteTrackingPose
ENTRY_POINT: 037190ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void OVR_OpenVR_CVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x640));
                    /* try { // try from 037190f4 to 0381910b has its CatchHandler @ 037192c8 */
  *(undefined1 *)(unaff_x21 + 0x13e) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar2 = FUN_036dae98();
                    /* try { // try from 0371910c to 0381911f has its CatchHandler @ 037192b0 */
    if ((uVar2 & 1) == 0) {
      FUN_037184fc();
      bVar1 = *(byte *)(*(long *)
                         Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__0__
                       + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__0__
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
    }
    else {
      FUN_037184fc();
      lVar3 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar3 == 0) goto OVR_OpenVR_CVRSystem__GetControllerRoleForTrackedDeviceIndex;
      FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                   *(undefined8 *)(lVar3 + 0x18),0);
    }
    FUN_037184fc();
    return;
  }
OVR_OpenVR_CVRSystem__GetControllerRoleForTrackedDeviceIndex:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


