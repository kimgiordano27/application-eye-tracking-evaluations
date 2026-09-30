/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 02708df4
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


ulong Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong in_x11;
  int unaff_w19;
  ulong uVar9;
  long *unaff_x21;
  ulong uVar10;
  long *unaff_x24;
  
  param_1 = param_1 + 1;
  auVar3 = SEXT816(param_1 * 0x1e + -0x67eb16) *
           SEXT816((long)(in_x11 & 0xffff | 0x31512094b8a60000));
  uVar1 = (int)(auVar3._8_8_ >> 0xb) - (auVar3._12_4_ >> 0x1f);
  uVar9 = (ulong)uVar1;
  lVar5 = FUN_027086b8();
  iVar4 = (**(code **)(*unaff_x21 + 0x218))();
  if (param_1 < lVar5) {
    lVar8 = lVar5 - iVar4;
  }
  else if (param_1 == lVar5) {
    iVar4 = (**(code **)(*unaff_x21 + 0x218))();
    lVar8 = param_1 - iVar4;
  }
  else {
    lVar8 = lVar5 + iVar4;
    uVar2 = uVar1 + 2;
    if (param_1 <= lVar8) {
      uVar2 = uVar1 + 1;
      lVar8 = lVar5;
    }
    uVar9 = (ulong)uVar2;
  }
  if ((unaff_w19 != 0) && (uVar9 = param_1 - lVar8, unaff_w19 != 1)) {
    lVar5 = *unaff_x24;
    uVar10 = 0;
    do {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x24;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_02708f84;
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_02708f80;
      if ((long)uVar9 <= (long)*(int *)(lVar8 + uVar10 * 4 + 0x20)) {
        iVar4 = (int)uVar10 + 1;
        goto LAB_02708f14;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0xc);
    iVar4 = 0xd;
LAB_02708f14:
    if (unaff_w19 == 2) {
      uVar9 = (ulong)(iVar4 - 1);
    }
    else {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar8 == 0) {
LAB_02708f84:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      if (*(uint *)(lVar8 + 0x18) <= (uint)((long)iVar4 + -2)) {
LAB_02708f80:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_w19 != 3) {
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe0);
        uVar6 = FUN_027b3d94(uVar6,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar7 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar7,uVar6,0);
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe8);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,uVar6);
      }
      uVar9 = (ulong)(uint)((int)uVar9 - *(int *)(lVar8 + ((long)iVar4 + -2) * 4 + 0x20));
    }
  }
  return uVar9 & 0xffffffff;
}


