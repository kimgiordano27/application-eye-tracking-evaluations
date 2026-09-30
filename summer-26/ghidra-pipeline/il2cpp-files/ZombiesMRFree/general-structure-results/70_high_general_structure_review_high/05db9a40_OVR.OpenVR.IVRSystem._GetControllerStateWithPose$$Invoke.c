/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$Invoke
ENTRY_POINT: 05db9a40
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = (undefined8 *)PTR_DAT_06fbb9c0;
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      puVar2 = (undefined8 *)PTR_DAT_06fbb9c0;
    }
  }
  else {
    iVar1 = (int)*(long *)(param_1 + 0x18);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(param_1 + 0x20);
      thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x38));
      return;
    }
    puVar2 = (undefined8 *)PTR_DAT_06fbb9b8;
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      puVar2 = (undefined8 *)PTR_DAT_06fbb9b8;
    }
  }
  FUN_068bdec0(*puVar2,0);
  return;
}


