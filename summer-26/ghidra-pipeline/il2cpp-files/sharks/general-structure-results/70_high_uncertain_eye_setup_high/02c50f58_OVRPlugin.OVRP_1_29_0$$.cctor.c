/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$.cctor
ENTRY_POINT: 02c50f58
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 auVar6 [16];
  undefined *puVar5;
  
  FUN_017fc350();
  *(undefined1 *)(unaff_x26 + 0x12f) = 1;
  puVar1 = PTR_DAT_03800478;
  puVar5 = PTR_DAT_037ff7a0;
  if ((unaff_x25 == 0) || (unaff_x24 == 0)) {
    puVar5 = PTR_DAT_03800588;
    if (unaff_x25 != 0) {
      puVar5 = PTR_DAT_03800550;
    }
    uVar2 = thunk_FUN_01851c08(puVar5);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar4 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar4,uVar2,uVar3,0);
  }
  else {
    if ((-1 < unaff_w19) && (-1 < unaff_w22)) {
      if (*(int *)(unaff_x25 + 0x18) - unaff_w22 < unaff_w19) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar2 = thunk_FUN_01861bbc();
        uVar3 = thunk_FUN_01851c08(PTR_DAT_03800588);
        puVar5 = PTR_DAT_038000f0;
      }
      else {
        if (-1 < unaff_w21) {
          if (unaff_w21 <= *(int *)(unaff_x24 + 0x18)) {
            auVar6 = FUN_01db289c();
            FUN_01b68870(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar5);
            auVar6 = FUN_01db301c();
            FUN_01b68878(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar1);
                    /* WARNING: Could not recover jumptable at 0x02c51018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x23 + 0x1d8))();
            return;
          }
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar2 = thunk_FUN_01861bbc();
        uVar3 = thunk_FUN_01851c08(PTR_DAT_03800590);
        puVar5 = PTR_DAT_037f8988;
      }
      uVar4 = thunk_FUN_01851c08(puVar5);
      FUN_02b40444(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cb10);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2,uVar3);
    }
    puVar5 = PTR_DAT_03800580;
    if (-1 < unaff_w22) {
      puVar5 = PTR_DAT_03800318;
    }
    uVar2 = thunk_FUN_01851c08(puVar5);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar4 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar4,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380cb10);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4,uVar2);
}


