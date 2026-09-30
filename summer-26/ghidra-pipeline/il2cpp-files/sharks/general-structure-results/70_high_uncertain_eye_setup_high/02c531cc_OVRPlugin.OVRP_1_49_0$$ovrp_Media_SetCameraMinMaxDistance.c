/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 02c531cc
PROGRAM: sharks-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auVar5 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03800478);
    FUN_017fc350(PTR_DAT_038004a8);
    *(undefined1 *)(unaff_x24 + 0x145) = 1;
  }
  puVar1 = PTR_DAT_03800478;
  if (unaff_x23 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar2 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_03800550);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar2,uVar3,uVar4,0);
  }
  else {
    if ((unaff_w19 < 0) || (unaff_w20 < 0)) {
      puVar1 = PTR_DAT_037f8970;
      if (-1 < unaff_w20) {
        puVar1 = PTR_DAT_037f86c8;
      }
      uVar3 = thunk_FUN_01851c08(puVar1);
      thunk_FUN_01851c08(PTR_DAT_037f86c0);
      uVar4 = thunk_FUN_01861bbc();
      uVar2 = thunk_FUN_01851c08(PTR_DAT_037f8998);
      FUN_02b40444(uVar4,uVar3,uVar2,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cbd0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar3);
    }
    if (unaff_w19 <= *(int *)(unaff_x23 + 0x18) - unaff_w20) {
      auVar5 = FUN_01db301c();
      FUN_01b68878(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)puVar1);
                    /* WARNING: Could not recover jumptable at 0x02c53258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x22 + 0x198))();
      return;
    }
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar2 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_03800550);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_038000f0);
    FUN_02b40444(uVar2,uVar3,uVar4,0);
  }
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cbd0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar3);
}


