/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 05ddda80
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  if (DAT_07a453de == '\0') {
    FUN_031f20f4(PTR_DAT_075d8900);
    DAT_07a453de = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ddd8f0 with catch @ 05dddad4
                        */
  if (*(int *)(unaff_x23 + 0x18) != 1) {
    if (*(int *)(unaff_x23 + 0x18) == 0) {
      if (DAT_07a3d293 == '\0') {
        FUN_031f20f4(PTR_DAT_075a1470);
        DAT_07a3d293 = '\x01';
      }
      if (unaff_x21 == 0) {
        uVar1 = 0;
        uVar3 = 0;
      }
      else {
        uVar1 = FUN_05c857f0();
        uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_075ebb80 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_05dddc3c(uVar1,uVar3);
      return;
    }
    thunk_FUN_03257e30(PTR_DAT_0759e028);
    uVar1 = thunk_FUN_0322f148();
    uVar2 = thunk_FUN_03257e30(PTR_DAT_075e7d10);
    FUN_05d7734c(uVar1,uVar2,0);
    uVar2 = thunk_FUN_03257e30(PTR_DAT_075ebbb8);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar1,uVar2);
  }
  if (DAT_07a3d293 == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05dddb80 with catch @ 05dddb8c
                        */
    FUN_031f20f4(PTR_DAT_075a1470);
    DAT_07a3d293 = '\x01';
  }
  if (unaff_x21 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_05c857f0();
    uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_075ebb80 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05dddcc4(uVar1,uVar3);
  return;
}


