/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 02708e50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *in_x9;
  int unaff_w19;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  iVar2 = (*in_x9)();
  if (unaff_x25 < unaff_x23) {
    lVar5 = unaff_x23 - iVar2;
  }
  else if (unaff_x25 == unaff_x23) {
    iVar2 = (**(code **)(*unaff_x21 + 0x218))();
    lVar5 = unaff_x25 - iVar2;
  }
  else {
    lVar5 = unaff_x23 + iVar2;
    uVar1 = (int)unaff_x20 + 2;
    if (unaff_x25 <= lVar5) {
      uVar1 = unaff_w22;
      lVar5 = unaff_x23;
    }
    unaff_x20 = (ulong)uVar1;
  }
  if ((unaff_w19 != 0) && (unaff_x20 = unaff_x25 - lVar5, unaff_w19 != 1)) {
    lVar5 = *unaff_x24;
    uVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x24;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_02708f84;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_02708f80;
      if ((long)unaff_x20 <= (long)*(int *)(lVar6 + uVar7 * 4 + 0x20)) {
        iVar2 = (int)uVar7 + 1;
        goto LAB_02708f14;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0xc);
    iVar2 = 0xd;
LAB_02708f14:
    if (unaff_w19 == 2) {
      unaff_x20 = (ulong)(iVar2 - 1);
    }
    else {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar6 == 0) {
LAB_02708f84:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      if (*(uint *)(lVar6 + 0x18) <= (uint)((long)iVar2 + -2)) {
LAB_02708f80:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_w19 != 3) {
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe0);
        uVar3 = FUN_027b3d94(uVar3,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar4 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe8);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar3);
      }
      unaff_x20 = (ulong)(uint)((int)unaff_x20 - *(int *)(lVar6 + ((long)iVar2 + -2) * 4 + 0x20));
    }
  }
  return unaff_x20 & 0xffffffff;
}


