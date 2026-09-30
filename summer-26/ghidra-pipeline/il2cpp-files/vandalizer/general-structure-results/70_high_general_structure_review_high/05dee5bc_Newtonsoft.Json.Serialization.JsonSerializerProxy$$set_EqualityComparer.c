/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 05dee5bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(undefined1 param_1 [16])

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x22;
  long unaff_x25;
  long lVar2;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  while( true ) {
    uStack0000000000000010 = uStack0000000000000000;
    uStack0000000000000018 = uStack0000000000000008;
    _uStack0000000000000020 = uStack0000000000000000;
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000030 = uStack0000000000000000;
    uStack0000000000000038 = uStack0000000000000008;
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000000;
    uStack0000000000000058 = uStack0000000000000008;
    uStack0000000000000060 = uStack0000000000000000;
    uStack0000000000000068 = uStack0000000000000008;
    uStack0000000000000070 = uStack0000000000000000;
    uStack0000000000000078 = uStack0000000000000008;
    FUN_05df95b4();
    _uStack0000000000000020 = CONCAT44(*(undefined4 *)(unaff_x19 + 0x24),uStack0000000000000020);
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x28) break;
    lVar2 = *(long *)(unaff_x29 + unaff_x28 * 8);
    if (*(char *)(unaff_x25 + 0x293) == '\0') {
      FUN_031f20f4(PTR_DAT_075a1470);
      *(undefined1 *)(unaff_x25 + 0x293) = 1;
    }
    if (lVar2 != 0) {
      FUN_05c857f0(lVar2,0);
    }
    if (*(int *)(*(long *)PTR_DAT_075e81c8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar1 = FUN_05ded9b8();
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x38) = uStack0000000000000038;
      *(undefined8 *)(unaff_x19 + 0x28) = uStack0000000000000028;
      return 1;
    }
    unaff_x28 = unaff_x28 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)(uint)unaff_x28) {
      FUN_05df96dc();
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x28) break;
    lVar2 = *(long *)(unaff_x29 + unaff_x28 * 8);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == 0)) {
      FUN_05df95e4();
      return 0;
    }
    uStack0000000000000000 = 0;
    uStack0000000000000008 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


