/*
FUNCTION_NAME: Cognitive3D.ActiveSession.ActiveSessionView.<Start>d__5$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0430d6e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Cognitive3D_ActiveSession_ActiveSessionView_<Start>d__5__System_Collections_IEnumerator_get_Current
               (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  fVar6 = 1.0;
  if (unaff_s10 * param_3 + param_1 + unaff_s12 * param_2 <= 0.0) {
    fVar6 = -1.0;
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  puVar1 = PTR_DAT_08f65908;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = FUN_040316d0(*(undefined8 *)puVar1,2);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      fVar3 = unaff_s14 * DAT_01a2ead8;
      fVar4 = (fStack0000000000000010 + fStack000000000000000c) * DAT_01a2ec7c;
      fVar5 = (fStack0000000000000014 + fStack0000000000000008) * DAT_01a2ec7c;
      *(float *)(lVar2 + 0x20) =
           (in_stack_00000018 + in_stack_00000000._4_4_) * DAT_01a2ec7c + fVar3 * unaff_s9 * fVar6;
      *(float *)(lVar2 + 0x24) = fVar4 + fVar3 * unaff_s13 * fVar6;
      *(float *)(lVar2 + 0x28) = fVar5 + fVar3 * unaff_s8 * fVar6;
      if (*(int *)(lVar2 + 0x18) != 1) {
        *(float *)(lVar2 + 0x2c) = in_stack_00000018;
        *(float *)(lVar2 + 0x30) = fStack0000000000000010;
        *(float *)(lVar2 + 0x34) = fStack0000000000000014;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


