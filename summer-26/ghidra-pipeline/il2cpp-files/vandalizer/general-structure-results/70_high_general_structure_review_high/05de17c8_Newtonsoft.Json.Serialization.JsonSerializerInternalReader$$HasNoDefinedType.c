/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 05de17c8
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


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
                (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w9;
  int in_w10;
  ulong *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  iVar2 = (int)((ulong)param_1 >> 0x20);
  iVar1 = in_w9 + 0xc;
  iVar2 = in_w10 + ((iVar2 >> 1) - (iVar2 >> 0x1f));
  iStack0000000000000008 = iVar1;
  iStack000000000000000c = iVar2;
  if (iVar2 - 1U < 9999) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar3 = FUN_05de1b1c(iVar2,iVar1);
    if (iVar3 < in_stack_00000000._4_4_) {
      in_stack_00000000._4_4_ = iVar3;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar4 = FUN_05de05c4(iVar2,iVar1,in_stack_00000000._4_4_);
    return (*unaff_x19 & 0x3fffffffffffffff) % 864000000000 + lVar4 |
           *unaff_x19 & 0xc000000000000000;
  }
  thunk_FUN_03257e30(PTR_DAT_0759e028);
  uVar5 = thunk_FUN_0322f148();
  uVar6 = thunk_FUN_03257e30(PTR_DAT_075ebdb0);
  uVar7 = thunk_FUN_03257e30(PTR_DAT_075ebc58);
  FUN_05d72b58(uVar5,uVar6,uVar7,0);
  uVar6 = thunk_FUN_03257e30(PTR_DAT_075ebdc0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar5,uVar6);
}


