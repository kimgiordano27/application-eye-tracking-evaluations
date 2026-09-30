/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Culture
ENTRY_POINT: 08e0a8ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_Culture(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 *puVar16;
  
  puVar2 = PTR_DAT_0ac6a540;
  if ((DAT_0b32ec4a & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09cf0);
    FUN_04947ee4(PTR_DAT_0ac0a870);
    FUN_04947ee4(PTR_DAT_0ac09d30);
    FUN_04947ee4(PTR_DAT_0ac09e20);
    FUN_04947ee4(PTR_DAT_0ac0a0f8);
    FUN_04947ee4(PTR_DAT_0ac6a548);
    FUN_04947ee4(PTR_DAT_0ac09ed0);
    FUN_04947ee4(PTR_DAT_0ac0a2a0);
    FUN_04947ee4(PTR_DAT_0ac09f18);
    FUN_04947ee4(PTR_DAT_0ac6a550);
    FUN_04947ee4(PTR_DAT_0ac6a558);
    FUN_04947ee4(PTR_DAT_0ac6a560);
    FUN_04947ee4(PTR_DAT_0ac6a568);
    FUN_04947ee4(PTR_DAT_0ac6a540);
    DAT_0b32ec4a = 1;
  }
  lVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_08dbf2f0(lVar9,0);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x10) = param_1;
    thunk_FUN_049ee3d8((long *)(lVar9 + 0x10),param_1);
    puVar16 = (undefined8 *)(lVar9 + 0x18);
    *puVar16 = param_3;
    thunk_FUN_049ee3d8(puVar16,param_3);
    *(undefined8 *)(param_1 + 0x80) = *puVar16;
    thunk_FUN_049ee3d8();
    puVar16 = (undefined8 *)(param_1 + 0x78);
    *puVar16 = param_2;
    thunk_FUN_049ee3d8(puVar16,param_2);
    puVar5 = PTR_DAT_0ac6a548;
    puVar2 = PTR_DAT_0ac09f18;
    plVar15 = (long *)*puVar16;
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac6a548) {
            puVar16 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_08e0aa58;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_04980e68(plVar15,*(long *)PTR_DAT_0ac6a548,0);
LAB_08e0aa58:
      puVar7 = PTR_DAT_0ac6a558;
      puVar6 = PTR_DAT_0ac0a2a0;
      puVar4 = PTR_DAT_0ac09ed0;
      puVar3 = PTR_DAT_0ac09e20;
      puVar1 = PTR_DAT_0ac09cf0;
      uVar10 = (*(code *)*puVar16)(plVar15,puVar16[1]);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar2);
      }
      uVar10 = FUN_05cf2544(uVar10,*(undefined8 *)puVar6);
      uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_05f901fc(uVar11,lVar9,*(undefined8 *)puVar7,0);
      uVar10 = FUN_05d08d6c(uVar10,uVar11,*(undefined8 *)puVar4);
      uVar11 = FUN_08aa1c24(param_1,0);
      FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar3);
      puVar8 = PTR_DAT_0ac6a560;
      puVar7 = PTR_DAT_0ac6a550;
      puVar2 = PTR_DAT_0ac0a870;
      plVar15 = *(long **)(param_1 + 0x78);
      if (plVar15 != (long *)0x0) {
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar16 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_08e0ab74;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar16 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar5,1);
LAB_08e0ab74:
        uVar10 = (*(code *)*puVar16)(plVar15,puVar16[1]);
        uVar10 = FUN_05cf2544(uVar10,*(undefined8 *)puVar6);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f901fc(uVar11,lVar9,*(undefined8 *)puVar8,0);
        uVar10 = FUN_05d08d6c(uVar10,uVar11,*(undefined8 *)puVar4);
        uVar11 = FUN_08aa1c24(param_1,0);
        FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar3);
        lVar12 = *(long *)(param_1 + 0x40);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_05f8bf14(uVar10,param_1,*(undefined8 *)puVar7,0);
        puVar1 = PTR_DAT_0ac6a568;
        puVar5 = PTR_DAT_0ac0a0f8;
        puVar2 = PTR_DAT_0ac09d30;
        if (lVar12 != 0) {
          UnityEngine_InputForUI_Event_MapAsEventModifiers__Map<CommandEvent>(lVar12,uVar10,0);
          FUN_08e0acb0(param_1,0);
          uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
          FUN_08cc3ad0(uVar10,lVar9,*(undefined8 *)puVar1,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar10 = FUN_09b8bbb0(uVar10,0);
          uVar11 = FUN_08aa1c24(param_1,0);
          FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


