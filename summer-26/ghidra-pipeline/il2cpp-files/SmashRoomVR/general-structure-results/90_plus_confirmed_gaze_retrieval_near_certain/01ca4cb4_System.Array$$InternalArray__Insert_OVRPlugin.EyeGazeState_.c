/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01ca4cb4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  
                    /* catch() { ... } // from try @ 01ca4c64 with catch @ 01ca4cb4 */
  uVar3 = FUN_023a910c(param_1,param_2,*unaff_x24);
                    /* try { // try from 01ca4cc8 to 01da4d73 has its CatchHandler @ 01ca4cc8
                       catch() { ... } // from try @ 01ca4cc8 with catch @ 01ca4cc8
                       catch() { ... } // from try @ 01ca4d7c with catch @ 01ca4cc8 */
  uVar4 = FUN_023a910c(param_1,*(int *)(unaff_x20 + 4) + 1,*unaff_x24);
  uVar5 = FUN_023a910c(param_1,*(int *)(unaff_x20 + 4) + 2,*unaff_x24);
  puVar2 = StringLiteral_809;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    pdVar6 = (double *)
             FUN_023c7860(*(long *)(unaff_x19 + 0x20),uVar3,*(undefined8 *)StringLiteral_809);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      pdVar7 = (double *)FUN_023c7860(*(long *)(unaff_x19 + 0x20),uVar4,*(undefined8 *)puVar2);
      puVar1 = StringLiteral_731;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        pdVar8 = (double *)FUN_023c7860(*(long *)(unaff_x19 + 0x20),uVar5,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        dVar9 = *pdVar7 - *pdVar6;
        dVar10 = pdVar7[1] - pdVar6[1];
        dVar13 = pdVar7[2] - pdVar6[2];
        dVar11 = *pdVar8 - *pdVar6;
        dVar12 = pdVar8[1] - pdVar6[1];
        dVar14 = pdVar8[2] - pdVar6[2];
        in_stack_00000008 = dVar10 * dVar14 - dVar13 * dVar12;
        in_stack_00000010 = dVar13 * dVar11 - dVar9 * dVar14;
        in_stack_00000018 = dVar9 * dVar12 - dVar10 * dVar11;
        FUN_01c9e1cc(&stack0x00000008);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


