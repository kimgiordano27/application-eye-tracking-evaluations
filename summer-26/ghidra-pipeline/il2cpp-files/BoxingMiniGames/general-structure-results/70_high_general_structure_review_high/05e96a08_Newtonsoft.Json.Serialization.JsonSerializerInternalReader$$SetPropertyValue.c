/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 05e96a08
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(void)

{
  uint uVar1;
  uint uVar2;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  uint unaff_w22;
  
  uVar1 = *(uint *)(unaff_x21 + 0x38);
  thunk_FUN_03650fbc();
  uVar2 = 0x11;
  if ((uVar1 & 0x600000) == 0x400000) {
    uVar2 = 0x12;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((unaff_w22 >> (ulong)uVar2 & 1) == 0) {
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x38);
      thunk_FUN_03650fbc();
      if ((uVar2 & 0x600000) != 0x400000) {
        if (*(int *)(*(long *)PTR_DAT_079fd3d0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
      }
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
      thunk_FUN_036b7ad0();
      if (((unaff_x19 & 1) != 0) && ((unaff_w22 >> 0x13 & 1) != 0)) {
        FUN_05e96858(lVar3,1);
        return;
      }
      FUN_05e8fa00(lVar3,1);
      return;
    }
  }
  else if (lVar3 != 0) {
    FUN_05e8ecc8(lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


