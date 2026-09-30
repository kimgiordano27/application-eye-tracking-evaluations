/*
FUNCTION_NAME: Oculus.Interaction.Input.ShadowHand$$GetWorldPose
ENTRY_POINT: 05248760
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_ShadowHand__GetWorldPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int in_w8;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *plStack0000000000000030;
  
  puVar5 = Oculus_Platform_Request<ChallengeList>_TypeInfo;
  puVar4 = Oculus_Platform_Request<BlockedUserList>_TypeInfo;
  puVar3 = Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
  puVar2 = PTR_DAT_067cbb48;
  puVar1 = PTR_DAT_067cbb40;
  plStack0000000000000030 = (long *)0x0;
  if (in_w8 == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x19 + 0x28),
                 *(undefined8 *)Oculus_Platform_Request<ChallengeList>_TypeInfo);
    plStack0000000000000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar7 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar4),
          plVar6 = plStack0000000000000030, (uVar7 & 1) != 0) {
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0475f968();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 7) * 0x10 + 0x138);
            goto LAB_05248850;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar6,lVar10,7);
LAB_05248850:
      (*(code *)*puVar9)(plVar6,uVar8,puVar9[1]);
    }
    FUN_04aff1ac(&stack0x00000020,*(undefined8 *)puVar3);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar5);
      plStack0000000000000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      do {
        uVar7 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar4);
        plVar6 = plStack0000000000000030;
        if ((uVar7 & 1) == 0) {
          FUN_04aff1ac(&stack0x00000020,*(undefined8 *)puVar3);
          return;
        }
        uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_0475f968();
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *plVar6;
        lVar10 = *(long *)puVar2;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 7) * 0x10 + 0x138);
              goto LAB_05248920;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(plVar6,lVar10,7);
LAB_05248920:
        (*(code *)*puVar9)(plVar6,uVar8,puVar9[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


