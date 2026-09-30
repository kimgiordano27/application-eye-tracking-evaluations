/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 04ffec08
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  short *unaff_x21;
  long *unaff_x23;
  
  sVar1 = FUN_04e7a3d8();
                    /* try { // try from 04ffec10 to 050feda3 has its CatchHandler @ 04ffec10
                       catch() { ... } // from try @ 04ffec10 with catch @ 04ffec10
                       catch() { ... } // from try @ 04ffeecc with catch @ 04ffec10
                       catch() { ... } // from try @ 04fff17c with catch @ 04ffec10
                       catch() { ... } // from try @ 04fff22c with catch @ 04ffec10
                       catch() { ... } // from try @ 04fff29c with catch @ 04ffec10
                       catch() { ... } // from try @ 04fff2ec with catch @ 04ffec10 */
  if ((sVar1 != 0x58) && (sVar1 = FUN_04e7a3d8(), sVar1 != 0x78)) {
    sVar1 = *unaff_x21;
    if (DAT_06a4dab6 == '\0') {
      FUN_02d4dc40(PTR_DAT_0664e730);
      DAT_06a4dab6 = '\x01';
    }
    if (unaff_x20 == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_04e7d3e0();
      uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_04ffe7dc((int)sVar1,uVar2,uVar3);
    return;
  }
  sVar1 = *unaff_x21;
  if (DAT_06a4dab6 == '\0') {
    FUN_02d4dc40(PTR_DAT_0664e730);
    DAT_06a4dab6 = '\x01';
  }
  uVar2 = FUN_04e7d3e0();
  uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*unaff_x23);
  }
  FUN_04ffed18(sVar1,uVar2,uVar3);
  return;
}


