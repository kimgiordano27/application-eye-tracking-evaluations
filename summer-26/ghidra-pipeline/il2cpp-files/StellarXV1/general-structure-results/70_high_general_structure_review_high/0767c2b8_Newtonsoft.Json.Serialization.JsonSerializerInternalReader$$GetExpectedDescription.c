/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 0767c2b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
               (undefined8 param_1)

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
  uint uVar10;
  undefined4 *unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  undefined8 unaff_x21;
  short *psVar12;
  long unaff_x22;
  long *unaff_x24;
  long in_stack_00000018;
  
  lVar5 = FUN_07688678(param_1,0);
  lVar6 = *unaff_x24;
  *unaff_x19 = 0x1d;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar3 = PTR_DAT_092d6630;
  FUN_076d5ce4(&stack0x00000008,0);
  FUN_0768866c();
  psVar12 = (short *)(lVar5 + 0x3a);
  while( true ) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((int)((ulong)unaff_x21 >> 0x20) == 0 && (int)(unaff_x20 >> 0x20) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar7 = FUN_076d5d38(&stack0x00000008,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar6);
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
    thunk_FUN_040d65a8();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
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
  iVar4 = FUN_076d5cf0(&stack0x00000008,0);
  unaff_x19[1] = (int)uVar7 - iVar4;
  psVar8 = (short *)FUN_07688678();
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


