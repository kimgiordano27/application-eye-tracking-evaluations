/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 07c75978
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsPcm
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ulong param_5)

{
  float fVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  float fVar3;
  float unaff_s8;
  ulong unaff_d9;
  
  while( true ) {
    FUN_07c759d8(unaff_d9,param_1,param_2,param_3,param_4,param_5);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      return;
    }
    lVar2 = *unaff_x19;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    fVar3 = *(float *)(lVar2 + unaff_x21 * 4 + 0x20);
    fVar1 = unaff_s8;
    if (fVar3 <= unaff_s8) {
      fVar1 = fVar3;
    }
    unaff_d9 = (ulong)(uint)fVar1;
    if (*(long *)(unaff_x20 + 0x138) == 0) break;
    param_2 = FUN_07c73800();
    if (*(long *)(unaff_x20 + 0x140) == 0) break;
    param_3 = FUN_07c73800(*(long *)(unaff_x20 + 0x140));
    if ((((*(long *)(unaff_x20 + 0x170) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x20 + 0x170) + 0x18), lVar2 == 0)) ||
        (*(char *)(lVar2 + 0x10) == '\0')) || (*(long *)(lVar2 + 0x18) == 0)) break;
    param_1 = FUN_07c73800();
    param_5 = unaff_x21 & 0xffffffff;
    param_4 = param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


