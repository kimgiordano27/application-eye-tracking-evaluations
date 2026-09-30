/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 02c4dd70
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w9;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  undefined1 auVar5 [16];
  undefined *puVar4;
  
  puVar4 = PTR_DAT_03800478;
  if (in_w9 < unaff_w19) {
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar1 = thunk_FUN_01861bbc();
    uVar2 = thunk_FUN_01851c08(PTR_DAT_03800588);
    puVar4 = PTR_DAT_038000f0;
  }
  else {
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x23 + 0x18))) {
      if (unaff_w19 != 0) {
        auVar5 = FUN_01db301c();
        FUN_01b68878(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)puVar4);
                    /* WARNING: Could not recover jumptable at 0x02c4ddf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*unaff_x22 + 0x2f8))();
        return uVar1;
      }
      return 0;
    }
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar1 = thunk_FUN_01861bbc();
    uVar2 = thunk_FUN_01851c08(PTR_DAT_03800590);
    puVar4 = PTR_DAT_037f8988;
  }
  uVar3 = thunk_FUN_01851c08(puVar4);
  FUN_02b40444(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380ca38);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar1,uVar2);
}


