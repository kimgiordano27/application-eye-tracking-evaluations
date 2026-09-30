/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 076ac0a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryResults(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_0406ae20();
LAB_076ac0cc:
      (*(code *)*puVar1)();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        fVar2 = (float)FUN_0852b5fc(*(long *)(unaff_x19 + 0x38),0);
        if (*(char *)(unaff_x19 + 0x45) == '\0') {
          fVar5 = *(float *)(unaff_x19 + 0x34);
          fVar3 = 1.0;
          if (fVar5 <= 1.0) {
            fVar3 = fVar5;
          }
          fVar4 = 0.0;
          if (0.0 <= fVar5) {
            fVar4 = fVar3;
          }
          fVar2 = *(float *)(unaff_x19 + 0x40) + (fVar2 - *(float *)(unaff_x19 + 0x40)) * fVar4;
        }
        else {
          *(undefined1 *)(unaff_x19 + 0x45) = 0;
        }
        *(float *)(unaff_x19 + 0x40) = fVar2;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x10) * 0x10 + 0x138);
      goto LAB_076ac0cc;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


