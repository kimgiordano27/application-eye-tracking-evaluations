/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 05d24dc0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x23;
  
  if ((*(byte *)(unaff_x23 + 0x3d9) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b01c0);
    *(undefined1 *)(unaff_x23 + 0x3d9) = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x58),param_2);
  *(undefined1 *)(param_1 + 0x81) = 1;
  if (((*(long *)(param_1 + 0x20) != 0) && (param_4 != 0)) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x50), plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x188))
                      (plVar1,param_3,*(undefined4 *)(param_4 + 0x14),*(undefined8 *)(*plVar1 + 400)
                      );
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    thunk_FUN_0333a630();
    *(long *)(param_1 + 0x78) = param_4;
    *(undefined4 *)(param_1 + 0x70) = param_3;
    thunk_FUN_0333a630((long *)(param_1 + 0x78),param_4);
    *(undefined1 *)(param_1 + 0x80) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


