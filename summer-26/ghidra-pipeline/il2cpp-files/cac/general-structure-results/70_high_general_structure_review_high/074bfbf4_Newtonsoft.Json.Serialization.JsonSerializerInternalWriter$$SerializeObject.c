/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 074bfbf4
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x22;
  uint unaff_w23;
  ushort *puVar8;
  uint uVar9;
  long unaff_x24;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0xb00));
  *(undefined1 *)(unaff_x24 + 0x4aa) = 1;
  puVar3 = PTR_DAT_0912f2c0;
  if (unaff_w21 != 0) {
    uVar2 = *unaff_x22;
    lVar5 = *(long *)PTR_DAT_0912f2c0;
    if ((unaff_w23 & 1) != 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
        if (unaff_w21 != 1) {
          lVar5 = *(long *)puVar3;
          uVar4 = 1;
          do {
            uVar2 = unaff_x22[(int)uVar4];
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar5 = *(long *)puVar3;
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074bfc20;
            uVar4 = uVar4 + 1;
          } while (unaff_w21 != uVar4);
        }
        goto LAB_074bfcbc;
      }
      lVar5 = *(long *)puVar3;
    }
    uVar4 = 0;
LAB_074bfc20:
    uVar11 = (ulong)uVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar5 = *(long *)puVar3;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar12 = *(uint *)(lVar6 + 0x18);
    if ((uVar2 < uVar12) && (*(int *)(lVar6 + uVar11 * 4 + 0x20) != 0xff)) {
      if (uVar2 == 0x30) {
        do {
          uVar4 = uVar4 + 1;
          if (unaff_w21 <= uVar4) {
            iVar10 = 0;
            goto LAB_074bfe48;
          }
          uVar2 = unaff_x22[(int)uVar4];
          uVar11 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if ((uVar2 < uVar12) && (*(int *)(lVar6 + uVar11 * 4 + 0x20) != 0xff)) goto LAB_074bfd3c;
        iVar10 = 0;
        uVar12 = 0;
        uVar9 = uVar4;
LAB_074bfdc4:
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        if (((int)uVar11 - 9U < 5) || ((int)uVar11 == 0x20)) {
          if ((unaff_w23 >> 1 & 1) == 0) goto LAB_074bfcbc;
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < (int)unaff_w21) {
            puVar8 = unaff_x22 + (int)uVar9;
            do {
              if (unaff_w21 <= uVar9) goto LAB_074bfee0;
              uVar2 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074bfe34;
              uVar9 = uVar9 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w21 != uVar9);
          }
          else {
LAB_074bfe34:
            if (uVar9 < unaff_w21) goto LAB_074bfe58;
          }
          if (uVar12 == 0) goto LAB_074bfe48;
        }
        else {
LAB_074bfe58:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar4 = FUN_074c21c4();
          if ((uVar4 & 1) == 0) {
            iVar10 = 0;
          }
          if ((uVar4 & 1 & uVar12) == 0) goto LAB_074bfcc4;
        }
      }
      else {
LAB_074bfd3c:
        if (uVar12 <= (uint)uVar11) {
LAB_074bfee0:
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        uVar9 = uVar4 + 8;
        iVar10 = *(int *)(lVar6 + uVar11 * 4 + 0x20);
        iVar7 = 1;
        do {
          if (unaff_w21 <= uVar4 + iVar7) goto LAB_074bfe48;
          uVar11 = (ulong)unaff_x22[(int)(uVar4 + iVar7)];
          if ((uVar12 <= unaff_x22[(int)(uVar4 + iVar7)]) ||
             (iVar1 = *(int *)(lVar6 + uVar11 * 4 + 0x20), iVar1 == 0xff)) {
            uVar12 = 0;
            uVar9 = uVar4 + iVar7;
            goto LAB_074bfdc4;
          }
          iVar7 = iVar7 + 1;
          iVar10 = iVar1 + iVar10 * 0x10;
        } while (iVar7 != 8);
        if (unaff_w21 <= uVar9) {
LAB_074bfe48:
          uVar4 = 1;
          goto LAB_074bfcc4;
        }
        uVar11 = (ulong)unaff_x22[(int)uVar9];
        if ((uVar12 <= unaff_x22[(int)uVar9]) || (*(int *)(lVar6 + uVar11 * 4 + 0x20) == 0xff)) {
          uVar12 = 0;
          goto LAB_074bfdc4;
        }
        uVar9 = uVar4 + 9;
        if (uVar9 < unaff_w21) {
          do {
            uVar11 = (ulong)unaff_x22[(int)uVar9];
            if ((uVar12 <= unaff_x22[(int)uVar9]) || (*(int *)(lVar6 + uVar11 * 4 + 0x20) == 0xff))
            {
              uVar12 = 1;
              goto LAB_074bfdc4;
            }
            uVar9 = uVar9 + 1;
          } while (unaff_w21 != uVar9);
        }
      }
      iVar10 = 0;
      uVar4 = 0;
      *unaff_x20 = 1;
      goto LAB_074bfcc4;
    }
  }
LAB_074bfcbc:
  iVar10 = 0;
  uVar4 = 0;
LAB_074bfcc4:
  *unaff_x19 = iVar10;
  return uVar4 & 1;
}


