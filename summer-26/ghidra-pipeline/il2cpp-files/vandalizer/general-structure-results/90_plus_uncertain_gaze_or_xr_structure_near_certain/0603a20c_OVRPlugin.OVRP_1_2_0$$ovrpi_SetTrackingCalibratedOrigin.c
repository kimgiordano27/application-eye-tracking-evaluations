/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0603a20c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *unaff_x24;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0603a25c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_0603a25c:
  (*(code *)*puVar4)();
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  FUN_06e67e1c(&stack0x00000020,0);
  *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
  *(ulong *)(unaff_x19 + 0x20) = CONCAT44(in_stack_00000030,uStack000000000000002c);
  *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,in_stack_00000028);
  *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
  lVar11 = *(long *)(unaff_x21 + 0xa8);
  if (lVar11 != 0) {
    uVar10 = 0;
    do {
      if (uVar10 == 0x1a) {
        FUN_060343d0(lVar11,1);
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar11 + 0x18);
        thunk_FUN_0329bf60();
        puVar2 = PTR_DAT_075f2ea8;
        puVar1 = PTR_DAT_075b55e8;
        lVar13 = 0;
        lVar11 = 0;
        uVar7 = 0;
        goto LAB_0603a42c;
      }
      FUN_060341ec(&stack0x00000020,lVar11,uVar10);
      uVar3 = uStack000000000000002c;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = in_stack_00000028;
      lVar11 = *(long *)(unaff_x21 + 0xa0);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_0603a5b0;
      plVar12 = *(long **)(lVar11 + (long)(int)uVar10 * 8 + 0x20);
      if (plVar12 == (long *)0x0) break;
      lVar11 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0603a37c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0322c1e8(plVar12,*unaff_x24,2);
LAB_0603a37c:
      (*(code *)*puVar4)(uVar3,plVar12,puVar4[1]);
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000028 = in_stack_00000048;
      if (*(long *)(unaff_x21 + 0xa8) == 0) break;
      FUN_0603422c(*(long *)(unaff_x21 + 0xa8),uVar10);
      lVar11 = *(long *)(unaff_x21 + 0xa8);
      uVar10 = uVar10 + 1;
    } while (lVar11 != 0);
  }
LAB_0603a3e4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
LAB_0603a42c:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0603a5b0;
  uVar10 = *(uint *)(lVar5 + lVar11 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar10 < 0) {
    if (DAT_07a3f53c == '\0') {
      FUN_031f20f4(puVar1);
      DAT_07a3f53c = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar6;
    fVar17 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar14 = pfVar6[3];
  }
  else {
    lVar8 = *unaff_x20;
    if (lVar8 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_0603a5b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar8 = lVar8 + (ulong)uVar10 * 0x1c;
    fVar16 = *(float *)(lVar8 + 0x30);
    fVar18 = *(float *)(lVar8 + 0x34);
    fVar20 = *(float *)(lVar8 + 0x38);
    fVar14 = (float)FUN_06e45c00(*(undefined4 *)(lVar8 + 0x2c),0);
    lVar8 = *unaff_x20;
    if (lVar8 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0603a5b0;
    lVar8 = lVar8 + lVar13;
    fVar21 = *(float *)(lVar8 + 0x2c);
    fVar24 = *(float *)(lVar8 + 0x30);
    fVar23 = *(float *)(lVar8 + 0x34);
    fVar22 = *(float *)(lVar8 + 0x38);
    fVar15 = (fVar16 * fVar23 + fVar20 * fVar21 + fVar14 * fVar22) - fVar18 * fVar24;
    fVar17 = (fVar18 * fVar21 + fVar20 * fVar24 + fVar16 * fVar22) - fVar14 * fVar23;
    fVar19 = (fVar14 * fVar24 + fVar20 * fVar23 + fVar18 * fVar22) - fVar16 * fVar21;
    fVar14 = ((fVar20 * fVar22 - fVar14 * fVar21) - fVar16 * fVar24) - fVar18 * fVar23;
  }
  if (lVar5 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0603a5b0;
  lVar5 = lVar5 + lVar11 * 4;
  lVar11 = lVar11 + 4;
  uVar7 = uVar7 + 1;
  lVar13 = lVar13 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar15;
  *(float *)(lVar5 + 0x24) = fVar17;
  *(float *)(lVar5 + 0x28) = fVar19;
  *(float *)(lVar5 + 0x2c) = fVar14;
  if (lVar11 == 0x68) {
    return 1;
  }
  goto LAB_0603a42c;
}


