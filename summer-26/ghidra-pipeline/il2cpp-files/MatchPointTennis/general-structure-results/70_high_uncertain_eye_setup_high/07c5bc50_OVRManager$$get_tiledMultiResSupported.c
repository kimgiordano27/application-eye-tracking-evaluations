/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResSupported
ENTRY_POINT: 07c5bc50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tiledMultiResSupported(void)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_04447ba8(PTR_DAT_09f1e748);
  *(undefined1 *)(unaff_x22 + 0xf42) = 1;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar5 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar5 <= unaff_s14) {
    if (*(char *)(unaff_x23 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x23 + 0xf43) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s8 / fVar5;
    fVar4 = unaff_s9 / fVar5;
    fVar5 = unaff_s10 / fVar5;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar6 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(fVar3 * fVar6,fVar4 * fVar6,fVar5 * fVar6,&stack0x00000030,
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x10),4);
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000080 = in_stack_00000050;
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),&stack0x00000060,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


