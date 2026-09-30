/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03755ba4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x21;
  undefined1 unaff_w22;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar14;
  undefined8 unaff_d14;
  long in_stack_00000070;
  long in_stack_00000078;
  ulong uVar12;
  
  while( true ) {
    param_3 = param_3 * param_4;
    do {
      uVar14 = *(undefined8 *)(unaff_x19 + 0x188);
      fVar11 = param_3 * *(float *)(unaff_x19 + 0xdc) * 0.5 + *(float *)(unaff_x19 + 400);
      uVar12 = (ulong)(uint)fVar11;
      *(ulong *)(unaff_x19 + 0x188) =
           CONCAT44((float)((ulong)unaff_d14 >> 0x20) *
                    (float)((ulong)*(undefined8 *)(unaff_x19 + 0xd4) >> 0x20) * 0.5 +
                    (float)((ulong)uVar14 >> 0x20),
                    (float)unaff_d14 * (float)*(undefined8 *)(unaff_x19 + 0xd4) * 0.5 +
                    (float)uVar14);
      *(float *)(unaff_x19 + 400) = fVar11;
      do {
        do {
          uVar2 = FUN_0609d050(&stack0x00000060,*(undefined8 *)(unaff_x27 + 0x390));
          lVar4 = in_stack_00000078;
          lVar1 = in_stack_00000070;
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          pcVar5 = *(code **)(unaff_x28 + 0x160);
          if (pcVar5 == (code *)0x0) {
            pcVar5 = (code *)FUN_033d1b68();
            *(code **)(unaff_x28 + 0x160) = pcVar5;
          }
          uVar2 = (*pcVar5)(lVar1);
          fVar13 = (float)uVar14;
          fVar11 = (float)uVar12;
        } while ((uVar2 & 1) == 0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
      } while (*(char *)(lVar4 + 0xf8) != '\0');
      if (*(char *)(unaff_x25 + 0xcc6) == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x25 + 0xcc6) = unaff_w22;
      }
      puVar6 = *(undefined8 **)(*(long *)(unaff_x26 + 0xc90) + 0xb8);
      unaff_d14 = *puVar6;
      param_3 = *(float *)(puVar6 + 1);
      lVar3 = FUN_0372bfd0(lVar4,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      fVar7 = (float)FUN_07a85a10(lVar3,0);
      fVar9 = fVar11;
      fVar10 = fVar13;
      lVar3 = FUN_03739548(lVar4,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      fVar8 = (float)FUN_07a18d2c(lVar3,0);
      if (*(char *)(unaff_x29 + 0xff6) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xff6) = unaff_w22;
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar13 = fVar13 - fVar10;
      fVar10 = fVar13 * fVar13;
    } while (SQRT(fVar10 + (fVar7 - fVar8) * (fVar7 - fVar8) + (fVar11 - fVar9) * (fVar11 - fVar9))
             <= 0.0);
    lVar3 = FUN_0372bfd0(lVar4,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    fVar9 = (float)FUN_07a85a10(lVar3,0);
    param_3 = fVar13;
    fVar11 = fVar10;
    lVar4 = FUN_03739548(lVar4,0);
    if (lVar4 == 0) break;
    fVar7 = (float)FUN_07a18d2c(lVar4,0);
    param_3 = fVar13 - param_3;
    param_4 = *(float *)(lVar1 + 0x28);
    unaff_d14 = CONCAT44((fVar10 - fVar11) * (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20),
                         (fVar9 - fVar7) * (float)*(undefined8 *)(lVar1 + 0x20));
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


