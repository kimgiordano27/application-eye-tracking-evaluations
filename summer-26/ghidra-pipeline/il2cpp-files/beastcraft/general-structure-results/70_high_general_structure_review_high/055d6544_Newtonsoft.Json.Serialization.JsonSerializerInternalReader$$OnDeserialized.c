/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 055d6544
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  
  uVar3 = FUN_0558155c(unaff_w20,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83478);
    uVar5 = FUN_05648560(uVar5,0);
    thunk_FUN_02ea289c(PTR_DAT_06a30728);
    uVar6 = thunk_FUN_02e78ab8();
    FUN_0557a944(uVar6,uVar5,0);
    uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83480);
                    /* WARNING: Subroutine does not return */
    FUN_02e3cb88(uVar6,uVar5);
  }
  lVar7 = *(long *)(unaff_x19 + 0x18);
  if ((lVar7 != 0) && (plVar4 = *(long **)(unaff_x19 + 0x28), plVar4 != (long *)0x0)) {
    lVar1 = 0;
    if (*(int *)(lVar7 + 0x18) != 0) {
      lVar1 = lVar7 + 0x20;
    }
    uVar2 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,&stack0x0000000c,1,lVar1,*(int *)(lVar7 + 0x18),1,
                       *(undefined8 *)(*plVar4 + 0x1c0));
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x388))
                (plVar4,*(undefined8 *)(unaff_x19 + 0x18),0,uVar2,*(undefined8 *)(*plVar4 + 0x390));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


