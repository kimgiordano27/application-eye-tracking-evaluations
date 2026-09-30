/*
FUNCTION_NAME: OVRManager$$get_suggestedCpuPerfLevel
ENTRY_POINT: 05d64d04
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


bool OVRManager__get_suggestedCpuPerfLevel(void)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  float fStack000000000000004c;
  
                    /* try { // try from 05d64d04 to 05e64d77 has its CatchHandler @ 05d64d8c */
                    /* catch() { ... } // from try @ 05d64cb8 with catch @ 05d64d0c */
  thunk_FUN_032e1da0(PTR_DAT_072b1138);
                    /* catch() { ... } // from try @ 05d64cf4 with catch @ 05d64d18 */
  thunk_FUN_032e1da0(PTR_DAT_072b1140);
  *(undefined1 *)(unaff_x20 + 0x61a) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  fStack000000000000004c = 0.0;
  uVar6 = FUN_06be6054();
  if ((uVar6 & 1) == 0) {
    return false;
  }
  cVar1 = *(char *)(unaff_x19 + 0x61);
  *(undefined1 *)(unaff_x19 + 0x61) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_041e3694(&stack0x00000008,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_072b1140);
    puVar4 = PTR_DAT_072b1130;
    puVar3 = PTR_DAT_072b1120;
                    /* try { // try from 05d64d78 to 05e64d83 has its CatchHandler @ 05d648b0 */
                    /* try { // try from 05d64d84 to 05e64d8b has its CatchHandler @ 05d64d8c */
                    /* catch() { ... } // from try @ 05d64cd4 with catch @ 05d64d8c
                       catch() { ... } // from try @ 05d64d04 with catch @ 05d64d8c
                       catch() { ... } // from try @ 05d64d84 with catch @ 05d64d8c */
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar6 = FUN_052d44b4(&stack0x00000020,*(undefined8 *)puVar4), lVar7 = in_stack_00000030,
          (uVar6 & 1) != 0) {
      if (cVar1 == '\0') {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x14);
        fVar8 = *(float *)(in_stack_00000030 + 0x18) * -0.5;
      }
      else {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x14);
        fVar8 = *(float *)(in_stack_00000030 + 0x18) * 0.5;
      }
      bVar5 = FUN_05d64f44();
      fVar10 = ABS(fStack000000000000004c);
      if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_0512c838(fStack000000000000004c,fVar9 + fVar8,*(long *)(unaff_x19 + 0x58),lVar7,
                   *(undefined8 *)puVar3);
      *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & bVar5 & fVar10 <= fVar9 + fVar8;
    }
    FUN_052d44b0(&stack0x00000020,*(undefined8 *)PTR_DAT_072b1128);
    lVar7 = *(long *)(unaff_x19 + 0x50);
    if (lVar7 != 0) {
      fVar8 = (float)(**(code **)(lVar7 + 0x18))
                               (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      cVar2 = *(char *)(unaff_x19 + 0x61);
      if (cVar1 == cVar2) {
        fVar9 = *(float *)(unaff_x19 + 100);
      }
      else {
        *(float *)(unaff_x19 + 100) = fVar8;
        fVar9 = fVar8;
      }
      if (*(float *)(unaff_x19 + 0x48) <= fVar8 - fVar9) {
        *(char *)(unaff_x19 + 0x60) = cVar2;
      }
      else {
        cVar2 = *(char *)(unaff_x19 + 0x60);
      }
      return cVar2 != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


