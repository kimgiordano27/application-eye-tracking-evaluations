/*
FUNCTION_NAME: OVRPlugin.OVRP_1_69_0$$.cctor
ENTRY_POINT: 02c54b64
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


undefined8
OVRPlugin_OVRP_1_69_0___cctor
          (long *param_1,long param_2,int param_3,int param_4,long param_5,uint param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar8 [16];
  undefined *puVar7;
  
  if ((DAT_03a26151 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03800478);
    FUN_017fc350(PTR_DAT_038004a8);
    DAT_03a26151 = 1;
  }
  puVar7 = PTR_DAT_03800478;
  if ((param_2 == 0) || (param_5 == 0)) {
    puVar7 = PTR_DAT_03800588;
    if (param_2 != 0) {
      puVar7 = PTR_DAT_03800550;
    }
    uVar4 = thunk_FUN_01851c08(puVar7);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar6 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar6,uVar4,uVar5,0);
  }
  else {
    if ((-1 < param_4) && (-1 < param_3)) {
      if (*(int *)(param_2 + 0x18) - param_3 < param_4) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_03800588);
        puVar7 = PTR_DAT_038000f0;
      }
      else {
        if ((-1 < (int)param_6) && (iVar2 = *(int *)(param_5 + 0x18), (int)param_6 <= iVar2)) {
          if (param_4 != 0) {
            lVar1 = 0;
            if (*(int *)(param_2 + 0x18) != 0) {
              lVar1 = param_2 + 0x20;
            }
            auVar8 = FUN_01db301c(param_5,*(undefined8 *)PTR_DAT_038004a8);
            lVar3 = FUN_01b68878(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar7);
                    /* WARNING: Could not recover jumptable at 0x02c54c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*param_1 + 0x2f8))
                              (param_1,lVar1 + param_3,param_4,lVar3 + (ulong)param_6 * 2,
                               iVar2 - param_6,0,*(undefined8 *)(*param_1 + 0x300));
            return uVar4;
          }
          return 0;
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_03800590);
        puVar7 = PTR_DAT_037f8988;
      }
      uVar6 = thunk_FUN_01851c08(puVar7);
      FUN_02b40444(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380cc48);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar5);
    }
    puVar7 = PTR_DAT_03800580;
    if (-1 < param_3) {
      puVar7 = PTR_DAT_03800318;
    }
    uVar4 = thunk_FUN_01851c08(puVar7);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar6 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar6,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_01851c08(PTR_DAT_0380cc48);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar6,uVar4);
}


