/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 04f3bb20
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_9
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(void)

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
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x22;
  uint unaff_w23;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  puVar4 = PTR_DAT_065f73a8;
  if (unaff_w21 != 0) {
    uVar2 = *unaff_x22;
    if ((unaff_w23 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
        if (1 < unaff_w21) {
          uVar6 = 1;
          do {
            uVar2 = unaff_x22[(int)uVar6];
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_04f3bb30;
            uVar6 = uVar6 + 1;
          } while (unaff_w21 != uVar6);
        }
        goto LAB_04f3bd20;
      }
    }
    uVar6 = 0;
LAB_04f3bb30:
    puVar4 = PTR_DAT_065f73a8;
    uVar14 = (ulong)uVar2;
    lVar7 = *(long *)PTR_DAT_065f73a8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar13 = *(uint *)(lVar8 + 0x18);
    if ((uVar2 < uVar13) && (*(int *)(lVar8 + uVar14 * 4 + 0x20) != 0xff)) {
      if (uVar2 == 0x30) {
        do {
          uVar6 = uVar6 + 1;
          if (unaff_w21 <= uVar6) {
            lVar12 = 0;
            goto LAB_04f3bdb4;
          }
          uVar14 = (ulong)unaff_x22[(int)uVar6];
        } while (uVar14 == 0x30);
        if ((unaff_x22[(int)uVar6] < uVar13) && (*(int *)(lVar8 + uVar14 * 4 + 0x20) != 0xff))
        goto LAB_04f3bc30;
        lVar12 = 0;
        uVar11 = uVar6;
LAB_04f3bbb0:
        uVar13 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (((int)uVar14 - 9U < 5) || ((int)uVar14 == 0x20)) {
          if ((unaff_w23 >> 1 & 1) == 0) goto LAB_04f3bd20;
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)unaff_w21) {
            puVar10 = unaff_x22 + (int)uVar11;
            do {
              if (unaff_w21 <= uVar11) goto LAB_04f3be14;
              uVar2 = *puVar10;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_04f3bda8;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (unaff_w21 != uVar11);
          }
          else {
LAB_04f3bda8:
            if (uVar11 < unaff_w21) goto LAB_04f3bdc4;
          }
          if (uVar13 == 0) goto LAB_04f3bdb4;
        }
        else {
LAB_04f3bdc4:
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar6 = FUN_04f3d628();
          if ((uVar6 & 1) == 0) {
            lVar12 = 0;
          }
          if ((uVar13 & uVar6) == 0)
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
        }
      }
      else {
LAB_04f3bc30:
        if (uVar13 <= (uint)uVar14) {
LAB_04f3be14:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        lVar12 = (long)*(int *)(lVar8 + uVar14 * 4 + 0x20);
        uVar1 = uVar6 + 1;
        uVar11 = uVar6 + 0x10;
        iVar9 = -0xf;
        do {
          if (unaff_w21 <= uVar1) goto LAB_04f3bdb4;
          uVar14 = (ulong)unaff_x22[(int)(uVar6 + iVar9 + 0x10)];
          if ((uVar13 <= unaff_x22[(int)(uVar6 + iVar9 + 0x10)]) ||
             (iVar3 = *(int *)(lVar8 + uVar14 * 4 + 0x20), iVar3 == 0xff)) {
            uVar13 = 0;
            uVar11 = uVar6 + iVar9 + 0x10;
            goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
          }
          uVar1 = uVar6 + iVar9 + 0x11;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          lVar12 = (long)iVar3 + lVar12 * 0x10;
        } while (bVar5);
        if (unaff_w21 <= uVar1) {
LAB_04f3bdb4:
          uVar6 = 1;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
        }
        uVar14 = (ulong)unaff_x22[(int)uVar11];
        if ((uVar13 <= unaff_x22[(int)uVar11]) || (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 0xff))
        goto LAB_04f3bbb0;
        uVar11 = uVar6 + 0x11;
        if (uVar11 < unaff_w21) {
          do {
            uVar14 = (ulong)unaff_x22[(int)uVar11];
            if ((uVar13 <= unaff_x22[(int)uVar11]) || (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 0xff))
            {
              uVar13 = 1;
              goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
            }
            uVar11 = uVar11 + 1;
          } while (unaff_w21 != uVar11);
        }
      }
      lVar12 = 0;
      uVar6 = 0;
      *unaff_x20 = 1;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
  }
LAB_04f3bd20:
  lVar12 = 0;
  uVar6 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = lVar12;
  return uVar6 & 1;
}


