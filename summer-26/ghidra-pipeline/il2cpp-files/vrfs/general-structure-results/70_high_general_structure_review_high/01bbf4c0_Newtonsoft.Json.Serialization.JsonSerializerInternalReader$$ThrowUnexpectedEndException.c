/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 01bbf4c0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  byte bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong in_x9;
  long lVar13;
  int *in_x10;
  uint uVar14;
  long *unaff_x19;
  long unaff_x20;
  long *plVar15;
  int iVar16;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint uVar17;
  long *unaff_x24;
  int *piVar18;
  long *unaff_x25;
  undefined8 *unaff_x27;
  uint uVar19;
  
code_r0x01bbf4c0:
  if (!(bool)in_ZR) goto LAB_01bbf4ac;
LAB_01bbf4c4:
  puVar10 = (undefined8 *)FUN_015c2a80();
  do {
    bVar5 = (*(code *)*puVar10)();
    if (bVar5 != 0) {
      if (unaff_x22 == 0) goto LAB_01bbf848;
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)bVar5) goto LAB_01bbf844;
      lVar11 = unaff_x22 + (ulong)bVar5 * 4;
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + 1;
    }
    unaff_w23 = unaff_w23 + 1;
    lVar11 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x24) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01bbf480;
        }
        uVar12 = uVar12 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80();
LAB_01bbf480:
    iVar7 = (*(code *)*puVar10)();
    if (iVar7 <= unaff_w23) {
      if (unaff_x21 == 0) goto LAB_01bbf848;
      uVar17 = *(uint *)(unaff_x21 + 0x18);
      iVar7 = 0x200;
      lVar13 = 0xf;
      lVar11 = 9;
      uVar9 = 0;
      break;
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (in_x9 == 0) goto LAB_01bbf4c4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01bbf4ac:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x01bbf4c0;
    }
    puVar10 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    *(uint *)(unaff_x21 + lVar11 * 4) = uVar9;
    if (unaff_x22 == 0) goto LAB_01bbf848;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_01bbf844;
    uVar19 = (*(int *)(unaff_x22 + lVar11 * 4) << (ulong)((uint)lVar13 & 0x1f)) + uVar9;
    if (9 < uVar12) {
      iVar7 = ((int)((uVar19 & 0x1ff80) - (uVar9 & 0x1ff80)) >> ((uint)lVar13 & 0x1f)) + iVar7;
    }
    lVar13 = lVar13 + -1;
    lVar11 = lVar11 + 1;
    uVar9 = uVar19;
    if (lVar13 == 0) break;
    uVar12 = lVar11 - 8;
    if (uVar17 <= uVar12) goto LAB_01bbf844;
  }
  lVar11 = FUN_0160edfc(*unaff_x27,iVar7);
  plVar15 = (long *)(unaff_x20 + 0x10);
  *plVar15 = lVar11;
  thunk_FUN_01656ef8(plVar15,lVar11);
  iVar7 = 0x200;
  uVar12 = 0xf;
  do {
    if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_01bbf844;
    uVar9 = uVar19 & 0x1ff80;
    uVar19 = uVar19 - (*(int *)(unaff_x22 + uVar12 * 4 + 0x20) <<
                      (ulong)(0x10U - (int)uVar12 & 0x1f));
    uVar17 = uVar19 & 0x1ff80;
    if (uVar17 < uVar9) {
      iVar8 = 1 << (ulong)((int)uVar12 + 0x17U & 0x1f);
      iVar16 = iVar7 * -0x10;
      do {
        lVar11 = *plVar15;
        if (*(int *)(*(long *)PTR_DAT_06e62878 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        sVar6 = FUN_01bbab78(uVar17);
        if (lVar11 == 0) goto LAB_01bbf848;
        if (*(uint *)(lVar11 + 0x18) <= (uint)(int)sVar6) goto LAB_01bbf844;
        uVar17 = uVar17 + 0x80;
        uVar2 = (ushort)iVar16;
        iVar7 = iVar7 + iVar8;
        iVar16 = iVar16 + iVar8 * -0x10;
        *(ushort *)(lVar11 + (long)sVar6 * 2 + 0x20) = (ushort)uVar12 | uVar2;
      } while (uVar17 < uVar9);
    }
    puVar4 = PTR_DAT_06e179e8;
    puVar3 = PTR_DAT_06d95f40;
    uVar12 = uVar12 - 1;
  } while (9 < uVar12);
  iVar7 = 0;
  do {
    lVar11 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01bbf6cc;
        }
        uVar12 = uVar12 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80(unaff_x19,*(long *)puVar4,0);
LAB_01bbf6cc:
    iVar8 = (*(code *)*puVar10)(unaff_x19,puVar10[1]);
    if (iVar8 <= iVar7) {
      return;
    }
    lVar11 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01bbf72c;
        }
        uVar12 = uVar12 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80(unaff_x19,*(long *)puVar3,0);
LAB_01bbf72c:
    uVar9 = (*(code *)*puVar10)(unaff_x19,iVar7,puVar10[1]);
    uVar17 = uVar9 & 0xff;
    if ((uVar9 & 0xff) != 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar17) {
LAB_01bbf844:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      piVar18 = (int *)(unaff_x21 + (ulong)uVar17 * 4 + 0x20);
      iVar8 = *piVar18;
      if (*(int *)(*(long *)PTR_DAT_06e62878 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      sVar6 = FUN_01bbab78(iVar8);
      lVar11 = *plVar15;
      uVar19 = (uint)sVar6;
      uVar2 = (ushort)uVar17 | (ushort)(iVar7 << 4);
      iVar16 = 1 << (ulong)(uVar9 & 0x1f);
      if (uVar17 < 10) {
        if (lVar11 == 0) goto LAB_01bbf848;
        uVar9 = *(uint *)(lVar11 + 0x18);
        do {
          if (uVar9 <= uVar19) goto LAB_01bbf844;
          lVar13 = (long)(int)uVar19;
          uVar19 = uVar19 + iVar16;
          *(ushort *)(lVar11 + lVar13 * 2 + 0x20) = uVar2;
        } while ((int)uVar19 < 0x200);
      }
      else {
        if (lVar11 == 0) {
LAB_01bbf848:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar9 = *(uint *)(lVar11 + 0x18);
        if (uVar9 <= (uVar19 & 0x1ff)) goto LAB_01bbf844;
        uVar14 = (uint)*(short *)(lVar11 + (ulong)(uVar19 & 0x1ff) * 2 + 0x20);
        do {
          uVar1 = -((int)uVar14 >> 4) | (int)uVar19 >> 9;
          if (uVar9 <= uVar1) goto LAB_01bbf844;
          uVar19 = uVar19 + iVar16;
          *(ushort *)(lVar11 + (long)(int)uVar1 * 2 + 0x20) = uVar2;
        } while ((int)uVar19 < 1 << (ulong)(uVar14 & 0xf));
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar17) goto LAB_01bbf844;
      *piVar18 = iVar8 + (1 << (ulong)(0x10 - uVar17 & 0x1f));
    }
    iVar7 = iVar7 + 1;
  } while( true );
}


