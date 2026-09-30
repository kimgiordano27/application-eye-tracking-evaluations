/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 02708d98
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


ulong Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int unaff_w19;
  long unaff_x20;
  ulong uVar10;
  long *unaff_x21;
  ulong uVar11;
  long unaff_x22;
  long *unaff_x24;
  
  FUN_01ab69ac(PTR_DAT_03cf7fb8);
  *(undefined1 *)(unaff_x22 + 0x7d5) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027087e4();
  iVar4 = FUN_02708774();
  lVar6 = unaff_x20 / 864000000000 + (long)iVar4 + 1;
  auVar3 = SEXT816(lVar6 * 0x1e + -0x67eb16) * SEXT816(0x31512094b8a6407d);
  uVar1 = (int)(auVar3._8_8_ >> 0xb) - (auVar3._12_4_ >> 0x1f);
  uVar10 = (ulong)uVar1;
  lVar5 = FUN_027086b8();
  iVar4 = (**(code **)(*unaff_x21 + 0x218))();
  if (lVar6 < lVar5) {
    lVar9 = lVar5 - iVar4;
  }
  else if (lVar6 == lVar5) {
    iVar4 = (**(code **)(*unaff_x21 + 0x218))();
    lVar9 = lVar6 - iVar4;
  }
  else {
    lVar9 = lVar5 + iVar4;
    uVar2 = uVar1 + 2;
    if (lVar6 <= lVar9) {
      uVar2 = uVar1 + 1;
      lVar9 = lVar5;
    }
    uVar10 = (ulong)uVar2;
  }
  if ((unaff_w19 != 0) && (uVar10 = lVar6 - lVar9, unaff_w19 != 1)) {
    lVar6 = *unaff_x24;
    uVar11 = 0;
    do {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x24;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_02708f84;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_02708f80;
      if ((long)uVar10 <= (long)*(int *)(lVar5 + uVar11 * 4 + 0x20)) {
        iVar4 = (int)uVar11 + 1;
        goto LAB_02708f14;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0xc);
    iVar4 = 0xd;
LAB_02708f14:
    if (unaff_w19 == 2) {
      uVar10 = (ulong)(iVar4 - 1);
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar5 == 0) {
LAB_02708f84:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)((long)iVar4 + -2)) {
LAB_02708f80:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_w19 != 3) {
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe0);
        uVar7 = FUN_027b3d94(uVar7,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar8 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar8,uVar7,0);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe8);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,uVar7);
      }
      uVar10 = (ulong)(uint)((int)uVar10 - *(int *)(lVar5 + ((long)iVar4 + -2) * 4 + 0x20));
    }
  }
  return uVar10 & 0xffffffff;
}


