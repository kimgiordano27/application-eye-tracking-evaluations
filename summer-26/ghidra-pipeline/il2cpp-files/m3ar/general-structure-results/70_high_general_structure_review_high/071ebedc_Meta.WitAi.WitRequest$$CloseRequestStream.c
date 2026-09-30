/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 071ebedc
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Meta_WitAi_WitRequest__CloseRequestStream(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long in_x9;
  long lVar4;
  long unaff_x19;
  
  uVar3 = (uint)param_1;
  if (uVar3 < *(uint *)(in_x9 + 0x18)) {
    lVar4 = *(long *)(in_x9 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar2 = 1;
    uVar1 = *(undefined4 *)(lVar4 + param_1 * 4 + 0x20);
    *(uint *)(unaff_x19 + 8) = uVar3 + 1;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar1;
  }
  else {
    if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    FUN_071ebf48();
    uVar2 = 0;
  }
  return uVar2;
}


