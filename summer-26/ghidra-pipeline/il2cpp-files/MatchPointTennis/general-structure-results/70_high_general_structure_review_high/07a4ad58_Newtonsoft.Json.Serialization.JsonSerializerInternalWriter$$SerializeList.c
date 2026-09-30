/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 07a4ad58
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList
               (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint in_w8;
  ulong in_x9;
  uint in_w10;
  long lVar8;
  ulong in_x11;
  uint in_w12;
  int in_w13;
  undefined4 in_register_0000406c;
  undefined8 *unaff_x19;
  uint unaff_w20;
  ushort *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    iVar9 = unaff_w23 + -1;
    uVar7 = (uint)param_4;
    if (((iVar9 < 1) && ((in_w8 == 0 || (iVar9 < -0x1b)))) ||
       ((in_w12 < uVar7 &&
        ((uVar7 != in_w10 || ((in_x9 < param_2 && ((param_2 != in_x11 || (0x35 < in_w8))))))))))
    break;
    uVar6 = (param_2 & 0xffffffff) * 4 + (param_2 & 0xffffffff);
    lVar8 = (param_2 >> 0x20) * CONCAT44(in_register_0000406c,in_w13) + (uVar6 >> 0x1f);
    param_2 = (uVar6 & 0x7fffffff) << 1 | lVar8 << 0x20;
    uVar7 = (int)((ulong)lVar8 >> 0x20) + uVar7 * in_w13;
    param_4 = (ulong)uVar7;
    unaff_w23 = iVar9;
    if (in_w8 != 0) {
      uVar2 = in_w8 - 0x30;
      unaff_x21 = unaff_x21 + 1;
      in_w8 = (uint)*unaff_x21;
      bVar4 = CARRY8(param_2,(ulong)uVar2);
      param_2 = param_2 + uVar2;
      if (bVar4) {
        uVar7 = uVar7 + 1;
      }
      param_4 = (ulong)uVar7;
    }
  }
  if (0x34 < in_w8) {
    if ((in_w8 == 0x35) && ((param_2 & 1) == 0)) {
      lVar8 = 2;
      do {
        psVar1 = (short *)((long)unaff_x21 + lVar8);
        iVar3 = (int)lVar8;
        if (iVar3 == 0x2a) break;
        lVar8 = lVar8 + 2;
      } while (*psVar1 == 0x30);
      if ((iVar3 == 0x2a) || (*psVar1 == 0)) goto LAB_07a4adc4;
    }
    bVar4 = param_2 == 0xffffffffffffffff;
    param_2 = param_2 + 1;
    if (bVar4) {
      param_4 = (ulong)(uVar7 + 1);
      if (uVar7 == 0xffffffff) {
        param_2 = in_x9 + 2;
        param_4 = 0x19999999;
        iVar9 = unaff_w23;
      }
      else {
        param_2 = 0;
      }
    }
  }
LAB_07a4adc4:
  if (iVar9 < 1) {
    if (iVar9 < -0x1c) {
      iVar9 = 0x1c;
      param_2 = 0;
      uVar6 = 0;
      param_4 = 0;
    }
    else {
      uVar6 = param_2 >> 0x20;
      iVar9 = -iVar9;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_07a9a188(&stack0x00000008,param_2,uVar6,param_4,unaff_w20 & 1,iVar9,0);
    uVar5 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


