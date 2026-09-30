/*
FUNCTION_NAME: MagicaCloth.PhysicsManagerCompute.PostUpdatePhysicsJob$$Execute
ENTRY_POINT: 06262ba0
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void MagicaCloth_PhysicsManagerCompute_PostUpdatePhysicsJob__Execute(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar11;
  float fVar12;
  float fVar13;
  float __x;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 unaff_d8;
  float unaff_s9;
  undefined8 uVar17;
  float fVar18;
  float fStack000000000000001c;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  iVar7 = FUN_0625d86c();
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  fVar11 = (float)iVar7;
  fStack000000000000001c = unaff_s9 / fVar11;
  FUN_05fd5ad4(&stack0x00000048,*(long *)(unaff_x19 + 0x28),
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(unaff_x24 + 0xc20) + 0x20) + 0xc0) + 0x138));
  fVar5 = DAT_012edd80;
  fVar4 = DAT_012edc0c;
  fVar3 = DAT_012edb5c;
  fVar2 = DAT_012eda34;
  fVar1 = DAT_012ed918;
  fVar18 = 0.0;
  in_stack_00000068 = in_stack_00000050;
  in_stack_00000060 = in_stack_00000048;
  in_stack_00000070 = in_stack_00000058;
  while( true ) {
    uVar8 = FUN_05fd5b44(&stack0x00000060,*(undefined8 *)(unaff_x23 + 0x208));
    lVar6 = in_stack_00000070;
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (in_stack_00000070 == 0) break;
    fVar16 = *(float *)(in_stack_00000070 + 0x14);
    uVar17 = *(undefined8 *)(in_stack_00000070 + 0x18);
    if (DAT_086d7cc9 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc9 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar16 = fVar16 - fStack000000000000001c;
    fVar12 = (float)uVar17 - (float)unaff_d8 / fVar11;
    fVar13 = (float)((ulong)uVar17 >> 0x20) - (float)((ulong)unaff_d8 >> 0x20) / fVar11;
    fVar15 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar13 * fVar13);
    if (fVar15 <= fVar3) {
      if (*(char *)(unaff_x21 + 0xcc6) == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x21 + 0xcc6) = 1;
      }
      pfVar9 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
      fVar16 = *pfVar9;
      uVar17 = *(undefined8 *)(pfVar9 + 1);
    }
    else {
      fVar16 = fVar16 / fVar15;
      uVar17 = CONCAT44(fVar13 / fVar15,fVar12 / fVar15);
    }
    __x = (float)((ulong)uVar17 >> 0x20);
    fVar12 = atan2f(fVar16,__x);
    fVar13 = (fVar12 + fVar1) / fVar2;
    fVar12 = 0.0;
    if ((0.0 <= fVar13) && (fVar12 = 1.0, fVar13 <= 1.0)) {
      fVar12 = fVar13;
    }
    if (DAT_086d7c56 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    uVar14 = *(undefined8 *)(lVar10 + 0x1c);
    fVar13 = (__x * (float)((ulong)uVar14 >> 0x20) +
              fVar16 * *(float *)(lVar10 + 0x18) + (float)uVar17 * (float)uVar14 + -1.0) * -0.5;
    fVar16 = 0.0;
    if ((0.0 <= fVar13) && (fVar16 = 1.0, fVar13 <= 1.0)) {
      fVar16 = fVar13;
    }
    fVar12 = fVar18 + fVar15 * fVar5 + fVar12;
    fVar16 = fVar18 + fVar15 * fVar5 + fVar16;
    fVar18 = fVar18 + fVar4;
    *(ulong *)(lVar6 + 0x3c) = CONCAT44(fVar16,fVar12);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


