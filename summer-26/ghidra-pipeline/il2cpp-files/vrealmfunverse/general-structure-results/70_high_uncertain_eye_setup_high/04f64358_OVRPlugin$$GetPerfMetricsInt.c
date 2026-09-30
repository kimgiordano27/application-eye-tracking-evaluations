/*
FUNCTION_NAME: OVRPlugin$$GetPerfMetricsInt
ENTRY_POINT: 04f64358
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPerfMetricsInt(long param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  float unaff_s8;
  
  while( true ) {
    fVar1 = unaff_s8;
    if (*(float *)(param_1 + 0x20) <= unaff_s8) {
      fVar1 = *(float *)(param_1 + 0x20);
    }
    if (param_2 == 0) break;
    uVar2 = FUN_04f622b8();
    if (*(long *)(unaff_x20 + 0x140) == 0) break;
    uVar3 = FUN_04f622b8(*(long *)(unaff_x20 + 0x140));
    if ((((*(long *)(unaff_x20 + 0x170) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x170) + 0x18), lVar5 == 0)) ||
        (*(char *)(lVar5 + 0x10) == '\0')) || (*(long *)(lVar5 + 0x18) == 0)) break;
    uVar4 = FUN_04f622b8();
    FUN_04f64418(fVar1,uVar4,uVar2,uVar3,uVar4,unaff_x21 & 0xffffffff);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      return;
    }
    param_1 = *unaff_x19;
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_1 = param_1 + unaff_x21 * 4;
    param_2 = *(long *)(unaff_x20 + 0x138);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


