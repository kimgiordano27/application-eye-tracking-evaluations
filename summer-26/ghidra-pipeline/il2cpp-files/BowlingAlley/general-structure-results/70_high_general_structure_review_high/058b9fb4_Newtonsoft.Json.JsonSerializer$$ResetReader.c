/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ResetReader
ENTRY_POINT: 058b9fb4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__ResetReader(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x22;
  long unaff_x24;
  
  thunk_FUN_032e1da0(PTR_DAT_07279c00);
  thunk_FUN_032e1da0(PTR_DAT_07290a68);
  thunk_FUN_032e1da0(PTR_DAT_07290a70);
  *(undefined1 *)(unaff_x24 + 8) = 1;
  puVar6 = PTR_DAT_07297108;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  iVar7 = FUN_05924844(unaff_w20,unaff_w19,0);
  puVar8 = (ushort *)FUN_03aca200();
  puVar9 = (ushort *)FUN_03aca200();
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar6);
  }
  if (DAT_076d5068 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07297108);
    DAT_076d5068 = '\x01';
  }
  lVar10 = *(long *)puVar6;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar10 = *(long *)puVar6;
  }
  uVar12 = 0x7f;
  iVar4 = unaff_w20;
  iVar5 = unaff_w19;
  if (**(char **)(lVar10 + 0xb8) != '\0') {
    uVar12 = 0xffff;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar1 = *puVar8;
    if ((uVar12 < uVar1) || (uVar2 = *puVar9, uVar12 < uVar2)) {
      if (*(int *)(*(long *)PTR_DAT_07290a18 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar11 = FUN_058baf40(puVar8,iVar4,puVar9,iVar5);
      return uVar11;
    }
    if (uVar1 != uVar2) {
      uVar13 = (uint)uVar1;
      uVar14 = (uint)uVar2;
      uVar3 = uVar13 - 0x20;
      if (0x19 < uVar13 - 0x61) {
        uVar3 = uVar13;
      }
      uVar13 = uVar14 - 0x20;
      if (0x19 < uVar14 - 0x61) {
        uVar13 = uVar14;
      }
      uVar3 = uVar3 - uVar13;
      if (uVar3 != 0) goto LAB_058ba10c;
    }
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + -1;
  }
  uVar3 = unaff_w20 - unaff_w19;
LAB_058ba10c:
  return (ulong)uVar3;
}


