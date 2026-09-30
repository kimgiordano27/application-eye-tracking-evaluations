/*
FUNCTION_NAME: OVRInput.OVRControllerGamepadAndroid$$ConfigureTouchMap
ENTRY_POINT: 03132b20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRInput_OVRControllerGamepadAndroid__ConfigureTouchMap(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
  puVar6 = PTR_DAT_03d7f6d8;
  puVar5 = PTR_DAT_03d7f6c0;
  puVar4 = PTR_DAT_03d7f6b0;
  puVar3 = StringLiteral_2658;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  FUN_02b2d2d4(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar8 = System_Collections_Generic_EqualityComparer<Vector3>___ctor
                      (&stack0x00000020,*(undefined8 *)puVar3);
    uVar7 = in_stack_00000030;
    if ((uVar8 & 1) == 0) {
      FUN_02734648(&stack0x00000020,*(undefined8 *)StringLiteral_2657);
      return;
    }
    if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = FUN_0255aca0(*(long *)(unaff_x20 + 0x78),in_stack_00000030 & 0xffffffff,
                         *(undefined8 *)puVar5);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar12 = *unaff_x19;
    uVar17 = *(undefined8 *)(lVar9 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03132bf0;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ae9f78();
LAB_03132bf0:
    uVar11 = (*(code *)*puVar10)();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(uVar17,uVar11,0);
    if ((uVar8 & 1) == 0) {
      FUN_03132da8(uVar8,*(undefined8 *)(lVar9 + 0x10));
      FUN_0313506c(lVar9,0);
      lVar12 = *(long *)(unaff_x20 + 0x88);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar15 = *(long *)PTR_DAT_03d7f6e0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar9;
        thunk_FUN_01b4f09c(plVar14,lVar9);
      }
      else {
        FUN_02b599e4(lVar12,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0255c1c8(*(long *)(unaff_x20 + 0x78),uVar7 & 0xffffffff,*(undefined8 *)puVar4);
    }
  } while( true );
}


