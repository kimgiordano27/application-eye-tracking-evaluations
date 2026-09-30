/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeIntoObject<object>
ENTRY_POINT: 01dfa070
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeIntoObject<object>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_01ae9ed0();
  }
  uVar1 = FUN_030584a8();
  if (unaff_w19 < uVar1) {
    plVar2 = (long *)thunk_FUN_01afa9e0();
    if (plVar2 == (long *)0x0) {
      FUN_01b47f88();
    }
    else {
      lVar3 = thunk_FUN_01afa70c(**(undefined8 **)(unaff_x20 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar2[(long)(int)unaff_w19 + 4] = lVar3;
      thunk_FUN_01b4f09c(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01ad9084(StringLiteral_2200);
  uVar6 = thunk_FUN_01afaadc();
  uVar5 = thunk_FUN_01ad9084(StringLiteral_2280);
  FUN_02fd9200(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar6);
}


