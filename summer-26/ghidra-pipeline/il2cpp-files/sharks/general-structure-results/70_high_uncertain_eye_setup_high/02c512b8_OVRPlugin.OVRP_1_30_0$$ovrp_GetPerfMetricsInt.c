/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetPerfMetricsInt
ENTRY_POINT: 02c512b8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetPerfMetricsInt
               (ulong param_1,long *param_2,long param_3,int param_4,int param_5,long param_6,
               int param_7)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int unaff_w19;
  long unaff_x20;
  uint unaff_w23;
  undefined1 auVar11 [16];
  long *plStack0000000000000008;
  undefined *puVar7;
  
  plStack0000000000000008 = param_2;
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037ff7a0);
    FUN_017fc350(PTR_DAT_03800478);
    FUN_017fc350(PTR_DAT_03800578);
    FUN_017fc350(PTR_DAT_038004a8);
    *(undefined1 *)(unaff_x20 + 0x130) = 1;
  }
  puVar2 = PTR_DAT_038004a8;
  puVar7 = PTR_DAT_037ff7a0;
  if ((param_3 == 0) || (param_6 == 0)) {
    puVar7 = PTR_DAT_03800588;
    if (param_3 != 0) {
      puVar7 = PTR_DAT_03800550;
    }
    uVar5 = thunk_FUN_01851c08(puVar7);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar6 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar8,uVar5,uVar6,0);
  }
  else {
    puVar9 = PTR_DAT_03800318;
    puVar10 = PTR_DAT_03800580;
    iVar1 = param_4;
    if ((((-1 < param_5) && (-1 < param_4)) &&
        (puVar9 = PTR_DAT_03800300, puVar10 = PTR_DAT_03800590, iVar1 = param_7, -1 < unaff_w19)) &&
       (-1 < param_7)) {
      if (*(int *)(param_3 + 0x18) - param_4 < param_5) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar5 = thunk_FUN_01861bbc();
        puVar7 = PTR_DAT_03800588;
      }
      else {
        if (unaff_w19 <= *(int *)(param_6 + 0x18) - param_7) {
          auVar11 = FUN_01db289c(param_3,*(undefined8 *)PTR_DAT_03800578);
          lVar3 = FUN_01b68870(auVar11._0_8_,auVar11._8_8_,*(undefined8 *)puVar7);
          auVar11 = FUN_01db301c(param_6,*(undefined8 *)puVar2);
          lVar4 = FUN_01b68878(auVar11._0_8_,auVar11._8_8_,*(undefined8 *)PTR_DAT_03800478);
                    /* WARNING: Could not recover jumptable at 0x02c513e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plStack0000000000000008 + 0x208))
                    (plStack0000000000000008,lVar3 + param_4,param_5,lVar4 + (long)param_7 * 2,
                     unaff_w19,unaff_w23 & 1);
          return;
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar5 = thunk_FUN_01861bbc();
        puVar7 = PTR_DAT_03800550;
      }
      uVar6 = thunk_FUN_01851c08(puVar7);
      uVar8 = thunk_FUN_01851c08(PTR_DAT_038000f0);
      FUN_02b40444(uVar5,uVar6,uVar8,0);
      uVar6 = thunk_FUN_01851c08(PTR_DAT_0380cb20);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar6);
    }
    if (-1 < iVar1) {
      puVar10 = puVar9;
    }
    uVar5 = thunk_FUN_01851c08(puVar10);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar8 = thunk_FUN_01861bbc();
    uVar6 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar8,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380cb20);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar8,uVar5);
}


