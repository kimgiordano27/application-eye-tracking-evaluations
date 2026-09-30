/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 02c4d788
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


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(ulong param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x23;
  long unaff_x25;
  undefined1 auVar8 [16];
  undefined *puVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037ff7a0);
    FUN_017fc350(PTR_DAT_03800578);
    *(undefined1 *)(unaff_x25 + 0x113) = 1;
  }
  puVar7 = PTR_DAT_037ff7a0;
  if ((param_3 == 0) || (unaff_x23 == 0)) {
    puVar7 = PTR_DAT_03800550;
    if (param_3 != 0) {
      puVar7 = PTR_DAT_03800588;
    }
    uVar4 = thunk_FUN_01851c08(puVar7);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar6 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar6,uVar4,uVar5,0);
  }
  else {
    if ((-1 < unaff_w19) && (-1 < unaff_w21)) {
      if (*(int *)(param_3 + 0x18) - unaff_w21 < unaff_w19) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_03800550);
        puVar7 = PTR_DAT_038000f0;
      }
      else {
        if ((-1 < (int)unaff_w20) && (iVar2 = *(int *)(unaff_x23 + 0x18), (int)unaff_w20 <= iVar2))
        {
          if (unaff_w19 != 0) {
            lVar1 = 0;
            if (*(int *)(param_3 + 0x18) != 0) {
              lVar1 = param_3 + 0x20;
            }
            auVar8 = FUN_01db289c();
            lVar3 = FUN_01b68870(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar7);
                    /* WARNING: Could not recover jumptable at 0x02c4d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*param_2 + 0x278))
                              (param_2,lVar1 + (long)unaff_w21 * 2,unaff_w19,
                               lVar3 + (ulong)unaff_w20,iVar2 - unaff_w20,0,
                               *(undefined8 *)(*param_2 + 0x280));
            return uVar4;
          }
          return 0;
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_03800580);
        puVar7 = PTR_DAT_037f8988;
      }
      uVar6 = thunk_FUN_01851c08(puVar7);
      FUN_02b40444(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380ca18);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar5);
    }
    puVar7 = PTR_DAT_03800590;
    if (-1 < unaff_w21) {
      puVar7 = PTR_DAT_03800300;
    }
    uVar4 = thunk_FUN_01851c08(puVar7);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar6 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar6,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_01851c08(PTR_DAT_0380ca18);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar6,uVar4);
}


