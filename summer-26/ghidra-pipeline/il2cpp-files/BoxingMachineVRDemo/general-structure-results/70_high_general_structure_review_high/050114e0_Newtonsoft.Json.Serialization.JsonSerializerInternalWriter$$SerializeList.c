/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 050114e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar9;
  uint unaff_w23;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long unaff_x25;
  ulong uVar14;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uVar15;
  
  FUN_02d6084c(PTR_DAT_0676c428);
  *(undefined1 *)(unaff_x20 + 0xdad) = 1;
  if (unaff_x26 != 0) {
    FUN_04e8a8a0();
  }
  uVar6 = FUN_05015874();
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_04e8cf70();
    if ((uVar6 & 1) == 0) {
      if (DAT_06b77dad == '\0') {
        FUN_02d6084c(PTR_DAT_0676c428);
        DAT_06b77dad = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_04e8a8a0();
      }
      uVar6 = FUN_05015874();
      if ((uVar6 & 1) == 0) goto LAB_050115f4;
      if (unaff_x25 == 0) goto LAB_050118f4;
      uVar10 = *(uint *)(unaff_x25 + 0x10);
      if (unaff_w23 <= uVar10) goto LAB_050118a0;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
      iVar11 = -1;
    }
    else {
LAB_050115f4:
      uVar10 = 0;
LAB_050115fc:
      iVar11 = 1;
    }
    puVar4 = PTR_DAT_06777060;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar15 = unaff_w28 - 0x30;
    if (uVar15 < 10) {
      if (unaff_w28 != 0x30) {
LAB_05011664:
        uVar13 = uVar10 + 1;
        uVar6 = (ulong)uVar15;
        iVar12 = -0x11;
        do {
          if (unaff_w23 <= uVar13) goto LAB_050118dc;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar10 + iVar12 + 0x12) * 2);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (9 < uVar3 - 0x30) {
            uVar14 = (ulong)(uint)uVar3;
            uVar15 = uVar10 + iVar12 + 0x12;
            goto LAB_050117a8;
          }
          uVar13 = uVar10 + iVar12 + 0x13;
          bVar5 = iVar12 != -1;
          iVar12 = iVar12 + 1;
          uVar6 = ((ulong)uVar3 + uVar6 * 10) - 0x30;
        } while (bVar5);
        if (unaff_w23 <= uVar13) {
LAB_050118dc:
          uVar7 = 1;
          lVar8 = uVar6 * (long)iVar11;
          goto LAB_050118a8;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar10 + 0x12) * 2);
        uVar14 = (ulong)uVar3;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = uVar10 + 0x12;
        if (9 < uVar3 - 0x30) {
LAB_050117a8:
          uVar10 = uVar15;
          bVar5 = false;
          uVar13 = (uint)uVar14;
          goto LAB_050117b8;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar6;
        iVar12 = 2 - iVar11;
        if (-1 < 1 - iVar11) {
          iVar12 = 1 - iVar11;
        }
        uVar6 = (uVar14 + uVar6 * 10) - 0x30;
        uVar10 = uVar10 + 0x13;
        bVar1 = (ulong)(uint)(iVar12 >> 1) + 0x7fffffffffffffff < uVar6;
        bVar5 = bVar2 || bVar1;
        if (uVar10 < unaff_w23) {
          do {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (9 < uVar3 - 0x30) goto LAB_050117b8;
            uVar10 = uVar10 + 1;
            bVar5 = true;
          } while (unaff_w23 != uVar10);
        }
        else if (!bVar2 && !bVar1) goto LAB_050118dc;
LAB_05011878:
        lVar8 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_050118a8;
      }
      do {
        uVar10 = uVar10 + 1;
        if (unaff_w23 <= uVar10) {
          uVar6 = 0;
          goto LAB_050118dc;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
        uVar13 = (uint)uVar3;
        uVar15 = uVar3 - 0x30;
      } while (uVar15 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (uVar15 < 10) goto LAB_05011664;
      uVar6 = 0;
      bVar5 = false;
LAB_050117b8:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              uVar3 = *puVar9;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0501182c;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_0501182c:
            if (uVar10 < unaff_w23) goto LAB_05011840;
          }
          goto LAB_05011870;
        }
      }
      else {
LAB_05011840:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_05013474();
        if ((uVar14 & 1) != 0) {
LAB_05011870:
          if (!bVar5) goto LAB_050118dc;
          goto LAB_05011878;
        }
      }
    }
  }
  else {
    if (unaff_x26 == 0) {
LAB_050118f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar10 = *(uint *)(unaff_x26 + 0x10);
    if (uVar10 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
      goto LAB_050115fc;
    }
  }
LAB_050118a0:
  lVar8 = 0;
  uVar7 = 0;
LAB_050118a8:
  *unaff_x19 = lVar8;
  return uVar7;
}


