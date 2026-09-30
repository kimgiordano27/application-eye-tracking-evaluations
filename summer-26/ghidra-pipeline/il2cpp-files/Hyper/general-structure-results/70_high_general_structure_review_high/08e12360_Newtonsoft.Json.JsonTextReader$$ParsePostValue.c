/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 08e12360
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar10;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac6ae68);
  FUN_04947ee4(PTR_DAT_0ac6ae70);
  FUN_04947ee4(PTR_DAT_0ac09f18);
  FUN_04947ee4(PTR_DAT_0ac6ae78);
  FUN_04947ee4(PTR_DAT_0ac36768);
  FUN_04947ee4(PTR_DAT_0ac0b088);
  *(undefined1 *)(unaff_x21 + 0xc95) = 1;
  puVar1 = PTR_DAT_0ac09758;
  uVar11 = **(undefined8 **)(*(long *)(PTR_DAT_0ac09758 + 0x90) + 0xb8);
  uVar6 = thunk_FUN_04983f60(*unaff_x24);
  FUN_0726b5b8(uVar6,uVar11,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar6;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x20),uVar6);
  uVar11 = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
  uVar6 = thunk_FUN_04983f60(*unaff_x24);
  FUN_0726b5b8(uVar6,uVar11,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x28),uVar6);
  FUN_08aa1d64();
  puVar12 = (undefined8 *)(unaff_x19 + 0x18);
  *puVar12 = unaff_x20;
  thunk_FUN_049ee3d8(puVar12);
  puVar1 = PTR_DAT_0ac09f18;
  plVar10 = (long *)*puVar12;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6a228) {
        puVar12 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_08e124ac;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar12 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6a228,5);
LAB_08e124ac:
  puVar5 = PTR_DAT_0ac6ae70;
  puVar4 = PTR_DAT_0ac6ae68;
  puVar3 = PTR_DAT_0ac6ae60;
  puVar2 = PTR_DAT_0ac09e20;
  uVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)puVar1);
  }
  uVar6 = FUN_05cf2544(uVar6,*(undefined8 *)puVar5);
  uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
  FUN_05f901fc();
  uVar6 = FUN_05d08d6c(uVar6,uVar11,*(undefined8 *)puVar4);
  uVar11 = FUN_08aa1cc8();
  FUN_05b466fc(uVar6,uVar11,*(undefined8 *)puVar2);
  return;
}


