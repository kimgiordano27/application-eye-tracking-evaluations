/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 050da79c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  uint uStack000000000000000c;
  
  if ((DAT_06bb9c19 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(PTR_DAT_067dbd90);
    DAT_06bb9c19 = 1;
  }
  uStack000000000000000c = 0;
  puVar8 = (ushort *)FUN_050e41e0(param_1,0);
  iVar7 = FUN_04f6ede4(puVar8,0);
  puVar5 = PTR_DAT_067dbd90;
  puVar4 = PTR_DAT_067c8f80;
  uVar2 = *puVar8;
  iVar15 = iVar7;
  while (uVar2 == 0x30) {
    puVar8 = puVar8 + 1;
    iVar15 = iVar15 + -1;
    uVar2 = *puVar8;
  }
  if (iVar15 == 0) {
    uVar21 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar12 = iVar15;
    if (8 < iVar15) {
      iVar12 = 9;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar15 = iVar15 - iVar12;
    uVar14 = (uint)*puVar8;
    puVar17 = puVar8;
    while( true ) {
      puVar17 = puVar17 + 1;
      if (puVar8 + iVar12 <= puVar17) break;
      uVar14 = (uint)*puVar17 + (uVar14 - 0x30) * 10;
    }
    uVar21 = (ulong)(uVar14 - 0x30);
    if (iVar15 < 1) {
      lVar9 = *(long *)puVar5;
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar9 = *(long *)puVar5;
      iVar12 = iVar15;
      if (8 < iVar15) {
        iVar12 = 9;
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
      if (lVar11 == 0) goto LAB_050dac7c;
      lVar13 = (long)iVar12 + -1;
      if (*(uint *)(lVar11 + 0x18) <= (uint)lVar13) goto LAB_050dac80;
      lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x38);
      if (lVar16 == 0) goto LAB_050dac7c;
      if (*(uint *)(lVar16 + 0x18) <= (uint)lVar13) goto LAB_050dac80;
      iVar15 = iVar15 - iVar12;
      uVar14 = (uint)puVar8[9];
      for (puVar17 = puVar8 + 10;
          puVar17 < (ushort *)((long)(puVar8 + 9) + (ulong)(uint)(iVar12 << 1));
          puVar17 = puVar17 + 1) {
        uVar14 = (uint)*puVar17 + (uVar14 - 0x30) * 10;
      }
      uVar21 = (*(ulong *)(lVar11 + lVar13 * 8 + 0x20) >>
                ((ulong)-(uint)*(byte *)(lVar16 + lVar13 + 0x20) & 0x3f) & 0xffffffff) * uVar21 +
               (ulong)(uVar14 - 0x30);
    }
    uVar14 = (iVar15 - iVar7) + *(int *)(param_1 + 4);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar19 = -uVar14;
    if (-1 < (int)uVar14) {
      uVar19 = uVar14;
    }
    if ((int)uVar19 < 0x160) {
      bVar6 = uVar21 >> 0x20 != 0;
      uVar18 = uVar21 << 0x20;
      if (bVar6) {
        uVar18 = uVar21;
      }
      iVar15 = 0x20;
      if (bVar6) {
        iVar15 = 0x40;
      }
      iVar7 = iVar15 + -0x10;
      uVar21 = uVar18 << 0x10;
      if (uVar18 >> 0x30 != 0) {
        iVar7 = iVar15;
        uVar21 = uVar18;
      }
      iVar15 = iVar7 + -8;
      uVar18 = uVar21 << 8;
      if (uVar21 >> 0x38 != 0) {
        iVar15 = iVar7;
        uVar18 = uVar21;
      }
      iVar7 = iVar15 + -4;
      uVar21 = uVar18 << 4;
      if (uVar18 >> 0x3c != 0) {
        iVar7 = iVar15;
        uVar21 = uVar18;
      }
      iVar15 = iVar7 + -2;
      uVar18 = uVar21 << 2;
      if (uVar21 >> 0x3e != 0) {
        iVar15 = iVar7;
        uVar18 = uVar21;
      }
      uVar1 = (uint)(uVar18 >> 0x3f) ^ 1;
      uVar18 = uVar18 << uVar1;
      uVar1 = iVar15 - uVar1;
      uStack000000000000000c = uVar1;
      if ((uVar19 & 0xf) != 0) {
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar5;
        }
        lVar11 = *(long *)(lVar9 + 0xb8);
        lVar13 = *(long *)(lVar11 + 0x38);
        if (lVar13 == 0) goto LAB_050dac7c;
        uVar3 = (uVar19 & 0xf) - 1;
        if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_050dac80;
        iVar7 = (int)*(char *)(lVar13 + (ulong)uVar3 + 0x20);
        iVar15 = 1 - iVar7;
        if (-1 < (int)uVar14) {
          iVar15 = iVar7;
        }
        uStack000000000000000c = iVar15 + uVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar5;
          lVar11 = *(long *)(lVar9 + 0xb8);
        }
        lVar11 = *(long *)(lVar11 + 0x30);
        if (lVar11 == 0) goto LAB_050dac7c;
        uVar3 = uVar3 + ((int)uVar14 >> 0x1f & 0xfU);
        if (*(uint *)(lVar11 + 0x18) <= uVar3) goto LAB_050dac80;
        uVar20 = *(undefined8 *)(lVar11 + (ulong)uVar3 * 8 + 0x20);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar18 = FUN_050e3218(uVar18,uVar20,&stack0x0000000c);
      }
      if (0xf < uVar19) {
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar5;
        }
        lVar11 = *(long *)(lVar9 + 0xb8);
        lVar13 = *(long *)(lVar11 + 0x48);
        if (lVar13 == 0) {
LAB_050dac7c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = (long)((int)uVar19 >> 4) + -1;
        uVar19 = (uint)lVar16;
        if (*(uint *)(lVar13 + 0x18) <= uVar19) {
LAB_050dac80:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        iVar7 = (int)*(short *)(lVar13 + lVar16 * 2 + 0x20);
        iVar15 = 1 - iVar7;
        if (-1 < (int)uVar14) {
          iVar15 = iVar7;
        }
        uStack000000000000000c = iVar15 + uStack000000000000000c;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar5;
          lVar11 = *(long *)(lVar9 + 0xb8);
        }
        lVar11 = *(long *)(lVar11 + 0x40);
        if (lVar11 == 0) goto LAB_050dac7c;
        uVar19 = uVar19 + ((int)uVar14 >> 0x1f & 0x15U);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto LAB_050dac80;
        uVar20 = *(undefined8 *)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar18 = FUN_050e3218(uVar18,uVar20,&stack0x0000000c);
      }
      uVar14 = uStack000000000000000c;
      if ((((uint)uVar18 >> 10 & 1) != 0) &&
         (uVar21 = uVar18 + (uVar18 >> 0xb & 1) + 0x3ff, bVar6 = uVar21 < uVar18, uVar18 = uVar21,
         bVar6)) {
        uVar18 = uVar21 >> 1 | 0x8000000000000000;
        uVar14 = uStack000000000000000c + 1;
      }
      uStack000000000000000c = uVar14 + 0x3fe;
      if ((int)uStack000000000000000c < 1) {
        if ((uStack000000000000000c == 0xffffffcc) && (0x8000000000000057 < uVar18)) {
          uVar18 = 1;
        }
        else if ((int)uStack000000000000000c < -0x33) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar18 >> ((ulong)(-uVar14 - 0x3f2) & 0x3f);
        }
      }
      else if (uStack000000000000000c < 0x7ff) {
        uVar18 = uVar18 >> 0xb & 0xfffffffffffff | (ulong)uStack000000000000000c << 0x34;
      }
      else {
        uVar18 = 0x7ff0000000000000;
      }
    }
    else {
      uVar18 = 0x7ff0000000000000;
      if ((int)uVar14 < 1) {
        uVar18 = 0;
      }
    }
    uVar10 = FUN_050e41c4(param_1,0);
    uVar21 = uVar18 | 0x8000000000000000;
    if ((uVar10 & 1) == 0) {
      uVar21 = uVar18;
    }
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar21;
  return auVar22;
}


