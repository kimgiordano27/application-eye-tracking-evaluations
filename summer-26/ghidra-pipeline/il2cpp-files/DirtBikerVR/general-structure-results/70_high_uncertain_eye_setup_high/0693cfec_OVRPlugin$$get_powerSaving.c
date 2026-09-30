/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 0693cfec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_powerSaving(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w9;
  long unaff_x19;
  uint unaff_w20;
  long lVar4;
  
  if (0 < in_w9) {
    lVar2 = FUN_04de82e0(param_2,0,*(undefined8 *)PTR_DAT_084b6178);
    puVar1 = PTR_DAT_084883a0;
    if (lVar2 == 0) goto LAB_0693d178;
    lVar4 = *(long *)(lVar2 + 0x38);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar4 == 0) goto LAB_0693d178;
    FUN_07cb2770(lVar4,uVar3,0);
    lVar2 = *(long *)(lVar2 + 0x40);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_07cb26a0();
    if (lVar2 == 0) goto LAB_0693d178;
    FUN_07cb2770(lVar2,uVar3,0);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_0693d178;
  }
  if ((((*(long *)(param_1 + 200) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 200) + 0x40), lVar2 != 0)) &&
      (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) < 1) {
LAB_0693d160:
      return unaff_w20 & 1;
    }
    lVar2 = FUN_04de82e0(lVar2,0,*(undefined8 *)PTR_DAT_084b6178);
    puVar1 = PTR_DAT_084883a0;
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x38);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar4 != 0) {
        FUN_07cb2770(lVar4,uVar3,0);
        lVar2 = *(long *)(lVar2 + 0x40);
        uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07cb26a0();
        if (lVar2 != 0) {
          FUN_07cb2770(lVar2,uVar3,0);
          goto LAB_0693d160;
        }
      }
    }
  }
LAB_0693d178:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


