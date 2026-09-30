/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Converters
ENTRY_POINT: 04f3bc2c
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


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Converters(void)

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
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar10;
  long *unaff_x25;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  if (1 < unaff_w21) {
    uVar6 = 1;
    do {
      uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
      uVar14 = (ulong)uVar2;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      puVar4 = PTR_DAT_065f73a8;
      uVar13 = (uint)uVar2;
      if ((4 < uVar13 - 9) && (uVar13 != 0x20)) {
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
        uVar12 = *(uint *)(lVar8 + 0x18);
        if ((uVar2 < uVar12) && (*(int *)(lVar8 + (ulong)(uint)uVar2 * 4 + 0x20) != 0xff)) {
          if (uVar13 != 0x30) goto LAB_04f3bc30;
          goto LAB_04f3bb7c;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (unaff_w21 != uVar6);
  }
LAB_04f3bd20:
  lVar11 = 0;
  uVar6 = 0;
  goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
  while( true ) {
    uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
    uVar14 = (ulong)uVar2;
    if (uVar14 != 0x30) break;
LAB_04f3bb7c:
    uVar6 = uVar6 + 1;
    if (unaff_w21 <= uVar6) {
      lVar11 = 0;
      goto LAB_04f3bdb4;
    }
  }
  if ((uVar2 < uVar12) && (*(int *)(lVar8 + uVar14 * 4 + 0x20) != 0xff)) {
LAB_04f3bc30:
    if (uVar12 <= (uint)uVar14) {
LAB_04f3be14:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar11 = (long)*(int *)(lVar8 + uVar14 * 4 + 0x20);
    uVar1 = uVar6 + 1;
    uVar13 = uVar6 + 0x10;
    iVar9 = -0xf;
    do {
      if (unaff_w21 <= uVar1) goto LAB_04f3bdb4;
      uVar2 = *(ushort *)(unaff_x22 + (long)(int)(uVar6 + iVar9 + 0x10) * 2);
      uVar14 = (ulong)uVar2;
      if ((uVar12 <= uVar2) || (iVar3 = *(int *)(lVar8 + uVar14 * 4 + 0x20), iVar3 == 0xff)) {
        uVar12 = 0;
        uVar13 = uVar6 + iVar9 + 0x10;
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
      }
      uVar1 = uVar6 + iVar9 + 0x11;
      bVar5 = iVar9 != -1;
      iVar9 = iVar9 + 1;
      lVar11 = (long)iVar3 + lVar11 * 0x10;
    } while (bVar5);
    if (unaff_w21 <= uVar1) {
LAB_04f3bdb4:
      uVar6 = 1;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
    uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar13 * 2);
    uVar14 = (ulong)uVar2;
    if ((uVar12 <= uVar2) || (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 0xff)) goto LAB_04f3bbb0;
    uVar13 = uVar6 + 0x11;
    if (uVar13 < unaff_w21) {
      do {
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar13 * 2);
        uVar14 = (ulong)uVar2;
        if ((uVar12 <= uVar2) || (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 0xff)) {
          uVar12 = 1;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
        }
        uVar13 = uVar13 + 1;
      } while (unaff_w21 != uVar13);
    }
  }
  else {
    lVar11 = 0;
    uVar13 = uVar6;
LAB_04f3bbb0:
    uVar12 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (((int)uVar14 - 9U < 5) || ((int)uVar14 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) goto LAB_04f3bd20;
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)unaff_w21) {
        puVar10 = (ushort *)(unaff_x22 + (long)(int)uVar13 * 2);
        do {
          if (unaff_w21 <= uVar13) goto LAB_04f3be14;
          uVar2 = *puVar10;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_04f3bda8;
          uVar13 = uVar13 + 1;
          puVar10 = puVar10 + 1;
        } while (unaff_w21 != uVar13);
      }
      else {
LAB_04f3bda8:
        if (uVar13 < unaff_w21) goto LAB_04f3bdc4;
      }
      if (uVar12 == 0) goto LAB_04f3bdb4;
    }
    else {
LAB_04f3bdc4:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04f3d628();
      if ((uVar6 & 1) == 0) {
        lVar11 = 0;
      }
      if ((uVar12 & uVar6) == 0)
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
  }
  lVar11 = 0;
  uVar6 = 0;
  *unaff_x20 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = lVar11;
  return uVar6 & 1;
}


