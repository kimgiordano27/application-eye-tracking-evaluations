/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Context
ENTRY_POINT: 08e0b638
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


void Newtonsoft_Json_JsonSerializerSettings__get_Context(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  
  thunk_FUN_049ee3d8();
  plVar14 = (long *)*unaff_x23;
  if (plVar14 != (long *)0x0) {
    lVar10 = *plVar14;
    lVar13 = unaff_x23[-5];
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac0b610) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_08e0b6a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac0b610,3);
LAB_08e0b6a4:
    iVar6 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    puVar5 = PTR_DAT_0ac36b38;
    puVar4 = PTR_DAT_0ac36ae8;
    puVar3 = PTR_DAT_0ac15750;
    puVar2 = PTR_DAT_0ac09f18;
    puVar1 = PTR_DAT_0ac09e20;
    if (lVar13 != 0) {
      FUN_0a17ba14(lVar13,iVar6 == 0,0);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar8 = FUN_09b8d624(uVar8,uVar9,0);
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar8 = FUN_05d0906c(uVar8,uVar9,*(undefined8 *)puVar5);
      uVar9 = FUN_08aa1c24();
      FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar1);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = FUN_09b8d624(uVar8,uVar9,0);
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar8 = FUN_05d0906c(uVar8,uVar9,*(undefined8 *)puVar5);
      uVar9 = FUN_08aa1c24();
      FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar1);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = FUN_09b8d624(uVar8,uVar9,0);
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar8 = FUN_05d0906c(uVar8,uVar9,*(undefined8 *)puVar5);
      uVar9 = FUN_08aa1c24();
      FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar1);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f901fc();
      uVar8 = FUN_09b8d624(uVar8,uVar9,0);
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06055248();
      uVar8 = FUN_05d0906c(uVar8,uVar9,*(undefined8 *)puVar5);
      uVar9 = FUN_08aa1c24();
      FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar1);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
      FUN_08cc3ad0();
      if (*(int *)(*(long *)PTR_DAT_0ac0a0f8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar8 = FUN_09b8bbb0(uVar8,0);
      uVar9 = FUN_08aa1c24();
      FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


