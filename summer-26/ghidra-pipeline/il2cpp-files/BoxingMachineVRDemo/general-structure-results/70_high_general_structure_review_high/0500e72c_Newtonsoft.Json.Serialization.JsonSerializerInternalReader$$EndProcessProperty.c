/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 0500e72c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  short *psVar11;
  
  *(undefined1 *)(unaff_x21 + 0x204) = 1;
  puVar2 = PTR_DAT_06777060;
  *unaff_x19 = 0x14;
  FUN_05015988();
  lVar3 = FUN_05015994();
  psVar11 = (short *)(lVar3 + 0x28);
  while( true ) {
    iVar9 = *(int *)(*(long *)puVar2 + 0xe4);
    if (iVar9 == 0) {
      thunk_FUN_02dbd7b4();
      iVar9 = *(int *)(*(long *)puVar2 + 0xe4);
    }
    iVar6 = (int)unaff_x20;
    if (unaff_x20 >> 0x20 == 0) break;
    if (iVar9 == 0) {
      thunk_FUN_02dbd7b4();
    }
    unaff_x20 = unaff_x20 / 1000000000;
    uVar8 = (ulong)(uint)(iVar6 + (int)unaff_x20 * -1000000000);
    iVar9 = 7;
    do {
      do {
        uVar7 = uVar8 / 10;
        uVar10 = (uint)uVar8;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar8 + (short)(uVar8 / 10) * -10 + 0x30;
        iVar6 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        uVar8 = uVar7;
        iVar9 = iVar6;
      } while (bVar1);
    } while (9 < uVar10);
  }
  if (iVar9 == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (iVar6 != 0) {
    iVar9 = -2;
    do {
      do {
        uVar10 = (uint)unaff_x20;
        uVar8 = (unaff_x20 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar6 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        unaff_x20 = uVar8;
        iVar9 = iVar6;
      } while (bVar1);
    } while (9 < uVar10);
  }
  uVar8 = (lVar3 + 0x28) - (long)psVar11;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  unaff_x19[1] = (int)uVar8;
  psVar4 = (short *)FUN_05015994();
  psVar5 = psVar4;
  if (-1 < (int)uVar8 + -1) {
    do {
      uVar10 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar10;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar11;
      psVar5 = psVar4;
      psVar11 = psVar11 + 1;
    } while (0 < (int)uVar10);
  }
  *psVar4 = 0;
  return;
}


