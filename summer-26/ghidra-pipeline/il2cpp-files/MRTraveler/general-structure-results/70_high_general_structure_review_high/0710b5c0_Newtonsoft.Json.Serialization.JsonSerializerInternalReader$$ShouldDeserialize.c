/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 0710b5c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

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
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uVar15;
  
  uVar6 = FUN_06f74e14();
  if ((uVar6 & 1) == 0) {
    if (DAT_0941218d == '\0') {
      FUN_03c8f898(PTR_DAT_08e83798);
      DAT_0941218d = '\x01';
    }
    if (unaff_x25 != 0) {
      System_Convert__ToInt16();
    }
    uVar6 = FUN_0710f8c0();
    if ((uVar6 & 1) == 0) goto LAB_0710b654;
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = *(uint *)(unaff_x25 + 0x10);
    if (uVar10 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
      iVar11 = -1;
      goto LAB_0710b660;
    }
  }
  else {
LAB_0710b654:
    uVar10 = 0;
    iVar11 = 1;
LAB_0710b660:
    puVar4 = PTR_DAT_08ea1b30;
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar15 = unaff_w28 - 0x30;
    if (uVar15 < 10) {
      if (unaff_w28 != 0x30) {
LAB_0710b6c4:
        uVar13 = uVar10 + 1;
        uVar6 = (ulong)uVar15;
        iVar12 = -0x11;
        do {
          if (unaff_w23 <= uVar13) goto LAB_0710b93c;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar10 + iVar12 + 0x12) * 2);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (9 < uVar3 - 0x30) {
            uVar14 = (ulong)(uint)uVar3;
            uVar15 = uVar10 + iVar12 + 0x12;
            goto LAB_0710b808;
          }
          uVar13 = uVar10 + iVar12 + 0x13;
          bVar5 = iVar12 != -1;
          iVar12 = iVar12 + 1;
          uVar6 = ((ulong)uVar3 + uVar6 * 10) - 0x30;
        } while (bVar5);
        if (unaff_w23 <= uVar13) {
LAB_0710b93c:
          uVar7 = 1;
          lVar8 = uVar6 * (long)iVar11;
          goto LAB_0710b908;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar10 + 0x12) * 2);
        uVar14 = (ulong)uVar3;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar15 = uVar10 + 0x12;
        if (9 < uVar3 - 0x30) {
LAB_0710b808:
          uVar10 = uVar15;
          bVar5 = false;
          uVar13 = (uint)uVar14;
          goto LAB_0710b818;
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
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (9 < uVar3 - 0x30) goto LAB_0710b818;
            uVar10 = uVar10 + 1;
            bVar5 = true;
          } while (unaff_w23 != uVar10);
        }
        else if (!bVar2 && !bVar1) goto LAB_0710b93c;
LAB_0710b8d8:
        lVar8 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_0710b908;
      }
      do {
        uVar10 = uVar10 + 1;
        if (unaff_w23 <= uVar10) {
          uVar6 = 0;
          goto LAB_0710b93c;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
        uVar13 = (uint)uVar3;
        uVar15 = uVar3 - 0x30;
      } while (uVar15 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (uVar15 < 10) goto LAB_0710b6c4;
      uVar6 = 0;
      bVar5 = false;
LAB_0710b818:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              uVar3 = *puVar9;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0710b88c;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_0710b88c:
            if (uVar10 < unaff_w23) goto LAB_0710b8a0;
          }
          goto LAB_0710b8d0;
        }
      }
      else {
LAB_0710b8a0:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar14 = FUN_0710d4b8();
        if ((uVar14 & 1) != 0) {
LAB_0710b8d0:
          if (!bVar5) goto LAB_0710b93c;
          goto LAB_0710b8d8;
        }
      }
    }
  }
  lVar8 = 0;
  uVar7 = 0;
LAB_0710b908:
  *unaff_x19 = lVar8;
  return uVar7;
}


