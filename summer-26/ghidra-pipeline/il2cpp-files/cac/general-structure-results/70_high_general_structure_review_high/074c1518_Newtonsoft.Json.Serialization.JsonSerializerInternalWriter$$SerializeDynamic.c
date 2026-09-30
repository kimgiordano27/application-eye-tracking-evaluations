/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 074c1518
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint unaff_w20;
  int iVar6;
  ulong uVar7;
  ushort *puVar8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long unaff_x26;
  long unaff_x27;
  uint unaff_w29;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000018;
  
  uVar4 = FUN_074c465c();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_073268dc();
    if ((uVar4 & 1) == 0) {
      if (DAT_096846f8 == '\0') {
        FUN_03f13384(PTR_DAT_0910b618);
        DAT_096846f8 = '\x01';
      }
      if (unaff_x26 != 0) {
        FUN_07324190();
      }
      uVar4 = FUN_074c465c();
      if ((uVar4 & 1) != 0) {
        if (unaff_x26 == 0) goto LAB_074c18f4;
        uVar9 = *(uint *)(unaff_x26 + 0x10);
        iVar11 = 0;
        uVar4 = 0;
        if (unaff_w23 <= uVar9) goto LAB_074c188c;
        goto LAB_074c1614;
      }
      uVar9 = 0;
      iVar11 = 1;
    }
    else {
      uVar9 = 0;
      iVar11 = 1;
    }
LAB_074c1618:
    puVar3 = PTR_DAT_0912f2c0;
    if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar10 = unaff_w29 - 0x30;
    if (uVar10 < 10) {
      uStack000000000000000c = unaff_w20;
      if (unaff_w29 == 0x30) {
        do {
          uVar9 = uVar9 + 1;
          if (unaff_w23 <= uVar9) {
            uVar4 = 0;
            iVar11 = 1;
            goto LAB_074c188c;
          }
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          uVar7 = (ulong)uVar1;
        } while (uVar1 == 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar10 = uVar1 - 0x30;
        if (uVar10 < 10) goto LAB_074c1688;
        uVar4 = 0;
        uVar10 = uVar9;
LAB_074c17a8:
        uVar9 = (uint)uVar7;
        bVar2 = false;
LAB_074c17ac:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
          if ((uStack000000000000000c >> 1 & 1) == 0) goto LAB_074c1888;
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03f13634();
              }
              uVar1 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074c182c;
              uVar10 = uVar10 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w23 != uVar10);
            if (bVar2) goto LAB_074c18d0;
            goto LAB_074c18b8;
          }
LAB_074c182c:
          if (unaff_w23 <= uVar10) goto LAB_074c187c;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_074c21c4();
        if ((uVar7 & 1) == 0) goto LAB_074c1888;
LAB_074c187c:
        if (!bVar2) goto LAB_074c18b8;
      }
      else {
LAB_074c1688:
        uVar4 = (ulong)uVar10;
        uVar10 = uVar9 + 0x13;
        iVar6 = 1;
        do {
          if (unaff_w23 <= uVar9 + iVar6) goto LAB_074c18b8;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar9 + iVar6) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (9 < uVar1 - 0x30) {
            uVar10 = uVar9 + iVar6;
            uVar7 = (ulong)(uint)uVar1;
            goto LAB_074c17a8;
          }
          iVar6 = iVar6 + 1;
          uVar4 = ((ulong)uVar1 + uVar4 * 10) - 0x30;
        } while (iVar6 != 0x13);
        if (uVar10 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          uVar7 = (ulong)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (9 < uVar1 - 0x30) goto LAB_074c17a8;
          uVar10 = uVar9 + 0x14;
          if ((0x1999999999999999 < uVar4) ||
             ((bVar2 = false, uVar4 == 0x1999999999999999 && (0x35 < uVar1)))) {
            bVar2 = true;
          }
          uVar4 = (uVar7 + uVar4 * 10) - 0x30;
          if (unaff_w23 <= uVar10) goto LAB_074c187c;
          lVar5 = *(long *)puVar3;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar9 = (uint)uVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar5 = *(long *)puVar3;
            }
            if (9 < uVar1 - 0x30) goto LAB_074c17ac;
            uVar10 = uVar10 + 1;
            bVar2 = true;
          } while (unaff_w23 != uVar10);
        }
        else {
LAB_074c18b8:
          if (uVar4 == 0) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            iVar11 = 1;
            goto LAB_074c188c;
          }
        }
      }
LAB_074c18d0:
      uVar4 = 0;
      iVar11 = 0;
      *in_stack_00000018 = 1;
      goto LAB_074c188c;
    }
  }
  else {
    if (unaff_x27 == 0) {
LAB_074c18f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar9 = *(uint *)(unaff_x27 + 0x10);
    if (uVar9 < unaff_w23) {
      iVar11 = 1;
LAB_074c1614:
      unaff_w29 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      goto LAB_074c1618;
    }
  }
LAB_074c1888:
  uVar4 = 0;
  iVar11 = 0;
LAB_074c188c:
  *unaff_x22 = uVar4;
  return iVar11;
}


