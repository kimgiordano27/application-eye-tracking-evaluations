/*
FUNCTION_NAME: Cognitive3D.ActiveSession.ActiveSessionView.<Start>d__5$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0430d6ac
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Cognitive3D_ActiveSession_ActiveSessionView_<Start>d__5__System_Collections_IEnumerator_Reset
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s11;
  float fVar9;
  float unaff_s12;
  float fVar10;
  float unaff_s14;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  FUN_0403162c(*(undefined8 *)(param_4 + 0x568));
  *(undefined1 *)(unaff_x22 + 0xc10) = 1;
  pfVar3 = *(float **)(*unaff_x20 + 0xb8);
  fVar8 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar7 = pfVar3[2];
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar4 = (float)FUN_08598d1c(*(long *)(unaff_x19 + 0x40),0);
    fVar9 = 1.0;
    if (fStack000000000000001c * param_3 + unaff_s11 * fVar4 + unaff_s12 * param_2 <= 0.0) {
      fVar9 = -1.0;
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
        fVar4 = unaff_s14 * DAT_01a2ead8;
        fVar5 = (fStack0000000000000010 + fStack000000000000000c) * DAT_01a2ec7c;
        fVar6 = (fStack0000000000000014 + fStack0000000000000008) * DAT_01a2ec7c;
        *(float *)(lVar2 + 0x20) =
             (fStack0000000000000018 + in_stack_00000000._4_4_) * DAT_01a2ec7c +
             fVar4 * fVar8 * fVar9;
        *(float *)(lVar2 + 0x24) = fVar5 + fVar4 * fVar10 * fVar9;
        *(float *)(lVar2 + 0x28) = fVar6 + fVar4 * fVar7 * fVar9;
        if (*(int *)(lVar2 + 0x18) != 1) {
          *(float *)(lVar2 + 0x2c) = fStack0000000000000018;
          *(float *)(lVar2 + 0x30) = fStack0000000000000010;
          *(float *)(lVar2 + 0x34) = fStack0000000000000014;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


