/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0516728c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((((uVar3 != 0) &&
       (*(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_06607480, uVar3 != 1)) &&
      (*(undefined8 *)(param_1 + 0x28) = unaff_x22, 2 < uVar3)) &&
     ((*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)PTR_DAT_06607468, uVar3 != 3 &&
      (*(undefined8 *)(param_1 + 0x38) = unaff_x21, 4 < uVar3)))) {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)PTR_DAT_06607470;
    puVar1 = PTR_DAT_06607460;
    if (*(int *)(*(long *)PTR_DAT_06607460 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    if (5 < uVar3) {
      *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      uVar2 = FUN_04db97ac(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
      }
      FUN_05eb3754(uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


