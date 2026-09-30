/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 05dee51c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x22;
  int unaff_w23;
  long unaff_x25;
  long lVar3;
  
  FUN_031f20f4(PTR_DAT_075a1480);
  FUN_031f20f4(PTR_DAT_075ec040);
  FUN_031f20f4(PTR_DAT_075e39b0);
  FUN_031f20f4(PTR_DAT_075ec078);
  FUN_031f20f4(PTR_DAT_075ec080);
  *(undefined1 *)(unaff_x25 + 0x49d) = 1;
  if (unaff_x22 == 0) {
    FUN_05df9744();
  }
  else if ((unaff_w23 == 0) || (uVar1 = *(ulong *)(unaff_x22 + 0x18), uVar1 == 0)) {
    FUN_05df972c();
  }
  else {
    if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        if ((uint)uVar1 <= (uint)lVar3) {
LAB_05dee734:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar2 = *(long *)(unaff_x22 + 0x20 + lVar3 * 8);
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == 0)) {
          FUN_05df95e4();
          return 0;
        }
        FUN_05df95b4();
        if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar3) goto LAB_05dee734;
        lVar2 = *(long *)(unaff_x22 + 0x20 + lVar3 * 8);
        if (DAT_07a3d293 == '\0') {
          FUN_031f20f4(PTR_DAT_075a1470);
          DAT_07a3d293 = '\x01';
        }
        if (lVar2 != 0) {
          FUN_05c857f0(lVar2,0);
        }
        if (*(int *)(*(long *)PTR_DAT_075e81c8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar1 = FUN_05ded9b8();
        if ((uVar1 & 1) != 0) {
          *(undefined8 *)(unaff_x19 + 0x38) = 0;
          *(undefined8 *)(unaff_x19 + 0x28) = 0;
          return 1;
        }
        uVar1 = (ulong)*(uint *)(unaff_x22 + 0x18);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)*(uint *)(unaff_x22 + 0x18));
    }
    FUN_05df96dc();
  }
  return 0;
}


