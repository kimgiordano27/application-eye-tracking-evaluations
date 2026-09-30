/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitPending
ENTRY_POINT: 073ce218
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughInitPending(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar2 = FUN_045e1be8(*(long *)(unaff_x19 + 200),*(undefined8 *)PTR_DAT_08eb3318);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
    thunk_FUN_03d233cc(unaff_x19 + 0x138);
    if (*(long *)(unaff_x19 + 0x120) == 0) {
      lVar3 = FUN_085dbb98();
      if (lVar3 == 0) goto LAB_073ce2dc;
      FUN_0469cb0c(lVar3,*(undefined8 *)PTR_DAT_08eb3320);
      FUN_073ce2e0();
    }
    puVar1 = PTR_DAT_08eb5788;
    if (*(long *)(unaff_x19 + 200) != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x130);
      uVar2 = FUN_085dbb5c(*(long *)(unaff_x19 + 200),0);
      uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_073ccd7c(uVar4,uVar5,uVar2);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
      thunk_FUN_03d233cc(unaff_x19 + 0x140,uVar4);
      FUN_072f4e24();
      return;
    }
  }
LAB_073ce2dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


