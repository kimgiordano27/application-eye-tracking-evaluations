/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 04a8c4dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition
          (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16],
          undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar3 = param_4._8_8_;
  uVar8 = param_4._0_8_;
code_r0x04a8c4dc:
  uStack0000000000000090 = uVar8;
  uStack0000000000000098 = uVar3;
                    /* try { // try from 04a8c4e8 to 04b8c4eb has its CatchHandler @ 04a8c944 */
  uVar2 = (*param_1)(unaff_x23,param_6,param_7,param_5[1]);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
LAB_04a8c4f4:
  uVar4 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
  if ((int)uVar4 <= unaff_w26) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar8 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar8,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8);
  }
                    /* try { // try from 04a8c4fc to 04b8c527 has its CatchHandler @ 04a8c95c */
  if ((uint)unaff_x27 < uVar4) {
    unaff_w26 = unaff_w26 + 1;
    uVar7 = *(uint *)(unaff_x28 + (unaff_x24 & 0xffffffff) * (unaff_x29 & 0xffffffff) + 4);
    unaff_x24 = (ulong)uVar7;
    if (-1 < (int)uVar7) {
      if (uVar4 <= uVar7) goto LAB_04a8c664;
      unaff_x27 = unaff_x24;
      if (*(int *)(unaff_x28 + unaff_x24 * (unaff_x29 & 0xffffffff)) == unaff_w21)
      goto code_r0x04a8c418;
      goto LAB_04a8c4f4;
    }
    uVar4 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar4 < 0) {
      if (unaff_x25 == 0) goto LAB_04a8c6a4;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      uVar7 = *(uint *)(unaff_x25 + 0x18);
      if (uVar4 == uVar7) {
        FUN_04a8c140();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a8c6a4;
        uVar4 = *(uint *)(unaff_x19 + 0x24);
        unaff_x25 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
        if (unaff_x25 == 0) goto LAB_04a8c6a4;
        iVar1 = 0;
        iVar6 = (int)uVar8;
        if (iVar6 != 0) {
          iVar1 = unaff_w21 / iVar6;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar6;
        uVar7 = *(uint *)(unaff_x25 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      }
    }
    else {
      if (unaff_x25 == 0) goto LAB_04a8c6a4;
      uVar7 = *(uint *)(unaff_x25 + 0x18);
      if (uVar7 <= uVar4) goto LAB_04a8c664;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar4 * 0x38 + 0x24);
    }
    if (uVar7 <= uVar4) goto LAB_04a8c664;
    piVar9 = (int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x38);
    *piVar9 = unaff_w21;
    uVar12 = unaff_x20[3];
    uVar11 = unaff_x20[2];
    uVar3 = unaff_x20[5];
    uVar8 = unaff_x20[4];
    uVar13 = *unaff_x20;
    *(undefined8 *)(piVar9 + 4) = unaff_x20[1];
    *(undefined8 *)(piVar9 + 2) = uVar13;
    *(undefined8 *)(piVar9 + 0xc) = uVar3;
    *(undefined8 *)(piVar9 + 10) = uVar8;
    *(undefined8 *)(piVar9 + 8) = uVar12;
    *(undefined8 *)(piVar9 + 6) = uVar11;
    lVar10 = *(long *)(unaff_x19 + 0x10);
    if (lVar10 == 0) goto LAB_04a8c6a4;
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar10 + 0x18)) &&
       (uVar4 < *(uint *)(unaff_x25 + 0x18))) {
      lVar10 = lVar10 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x38 + 4) = *(int *)(lVar10 + 0x20) + -1;
      *(uint *)(lVar10 + 0x20) = uVar4 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a8c664:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a8c418:
  lVar10 = unaff_x28 + unaff_x24 * (unaff_x29 & 0xffffffff);
  uVar13 = unaff_x20[1];
  uVar11 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar15 = unaff_x20[2];
  unaff_x23 = *(long **)(unaff_x19 + 0x30);
  uVar20 = *(undefined8 *)(lVar10 + 0x10);
  uVar19 = *(undefined8 *)(lVar10 + 8);
  uVar14 = *(undefined8 *)(lVar10 + 0x20);
  uVar12 = *(undefined8 *)(lVar10 + 0x18);
  uVar18 = *(undefined8 *)(lVar10 + 0x30);
  uVar16 = *(undefined8 *)(lVar10 + 0x28);
  uVar3 = unaff_x20[5];
  uVar8 = unaff_x20[4];
  if (unaff_x23 == (long *)0x0) {
LAB_04a8c6a4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218(lVar10);
  }
  lVar5 = *unaff_x23;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar10) {
        param_5 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04a8c4b4;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  param_5 = (undefined8 *)FUN_02b7654c(unaff_x23,lVar10,0);
LAB_04a8c4b4:
  param_6 = &stack0x000000a0;
  param_1 = (code *)*param_5;
  param_7 = &stack0x00000070;
  in_stack_00000070 = uVar11;
  in_stack_00000078 = uVar13;
  in_stack_00000080 = uVar15;
  in_stack_00000088 = uVar17;
  in_stack_000000a0 = uVar19;
  in_stack_000000a8 = uVar20;
  in_stack_000000b0 = uVar12;
  in_stack_000000b8 = uVar14;
  in_stack_000000c0 = uVar16;
  in_stack_000000c8 = uVar18;
  goto code_r0x04a8c4dc;
}


