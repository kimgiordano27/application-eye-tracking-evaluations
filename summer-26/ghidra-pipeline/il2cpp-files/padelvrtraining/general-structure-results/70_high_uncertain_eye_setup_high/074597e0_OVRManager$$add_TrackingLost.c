/*
FUNCTION_NAME: OVRManager$$add_TrackingLost
ENTRY_POINT: 074597e0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingLost(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float unaff_s12;
  float unaff_s13;
  float fVar22;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  
  puVar2 = PTR_DAT_091a1008;
  uVar20 = *(undefined4 *)(unaff_x19 + 0x160);
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fStack000000000000000c = unaff_s13;
  iVar3 = FUN_071799cc(uVar20,0);
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar10 = (float)iVar3;
    param_1 = param_1 * fVar10;
    param_2 = param_2 * fVar10;
    fVar22 = unaff_s12 * param_1;
    fVar19 = unaff_s12 * param_2;
    fVar11 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x128),0);
    if (DAT_09836325 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_09836325 = '\x01';
    }
    puVar1 = PTR_DAT_091a0f88;
    fVar22 = fStack00000000000000dc + fVar22;
    lVar5 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar19 = fStack00000000000000d8 + fVar19;
    fVar18 = *(float *)(lVar5 + 0x18);
    fVar21 = *(float *)(lVar5 + 0x1c);
    fVar17 = *(float *)(lVar5 + 0x20);
    fVar10 = fStack000000000000000c + unaff_s12 * param_3 * fVar10;
    if (DAT_09837382 == '\0') {
      fStack00000000000000d8 = fVar11;
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
      DAT_09837382 = '\x01';
      fVar11 = fStack00000000000000d8;
    }
    fVar12 = fVar17 * fVar17 + fVar18 * fVar18 + fVar21 * fVar21;
    fVar11 = fVar22 - fVar11;
    param_1 = fVar19 - param_1;
    param_2 = fVar10 - param_2;
    if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar12) {
      fVar14 = param_2 * fVar17 + fVar11 * fVar18 + param_1 * fVar21;
      fVar11 = fVar11 - (fVar18 * fVar14) / fVar12;
      param_1 = param_1 - (fVar21 * fVar14) / fVar12;
      param_2 = param_2 - (fVar17 * fVar14) / fVar12;
    }
    fStack00000000000000dc = fVar10;
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar10 = SQRT(param_2 * param_2 + fVar11 * fVar11 + param_1 * param_1);
    if (fVar10 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar11 = *pfVar6;
      param_1 = pfVar6[1];
      param_2 = pfVar6[2];
    }
    else {
      fVar11 = fVar11 / fVar10;
      param_1 = param_1 / fVar10;
      param_2 = param_2 / fVar10;
    }
    uVar15 = (ulong)(uint)param_2;
    uVar7 = (ulong)(uint)param_1;
    if (DAT_09836325 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_09836325 = '\x01';
    }
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar16 = (ulong)*(uint *)(lVar5 + 0x18);
    uVar13 = FUN_08a44a78(fVar11,uVar7,uVar15,uVar16,*(undefined4 *)(lVar5 + 0x1c),
                          *(undefined4 *)(lVar5 + 0x20),0);
    plVar9 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000050 = 0;
    uStack0000000000000058 = 0;
    uStack000000000000005c = 0;
    in_stack_00000068 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    FUN_08a5b7d0(fVar22,fVar19,fStack00000000000000dc,uVar13,uVar7,uVar15,uVar16,&stack0x00000050,0)
    ;
    uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
    uStack0000000000000078 = uStack0000000000000058;
    in_stack_00000070 = in_stack_00000050;
    uStack000000000000007c = uStack000000000000005c;
    uStack0000000000000080 = uStack0000000000000060;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09220378) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_07459af0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_09220378,2);
LAB_07459af0:
      (*(code *)*puVar4)(&stack0x00000010,plVar9,&stack0x00000070,puVar4[1]);
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


