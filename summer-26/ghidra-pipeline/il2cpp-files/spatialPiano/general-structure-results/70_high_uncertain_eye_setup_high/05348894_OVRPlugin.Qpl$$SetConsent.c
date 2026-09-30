/*
FUNCTION_NAME: OVRPlugin.Qpl$$SetConsent
ENTRY_POINT: 05348894
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__SetConsent(void)

{
  long lVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w22;
  float fVar3;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  FUN_05348760();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000050 = in_stack_00000010;
  if (lVar1 != 0) {
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)unaff_w22 * 0x1c;
      in_stack_00000030 = *(undefined8 *)(lVar1 + 0x30);
      in_stack_00000038 = *(undefined4 *)(lVar1 + 0x38);
      fVar3 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar1 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x18);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * fVar3,
                    (float)*(undefined8 *)(lVar1 + 0x20) * fVar3);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar3);
      if (lVar2 == 0) goto LAB_05348960;
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 05348930 to 0544895f has its CatchHandler @ 053486c4 */
        FUN_052c23ec(&stack0x00000040,&stack0x00000020,lVar2 + (long)unaff_w22 * 0x1c + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05348964 to 05448967 has its CatchHandler @ 0534896c */
    FUN_02f089d0();
  }
LAB_05348960:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05348960 to 05448963 has its CatchHandler @ 05348970 */
  FUN_02f089c8();
}


