/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_SerializationBinder
ENTRY_POINT: 0559ae24
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_SerializationBinder(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  
  FUN_02f07e70(PTR_DAT_06d01eb0);
  *(undefined1 *)(unaff_x20 + 0x8fb) = 1;
  puVar3 = PTR_DAT_06d4f330;
  if (unaff_x19 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_06d4f330;
    iVar1 = *(int *)(lVar6 + 0xe0);
joined_r0x0559aea4:
    if (iVar1 == 0) {
      thunk_FUN_02f12b58(lVar6);
    }
    FUN_0559acd0();
    return;
  }
  lVar6 = *unaff_x19;
  bVar2 = *(byte *)(*(long *)PTR_DAT_06d06338 + 0x130);
  if (((bVar2 <= *(byte *)(lVar6 + 0x130)) &&
      (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06d06338)) &&
     ((char)unaff_x19[0x19] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0559af88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x238))();
    return;
  }
  plVar5 = unaff_x19;
  if (lVar6 != *(long *)PTR_DAT_06d4f330) {
    plVar5 = (long *)0x0;
  }
  if (plVar5 == (long *)0x0) {
    uVar9 = *(undefined8 *)PTR_DAT_06d4f338;
    if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056109c0(uVar9,0);
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d487f8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_0559af34;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c();
FUN_0559af34:
    plVar5 = (long *)(*(code *)*puVar4)();
    lVar6 = *(long *)puVar3;
    if ((plVar5 == (long *)0x0) || (*plVar5 != lVar6)) {
      iVar1 = *(int *)(lVar6 + 0xe0);
      goto joined_r0x0559aea4;
    }
  }
  return;
}


