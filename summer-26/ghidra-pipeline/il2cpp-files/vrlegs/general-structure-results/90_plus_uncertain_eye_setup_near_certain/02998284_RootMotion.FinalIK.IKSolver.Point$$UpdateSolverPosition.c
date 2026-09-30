/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolver.Point$$UpdateSolverPosition
ENTRY_POINT: 02998284
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02998348) */

void RootMotion_FinalIK_IKSolver_Point__UpdateSolverPosition(long param_1,long param_2)

{
  undefined8 uVar1;
  char cStack000000000000000c;
  
  if ((DAT_04127cf7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07d98);
    DAT_04127cf7 = 1;
  }
  if (param_2 != 0) {
    *(undefined2 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x24) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x39) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined1 *)(param_2 + 0x20) = 4;
    *(undefined4 *)(param_2 + 0x54) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar1,&stack0x0000000c,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_02093610(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)PTR_DAT_03d07d98);
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


