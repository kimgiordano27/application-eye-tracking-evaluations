/*
FUNCTION_NAME: OVRPlugin$$set_monoscopic
ENTRY_POINT: 0600656c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_monoscopic(long param_1,long *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float unaff_s8;
  
  uVar6 = 0;
  while (lVar5 = *param_2, lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    fVar7 = *(float *)(lVar5 + uVar6 * 4 + 0x20);
    fVar1 = unaff_s8;
    if (fVar7 <= unaff_s8) {
      fVar1 = fVar7;
    }
    if (*(long *)(param_1 + 0x138) == 0) break;
    uVar2 = FUN_0600447c();
    if (*(long *)(param_1 + 0x140) == 0) break;
    uVar3 = FUN_0600447c(*(long *)(param_1 + 0x140));
    if ((((*(long *)(param_1 + 0x170) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x170) + 0x18), lVar5 == 0)) ||
        (*(char *)(lVar5 + 0x10) == '\0')) || (*(long *)(lVar5 + 0x18) == 0)) break;
    uVar4 = FUN_0600447c();
    FUN_06006654(fVar1,uVar4,uVar2,uVar3,uVar4,uVar6 & 0xffffffff);
    uVar6 = uVar6 + 1;
    if (uVar6 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


