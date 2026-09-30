/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Converters
ENTRY_POINT: 05dee5dc
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Converters(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x22;
  long unaff_x25;
  long lVar2;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  while ((uint)unaff_x28 < *(uint *)(unaff_x22 + 0x18)) {
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
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
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
    in_stack_00000028 = 0;
    in_stack_00000038 = 0;
    FUN_05df95b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


