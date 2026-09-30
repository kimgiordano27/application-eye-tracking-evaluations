/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$.cctor
ENTRY_POINT: 02c54380
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


void OVRPlugin_OVRP_1_63_0___cctor
               (long *param_1,long param_2,int param_3,int param_4,long param_5,uint param_6)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar9 [16];
  undefined *puVar8;
  
  if ((DAT_03a2614f & 1) == 0) {
    FUN_017fc350(PTR_DAT_037ff7a0);
    FUN_017fc350(PTR_DAT_03800578);
    DAT_03a2614f = 1;
  }
  puVar2 = PTR_DAT_03800578;
  puVar8 = PTR_DAT_037ff7a0;
  if ((param_2 == 0) || (param_5 == 0)) {
    puVar8 = PTR_DAT_037f2e60;
    if (param_2 != 0) {
      puVar8 = PTR_DAT_03800588;
    }
    uVar5 = thunk_FUN_01851c08(puVar8);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar7 = thunk_FUN_01861bbc();
    uVar6 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar7,uVar5,uVar6,0);
  }
  else {
    if ((-1 < param_4) && (-1 < param_3)) {
      if (*(int *)(param_2 + 0x10) - param_3 < param_4) {
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar5 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_037f2e60);
        puVar8 = PTR_DAT_03800118;
      }
      else {
        if (-1 < (int)param_6) {
          iVar1 = *(int *)(param_5 + 0x18);
          if ((int)param_6 <= iVar1) {
            iVar3 = thunk_FUN_017fa4c0(0);
            auVar9 = FUN_01db289c(param_5,*(undefined8 *)puVar2);
            lVar4 = FUN_01b68870(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar8);
                    /* WARNING: Could not recover jumptable at 0x02c54468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x278))
                      (param_1,param_2 + (long)param_3 * 2 + (long)iVar3,param_4,
                       lVar4 + (ulong)param_6,iVar1 - param_6,0,*(undefined8 *)(*param_1 + 0x280));
            return;
          }
        }
        thunk_FUN_01851c08(PTR_DAT_037f86c0);
        uVar5 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_03800580);
        puVar8 = PTR_DAT_037f8988;
      }
      uVar7 = thunk_FUN_01851c08(puVar8);
      FUN_02b40444(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01851c08(PTR_DAT_0380cc20);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar6);
    }
    puVar8 = PTR_DAT_03800590;
    if (-1 < param_3) {
      puVar8 = PTR_DAT_03800300;
    }
    uVar5 = thunk_FUN_01851c08(puVar8);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar7 = thunk_FUN_01861bbc();
    uVar6 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar7,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380cc20);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar7,uVar5);
}


