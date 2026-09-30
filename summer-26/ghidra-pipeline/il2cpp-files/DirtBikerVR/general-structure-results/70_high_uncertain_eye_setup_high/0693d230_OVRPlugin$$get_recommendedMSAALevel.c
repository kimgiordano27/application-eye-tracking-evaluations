/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 0693d230
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_recommendedMSAALevel(uint param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  
  if ((param_1 & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if ((((lVar3 == 0) || (*(long *)(lVar3 + 200) == 0)) ||
        (lVar4 = *(long *)(*(long *)(lVar3 + 200) + 0x40), lVar4 == 0)) ||
       ((lVar4 = *(long *)(lVar4 + 0x40), lVar4 == 0 ||
        (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)))) goto LAB_0693d3f0;
    if (0 < *(int *)(lVar4 + 0x18)) {
      lVar3 = FUN_04de82e0(lVar4,0,*(undefined8 *)PTR_DAT_084b6178);
      puVar1 = PTR_DAT_084883a0;
      if (lVar3 == 0) goto LAB_0693d3f0;
      lVar4 = *(long *)(lVar3 + 0x38);
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar4 == 0) goto LAB_0693d3f0;
      FUN_07cb2800(lVar4,uVar2,0);
      lVar3 = *(long *)(lVar3 + 0x40);
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07cb26a0();
      if (lVar3 == 0) goto LAB_0693d3f0;
      FUN_07cb2800(lVar3,uVar2,0);
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_0693d3f0;
    }
    if (((*(long *)(lVar3 + 200) != 0) &&
        (lVar3 = *(long *)(*(long *)(lVar3 + 200) + 0x40), lVar3 != 0)) &&
       ((lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0 &&
        (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)))) {
      if (*(int *)(lVar3 + 0x18) < 1) goto LAB_0693d3d8;
      lVar3 = FUN_04de82e0(lVar3,0,*(undefined8 *)PTR_DAT_084b6178);
      puVar1 = PTR_DAT_084883a0;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x38);
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
        FUN_07cb26a0();
        if (lVar4 != 0) {
          FUN_07cb2800(lVar4,uVar2,0);
          lVar3 = *(long *)(lVar3 + 0x40);
          uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
          FUN_07cb26a0();
          if (lVar3 != 0) {
            FUN_07cb2800(lVar3,uVar2,0);
            goto LAB_0693d3d8;
          }
        }
      }
    }
LAB_0693d3f0:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_0693d3d8:
  return param_1 & 1;
}


