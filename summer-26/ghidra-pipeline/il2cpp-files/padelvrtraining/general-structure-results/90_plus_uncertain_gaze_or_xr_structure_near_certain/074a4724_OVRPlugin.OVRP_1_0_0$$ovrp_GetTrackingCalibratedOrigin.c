/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 074a4724
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long *unaff_x24;
  uint uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar3 = PTR_DAT_091afe28;
  puVar2 = PTR_DAT_091afe20;
  FUN_06b6e20c(&stack0x00000008);
  uVar8 = 1;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
  while( true ) {
    uVar5 = FUN_06e6c258(&stack0x00000030,*(undefined8 *)puVar3);
    uVar4 = in_stack_00000048;
    uVar6 = in_stack_00000040;
    if ((uVar5 & 1) == 0) {
      FUN_06e6c378(&stack0x00000030,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_091b49f0;
      FUN_071d4e68((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x24);
      }
      FUN_074a492c();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar5 = 0;
          uVar7 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar5 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            free(__ptr);
            uVar7 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar6 = FUN_074a3564(uVar6);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(uVar8 - 1) * 8 + 0x20) = uVar6;
    uVar6 = FUN_074a3564(uVar4);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar8) break;
    lVar1 = (long)(int)uVar8;
    uVar8 = uVar8 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


