/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonMapper$$ToJson
ENTRY_POINT: 04e9d470
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_LitJson_JsonMapper__ToJson(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  
  (**(code **)(param_1 + 0x2c8))(param_2,*(undefined8 *)(param_1 + 0x2d0));
  if (unaff_x22 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*unaff_x22 + 0x1d8))();
    uVar4 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x1b0))
      ;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1a8))();
        plVar3 = (long *)FUN_04e9d5e0();
        if (plVar3 != (long *)0x0) {
          bVar1 = (**(code **)(*plVar3 + 0x2b8))(plVar3,*(undefined8 *)(*plVar3 + 0x2c0));
          if (((unaff_w21 != 1 ^ bVar1) & 1) == 0) {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0))
            ;
          }
          iVar2 = (**(code **)(*unaff_x19 + 0x2f8))();
          if (iVar2 - 5U < 2) {
            if (plVar3 == (long *)0x0) goto LAB_04e9d594;
            pcVar7 = *(code **)(*plVar3 + 0x1a8);
          }
          else {
            if (plVar3 == (long *)0x0) goto LAB_04e9d594;
            pcVar7 = *(code **)(*plVar3 + 0x1d8);
          }
          lVar5 = (*pcVar7)(plVar3);
          if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04e9d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x19 + 0x208))();
            return;
          }
        }
        thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
        uVar4 = thunk_FUN_04983f60();
        uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac28470);
        FUN_08cc420c(uVar4,uVar6,0);
        uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac28528);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar4,uVar6);
      }
    }
  }
LAB_04e9d594:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


