/*
FUNCTION_NAME: OVRManager$$HasInsightPassthroughInitFailed
ENTRY_POINT: 073ce1a0
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


void OVRManager__HasInsightPassthroughInitFailed(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long lVar4;
  long *unaff_x22;
  
  FUN_072f4d80();
  if (**(long **)(*unaff_x22 + 0xb8) == 0) {
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb58f0);
    FUN_06632210(uVar2,*(undefined8 *)PTR_DAT_08eb58e8);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar2;
    thunk_FUN_03d233cc(*(undefined8 *)(*unaff_x22 + 0xb8),uVar2);
    (**(code **)(*unaff_x19 + 0x368))();
  }
  if (unaff_x19[0x19] != 0) {
    lVar3 = FUN_045e1be8(unaff_x19[0x19],*(undefined8 *)PTR_DAT_08eb3318);
    unaff_x19[0x27] = lVar3;
    thunk_FUN_03d233cc(unaff_x19 + 0x27);
    if (unaff_x19[0x24] == 0) {
      lVar3 = FUN_085dbb98();
      if (lVar3 == 0) goto LAB_073ce2dc;
      FUN_0469cb0c(lVar3,*(undefined8 *)PTR_DAT_08eb3320);
      FUN_073ce2e0();
    }
    puVar1 = PTR_DAT_08eb5788;
    if (unaff_x19[0x19] != 0) {
      lVar4 = unaff_x19[0x26];
      uVar2 = FUN_085dbb5c(unaff_x19[0x19],0);
      lVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_073ccd7c(lVar3,lVar4,uVar2);
      unaff_x19[0x28] = lVar3;
      thunk_FUN_03d233cc(unaff_x19 + 0x28,lVar3);
      FUN_072f4e24();
      return;
    }
  }
LAB_073ce2dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


