/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 0603a364
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long lVar10;
  long lVar11;
  long *unaff_x24;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong unaff_d12;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  uint uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    puVar4 = (undefined8 *)FUN_0322c1e8(param_1,param_2,param_3);
    param_1 = unaff_x23;
    while( true ) {
      (*(code *)*puVar4)(unaff_d12,param_1,puVar4[1]);
                    /* try { // try from 0603a3a4 to 0613a42b has its CatchHandler @ 0603a3a4
                       catch() { ... } // from try @ 0603a3a4 with catch @ 0603a3a4
                       catch() { ... } // from try @ 0603a694 with catch @ 0603a3a4
                       catch() { ... } // from try @ 0603a700 with catch @ 0603a3a4 */
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000028 = in_stack_00000048;
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_0603a3e4;
      FUN_0603422c(*(long *)(unaff_x21 + 0xa8),unaff_w22);
      lVar10 = *(long *)(unaff_x21 + 0xa8);
      unaff_w22 = unaff_w22 + 1;
      if (lVar10 == 0) goto LAB_0603a3e4;
      if (unaff_w22 == 0x1a) {
        FUN_060343d0(lVar10,1);
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar10 + 0x18);
        thunk_FUN_0329bf60();
        puVar3 = PTR_DAT_075f2ea8;
        puVar2 = PTR_DAT_075b55e8;
        lVar11 = 0;
        lVar10 = 0;
        uVar7 = 0;
        goto LAB_0603a42c;
      }
      FUN_060341ec(&stack0x00000020,lVar10,unaff_w22);
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = uStack0000000000000028;
      lVar10 = *(long *)(unaff_x21 + 0xa0);
      if (lVar10 == 0) goto LAB_0603a3e4;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w22) goto LAB_0603a5b0;
      param_1 = *(long **)(lVar10 + (long)(int)unaff_w22 * 8 + 0x20);
      if (param_1 == (long *)0x0) goto LAB_0603a3e4;
      lVar10 = *param_1;
      unaff_d12 = (ulong)uStack000000000000002c;
      param_2 = *unaff_x24;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 == 0) break;
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      while (*(long *)(piVar9 + -2) != param_2) {
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
        if (uVar7 == 0) goto LAB_0603a35c;
      }
      puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
    }
LAB_0603a35c:
    param_3 = 2;
    unaff_x23 = param_1;
  } while( true );
LAB_0603a42c:
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0603a5b0;
  uVar1 = *(uint *)(lVar5 + lVar10 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_07a3f53c == '\0') {
      FUN_031f20f4(puVar2);
      DAT_07a3f53c = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar13 = *pfVar6;
    fVar15 = pfVar6[1];
    fVar17 = pfVar6[2];
    fVar12 = pfVar6[3];
  }
  else {
    lVar8 = *unaff_x20;
    if (lVar8 == 0) {
LAB_0603a3e4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_0603a5b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar8 = lVar8 + (ulong)uVar1 * 0x1c;
    fVar14 = *(float *)(lVar8 + 0x30);
    fVar16 = *(float *)(lVar8 + 0x34);
    fVar18 = *(float *)(lVar8 + 0x38);
    fVar12 = (float)FUN_06e45c00(*(undefined4 *)(lVar8 + 0x2c),0);
    lVar8 = *unaff_x20;
    if (lVar8 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0603a5b0;
    lVar8 = lVar8 + lVar11;
    fVar19 = *(float *)(lVar8 + 0x2c);
    fVar22 = *(float *)(lVar8 + 0x30);
    fVar21 = *(float *)(lVar8 + 0x34);
    fVar20 = *(float *)(lVar8 + 0x38);
    fVar13 = (fVar14 * fVar21 + fVar18 * fVar19 + fVar12 * fVar20) - fVar16 * fVar22;
    fVar15 = (fVar16 * fVar19 + fVar18 * fVar22 + fVar14 * fVar20) - fVar12 * fVar21;
    fVar17 = (fVar12 * fVar22 + fVar18 * fVar21 + fVar16 * fVar20) - fVar14 * fVar19;
    fVar12 = ((fVar18 * fVar20 - fVar12 * fVar19) - fVar14 * fVar22) - fVar16 * fVar21;
  }
  if (lVar5 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0603a5b0;
  lVar5 = lVar5 + lVar10 * 4;
  lVar10 = lVar10 + 4;
  uVar7 = uVar7 + 1;
  lVar11 = lVar11 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar13;
  *(float *)(lVar5 + 0x24) = fVar15;
  *(float *)(lVar5 + 0x28) = fVar17;
  *(float *)(lVar5 + 0x2c) = fVar12;
  if (lVar10 == 0x68) {
    return 1;
  }
  goto LAB_0603a42c;
}


