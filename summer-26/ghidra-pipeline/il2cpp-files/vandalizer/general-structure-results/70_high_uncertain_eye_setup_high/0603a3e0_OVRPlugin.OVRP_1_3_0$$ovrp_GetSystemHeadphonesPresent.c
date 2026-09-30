/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 0603a3e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long unaff_x23;
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
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while (unaff_x23 != 0) {
    if (unaff_w22 == 0x1a) {
      FUN_060343d0(unaff_x23,1);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x23 + 0x18);
      thunk_FUN_0329bf60();
      puVar3 = PTR_DAT_075f2ea8;
      puVar2 = PTR_DAT_075b55e8;
      lVar13 = 0;
      lVar7 = 0;
      uVar9 = 0;
      goto LAB_0603a42c;
    }
    FUN_060341ec(&stack0x00000020,unaff_x23,unaff_w22);
    uVar4 = uStack000000000000002c;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000028;
    lVar7 = *(long *)(unaff_x21 + 0xa0);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_0603a5b0;
    plVar12 = *(long **)(lVar7 + (long)(int)unaff_w22 * 8 + 0x20);
    if (plVar12 == (long *)0x0) break;
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0603a37c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar12,*unaff_x24,2);
LAB_0603a37c:
    (*(code *)*puVar5)(uVar4,plVar12,puVar5[1]);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
    if (*(long *)(unaff_x21 + 0xa8) == 0) break;
    FUN_0603422c(*(long *)(unaff_x21 + 0xa8),unaff_w22);
    unaff_w22 = unaff_w22 + 1;
    unaff_x23 = *(long *)(unaff_x21 + 0xa8);
  }
LAB_0603a3e4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
LAB_0603a42c:
                    /* try { // try from 0603a42c to 0613a433 has its CatchHandler @ 0603a6e8 */
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0603a5b0;
  uVar1 = *(uint *)(lVar6 + lVar7 + 0x20);
  lVar6 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_07a3f53c == '\0') {
      FUN_031f20f4(puVar2);
      DAT_07a3f53c = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar15 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar19 = pfVar8[2];
    fVar14 = pfVar8[3];
  }
  else {
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_0603a5b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar10 = lVar10 + (ulong)uVar1 * 0x1c;
    fVar16 = *(float *)(lVar10 + 0x30);
    fVar18 = *(float *)(lVar10 + 0x34);
    fVar20 = *(float *)(lVar10 + 0x38);
    fVar14 = (float)FUN_06e45c00(*(undefined4 *)(lVar10 + 0x2c),0);
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0603a5b0;
    lVar10 = lVar10 + lVar13;
    fVar21 = *(float *)(lVar10 + 0x2c);
    fVar24 = *(float *)(lVar10 + 0x30);
    fVar23 = *(float *)(lVar10 + 0x34);
    fVar22 = *(float *)(lVar10 + 0x38);
    fVar15 = (fVar16 * fVar23 + fVar20 * fVar21 + fVar14 * fVar22) - fVar18 * fVar24;
    fVar17 = (fVar18 * fVar21 + fVar20 * fVar24 + fVar16 * fVar22) - fVar14 * fVar23;
    fVar19 = (fVar14 * fVar24 + fVar20 * fVar23 + fVar18 * fVar22) - fVar16 * fVar21;
    fVar14 = ((fVar20 * fVar22 - fVar14 * fVar21) - fVar16 * fVar24) - fVar18 * fVar23;
  }
  if (lVar6 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0603a5b0;
  lVar6 = lVar6 + lVar7 * 4;
  lVar7 = lVar7 + 4;
  uVar9 = uVar9 + 1;
  lVar13 = lVar13 + 0x1c;
  *(float *)(lVar6 + 0x20) = fVar15;
  *(float *)(lVar6 + 0x24) = fVar17;
  *(float *)(lVar6 + 0x28) = fVar19;
  *(float *)(lVar6 + 0x2c) = fVar14;
  if (lVar7 == 0x68) {
    return 1;
  }
  goto LAB_0603a42c;
}


