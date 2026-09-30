/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetSeatedZeroPoseToStandingAbsoluteTrackingPose
ENTRY_POINT: 037190a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_CVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 037190a4 to 038190a7 has its CatchHandler @ 0371927c */
                    /* try { // try from 037190a8 to 038190af has its CatchHandler @ 037192b4 */
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xc70));
  thunk_FUN_01efb3a4(
                    Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
                    );
  thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
                    /* try { // try from 037190d0 to 038190d7 has its CatchHandler @ 037192cc */
  thunk_FUN_01efb3a4(
                    Method_Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass7_0_<DeserializeImplementation>b__0__
                    );
                    /* try { // try from 037190dc to 038190e7 has its CatchHandler @ 037192c0 */
  thunk_FUN_01efb3a4(
                    Method_Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass8_0_<SerializeImplementation>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_Sirenix_Serialization_WeakSerializableFormatter_<>c__DisplayClass2_0_<_ctor>b__0__
                    );
  *(undefined1 *)(unaff_x21 + 0x13e) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar2 = FUN_036dae98();
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


