/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 05d4b1b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *in_x9;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  uint uStack000000000000009c;
  
  uVar1 = (*in_x9)();
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06f98e20 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar2 = FUN_06902bf8(&stack0x00000040,0);
    uStack0000000000000088 = uStack0000000000000048;
    in_stack_00000080 = in_stack_00000040;
    uStack0000000000000094 = (undefined4)uStack0000000000000054;
    uStack0000000000000098 = SUB84(uStack0000000000000054,4);
    uStack000000000000008c = uStack000000000000004c;
    uStack0000000000000090 = uStack0000000000000050;
    if (lVar3 != 0) {
      if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
        uVar7 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        uVar9 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        lVar3 = lVar3 + (long)(int)unaff_w19 * 0x1c;
LAB_05d4b3a4:
        *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000054;
        *(undefined8 *)(lVar3 + 0x2c) = uVar7;
        *(undefined8 *)(lVar3 + 0x28) = uVar9;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000080;
        FUN_05d4b6a8(uVar2,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
        return;
      }
      goto LAB_05d4b3dc;
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    if (lVar3 != 0) {
      if ((unaff_w19 < *(uint *)(lVar3 + 0x18)) &&
         (uStack000000000000009c < *(uint *)(lVar3 + 0x18))) {
        lVar4 = lVar3 + (long)(int)unaff_w19 * 0x1c;
        lVar3 = lVar3 + 0x20 + (long)(int)uStack000000000000009c * 0x1c;
        fVar12 = *(float *)(lVar3 + 0x10);
        fVar13 = *(float *)(lVar3 + 0x14);
        fVar14 = *(float *)(lVar3 + 0x18);
        uVar11 = *(undefined4 *)(lVar3 + 0xc);
        fVar17 = *(float *)(lVar4 + 0x2c);
        fVar16 = *(float *)(lVar4 + 0x30);
        fVar18 = *(float *)(lVar4 + 0x34);
        fVar15 = *(float *)(lVar4 + 0x38);
        fVar8 = fVar12;
        fVar10 = fVar13;
        FUN_068ec9ec(uVar11,fVar12,fVar13,fVar14,0);
        uVar5 = FUN_068ed2ec(0);
        fVar6 = (float)FUN_068ec9ec(uVar11,fVar12,fVar13,fVar14,0);
        lVar3 = *(long *)(unaff_x20 + 0x28);
        in_stack_00000080 = 0;
        uStack0000000000000088 = 0;
        uStack000000000000008c = 0;
        uStack0000000000000098 = 0;
        uStack0000000000000090 = 0;
        uStack0000000000000094 = 0;
        uVar2 = FUN_06902890(uVar5,fVar8,fVar10,
                             (fVar18 * fVar12 + fVar17 * fVar14 + fVar15 * fVar6) - fVar16 * fVar13,
                             (fVar17 * fVar13 + fVar16 * fVar14 + fVar15 * fVar12) - fVar18 * fVar6,
                             (fVar16 * fVar6 + fVar18 * fVar14 + fVar15 * fVar13) - fVar17 * fVar12,
                             ((fVar15 * fVar14 - fVar17 * fVar6) - fVar16 * fVar12) -
                             fVar18 * fVar13,&stack0x00000080,0);
        if (lVar3 == 0) goto LAB_05d4b3e0;
        uStack0000000000000054 = CONCAT44(uStack0000000000000098,uStack0000000000000094);
        uStack0000000000000068 = uStack0000000000000088;
        in_stack_00000060 = in_stack_00000080;
        uStack000000000000006c = uStack000000000000008c;
        uStack0000000000000070 = uStack0000000000000090;
        uStack0000000000000074 = uStack0000000000000054;
        if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
          uVar7 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
          uVar9 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
          lVar3 = lVar3 + (long)(int)unaff_w19 * 0x1c;
          goto LAB_05d4b3a4;
        }
      }
LAB_05d4b3dc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
LAB_05d4b3e0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


