/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 05baae20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
                    /* try { // try from 05baae30 to 05caae53 has its CatchHandler @ 05bab0b8 */
  fVar5 = (float)FUN_05babe34();
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_05ba4efc((long)&stack0x00000010 + 4,*(long *)(param_4 + 0x20),0);
    fVar2 = fStack0000000000000018;
    if (*(long *)(param_4 + 0x30) != 0) {
      fVar9 = in_stack_00000010._4_4_;
      fVar12 = fStack0000000000000018;
      fVar6 = (float)FUN_069e7560(*(long *)(param_4 + 0x30),0);
                    /* try { // try from 05baae7c to 05caae8b has its CatchHandler @ 05bab070 */
                    /* try { // try from 05baae8c to 05cab01b has its CatchHandler @ 05baa9dc */
      if (DAT_075457aa == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457aa = '\x01';
      }
      puVar1 = PTR_DAT_070c1a80;
      lVar3 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      fVar10 = *(float *)(lVar3 + 0x18);
      fVar13 = *(float *)(lVar3 + 0x1c);
      fVar11 = *(float *)(lVar3 + 0x20);
      if (DAT_0754d684 == '\0') {
        FUN_03188a78(PTR_DAT_070cf060);
        DAT_0754d684 = '\x01';
      }
      fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + fVar13 * fVar13;
      if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar7) {
        fVar8 = fVar12 * fVar11 + fVar6 * fVar10 + fVar9 * fVar13;
        fVar6 = fVar6 - (fVar10 * fVar8) / fVar7;
        fVar9 = fVar9 - (fVar13 * fVar8) / fVar7;
        fVar12 = fVar12 - (fVar11 * fVar8) / fVar7;
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        FUN_05ba5cd0(fVar5 - in_stack_00000010._4_4_,param_2 - fVar2,
                     param_3 - fStack000000000000001c,*(long *)(param_4 + 0x20),0);
        lVar3 = *(long *)(param_4 + 0x20);
        if (DAT_075457aa == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457aa = '\x01';
        }
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
        FUN_069c54a4(fVar6,fVar9,fVar12,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                     *(undefined4 *)(lVar4 + 0x20),0);
        if (lVar3 != 0) {
          FUN_05ba5c10(lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


