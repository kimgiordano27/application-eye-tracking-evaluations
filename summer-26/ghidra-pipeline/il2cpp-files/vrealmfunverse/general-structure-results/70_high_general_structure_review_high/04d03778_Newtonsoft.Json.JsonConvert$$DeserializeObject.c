/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 04d03778
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  ushort uVar1;
  uint uVar2;
  int unaff_w20;
  uint *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  int *in_stack_00000008;
  
  do {
    uVar1 = *(ushort *)(unaff_x24 + unaff_x25 * 2);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if ((0x20 < uVar1) || ((unaff_x28 << ((ulong)uVar1 & 0x3f) & unaff_x29) == 0)) {
      uVar2 = *unaff_x21;
      *unaff_x21 = uVar2 + 1;
      if (unaff_w22 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(ushort *)(unaff_x23 + (long)(int)uVar2 * 2) = uVar1;
      if (uVar2 + 1 == unaff_w22) {
        unaff_w20 = (int)unaff_x25 + 1;
        goto LAB_04d037d4;
      }
    }
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x27 == unaff_x25) {
LAB_04d037d4:
      *in_stack_00000008 = unaff_w20;
      return;
    }
  } while( true );
}


