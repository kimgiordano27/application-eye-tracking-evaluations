/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldDeserialize
ENTRY_POINT: 06851210
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize(long param_1)

{
  undefined8 *puVar1;
  uint unaff_w19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  FUN_0335b6c8(param_1 + 0x750,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08432d00,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08442c10,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084447e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08441fd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08442848,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084447c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08447690,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08449328,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844a5c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08449018,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08440f48,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08436008,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084490a8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08433f40,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08449020,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084372a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084372a8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xe17) = unaff_w21;
  puVar1 = (undefined8 *)(&DAT_07f00b60 + (long)(int)unaff_w19 * 8);
  if (0x2d < unaff_w19) {
    puVar1 = (undefined8 *)(DAT_083d16d8 + 0xb8);
  }
  return *(undefined8 *)*puVar1;
}


