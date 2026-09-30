/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 05611b24
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  uint unaff_w19;
  int unaff_w20;
  int *unaff_x21;
  int unaff_w22;
  int unaff_w26;
  int unaff_w27;
  undefined *puVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05611b1c with catch @ 05611b28
                        */
  if (((unaff_w19 >> 0xc & 1) == 0) || (unaff_w22 <= in_w8)) {
    *unaff_x21 = in_w8;
    if ((unaff_w19 >> 10 & 1) == 0) {
      if ((unaff_w19 >> 0xb & 1) == 0) {
        if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w20 != 10)) ||
           (unaff_w27 != 0 || param_1 != 0x80000000)) {
LAB_05611bac:
          if (unaff_w20 != 10) {
            unaff_w26 = 1;
          }
          return param_1 * unaff_w26;
        }
        thunk_FUN_02f239f0(PTR_DAT_06d36e08);
        uVar1 = thunk_FUN_02ef1808();
        puVar3 = PTR_DAT_06d4e438;
      }
      else {
        if (param_1 < 0x10000) goto LAB_05611bac;
        thunk_FUN_02f239f0(PTR_DAT_06d36e08);
        uVar1 = thunk_FUN_02ef1808();
        puVar3 = PTR_DAT_06d4e418;
      }
    }
    else {
      if (param_1 < 0x100) goto LAB_05611bac;
      thunk_FUN_02f239f0(PTR_DAT_06d36e08);
      uVar1 = thunk_FUN_02ef1808();
      puVar3 = PTR_DAT_06d4e408;
    }
    uVar2 = thunk_FUN_02f239f0(puVar3);
    FUN_05610eb0(uVar1,uVar2);
  }
  else {
    thunk_FUN_02f239f0(PTR_DAT_06d028d8);
    uVar1 = thunk_FUN_02ef1808();
    uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d51e48);
    FUN_055ea92c(uVar1,uVar2,0);
  }
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d52248);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar1,uVar2);
}


