/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 0676200c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_w9;
  int in_w10;
  uint in_w11;
  uint in_w12;
  int in_w13;
  long in_x14;
  long in_x15;
  long unaff_x19;
  
  do {
    iVar3 = *(int *)(param_1 + in_x14 * 4) - *(int *)(param_1 + (long)(int)in_x15 * 4 + 0x20);
    iVar2 = iVar3 + in_w13;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + in_x14 * 4) = iVar2;
    in_x14 = in_x14 + 1;
    if (in_x14 == 0x40) {
      in_w10 = in_w10 + 1;
      if (in_w10 == 5) {
        *(undefined8 *)(unaff_x19 + 0x10) = DAT_015c4308;
        return;
      }
      in_x14 = 9;
    }
    uVar1 = in_w12;
    if (0x18 < in_x14 - 8U) {
      uVar1 = in_w11;
    }
    in_x15 = in_x14 + (ulong)uVar1 + -7;
  } while ((uint)in_x15 < in_w9);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


