/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 07a0324c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_079fe12c();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_07aa694c(lVar1,0);
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c();
  }
  if (unaff_w21 == 1) {
    puVar2 = (undefined8 *)__cxa_begin_catch();
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
    uVar4 = thunk_FUN_044a9a40(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) != 0) {
      uVar6 = *puVar2;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09f43638);
      FUN_06a656e0(unaff_x19 + 2,uVar6,uVar3);
      return;
    }
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_0991e038,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0452a004();
}


