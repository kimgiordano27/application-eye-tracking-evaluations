/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 08e0b4d0
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


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(void)

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
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar16;
  undefined8 unaff_x22;
  long *plVar17;
  undefined8 unaff_x23;
  undefined8 *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac0a0f8);
  FUN_04947ee4(PTR_DAT_0ac0b610);
  FUN_04947ee4(PTR_DAT_0ac36b38);
  FUN_04947ee4(PTR_DAT_0ac09f18);
  FUN_04947ee4(PTR_DAT_0ac6a5a8);
  FUN_04947ee4(PTR_DAT_0ac6a5b0);
  FUN_04947ee4(PTR_DAT_0ac6a5b8);
  FUN_04947ee4(PTR_DAT_0ac6a5c0);
  FUN_04947ee4(PTR_DAT_0ac6a5c8);
  FUN_04947ee4(PTR_DAT_0ac6a5d0);
  FUN_04947ee4(PTR_DAT_0ac6a5d8);
  FUN_04947ee4(PTR_DAT_0ac6a5e0);
  FUN_04947ee4(PTR_DAT_0ac6a5e8);
  FUN_04947ee4(PTR_DAT_0ac6a5f0);
  FUN_04947ee4(PTR_DAT_0ac6a5f8);
  FUN_04947ee4(PTR_DAT_0ac6a600);
  FUN_04947ee4(PTR_DAT_0ac6a608);
  FUN_04947ee4(PTR_DAT_0ac6a5a0);
  *(undefined1 *)(unaff_x20 + 0xc52) = 1;
  lVar10 = thunk_FUN_04983f60(*unaff_x27);
  FUN_08dbf2f0(lVar10,0);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x10) = unaff_x19;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar10 + 0x18) = unaff_x26;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x25;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x24;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x23;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x68) = unaff_x22;
    thunk_FUN_049ee3d8();
    puVar18 = (undefined8 *)(unaff_x19 + 0x70);
    *puVar18 = unaff_x21;
    thunk_FUN_049ee3d8(puVar18);
    plVar17 = (long *)*puVar18;
    if (plVar17 != (long *)0x0) {
      lVar13 = *plVar17;
      lVar16 = *(long *)(unaff_x19 + 0x48);
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac0b610) {
            puVar18 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_08e0b6a4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar18 = (undefined8 *)FUN_04980e68(plVar17,*(long *)PTR_DAT_0ac0b610,3);
LAB_08e0b6a4:
      iVar9 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      puVar8 = PTR_DAT_0ac6a5d0;
      puVar7 = PTR_DAT_0ac6a5c8;
      puVar6 = PTR_DAT_0ac6a5a8;
      puVar5 = PTR_DAT_0ac36b38;
      puVar4 = PTR_DAT_0ac36ae8;
      puVar3 = PTR_DAT_0ac15750;
      puVar2 = PTR_DAT_0ac09f18;
      puVar1 = PTR_DAT_0ac09e20;
      if (lVar16 != 0) {
        FUN_0a17ba14(lVar16,iVar9 == 0,0);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,lVar10,*(undefined8 *)puVar6,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar12,lVar10,*(undefined8 *)puVar7,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar11 = FUN_09b8d624(uVar11,uVar12,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar12,lVar10,*(undefined8 *)puVar8,0);
        uVar11 = FUN_05d0906c(uVar11,uVar12,*(undefined8 *)puVar5);
        uVar12 = FUN_08aa1c24();
        FUN_05b466fc(uVar11,uVar12,*(undefined8 *)puVar1);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,lVar10,*(undefined8 *)PTR_DAT_0ac6a5d8,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar12,lVar10,*(undefined8 *)PTR_DAT_0ac6a5e0,0);
        uVar11 = FUN_09b8d624(uVar11,uVar12,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar12,lVar10,*(undefined8 *)PTR_DAT_0ac6a5e8,0);
        uVar11 = FUN_05d0906c(uVar11,uVar12,*(undefined8 *)puVar5);
        uVar12 = FUN_08aa1c24();
        FUN_05b466fc(uVar11,uVar12,*(undefined8 *)puVar1);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,lVar10,*(undefined8 *)PTR_DAT_0ac6a5f0,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar12,lVar10,*(undefined8 *)PTR_DAT_0ac6a5f8,0);
        uVar11 = FUN_09b8d624(uVar11,uVar12,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar12,lVar10,*(undefined8 *)PTR_DAT_0ac6a600,0);
        uVar11 = FUN_05d0906c(uVar11,uVar12,*(undefined8 *)puVar5);
        uVar12 = FUN_08aa1c24();
        FUN_05b466fc(uVar11,uVar12,*(undefined8 *)puVar1);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar11,lVar10,*(undefined8 *)PTR_DAT_0ac6a608,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f901fc(uVar12,lVar10,*(undefined8 *)PTR_DAT_0ac6a5b0,0);
        uVar11 = FUN_09b8d624(uVar11,uVar12,0);
        uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_06055248(uVar12,lVar10,*(undefined8 *)PTR_DAT_0ac6a5b8,0);
        uVar11 = FUN_05d0906c(uVar11,uVar12,*(undefined8 *)puVar5);
        uVar12 = FUN_08aa1c24();
        FUN_05b466fc(uVar11,uVar12,*(undefined8 *)puVar1);
        uVar11 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
        FUN_08cc3ad0(uVar11,lVar10,*(undefined8 *)PTR_DAT_0ac6a5c0,0);
        if (*(int *)(*(long *)PTR_DAT_0ac0a0f8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar11 = FUN_09b8bbb0(uVar11,0);
        uVar12 = FUN_08aa1c24();
        FUN_05b466fc(uVar11,uVar12,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


