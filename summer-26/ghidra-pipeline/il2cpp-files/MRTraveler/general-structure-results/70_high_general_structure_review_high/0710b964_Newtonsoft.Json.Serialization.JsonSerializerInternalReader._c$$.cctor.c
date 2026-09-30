/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 0710b964
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor
               (ushort *param_1,undefined8 param_2,uint param_3,undefined8 param_4,long *param_5,
               undefined1 *param_6)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  if ((DAT_0941c20f & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    FUN_03c8f898(PTR_DAT_08e9bbb8);
    DAT_0941c20f = 1;
  }
  puVar4 = PTR_DAT_08ea1b30;
  uVar6 = (uint)param_2;
  if (uVar6 != 0) {
    uVar2 = *param_1;
    if ((param_3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
        if (1 < uVar6) {
          uVar11 = 1;
          do {
            uVar2 = param_1[(int)uVar11];
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0710b9c0;
            uVar11 = uVar11 + 1;
          } while (uVar6 != uVar11);
        }
        goto LAB_0710bbb0;
      }
    }
    uVar11 = 0;
LAB_0710b9c0:
    puVar4 = PTR_DAT_08ea1b30;
    uVar15 = (ulong)uVar2;
    lVar7 = *(long *)PTR_DAT_08ea1b30;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar7 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar14 = *(uint *)(lVar8 + 0x18);
    if ((uVar2 < uVar14) && (*(int *)(lVar8 + uVar15 * 4 + 0x20) != 0xff)) {
      if (uVar2 == 0x30) {
        do {
          uVar11 = uVar11 + 1;
          if (uVar6 <= uVar11) {
            lVar13 = 0;
            goto LAB_0710bc44;
          }
          uVar15 = (ulong)param_1[(int)uVar11];
        } while (uVar15 == 0x30);
        if ((param_1[(int)uVar11] < uVar14) && (*(int *)(lVar8 + uVar15 * 4 + 0x20) != 0xff))
        goto LAB_0710bac0;
        lVar13 = 0;
        uVar12 = uVar11;
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor:
        uVar14 = 0;
LAB_0710bb94:
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (((int)uVar15 - 9U < 5) || ((int)uVar15 == 0x20)) {
          if ((param_3 >> 1 & 1) == 0) goto LAB_0710bbb0;
          uVar12 = uVar12 + 1;
          if ((int)uVar12 < (int)uVar6) {
            puVar10 = param_1 + (int)uVar12;
            do {
              if (uVar6 <= uVar12) goto LAB_0710bca4;
              uVar2 = *puVar10;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0710bc38;
              uVar12 = uVar12 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar6 != uVar12);
          }
          else {
LAB_0710bc38:
            if (uVar12 < uVar6) goto LAB_0710bc54;
          }
          if (uVar14 == 0) goto LAB_0710bc44;
        }
        else {
LAB_0710bc54:
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar6 = FUN_0710d4b8(param_1,param_2,uVar12);
          if ((uVar6 & 1) == 0) {
            lVar13 = 0;
          }
          if ((uVar14 & uVar6) == 0) goto LAB_0710bbb8;
        }
      }
      else {
LAB_0710bac0:
        if (uVar14 <= (uint)uVar15) {
LAB_0710bca4:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar13 = (long)*(int *)(lVar8 + uVar15 * 4 + 0x20);
        uVar1 = uVar11 + 1;
        uVar12 = uVar11 + 0x10;
        iVar9 = -0xf;
        do {
          if (uVar6 <= uVar1) goto LAB_0710bc44;
          uVar15 = (ulong)param_1[(int)(uVar11 + iVar9 + 0x10)];
          if ((uVar14 <= param_1[(int)(uVar11 + iVar9 + 0x10)]) ||
             (iVar3 = *(int *)(lVar8 + uVar15 * 4 + 0x20), iVar3 == 0xff)) {
            uVar14 = 0;
            uVar12 = uVar11 + iVar9 + 0x10;
            goto LAB_0710bb94;
          }
          uVar1 = uVar11 + iVar9 + 0x11;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          lVar13 = (long)iVar3 + lVar13 * 0x10;
        } while (bVar5);
        if (uVar6 <= uVar1) {
LAB_0710bc44:
          uVar6 = 1;
          goto LAB_0710bbb8;
        }
        uVar15 = (ulong)param_1[(int)uVar12];
        if ((uVar14 <= param_1[(int)uVar12]) || (*(int *)(lVar8 + uVar15 * 4 + 0x20) == 0xff))
        goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor;
        uVar12 = uVar11 + 0x11;
        if (uVar12 < uVar6) {
          do {
            uVar15 = (ulong)param_1[(int)uVar12];
            if ((uVar14 <= param_1[(int)uVar12]) || (*(int *)(lVar8 + uVar15 * 4 + 0x20) == 0xff)) {
              uVar14 = 1;
              goto LAB_0710bb94;
            }
            uVar12 = uVar12 + 1;
          } while (uVar6 != uVar12);
        }
      }
      lVar13 = 0;
      uVar6 = 0;
      *param_6 = 1;
      goto LAB_0710bbb8;
    }
  }
LAB_0710bbb0:
  lVar13 = 0;
  uVar6 = 0;
LAB_0710bbb8:
  *param_5 = lVar13;
  return uVar6 & 1;
}


