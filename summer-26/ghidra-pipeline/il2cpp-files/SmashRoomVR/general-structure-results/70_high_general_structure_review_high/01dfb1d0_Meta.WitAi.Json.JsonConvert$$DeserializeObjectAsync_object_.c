/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeObjectAsync<object>
ENTRY_POINT: 01dfb1d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeObjectAsync<object>
               (undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ae9ed0(param_4);
    }
  }
  uVar1 = FUN_030584a8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar6 = thunk_FUN_01afaadc();
    uVar5 = thunk_FUN_01ad9084(StringLiteral_2280);
    FUN_02fd9200(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01afa9e0(param_1,*(undefined8 *)
                                               Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01b47f88(param_1,param_2,param_3);
    return;
  }
  memcpy(&stack0x00000008,param_3,0x88);
  lVar3 = thunk_FUN_01afa70c(**(undefined8 **)(param_4 + 0x38),&stack0x00000008);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01b4f09c(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


