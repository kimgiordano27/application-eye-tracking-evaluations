/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 074c2738
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(ulong param_1)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong in_x9;
  int in_w10;
  long in_x11;
  ulong in_x12;
  long lVar11;
  undefined8 *unaff_x19;
  uint unaff_w20;
  ushort *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    in_x9 = param_1 + in_x9 * in_x11;
    unaff_w23 = unaff_w23 + -1;
    unaff_x21 = unaff_x21 + 1;
    uVar2 = *unaff_x21;
    uVar10 = (uint)uVar2;
    uVar7 = in_x9;
    iVar12 = unaff_w23;
    if (in_x12 < in_x9) break;
    if (uVar2 == 0) goto LAB_074c2760;
    iVar12 = in_w10;
    if (unaff_w23 < -0x1b) break;
    param_1 = (ulong)(uVar2 - 0x30);
  }
  goto LAB_074c281c;
  while( true ) {
    unaff_w23 = unaff_w23 + -1;
    uVar7 = in_x9 * 10;
    bVar5 = 0x28f5c28f5c28f5c < in_x9;
    in_x9 = uVar7;
    iVar12 = unaff_w23;
    if (bVar5) break;
LAB_074c2760:
    uVar7 = in_x9;
    iVar12 = unaff_w23;
    if (unaff_w23 < 1) break;
  }
LAB_074c281c:
  uVar9 = 0;
  do {
    if ((iVar12 < 1) && ((uVar10 == 0 || (iVar12 < -0x1b)))) goto LAB_074c28c8;
    if (0x19999998 < uVar9) {
      if (uVar9 != 0x19999999) goto LAB_074c28c8;
      if ((0x9999999999999998 < uVar7) && ((uVar7 != 0x9999999999999999 || (0x35 < uVar10)))) break;
    }
    uVar8 = (uVar7 & 0xffffffff) * 4 + (uVar7 & 0xffffffff);
    lVar11 = (uVar8 >> 0x1f) + (uVar7 >> 0x20) * 10;
    uVar9 = (int)((ulong)lVar11 >> 0x20) + uVar9 * 10;
    uVar7 = (uVar8 & 0x7fffffff) << 1 | lVar11 << 0x20;
    if (uVar10 != 0) {
      uVar3 = uVar10 - 0x30;
      unaff_x21 = unaff_x21 + 1;
      uVar10 = (uint)*unaff_x21;
      bVar5 = CARRY8(uVar7,(ulong)uVar3);
      uVar7 = uVar7 + uVar3;
      if (bVar5) {
        uVar9 = uVar9 + 1;
      }
    }
    iVar12 = iVar12 + -1;
  } while( true );
  uVar9 = 0x19999999;
LAB_074c28c8:
  if (0x34 < uVar10) {
    if ((uVar10 == 0x35) && ((uVar7 & 1) == 0)) {
      lVar11 = 2;
      do {
        psVar1 = (short *)((long)unaff_x21 + lVar11);
        iVar4 = (int)lVar11;
        if (iVar4 == 0x2a) break;
        lVar11 = lVar11 + 2;
      } while (*psVar1 == 0x30);
      if ((iVar4 == 0x2a) || (*psVar1 == 0)) goto FUN_074c292c;
    }
    bVar5 = uVar7 == 0xffffffffffffffff;
    uVar7 = uVar7 + 1;
    if (bVar5) {
      bVar5 = uVar9 == 0xffffffff;
      uVar9 = uVar9 + 1;
      if (bVar5) {
        iVar12 = iVar12 + 1;
        uVar7 = 0x999999999999999a;
        uVar9 = 0x19999999;
      }
      else {
        uVar7 = 0;
      }
    }
  }
FUN_074c292c:
  if (iVar12 < 1) {
    if (iVar12 < -0x1c) {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      iVar12 = 0x1c;
    }
    else {
      uVar8 = uVar7 >> 0x20;
      iVar12 = -iVar12;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_0751239c(&stack0x00000008,uVar7,uVar8,uVar9,unaff_w20 & 1,iVar12,0);
    uVar6 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


