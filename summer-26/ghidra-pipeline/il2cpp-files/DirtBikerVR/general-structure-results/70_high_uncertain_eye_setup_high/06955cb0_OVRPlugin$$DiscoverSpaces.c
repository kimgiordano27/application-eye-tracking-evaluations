/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 06955cb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DiscoverSpaces(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  fVar6 = (float)param_2 * (float)param_3 * (float)*(undefined8 *)(param_1 + 0x7f0);
  fVar8 = (float)((ulong)param_2 >> 0x20) * (float)((ulong)param_3 >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x7f0) >> 0x20);
  *(ulong *)(unaff_x19 + 0x54) = CONCAT44(fVar8,fVar6);
  fVar12 = DAT_015c55f0;
  if (lVar4 != 0) {
    fVar13 = *(float *)(lVar4 + 0x84);
    *(float *)(unaff_x19 + 0x50) = fVar13;
    fVar9 = fVar12 * fVar6 * *(float *)(unaff_x19 + 0x40);
    fVar14 = *(float *)(lVar4 + 0x7c);
    fVar6 = fVar12 * fVar8 * *(float *)(unaff_x19 + 0x48);
    *(float *)(unaff_x19 + 0x5c) = fVar14;
    fVar12 = fVar13 * fVar13 * fVar9;
    if (0.0 < fVar13) {
      fVar12 = -(fVar13 * fVar13 * fVar9);
    }
    fVar8 = -(fVar14 * fVar14 * fVar6);
    if (fVar14 <= 0.0) {
      fVar8 = fVar14 * fVar14 * fVar6;
    }
    *(float *)(unaff_x19 + 0x60) = fVar8;
    *(float *)(unaff_x19 + 100) = fVar12;
    if (*(long *)(lVar4 + 0x20) != 0) {
      FUN_07d32730(fVar8,0,*(long *)(lVar4 + 0x20),0);
      if (*(char *)(unaff_x19 + 0x4c) == '\0') {
        return;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        fVar6 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          fVar6 = fVar6 / *(float *)(unaff_x19 + 0x44);
          uVar2 = 0x3f800000;
          FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_084b6a90)
          ;
          puVar1 = PTR_DAT_084b6a80;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000020;
          while( true ) {
            fVar8 = (float)uVar2;
            uVar2 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1);
            lVar4 = in_stack_00000030;
            if ((uVar2 & 1) == 0) {
              FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b6a78);
              return;
            }
            lVar3 = *(long *)(unaff_x19 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar5 = *(long *)(lVar3 + 0x20);
            fVar9 = *(float *)(in_stack_00000030 + 0x10);
            lVar3 = FUN_07c98f88(lVar3,0);
            if (lVar3 == 0) break;
            fVar13 = (float)FUN_07cac824(lVar3,0);
            if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar3 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar10 = *(undefined4 *)(lVar4 + 0x18);
            uVar11 = *(undefined4 *)(lVar4 + 0x1c);
            uVar7 = FUN_07cade68(*(undefined4 *)(lVar4 + 0x14),uVar10,uVar11,lVar3,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            fVar9 = (fVar6 * fVar6 + -1.0 + 1.0) * fVar9;
            uVar2 = (ulong)(uint)-(fVar8 * fVar9);
            fVar12 = -(fVar12 * fVar9);
            FUN_07d32a2c(-(fVar13 * fVar9),uVar2,fVar12,uVar7,uVar10,uVar11,lVar5,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


