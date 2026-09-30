/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetAppMonoscopic
ENTRY_POINT: 02c4d56c
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


void OVRPlugin_OVRP_1_1_0__ovrp_SetAppMonoscopic(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 auVar5 [16];
  undefined *puVar4;
  
  puVar4 = PTR_DAT_037ff7a0;
  if ((unaff_x22 == 0) || (unaff_x24 == 0)) {
    puVar4 = PTR_DAT_03800550;
    if (unaff_x22 != 0) {
      puVar4 = PTR_DAT_03800588;
    }
    uVar1 = thunk_FUN_01851c08(puVar4);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    uVar2 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar3,uVar1,uVar2,0);
  }
  else {
    if ((-1 < unaff_w20) && (-1 < unaff_w21)) {
      if (*(int *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w20) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar1 = thunk_FUN_01861bbc();
        uVar2 = thunk_FUN_01851c08(PTR_DAT_03800550);
        puVar4 = PTR_DAT_03800118;
      }
      else {
        if (-1 < unaff_w19) {
          if (unaff_w19 <= *(int *)(unaff_x24 + 0x18)) {
            thunk_FUN_017fa4c0(0);
            auVar5 = FUN_01db289c();
            FUN_01b68870(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)puVar4);
                    /* WARNING: Could not recover jumptable at 0x02c4d608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x23 + 0x278))();
            return;
          }
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar1 = thunk_FUN_01861bbc();
        uVar2 = thunk_FUN_01851c08(PTR_DAT_03800580);
        puVar4 = PTR_DAT_037f8988;
      }
      uVar3 = thunk_FUN_01851c08(puVar4);
      FUN_02b40444(uVar1,uVar2,uVar3,0);
      uVar2 = thunk_FUN_01851c08(PTR_DAT_0380ca10);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar1,uVar2);
    }
    puVar4 = PTR_DAT_03800590;
    if (-1 < unaff_w21) {
      puVar4 = PTR_DAT_03800300;
    }
    uVar1 = thunk_FUN_01851c08(puVar4);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar3 = thunk_FUN_01861bbc();
    uVar2 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar3,uVar1,uVar2,0);
  }
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380ca10);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar1);
}


