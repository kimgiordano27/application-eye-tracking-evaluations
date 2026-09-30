/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.BoneCapsule>
ENTRY_POINT: 01ca4c6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_BoneCapsule>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  long unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x48));
  thunk_FUN_01ad9084(StringLiteral_809);
  *(undefined1 *)(unaff_x21 + 0x946) = 1;
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (lVar6 = FUN_023ac124(*(long *)(unaff_x19 + 0x58),*unaff_x20,*(undefined8 *)StringLiteral_699),
     puVar1 = StringLiteral_698, lVar6 != 0)) {
                    /* try { // try from 01ca4cb0 to 01da4cc7 has its CatchHandler @ 01ca4c08 */
    uVar3 = FUN_023a910c(lVar6,unaff_x20[1],*(undefined8 *)StringLiteral_698);
    uVar4 = FUN_023a910c(lVar6,unaff_x20[1] + 1,*(undefined8 *)puVar1);
    uVar5 = FUN_023a910c(lVar6,unaff_x20[1] + 2,*(undefined8 *)puVar1);
    puVar1 = StringLiteral_809;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      pdVar7 = (double *)
               FUN_023c7860(*(long *)(unaff_x19 + 0x20),uVar3,*(undefined8 *)StringLiteral_809);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        pdVar8 = (double *)FUN_023c7860(*(long *)(unaff_x19 + 0x20),uVar4,*(undefined8 *)puVar1);
        puVar2 = StringLiteral_731;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          pdVar9 = (double *)FUN_023c7860(*(long *)(unaff_x19 + 0x20),uVar5,*(undefined8 *)puVar1);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          dVar10 = *pdVar8 - *pdVar7;
          dVar11 = pdVar8[1] - pdVar7[1];
          dVar14 = pdVar8[2] - pdVar7[2];
          dVar12 = *pdVar9 - *pdVar7;
          dVar13 = pdVar9[1] - pdVar7[1];
          dVar15 = pdVar9[2] - pdVar7[2];
          in_stack_00000008 = dVar11 * dVar15 - dVar14 * dVar13;
          in_stack_00000010 = dVar14 * dVar12 - dVar10 * dVar15;
          in_stack_00000018 = dVar10 * dVar13 - dVar11 * dVar12;
          FUN_01c9e1cc(&stack0x00000008);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


