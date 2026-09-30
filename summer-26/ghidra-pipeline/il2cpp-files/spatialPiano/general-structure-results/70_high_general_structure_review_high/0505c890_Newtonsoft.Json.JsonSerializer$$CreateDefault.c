/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 0505c890
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


bool Newtonsoft_Json_JsonSerializer__CreateDefault
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint *param_5,int *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  
  puVar9 = PTR_DAT_067d5ba8;
  puVar8 = PTR_DAT_067d53e8;
  if ((DAT_06bb9709 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067d53e8);
    FUN_02f08768(PTR_DAT_067d5ba8);
    FUN_02f08768(PTR_DAT_067d5bb0);
    FUN_02f08768(PTR_DAT_067d6470);
    DAT_06bb9709 = 1;
  }
  lVar11 = FUN_034702c4(param_1,param_2,*(undefined8 *)puVar9);
  lVar12 = FUN_034702c0(param_3,param_4,*(undefined8 *)puVar8);
  puVar8 = PTR_DAT_067c9fd0;
  uVar18 = (uint)param_2;
  if (uVar18 == 0) {
    uVar22 = 0;
    iVar20 = 0;
    bVar10 = true;
    goto LAB_0505cb20;
  }
  lVar13 = *(long *)PTR_DAT_067c9fd0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar8;
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  uVar2 = uVar18 & 0xfffffffc;
  iVar19 = (int)param_4;
  if (iVar19 < ((int)uVar18 >> 2) * 3) {
    iVar15 = (iVar19 / 3) * 4;
  }
  else {
    iVar15 = uVar2 - 4;
  }
  lVar13 = lVar13 + 0x20;
  if (iVar15 < 1) {
    lVar21 = 0;
    uVar22 = 0;
  }
  else {
    lVar21 = 0;
    uVar22 = 0;
    puVar17 = (ushort *)(lVar11 + 4);
    do {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((0xff < (ushort)(puVar17[-1] | puVar17[-2] | *puVar17 | puVar17[1])) ||
         (uVar7 = (int)*(char *)(lVar13 + (ulong)puVar17[-1]) << 0xc |
                  (int)*(char *)(lVar13 + (ulong)puVar17[-2]) << 0x12 |
                  (int)*(char *)(lVar13 + (ulong)puVar17[1]) |
                  (int)*(char *)(lVar13 + (ulong)*puVar17) << 6, (int)uVar7 < 0))
      goto Newtonsoft_Json_JsonSerializer__Serialize;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar22 = uVar22 + 4;
      puVar1 = (undefined1 *)(lVar12 + lVar21);
      lVar21 = lVar21 + 3;
      puVar17 = puVar17 + 4;
      *puVar1 = (char)(uVar7 >> 0x10);
      puVar1[1] = (char)(uVar7 >> 8);
      puVar1[2] = (char)uVar7;
    } while ((int)uVar22 < iVar15);
  }
  iVar20 = (int)lVar21;
  if ((iVar15 == uVar2 - 4) && (uVar22 != uVar2)) {
    uVar3 = *(ushort *)(lVar11 + (long)(int)(uVar2 - 4) * 2);
    uVar4 = *(ushort *)(lVar11 + (long)(int)(uVar2 - 3) * 2);
    uVar5 = *(ushort *)(lVar11 + (long)(int)(uVar2 - 2) * 2);
    uVar6 = *(ushort *)(lVar11 + (long)(int)(uVar2 - 1) * 2);
    if ((ushort)(uVar4 | uVar3 | uVar5 | uVar6) < 0x100) {
      uVar7 = (int)*(char *)(lVar13 + (ulong)uVar4) << 0xc |
              (int)*(char *)(lVar13 + (ulong)uVar3) << 0x12;
      if (uVar6 == 0x3d) {
        if (uVar5 == 0x3d) {
          bVar10 = false;
          if (((int)uVar7 < 0) || (iVar19 + -1 < iVar20)) goto LAB_0505cb20;
          puVar14 = (undefined1 *)(lVar12 + iVar20);
          uVar16 = uVar7 >> 0x10;
          iVar19 = 1;
        }
        else {
          bVar10 = false;
          uVar7 = uVar7 | (int)*(char *)(lVar13 + (ulong)(uint)uVar5) << 6;
          if ((int)uVar7 < 0) goto LAB_0505cb1c;
          if (iVar19 + -2 < iVar20) goto LAB_0505cb20;
          uVar16 = uVar7 >> 8;
          puVar14 = (undefined1 *)(lVar12 + (iVar20 + 1));
          *(char *)(lVar12 + iVar20) = (char)(uVar7 >> 0x10);
          iVar19 = 2;
        }
      }
      else {
        bVar10 = false;
        uVar16 = (int)*(char *)(lVar13 + (ulong)uVar6) | (int)*(char *)(lVar13 + (ulong)uVar5) << 6;
        uVar7 = uVar16 | uVar7;
        if ((int)uVar7 < 0) goto LAB_0505cb1c;
        if (iVar19 + -3 < iVar20) goto LAB_0505cb20;
        puVar1 = (undefined1 *)(lVar12 + iVar20);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        *puVar1 = (char)(uVar7 >> 0x10);
        puVar14 = puVar1 + 2;
        puVar1[1] = (char)(uVar7 >> 8);
        iVar19 = 3;
      }
      bVar10 = uVar2 == uVar18;
      *puVar14 = (char)uVar16;
      iVar20 = iVar20 + iVar19;
      uVar22 = uVar22 + 4;
      goto LAB_0505cb20;
    }
Newtonsoft_Json_JsonSerializer__Serialize:
    iVar20 = (int)lVar21;
  }
LAB_0505cb1c:
  bVar10 = false;
LAB_0505cb20:
  *param_5 = uVar22;
  *param_6 = iVar20;
  return bVar10;
}


