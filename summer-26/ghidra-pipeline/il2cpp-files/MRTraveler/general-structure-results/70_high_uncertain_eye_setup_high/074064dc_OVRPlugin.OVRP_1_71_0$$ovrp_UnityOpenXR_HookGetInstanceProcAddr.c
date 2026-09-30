/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 074064dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  undefined8 *puVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long lVar5;
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
  undefined8 uStack0000000000000008;
  ulong uStack0000000000000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  lVar5 = (long)(int)unaff_w19;
  lVar4 = param_1 + lVar5 * 0x1c;
  puVar3 = (undefined8 *)(param_1 + 0x20 + in_x9 * 0x1c);
  puVar2 = (undefined8 *)(param_1 + 0x20 + lVar5 * 0x1c);
  uStack0000000000000010 = *puVar2;
  uStack0000000000000008 = *puVar3;
  uStack000000000000001c = *(undefined4 *)(puVar2 + 1);
  fVar9 = *(float *)(puVar3 + 2);
  fVar10 = *(float *)((long)puVar3 + 0x14);
  fVar11 = *(float *)(puVar3 + 3);
  fStack0000000000000018 = *(float *)(puVar3 + 1);
  uVar8 = *(undefined4 *)((long)puVar3 + 0xc);
  fVar14 = *(float *)(lVar4 + 0x2c);
  fVar13 = *(float *)(lVar4 + 0x30);
  fVar15 = *(float *)(lVar4 + 0x34);
  fVar12 = *(float *)(lVar4 + 0x38);
  fVar6 = fVar9;
  fVar7 = fVar10;
  FUN_085d2318(uVar8,fVar9,fVar10,fVar11,0);
  uStack000000000000001c = FUN_085d2bd4(0);
  uStack0000000000000010 = CONCAT44(uStack0000000000000010._4_4_,fVar7);
  fStack0000000000000018 = fVar6;
  fVar6 = (float)FUN_085d2318(uVar8,fVar9,fVar10,fVar11,0);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  uVar1 = FUN_085e9668(uStack000000000000001c,fStack0000000000000018,
                       uStack0000000000000010 & 0xffffffff,
                       (fVar15 * fVar9 + fVar14 * fVar11 + fVar12 * fVar6) - fVar13 * fVar10,
                       (fVar14 * fVar10 + fVar13 * fVar11 + fVar12 * fVar9) - fVar15 * fVar6,
                       (fVar13 * fVar6 + fVar15 * fVar11 + fVar12 * fVar10) - fVar14 * fVar9,
                       ((fVar12 * fVar11 - fVar14 * fVar6) - fVar13 * fVar9) - fVar15 * fVar10,
                       &stack0x00000080,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uStack0000000000000074 = CONCAT44(in_stack_00000098,uStack0000000000000094);
  uStack000000000000006c = uStack000000000000008c;
  if (unaff_w19 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + lVar5 * 0x1c;
    *(undefined8 *)(lVar4 + 0x34) = uStack0000000000000074;
    *(ulong *)(lVar4 + 0x2c) = CONCAT44(in_stack_00000090,uStack000000000000008c);
    *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack000000000000008c,in_stack_00000088);
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000080;
    FUN_074069a8(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


