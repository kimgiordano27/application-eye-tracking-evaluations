/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_enableMixedReality
ENTRY_POINT: 05ba55c4
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
OVRManager__OVRMixedRealityCaptureConfiguration_set_enableMixedReality
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000cc;
  
  fVar6 = 0.0;
  fStack00000000000000cc = 0.0;
  uStack0000000000000084 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000070 = 0;
  uVar2 = FUN_05ba5738(param_4,&stack0x00000060);
  if ((uVar2 & 1) != 0) {
    FUN_06a63564(&stack0x00000060,0);
    uVar2 = FUN_05ba5938(param_4);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_4 + 0x20) != 0) &&
         (lVar3 = FUN_069d3a80(*(long *)(param_4 + 0x20),0), lVar3 != 0)) {
        uVar4 = FUN_069e6fbc(lVar3,0);
        if (DAT_07547004 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_07547004 = '\x01';
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        FUN_05ba5a94(uVar4,fVar6,param_3,*(undefined4 *)(lVar3 + 0x24),*(undefined4 *)(lVar3 + 0x28)
                     ,*(undefined4 *)(lVar3 + 0x2c));
        fVar1 = fStack00000000000000cc;
        if (*(long *)(param_4 + 0x20) != 0) {
          fVar5 = (float)FUN_06a577c0(*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x20) != 0) {
            fVar7 = *(float *)(param_4 + 0x28);
            lVar3 = FUN_069d3a80(*(long *)(param_4 + 0x20),0);
            if (lVar3 != 0) {
              FUN_069e7098(uVar4,fVar7 + (fVar6 - fVar1) + fVar5 * 0.5,param_3,lVar3,0);
              *(undefined1 *)(param_4 + 0x7c) = 1;
              *(undefined8 *)(param_4 + 0x58) = uStack0000000000000068;
              *(undefined8 *)(param_4 + 0x50) = uStack0000000000000060;
              *(ulong *)(param_4 + 0x68) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
              *(undefined8 *)(param_4 + 0x60) = uStack0000000000000070;
              *(undefined8 *)(param_4 + 0x74) = uStack0000000000000084;
              *(ulong *)(param_4 + 0x6c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
              FUN_05ba4f84(param_4);
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


