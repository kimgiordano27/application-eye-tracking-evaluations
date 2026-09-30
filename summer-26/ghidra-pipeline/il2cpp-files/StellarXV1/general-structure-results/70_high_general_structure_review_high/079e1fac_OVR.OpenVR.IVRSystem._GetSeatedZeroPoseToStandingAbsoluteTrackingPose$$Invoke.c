/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 079e1fac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = *param_1;
  thunk_FUN_040ec700((undefined8 *)(unaff_x22 + 0x30));
  if ((*(uint *)(unaff_x22 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x38));
    if (4 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)PTR_DAT_092eed18;
      thunk_FUN_040ec700();
      puVar1 = PTR_DAT_092eed08;
      if (*(int *)(*(long *)PTR_DAT_092eed08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (5 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x48) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        thunk_FUN_040ec700();
        uVar2 = FUN_074e71ac();
        if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
        }
        FUN_0897ed48(uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


