/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 074b83b8
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  undefined1 in_w8;
  uint uVar10;
  undefined4 *unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  undefined8 unaff_x21;
  short *psVar12;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long in_stack_00000018;
  
  *(undefined1 *)(unaff_x23 + 0x474) = in_w8;
  lVar5 = FUN_074c4780();
  lVar6 = *unaff_x24;
  *unaff_x19 = 0x1d;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar3 = PTR_DAT_0912f2c0;
  FUN_07511760(&stack0x00000008,0);
  FUN_074c4774();
  psVar12 = (short *)(lVar5 + 0x3a);
  while( true ) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if ((int)((ulong)unaff_x21 >> 0x20) == 0 && (int)(unaff_x20 >> 0x20) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar7 = FUN_075117b4(&stack0x00000008,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar6);
    }
    psVar9 = psVar12 + -1;
    uVar7 = uVar7 & 0xffffffff;
    iVar4 = 7;
    do {
      do {
        psVar12 = psVar9;
        uVar11 = uVar7 / 10;
        uVar10 = (uint)uVar7;
        *psVar12 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
        iVar2 = iVar4 + -1;
        bVar1 = -1 < iVar4;
        psVar9 = psVar12 + -1;
        uVar7 = uVar11;
        iVar4 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  if ((int)unaff_x20 != 0) {
    psVar9 = psVar12 + -1;
    uVar7 = unaff_x20 & 0xffffffff;
    iVar4 = -2;
    do {
      do {
        psVar12 = psVar9;
        uVar11 = uVar7 / 10;
        uVar10 = (uint)uVar7;
        *psVar12 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
        iVar2 = iVar4 + -1;
        bVar1 = -1 < iVar4;
        psVar9 = psVar12 + -1;
        uVar7 = uVar11;
        iVar4 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  uVar7 = (lVar5 + 0x3a) - (long)psVar12;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  iVar4 = FUN_0751176c(&stack0x00000008,0);
  unaff_x19[1] = (int)uVar7 - iVar4;
  psVar8 = (short *)FUN_074c4780();
  psVar9 = psVar8;
  if (-1 < (int)uVar7 + -1) {
    do {
      uVar10 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar10;
      psVar8 = psVar9 + 1;
      *psVar9 = *psVar12;
      psVar9 = psVar8;
      psVar12 = psVar12 + 1;
    } while (uVar10 != 0);
  }
  *psVar8 = 0;
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


