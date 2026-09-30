/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_NullValueHandling
ENTRY_POINT: 02708eac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_NullValueHandling(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int unaff_w19;
  ulong unaff_x20;
  int iVar5;
  ulong uVar6;
  long *unaff_x24;
  long unaff_x25;
  
  if ((unaff_w19 != 0) && (unaff_x20 = unaff_x25 - param_1, unaff_w19 != 1)) {
    lVar1 = *unaff_x24;
    uVar6 = 0;
    do {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar1 = *unaff_x24;
      }
      lVar4 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_02708f84;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_02708f80;
      if ((long)unaff_x20 <= (long)*(int *)(lVar4 + uVar6 * 4 + 0x20)) {
        iVar5 = (int)uVar6 + 1;
        goto LAB_02708f14;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xc);
    iVar5 = 0xd;
LAB_02708f14:
    if (unaff_w19 == 2) {
      unaff_x20 = (ulong)(iVar5 - 1);
    }
    else {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar4 == 0) {
LAB_02708f84:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)((long)iVar5 + -2)) {
LAB_02708f80:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_w19 != 3) {
        uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe0);
        uVar2 = FUN_027b3d94(uVar2,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar3 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar3,uVar2,0);
        uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe8);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar3,uVar2);
      }
      unaff_x20 = (ulong)(uint)((int)unaff_x20 - *(int *)(lVar4 + ((long)iVar5 + -2) * 4 + 0x20));
    }
  }
  return unaff_x20 & 0xffffffff;
}


