/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0696f650
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *puVar9;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_0696fa20();
  puVar1 = PTR_DAT_08486bc0;
  FUN_0696faa4();
  FUN_0696fa20();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0696faa4();
    FUN_0696fa20();
    if ((*(long *)(unaff_x19 + 0x30) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0))
    {
      FUN_0696faa4();
      FUN_0696fa20();
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         ((lVar8 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8), lVar8 != 0 &&
          (*(long *)(lVar8 + 0x40) != 0)))) {
        FUN_0696faa4();
        FUN_06970000();
        FUN_0696fa20();
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0)) {
          FUN_0696faa4();
          FUN_06970000();
          FUN_0696fa20();
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0)) {
            FUN_0696faa4();
            FUN_06970000();
            FUN_0696fa20();
            in_stack_00000038._4_4_ = 0;
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               ((lVar8 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8), lVar8 != 0 &&
                (lVar8 = *(long *)(lVar8 + 0x50), lVar8 != 0)))) {
              FUN_04de90b8(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_084b5ed0);
              puVar3 = PTR_DAT_084b7220;
              puVar2 = PTR_DAT_084b5eb8;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000018;
              in_stack_00000010 = &stack0x00000020;
              in_stack_00000008 = 0;
              while (uVar4 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2),
                    lVar8 = in_stack_00000030, (uVar4 & 1) != 0) {
                uVar5 = FUN_0674e2a4((long)&stack0x00000038 + 4,0);
                FUN_065c0764(*(undefined8 *)puVar3,uVar5,0);
                FUN_0696fa20();
                FUN_0696faa4();
                FUN_0696fa20();
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_0694d3e8(lVar8,0);
                FUN_0696faa4();
                lVar6 = FUN_0694d3e8(lVar8,0);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_0696faa4();
                FUN_0696fa20();
                FUN_0694d460(lVar8,0);
                FUN_0696faa4();
                lVar8 = FUN_0694d460(lVar8,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_0696faa4();
                in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + 1;
              }
              FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b5ea0);
              plVar7 = *(long **)(unaff_x19 + 0x20);
              if (plVar7 != (long *)0x0) {
                puVar9 = (undefined8 *)(unaff_x19 + 0x28);
                (**(code **)(*plVar7 + 0x5e8))(plVar7,*puVar9,*(undefined8 *)(*plVar7 + 0x5f0));
                *puVar9 = *(undefined8 *)puVar1;
                thunk_FUN_03afed3c(puVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


