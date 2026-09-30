/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 0624b868
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long unaff_x21;
  long unaff_x25;
  short *unaff_x26;
  int unaff_w27;
  short unaff_w28;
  undefined1 unaff_w29;
  
  do {
    FUN_060dbfe4();
    while( true ) {
      puVar4 = PTR_DAT_07daae20;
      unaff_w27 = unaff_w27 + -1;
      if (unaff_w27 < 1) {
        FUN_06251760();
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_0624c068();
        return;
      }
      sVar1 = *unaff_x26;
      sVar3 = unaff_w28;
      if (sVar1 != 0) {
        unaff_x26 = unaff_x26 + 1;
        sVar3 = sVar1;
      }
      if (*(char *)(unaff_x25 + 0xded) == '\0') {
        FUN_0373b518();
        *(undefined1 *)(unaff_x25 + 0xded) = unaff_w29;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar2) break;
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
  } while( true );
}


