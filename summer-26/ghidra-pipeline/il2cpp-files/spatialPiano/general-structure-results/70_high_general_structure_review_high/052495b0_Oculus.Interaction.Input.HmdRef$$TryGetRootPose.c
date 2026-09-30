/*
FUNCTION_NAME: Oculus.Interaction.Input.HmdRef$$TryGetRootPose
ENTRY_POINT: 052495b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_11;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_HmdRef__TryGetRootPose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar15;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02f08768(Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<OrgScopedID>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<PlatformInitialize>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<ProductList>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x98c) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  FUN_052364c4();
  uVar7 = thunk_FUN_02f45270(*unaff_x21);
  FUN_03bd8d14(uVar7,*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
  puVar5 = Oculus_Platform_Request<PlatformInitialize>_TypeInfo;
  puVar4 = Oculus_Platform_Request<OrgScopedID>_TypeInfo;
  puVar3 = Oculus_Platform_Request<LinkedAccountList>_TypeInfo;
  puVar2 = Oculus_Platform_Request<LeaderboardList>_TypeInfo;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x19 + 0x28),
               *(undefined8 *)Oculus_Platform_Request<ProductList>_TypeInfo);
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  do {
    uVar8 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar3);
    plVar6 = in_stack_00000030;
    if ((uVar8 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000020,*(undefined8 *)puVar2);
      if (*(long *)(unaff_x19 + 0x50) == 0) {
        *(long *)(unaff_x19 + 0x48) = unaff_x19;
        *(long *)(unaff_x19 + 0x50) = unaff_x19;
      }
      FUN_05236568();
      return;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *in_stack_00000030;
    lVar15 = *(long *)(unaff_x19 + 0x30);
    lVar11 = *(long *)puVar4;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_052496f0;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(in_stack_00000030,lVar11,2);
LAB_052496f0:
    uVar10 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar4;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto LAB_05249750;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar6,lVar11,4);
LAB_05249750:
    lVar11 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    if (lVar15 == 0) {
LAB_052497fc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *(long *)(lVar15 + 0x10);
    lVar13 = *(long *)puVar5;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_052497fc;
    uVar1 = *(uint *)(lVar15 + 0x18);
    uVar8 = uVar10 & 0xffffffff | lVar11 << 0x20;
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
      *(ulong *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
    }
    else {
      FUN_03bd9544(lVar15,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}


