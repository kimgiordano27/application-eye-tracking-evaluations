/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilSupported
ENTRY_POINT: 02c22c44
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_gpuUtilSupported(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  undefined4 uStack0000000000000004;
  
  puVar1 = PTR_DAT_0380bad0;
  if (unaff_x19 != 0) {
    plVar2 = (long *)FUN_017fc368(*(undefined8 *)PTR_DAT_0380bad0);
    lVar6 = *plVar2;
    if (lVar6 == 0) {
      uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bac8);
      FUN_02c25024();
      puVar4 = (undefined8 *)FUN_017fc368(*(undefined8 *)puVar1);
      *puVar4 = uVar3;
      uVar5 = FUN_017fc368(*(undefined8 *)puVar1);
      thunk_FUN_0188fd20(uVar5,uVar3);
    }
    else {
      FUN_02bf1354(*(undefined8 *)(lVar6 + 0x10),0,*(undefined4 *)(lVar6 + 0x18),0);
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    uStack0000000000000004 = 0;
    FUN_02c250a4();
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f66a8);
  uVar3 = thunk_FUN_01861bbc();
  uVar5 = thunk_FUN_01851c08(PTR_DAT_03800088);
  FUN_02b3cbec(uVar3,uVar5,0);
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bad8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar5);
}


