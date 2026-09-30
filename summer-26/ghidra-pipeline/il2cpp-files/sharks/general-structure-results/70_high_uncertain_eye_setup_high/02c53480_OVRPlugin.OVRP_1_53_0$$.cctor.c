/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 02c53480
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


void OVRPlugin_OVRP_1_53_0___cctor
               (ulong param_1,long *param_2,long param_3,int param_4,int param_5,long param_6,
               uint param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint unaff_w20;
  long unaff_x26;
  undefined1 auVar10 [16];
  undefined *puVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037ff7a0);
    FUN_017fc350(PTR_DAT_03800478);
    FUN_017fc350(PTR_DAT_03800578);
    FUN_017fc350(PTR_DAT_038004a8);
    *(undefined1 *)(unaff_x26 + 0x146) = 1;
  }
  puVar3 = PTR_DAT_03800578;
  puVar2 = PTR_DAT_03800478;
  puVar9 = PTR_DAT_037ff7a0;
  if ((param_3 == 0) || (param_6 == 0)) {
    puVar9 = PTR_DAT_03800550;
    if (param_3 != 0) {
      puVar9 = PTR_DAT_03800588;
    }
    uVar6 = thunk_FUN_01851c08(puVar9);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar8,uVar6,uVar7,0);
  }
  else {
    if ((-1 < param_5) && (-1 < param_4)) {
      if (*(int *)(param_3 + 0x18) - param_4 < param_5) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_03800550);
        puVar9 = PTR_DAT_038000f0;
      }
      else {
        if (-1 < (int)param_7) {
          iVar1 = *(int *)(param_6 + 0x18);
          if ((int)param_7 <= iVar1) {
            auVar10 = FUN_01db301c(param_3,*(undefined8 *)PTR_DAT_038004a8);
            lVar4 = FUN_01b68878(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar2);
            auVar10 = FUN_01db289c(param_6,*(undefined8 *)puVar3);
            lVar5 = FUN_01b68870(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar9);
                    /* WARNING: Could not recover jumptable at 0x02c53588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x1b8))
                      (param_2,lVar4 + (long)param_4 * 2,param_5,lVar5 + (ulong)param_7,
                       iVar1 - param_7,unaff_w20 & 1,*(undefined8 *)(*param_2 + 0x1c0));
            return;
          }
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_03800580);
        puVar9 = PTR_DAT_037f8988;
      }
      uVar8 = thunk_FUN_01851c08(puVar9);
      FUN_02b40444(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_01851c08(PTR_DAT_0380cbe0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar6,uVar7);
    }
    puVar9 = PTR_DAT_03800590;
    if (-1 < param_4) {
      puVar9 = PTR_DAT_03800300;
    }
    uVar6 = thunk_FUN_01851c08(puVar9);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar8 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar8,uVar6,uVar7,0);
  }
  uVar6 = thunk_FUN_01851c08(PTR_DAT_0380cbe0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar8,uVar6);
}


