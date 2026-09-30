/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Error
ENTRY_POINT: 079d7f80
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Error(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 unaff_x22;
  long unaff_x24;
  
  lVar1 = thunk_FUN_04485110();
  if (lVar1 != 0) {
    if (unaff_w21 < *(uint *)(unaff_x24 + 0x18)) {
      *(undefined8 *)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20) = unaff_x22;
      thunk_FUN_044bb4b4();
      lVar1 = *(long *)(unaff_x19 + 0x18);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_04485110(), lVar2 == 0)) goto LAB_079d8018;
      if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
        *(long *)(lVar1 + (long)(int)unaff_w21 * 8 + 0x20) = unaff_x20;
        thunk_FUN_044bb4b4();
        *(ulong *)(unaff_x19 + 0x20) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x20) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x20) + 1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_079d8018:
  uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar3,0);
}


