/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 05ba53fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_headPoseRelativeOffsetTranslation
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  fVar10 = *(float *)(param_1 + 0x18);
  fVar11 = *(float *)(param_1 + 0x1c);
  fVar12 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_06a577c0();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
    fVar4 = fVar3 * 0.5 - fVar4;
    fVar7 = 0.0;
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar4;
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
      fVar4 = (float)FUN_069e6fbc(lVar2,0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (fVar8 = fVar7, fVar9 = param_4, lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0),
         lVar2 != 0)) {
        fVar5 = (float)FUN_069e6fbc(lVar2,0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar10 = fVar10 * fVar3;
          fVar11 = fVar11 * fVar3;
          fVar12 = fVar12 * fVar3;
          uVar6 = FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
          uVar1 = FUN_05ba71e0(fVar5 - fVar10,fVar8 - fVar11,fVar9 - fVar12,fVar10 + fVar4,
                               fVar11 + fVar7,fVar12 + param_4,uVar6);
          if ((uVar1 & 1) == 0) {
            if (DAT_075457d6 == '\0') {
              FUN_03188a78(PTR_DAT_070c1a80);
              DAT_075457d6 = '\x01';
            }
            in_stack_00000058 = **(undefined8 **)(*unaff_x22 + 0xb8);
            in_stack_00000060 = *(undefined4 *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
          }
          else {
            FUN_0466ffac(&stack0x00000074,&stack0x000000a0,*(undefined8 *)PTR_DAT_07115e28);
            uStack0000000000000044 = in_stack_00000098;
            uStack000000000000003c = in_stack_00000090;
            FUN_05ba74a8(&stack0x00000058,unaff_s12,in_stack_00000018._4_4_,unaff_s10);
          }
          *unaff_x19 = in_stack_00000058;
          *(undefined4 *)(unaff_x19 + 1) = in_stack_00000060;
          return uVar1 & 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


