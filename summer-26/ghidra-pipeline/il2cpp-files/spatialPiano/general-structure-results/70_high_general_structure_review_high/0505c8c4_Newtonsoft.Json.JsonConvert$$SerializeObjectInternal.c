/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 0505c8c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


bool Newtonsoft_Json_JsonConvert__SerializeObjectInternal(ulong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  long unaff_x20;
  ushort *puVar16;
  uint unaff_w21;
  int unaff_w22;
  int iVar17;
  long lVar18;
  uint uVar19;
  int *unaff_x27;
  uint *unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067d53e8);
    FUN_02f08768(PTR_DAT_067d5ba8);
    FUN_02f08768(PTR_DAT_067d5bb0);
    FUN_02f08768(PTR_DAT_067d6470);
    *(undefined1 *)(unaff_x20 + 0x709) = 1;
  }
  lVar10 = FUN_034702c4();
  lVar11 = FUN_034702c0();
  puVar8 = PTR_DAT_067c9fd0;
  if (unaff_w21 == 0) {
    uVar19 = 0;
    iVar17 = 0;
    bVar9 = true;
    goto LAB_0505cb20;
  }
  lVar12 = *(long *)PTR_DAT_067c9fd0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar8;
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  uVar2 = unaff_w21 & 0xfffffffc;
  if (unaff_w22 < ((int)unaff_w21 >> 2) * 3) {
    iVar14 = (unaff_w22 / 3) * 4;
  }
  else {
    iVar14 = uVar2 - 4;
  }
  lVar12 = lVar12 + 0x20;
  if (iVar14 < 1) {
    lVar18 = 0;
    uVar19 = 0;
  }
  else {
    lVar18 = 0;
    uVar19 = 0;
    puVar16 = (ushort *)(lVar10 + 4);
    do {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((0xff < (ushort)(puVar16[-1] | puVar16[-2] | *puVar16 | puVar16[1])) ||
         (uVar7 = (int)*(char *)(lVar12 + (ulong)puVar16[-1]) << 0xc |
                  (int)*(char *)(lVar12 + (ulong)puVar16[-2]) << 0x12 |
                  (int)*(char *)(lVar12 + (ulong)puVar16[1]) |
                  (int)*(char *)(lVar12 + (ulong)*puVar16) << 6, (int)uVar7 < 0))
      goto Newtonsoft_Json_JsonSerializer__Serialize;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar19 = uVar19 + 4;
      puVar1 = (undefined1 *)(lVar11 + lVar18);
      lVar18 = lVar18 + 3;
      puVar16 = puVar16 + 4;
      *puVar1 = (char)(uVar7 >> 0x10);
      puVar1[1] = (char)(uVar7 >> 8);
      puVar1[2] = (char)uVar7;
    } while ((int)uVar19 < iVar14);
  }
  iVar17 = (int)lVar18;
  if ((iVar14 == uVar2 - 4) && (uVar19 != uVar2)) {
    uVar3 = *(ushort *)(lVar10 + (long)(int)(uVar2 - 4) * 2);
    uVar4 = *(ushort *)(lVar10 + (long)(int)(uVar2 - 3) * 2);
    uVar5 = *(ushort *)(lVar10 + (long)(int)(uVar2 - 2) * 2);
    uVar6 = *(ushort *)(lVar10 + (long)(int)(uVar2 - 1) * 2);
    if ((ushort)(uVar4 | uVar3 | uVar5 | uVar6) < 0x100) {
      uVar7 = (int)*(char *)(lVar12 + (ulong)uVar4) << 0xc |
              (int)*(char *)(lVar12 + (ulong)uVar3) << 0x12;
      if (uVar6 == 0x3d) {
        if (uVar5 == 0x3d) {
          bVar9 = false;
          if (((int)uVar7 < 0) || (unaff_w22 + -1 < iVar17)) goto LAB_0505cb20;
          puVar13 = (undefined1 *)(lVar11 + iVar17);
          uVar15 = uVar7 >> 0x10;
          iVar14 = 1;
        }
        else {
          bVar9 = false;
          uVar7 = uVar7 | (int)*(char *)(lVar12 + (ulong)(uint)uVar5) << 6;
          if ((int)uVar7 < 0) goto LAB_0505cb1c;
          if (unaff_w22 + -2 < iVar17) goto LAB_0505cb20;
          uVar15 = uVar7 >> 8;
          puVar13 = (undefined1 *)(lVar11 + (iVar17 + 1));
          *(char *)(lVar11 + iVar17) = (char)(uVar7 >> 0x10);
          iVar14 = 2;
        }
      }
      else {
        bVar9 = false;
        uVar15 = (int)*(char *)(lVar12 + (ulong)uVar6) | (int)*(char *)(lVar12 + (ulong)uVar5) << 6;
        uVar7 = uVar15 | uVar7;
        if ((int)uVar7 < 0) goto LAB_0505cb1c;
        if (unaff_w22 + -3 < iVar17) goto LAB_0505cb20;
        puVar1 = (undefined1 *)(lVar11 + iVar17);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        *puVar1 = (char)(uVar7 >> 0x10);
        puVar13 = puVar1 + 2;
        puVar1[1] = (char)(uVar7 >> 8);
        iVar14 = 3;
      }
      bVar9 = uVar2 == unaff_w21;
      *puVar13 = (char)uVar15;
      iVar17 = iVar17 + iVar14;
      uVar19 = uVar19 + 4;
      goto LAB_0505cb20;
    }
Newtonsoft_Json_JsonSerializer__Serialize:
    iVar17 = (int)lVar18;
  }
LAB_0505cb1c:
  bVar9 = false;
LAB_0505cb20:
  *unaff_x29 = uVar19;
  *unaff_x27 = iVar17;
  return bVar9;
}


