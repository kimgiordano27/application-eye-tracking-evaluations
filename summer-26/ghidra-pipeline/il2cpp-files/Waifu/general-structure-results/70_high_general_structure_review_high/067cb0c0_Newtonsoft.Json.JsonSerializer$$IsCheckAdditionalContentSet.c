/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 067cb0c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int unaff_w19;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  uint unaff_w22;
  long unaff_x24;
  long unaff_x25;
  
  iVar1 = (**(code **)(*unaff_x21 + 0x218))();
  if (unaff_x25 < param_1) {
    lVar4 = param_1 - iVar1;
  }
  else if (unaff_x25 == param_1) {
    iVar1 = (**(code **)(*unaff_x21 + 0x218))();
    lVar4 = unaff_x25 - iVar1;
  }
  else {
    lVar4 = param_1 + iVar1;
    uVar6 = (int)unaff_x20 + 2;
    if (unaff_x25 <= lVar4) {
      uVar6 = unaff_w22;
      lVar4 = param_1;
    }
    unaff_x20 = (ulong)uVar6;
  }
  if ((unaff_w19 != 0) && (unaff_x20 = unaff_x25 - lVar4, unaff_w19 != 1)) {
    lVar4 = *(long *)(unaff_x24 + 0x118);
    uVar7 = 0;
    do {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        lVar4 = *(long *)(unaff_x24 + 0x118);
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_067cb210;
      uVar6 = *(uint *)(lVar5 + 0x18);
      if (uVar6 <= uVar7) goto LAB_067cb20c;
      if ((long)unaff_x20 <= (long)*(int *)(lVar5 + uVar7 * 4 + 0x20)) {
        iVar1 = (int)uVar7 + 1;
        goto LAB_067cb1a0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0xc);
    iVar1 = 0xd;
LAB_067cb1a0:
    if (unaff_w19 == 2) {
      unaff_x20 = (ulong)(iVar1 - 1);
    }
    else {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x118) + 0xb8) + 8);
        if (lVar5 == 0) {
LAB_067cb210:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
      }
      if (uVar6 <= (uint)((long)iVar1 + -2)) {
LAB_067cb20c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if (unaff_w19 != 3) {
        uVar2 = FUN_033d1ba8(&DAT_0843da08);
        FUN_033d1ba8(&DAT_083cdc60);
        uVar3 = thunk_FUN_03398a84();
        FUN_0682eb84(uVar3,uVar2,0);
        uVar2 = FUN_033d1ba8(&DAT_0840ddc8);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar3,uVar2);
      }
      unaff_x20 = (ulong)(uint)((int)unaff_x20 - *(int *)(lVar5 + ((long)iVar1 + -2) * 4 + 0x20));
    }
  }
  return unaff_x20 & 0xffffffff;
}


