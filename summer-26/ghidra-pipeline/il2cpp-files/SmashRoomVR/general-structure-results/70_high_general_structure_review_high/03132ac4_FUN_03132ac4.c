/*
FUNCTION_NAME: FUN_03132ac4
ENTRY_POINT: 03132ac4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03132ac4(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
  (*(code *)*param_1)();
  puVar3 = StringLiteral_2294;
  puVar2 = 
  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
  ;
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    uVar8 = FUN_0255aae0(*(long *)(unaff_x20 + 0x78),*(undefined8 *)PTR_DAT_03d7f6d0);
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_02b2c1b0(lVar9,uVar8,*(undefined8 *)puVar3);
    puVar6 = PTR_DAT_03d7f6d8;
    puVar5 = PTR_DAT_03d7f6c0;
    puVar4 = PTR_DAT_03d7f6b0;
    puVar3 = StringLiteral_2658;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar9 != 0) {
      FUN_02b2d2d4(&stack0x00000008,lVar9,*(undefined8 *)StringLiteral_2660);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar10 = System_Collections_Generic_EqualityComparer<Vector3>___ctor
                           (&stack0x00000020,*(undefined8 *)puVar3);
        uVar7 = in_stack_00000030;
        if ((uVar10 & 1) == 0) {
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
        lVar13 = *unaff_x19;
        uVar8 = *(undefined8 *)(lVar9 + 0x20);
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03132bf0;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ae9f78();
LAB_03132bf0:
        uVar12 = (*(code *)*puVar11)();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0391f968(uVar8,uVar12,0);
        if ((uVar10 & 1) == 0) {
          FUN_03132da8(uVar10,*(undefined8 *)(lVar9 + 0x10));
          FUN_0313506c(lVar9,0);
          lVar13 = *(long *)(unaff_x20 + 0x88);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar14 = *(long *)(lVar13 + 0x10);
          lVar16 = *(long *)PTR_DAT_03d7f6e0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar15 = lVar9;
            thunk_FUN_01b4f09c(plVar15,lVar9);
          }
          else {
            FUN_02b599e4(lVar13,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0255c1c8(*(long *)(unaff_x20 + 0x78),uVar7 & 0xffffffff,*(undefined8 *)puVar4);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


