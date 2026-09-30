/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 01bb8d14
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  lVar3 = thunk_FUN_015d056c();
  if (lVar3 != 0) {
    FUN_01bbac40();
    *(long *)(unaff_x19 + 0x18) = lVar3;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x18),lVar3);
    lVar3 = thunk_FUN_015d056c(*unaff_x21);
    if (lVar3 != 0) {
      FUN_01bbac40();
      *(long *)(unaff_x19 + 0x20) = lVar3;
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x20),lVar3);
      lVar3 = thunk_FUN_015d056c(*unaff_x21);
      puVar2 = PTR_DAT_06e397e8;
      puVar1 = PTR_DAT_06da8dc0;
      if (lVar3 != 0) {
        FUN_01bbac40();
        *(long *)(unaff_x19 + 0x28) = lVar3;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0x28),lVar3);
        uVar4 = FUN_0160edfc(*(undefined8 *)puVar1,0x4000);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
        thunk_FUN_01656ef8();
        uVar4 = FUN_0160edfc(*(undefined8 *)puVar2,0x4000);
        *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x38));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


