/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 05d64d90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_suggestedCpuPerfLevel(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  long lStack0000000000000030;
  undefined8 in_stack_00000048;
  
  lStack0000000000000030 = param_1;
  while( true ) {
    uVar2 = FUN_052d44b4(&stack0x00000020,*unaff_x23);
    lVar3 = lStack0000000000000030;
    if ((uVar2 & 1) == 0) {
      FUN_052d44b0(&stack0x00000020,*(undefined8 *)PTR_DAT_072b1128);
      lVar3 = *(long *)(unaff_x19 + 0x50);
      if (lVar3 != 0) {
        fVar4 = (float)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        bVar1 = *(byte *)(unaff_x19 + 0x61);
        if (unaff_w22 == bVar1) {
          fVar5 = *(float *)(unaff_x19 + 100);
        }
        else {
          *(float *)(unaff_x19 + 100) = fVar4;
          fVar5 = fVar4;
        }
        if (*(float *)(unaff_x19 + 0x48) <= fVar4 - fVar5) {
          *(byte *)(unaff_x19 + 0x60) = bVar1;
        }
        else {
          bVar1 = *(byte *)(unaff_x19 + 0x60);
        }
        return bVar1 != 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (unaff_w22 == 0) {
      if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      fVar5 = *(float *)(lStack0000000000000030 + 0x14);
      fVar4 = *(float *)(lStack0000000000000030 + 0x18) * unaff_s9;
    }
    else {
      if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      fVar5 = *(float *)(lStack0000000000000030 + 0x14);
      fVar4 = *(float *)(lStack0000000000000030 + 0x18) * 0.5;
    }
    bVar1 = FUN_05d64f44();
    fVar6 = ABS(in_stack_00000048._4_4_);
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    FUN_0512c838(in_stack_00000048._4_4_,fVar5 + fVar4,*(long *)(unaff_x19 + 0x58),lVar3,*unaff_x24)
    ;
    *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & bVar1 & fVar6 <= fVar5 + fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


