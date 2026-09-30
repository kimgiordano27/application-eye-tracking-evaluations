/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameAssemblyFormat
ENTRY_POINT: 07099adc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_3;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameAssemblyFormat(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  long *plVar3;
  
  if (unaff_x21 != 0) {
    *param_1 = *(undefined8 *)(unaff_x21 + 0x18);
    thunk_FUN_03d233cc();
    if (*(long *)(unaff_x19 + 0x60) == 0) {
      if (unaff_x21 == 0) goto LAB_07099be8;
      *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x21 + 0x20);
      thunk_FUN_03d233cc();
    }
    plVar3 = (long *)(unaff_x19 + 0x48);
    if (*plVar3 == 0) {
      if (unaff_x21 == 0) goto LAB_07099be8;
      lVar1 = Newtonsoft_Json_JsonTextWriter__set_QuoteChar();
      *plVar3 = lVar1;
      thunk_FUN_03d233cc(plVar3,lVar1);
    }
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      uVar2 = FUN_070b654c(*(long *)(unaff_x19 + 0x10),0);
      *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
      thunk_FUN_03d233cc(unaff_x19 + 0x118);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        uVar2 = FUN_070b6564(*(long *)(unaff_x19 + 0x10),0);
        *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
        thunk_FUN_03d233cc(unaff_x19 + 0x110);
        if (unaff_x21 != 0) {
          uVar2 = FUN_070b6918();
          *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
          thunk_FUN_03d233cc(unaff_x19 + 0x108);
          uVar2 = FUN_070b68fc();
          *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
          thunk_FUN_03d233cc(unaff_x19 + 0x100);
          uVar2 = FUN_070b6934();
          *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xf8),uVar2);
          return;
        }
      }
    }
  }
LAB_07099be8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


