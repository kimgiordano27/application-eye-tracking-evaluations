/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateTimeZoneHandling
ENTRY_POINT: 050dcfa8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateTimeZoneHandling(void)

{
  int in_w8;
  undefined4 unaff_w22;
  uint unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050dd07c();
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  System_Collections_Hashtable_SyncHashtable__get_SyncRoot(unaff_x29 + -0xc0,&uStack_40,0x20,0);
  if ((unaff_w23 & 0xffff) == 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050d8884(unaff_x29 + -0xc0,unaff_x29 + -0x90);
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050d82b8(unaff_x29 + -0xc0,unaff_x29 + -0x90,unaff_w23,unaff_w22);
  }
  FUN_04f86f00(unaff_x29 + -0xc0,0);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


