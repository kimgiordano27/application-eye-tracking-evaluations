/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers
ENTRY_POINT: 05ba55d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRManager__OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000068 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  uStack0000000000000080 = param_2._4_4_;
  uStack0000000000000078 = param_2._8_4_;
  uStack000000000000007c = param_2._12_4_;
  uStack0000000000000060 = uVar6;
  uStack0000000000000070 = uVar6;
  uStack0000000000000084 = uStack0000000000000068;
  uVar1 = FUN_05ba5738();
  fVar5 = (float)uVar6;
  if ((uVar1 & 1) != 0) {
    FUN_06a63564(&stack0x00000060,0);
    uVar1 = FUN_05ba5938();
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        uVar3 = FUN_069e6fbc(lVar2,0);
        if (DAT_07547004 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_07547004 = '\x01';
        }
        lVar2 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        FUN_05ba5a94(uVar3,fVar5,param_3,*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28)
                     ,*(undefined4 *)(lVar2 + 0x2c));
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fVar4 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            fVar7 = *(float *)(unaff_x19 + 0x28);
            lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
            if (lVar2 != 0) {
              FUN_069e7098(uVar3,fVar7 + (fVar5 - in_stack_000000c8._4_4_) + fVar4 * 0.5,param_3,
                           lVar2,0);
              *(undefined1 *)(unaff_x19 + 0x7c) = 1;
              *(undefined8 *)(unaff_x19 + 0x58) = uStack0000000000000068;
              *(undefined8 *)(unaff_x19 + 0x50) = uStack0000000000000060;
              *(ulong *)(unaff_x19 + 0x68) = CONCAT44(uStack000000000000007c,uStack0000000000000078)
              ;
              *(undefined8 *)(unaff_x19 + 0x60) = uStack0000000000000070;
              *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
              *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,uStack000000000000007c)
              ;
              FUN_05ba4f84();
              return 1;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  return 0;
}


