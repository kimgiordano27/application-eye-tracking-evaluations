/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 05676e54
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState(void)

{
  undefined8 uVar1;
  int in_w8;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x19 + 0x260);
  if (lVar5 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    puVar4 = (undefined8 *)(unaff_x20 + 0x28);
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_05676ee8:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05676ee8;
      lVar5 = lVar5 + lVar2;
      lVar2 = lVar2 + 0x28;
      uVar3 = uVar3 + 1;
      uVar1 = *(undefined8 *)(lVar5 + 0x40);
      puVar4[-1] = CONCAT44(*(undefined4 *)(lVar5 + 0x3c),*(int *)(lVar5 + 0x38) + in_w8);
      *puVar4 = uVar1;
      puVar4 = puVar4 + 2;
      lVar5 = *(long *)(unaff_x19 + 0x260);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


