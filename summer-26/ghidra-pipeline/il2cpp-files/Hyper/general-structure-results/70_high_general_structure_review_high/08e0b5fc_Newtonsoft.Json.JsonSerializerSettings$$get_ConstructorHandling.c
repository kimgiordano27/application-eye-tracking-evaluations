/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ConstructorHandling
ENTRY_POINT: 08e0b5fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x21;
  long lVar12;
  undefined8 unaff_x22;
  long *plVar13;
  undefined8 unaff_x23;
  undefined8 *puVar14;
  undefined8 unaff_x24;
  
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x24;
  thunk_FUN_049ee3d8();
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x23;
  thunk_FUN_049ee3d8();
  *(undefined8 *)(unaff_x19 + 0x68) = unaff_x22;
  thunk_FUN_049ee3d8();
  puVar14 = (undefined8 *)(unaff_x19 + 0x70);
  *puVar14 = unaff_x21;
  thunk_FUN_049ee3d8(puVar14);
  plVar13 = (long *)*puVar14;
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    lVar12 = *(long *)(unaff_x19 + 0x48);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac0b610) {
          puVar14 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_08e0b6a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac0b610,3);
LAB_08e0b6a4:
    iVar6 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    puVar5 = PTR_DAT_0ac36b38;
    puVar4 = PTR_DAT_0ac36ae8;
    puVar3 = PTR_DAT_0ac15750;
    puVar2 = PTR_DAT_0ac09f18;
    puVar1 = PTR_DAT_0ac09e20;
    if (lVar12 != 0) {
      FUN_0a17ba14(lVar12,iVar6 == 0,0);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_09b8d624(uVar7,uVar8,0);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar7 = FUN_05d0906c(uVar7,uVar8,*(undefined8 *)puVar5);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar1);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar7 = FUN_09b8d624(uVar7,uVar8,0);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar7 = FUN_05d0906c(uVar7,uVar8,*(undefined8 *)puVar5);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar1);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar7 = FUN_09b8d624(uVar7,uVar8,0);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar7 = FUN_05d0906c(uVar7,uVar8,*(undefined8 *)puVar5);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar1);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar7 = FUN_09b8d624(uVar7,uVar8,0);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar7 = FUN_05d0906c(uVar7,uVar8,*(undefined8 *)puVar5);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar1);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
      FUN_08cc3ad0();
      if (*(int *)(*(long *)PTR_DAT_0ac0a0f8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_09b8bbb0(uVar7,0);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


