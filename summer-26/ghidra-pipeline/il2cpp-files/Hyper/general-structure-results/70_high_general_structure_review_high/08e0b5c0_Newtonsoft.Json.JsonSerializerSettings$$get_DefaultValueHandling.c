/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 08e0b5c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 unaff_x21;
  long lVar15;
  undefined8 unaff_x22;
  long *plVar16;
  undefined8 unaff_x23;
  undefined8 *puVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  
  FUN_08dbf2f0();
  if (param_1 != 0) {
    *(long *)(param_1 + 0x10) = unaff_x19;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(param_1 + 0x18) = unaff_x26;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x25;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x24;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x23;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x68) = unaff_x22;
    thunk_FUN_049ee3d8();
    puVar17 = (undefined8 *)(unaff_x19 + 0x70);
    *puVar17 = unaff_x21;
    thunk_FUN_049ee3d8(puVar17);
    plVar16 = (long *)*puVar17;
    if (plVar16 != (long *)0x0) {
      lVar12 = *plVar16;
      lVar15 = *(long *)(unaff_x19 + 0x48);
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac0b610) {
            puVar17 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_08e0b6a4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar17 = (undefined8 *)FUN_04980e68(plVar16,*(long *)PTR_DAT_0ac0b610,3);
LAB_08e0b6a4:
      iVar9 = (*(code *)*puVar17)(plVar16,puVar17[1]);
      puVar8 = PTR_DAT_0ac6a5d0;
      puVar7 = PTR_DAT_0ac6a5c8;
      puVar6 = PTR_DAT_0ac6a5a8;
      puVar5 = PTR_DAT_0ac36b38;
      puVar4 = PTR_DAT_0ac36ae8;
      puVar3 = PTR_DAT_0ac15750;
      puVar2 = PTR_DAT_0ac09f18;
      puVar1 = PTR_DAT_0ac09e20;
      if (lVar15 != 0) {
        FUN_0a17ba14(lVar15,iVar9 == 0,0);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar10,param_1,*(undefined8 *)puVar6,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,param_1,*(undefined8 *)puVar7,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar10 = FUN_09b8d624(uVar10,uVar11,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar11,param_1,*(undefined8 *)puVar8,0);
        uVar10 = FUN_05d0906c(uVar10,uVar11,*(undefined8 *)puVar5);
        uVar11 = FUN_08aa1c24();
        FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar1);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar10,param_1,*(undefined8 *)PTR_DAT_0ac6a5d8,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,param_1,*(undefined8 *)PTR_DAT_0ac6a5e0,0);
        uVar10 = FUN_09b8d624(uVar10,uVar11,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar11,param_1,*(undefined8 *)PTR_DAT_0ac6a5e8,0);
        uVar10 = FUN_05d0906c(uVar10,uVar11,*(undefined8 *)puVar5);
        uVar11 = FUN_08aa1c24();
        FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar1);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar10,param_1,*(undefined8 *)PTR_DAT_0ac6a5f0,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,param_1,*(undefined8 *)PTR_DAT_0ac6a5f8,0);
        uVar10 = FUN_09b8d624(uVar10,uVar11,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar11,param_1,*(undefined8 *)PTR_DAT_0ac6a600,0);
        uVar10 = FUN_05d0906c(uVar10,uVar11,*(undefined8 *)puVar5);
        uVar11 = FUN_08aa1c24();
        FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar1);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar10,param_1,*(undefined8 *)PTR_DAT_0ac6a608,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,param_1,*(undefined8 *)PTR_DAT_0ac6a5b0,0);
        uVar10 = FUN_09b8d624(uVar10,uVar11,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar11,param_1,*(undefined8 *)PTR_DAT_0ac6a5b8,0);
        uVar10 = FUN_05d0906c(uVar10,uVar11,*(undefined8 *)puVar5);
        uVar11 = FUN_08aa1c24();
        FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar1);
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
        FUN_08cc3ad0(uVar10,param_1,*(undefined8 *)PTR_DAT_0ac6a5c0,0);
        if (*(int *)(*(long *)PTR_DAT_0ac0a0f8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar10 = FUN_09b8bbb0(uVar10,0);
        uVar11 = FUN_08aa1c24();
        FUN_05b466fc(uVar10,uVar11,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


