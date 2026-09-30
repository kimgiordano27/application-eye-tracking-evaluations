/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 051b0a3c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__get_useIPDInPositionTracking(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 uVar4;
  
  while (lVar2 = FUN_05ef2cb4(), lVar2 != 0) {
    uVar4 = FUN_05f01910(lVar2,0);
    lVar2 = FUN_05ef2cb4();
    if (lVar2 == 0) break;
    FUN_05f00104(lVar2,0);
    lVar2 = FUN_05ef2cb4(unaff_x20,0);
    if (lVar2 == 0) break;
    FUN_05f01910(lVar2,0);
    lVar2 = FUN_05ef2cb4(unaff_x20,0);
    if (lVar2 == 0) break;
    FUN_05f00104(lVar2,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = FUN_05f4e314(uVar4);
    if ((uVar3 & 1) != 0) {
LAB_051b0b40:
      return unaff_w22 & 1;
    }
    do {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      unaff_w22 = (int)unaff_w23 < (int)uVar1;
      if ((int)uVar1 <= (int)unaff_w23) goto LAB_051b0b40;
      if (uVar1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      unaff_x20 = *(long *)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
      if (unaff_x20 == 0) goto LAB_051b0b6c;
      uVar3 = FUN_05f52d2c(unaff_x20,0);
    } while ((uVar3 & 1) == 0);
    if (unaff_x19 == 0) break;
  }
LAB_051b0b6c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


