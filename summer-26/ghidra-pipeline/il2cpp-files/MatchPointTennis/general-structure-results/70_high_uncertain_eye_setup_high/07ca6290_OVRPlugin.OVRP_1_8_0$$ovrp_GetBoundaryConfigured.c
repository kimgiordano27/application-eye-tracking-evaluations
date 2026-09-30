/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryConfigured
ENTRY_POINT: 07ca6290
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryConfigured(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  uint uStack000000000000009c;
  
  if (param_1 != 0) {
    if ((unaff_w19 < *(uint *)(param_1 + 0x18)) &&
       (uStack000000000000009c < *(uint *)(param_1 + 0x18))) {
      lVar3 = param_1 + (long)(int)unaff_w19 * 0x1c;
      lVar2 = param_1 + 0x20 + (long)(int)uStack000000000000009c * 0x1c;
      fVar9 = *(float *)(lVar2 + 0x10);
      fVar10 = *(float *)(lVar2 + 0x14);
      fVar11 = *(float *)(lVar2 + 0x18);
      uVar8 = *(undefined4 *)(lVar2 + 0xc);
      fVar14 = *(float *)(lVar3 + 0x2c);
      fVar13 = *(float *)(lVar3 + 0x30);
      fVar15 = *(float *)(lVar3 + 0x34);
      fVar12 = *(float *)(lVar3 + 0x38);
      fVar6 = fVar9;
      fVar7 = fVar10;
      FUN_095165fc(uVar8,fVar9,fVar10,fVar11,0);
      uVar4 = FUN_09516eb8(0);
      fVar5 = (float)FUN_095165fc(uVar8,fVar9,fVar10,fVar11,0);
      lVar2 = *(long *)(unaff_x20 + 0x28);
      in_stack_00000080 = 0;
      uStack0000000000000088 = 0;
      uStack000000000000008c = 0;
      uStack0000000000000098 = 0;
      uStack0000000000000090 = 0;
      uStack0000000000000094 = 0;
      uVar1 = FUN_09537b20(uVar4,fVar6,fVar7,
                           (fVar15 * fVar9 + fVar14 * fVar11 + fVar12 * fVar5) - fVar13 * fVar10,
                           (fVar14 * fVar10 + fVar13 * fVar11 + fVar12 * fVar9) - fVar15 * fVar5,
                           (fVar13 * fVar5 + fVar15 * fVar11 + fVar12 * fVar10) - fVar14 * fVar9,
                           ((fVar12 * fVar11 - fVar14 * fVar5) - fVar13 * fVar9) - fVar15 * fVar10,
                           &stack0x00000080,0);
      if (lVar2 == 0) goto LAB_07ca64b0;
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
        *(ulong *)(lVar2 + 0x34) = CONCAT44(uStack0000000000000098,uStack0000000000000094);
        *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
        *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000080;
        FUN_07ca6778(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_07ca64b0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


