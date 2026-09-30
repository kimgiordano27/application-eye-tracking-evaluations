/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 05de7e44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                ushort *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x27;
  
  if ((*(byte *)(unaff_x27 + 0x491) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075a9128);
    FUN_031f20f4(PTR_DAT_075e8180);
    FUN_031f20f4(PTR_DAT_075a1480);
    FUN_031f20f4(PTR_DAT_075e34e0);
    *(undefined1 *)(unaff_x27 + 0x491) = 1;
  }
  puVar2 = PTR_DAT_075e8180;
  if ((int)param_6 == 1) {
    uVar1 = *param_5;
    if (uVar1 < 0x53) {
      if (uVar1 == 0x4f) {
LAB_05de7ee4:
        if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar7 = FUN_05dec980(param_1,param_8,param_2,param_3,param_4);
        return uVar7;
      }
      if (uVar1 == 0x52) goto LAB_05de7ff8;
    }
    else {
      if (uVar1 == 0x72) {
LAB_05de7ff8:
        if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar7 = FUN_05dece5c(param_1,param_8,param_2,param_3,param_4);
        return uVar7;
      }
      if (uVar1 == 0x6f) goto LAB_05de7ee4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_075a9128 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = FUN_05d547ec(param_7,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
  }
  lVar6 = FUN_05ded1c0(param_1,param_5,param_6,uVar5,param_8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar3 = FUN_05c93cd4(lVar6,0);
  if ((int)param_3 < iVar3) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_05c93cd4(lVar6,0);
    FUN_05c94050(lVar6,0,param_2,param_3,uVar4,0);
    uVar4 = FUN_05c93cd4(lVar6,0);
  }
  *param_4 = uVar4;
  FUN_05c97604(lVar6,0);
  return (ulong)(iVar3 <= (int)param_3);
}


