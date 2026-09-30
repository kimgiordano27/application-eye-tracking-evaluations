/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 04f3bc08
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(void)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar9;
  uint uVar10;
  uint unaff_w24;
  long *unaff_x25;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  do {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w21 == unaff_w24) goto LAB_04f3bd20;
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    uVar13 = (ulong)uVar1;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar3 = PTR_DAT_065f73a8;
    uVar12 = (uint)uVar1;
  } while ((uVar12 - 9 < 5) || (uVar12 == 0x20));
  lVar6 = *(long *)PTR_DAT_065f73a8;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar6 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar5 = *(uint *)(lVar7 + 0x18);
  if ((uVar1 < uVar5) && (*(int *)(lVar7 + (ulong)(uint)uVar1 * 4 + 0x20) != 0xff)) {
    if (uVar12 == 0x30) {
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w21 <= unaff_w24) {
          lVar11 = 0;
          goto LAB_04f3bdb4;
        }
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
        uVar13 = (ulong)uVar1;
      } while (uVar13 == 0x30);
      if ((uVar1 < uVar5) && (*(int *)(lVar7 + uVar13 * 4 + 0x20) != 0xff)) goto LAB_04f3bc30;
      lVar11 = 0;
      uVar10 = unaff_w24;
LAB_04f3bbb0:
      uVar12 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (((int)uVar13 - 9U < 5) || ((int)uVar13 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) goto LAB_04f3bd20;
        uVar10 = uVar10 + 1;
        if ((int)uVar10 < (int)unaff_w21) {
          puVar9 = (ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
          do {
            if (unaff_w21 <= uVar10) goto LAB_04f3be14;
            uVar1 = *puVar9;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3bda8;
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 1;
          } while (unaff_w21 != uVar10);
        }
        else {
LAB_04f3bda8:
          if (uVar10 < unaff_w21) goto LAB_04f3bdc4;
        }
        if (uVar12 == 0) goto LAB_04f3bdb4;
      }
      else {
LAB_04f3bdc4:
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar5 = FUN_04f3d628();
        if ((uVar5 & 1) == 0) {
          lVar11 = 0;
        }
        if ((uVar12 & uVar5) == 0)
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
      }
    }
    else {
LAB_04f3bc30:
      if (uVar5 <= (uint)uVar13) {
LAB_04f3be14:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar11 = (long)*(int *)(lVar7 + uVar13 * 4 + 0x20);
      uVar12 = unaff_w24 + 1;
      uVar10 = unaff_w24 + 0x10;
      iVar8 = -0xf;
      do {
        if (unaff_w21 <= uVar12) goto LAB_04f3bdb4;
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar8 + 0x10) * 2);
        uVar13 = (ulong)uVar1;
        if ((uVar5 <= uVar1) || (iVar2 = *(int *)(lVar7 + uVar13 * 4 + 0x20), iVar2 == 0xff)) {
          uVar12 = 0;
          uVar10 = unaff_w24 + iVar8 + 0x10;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
        }
        uVar12 = unaff_w24 + iVar8 + 0x11;
        bVar4 = iVar8 != -1;
        iVar8 = iVar8 + 1;
        lVar11 = (long)iVar2 + lVar11 * 0x10;
      } while (bVar4);
      if (unaff_w21 <= uVar12) {
LAB_04f3bdb4:
        uVar5 = 1;
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
      }
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
      uVar13 = (ulong)uVar1;
      if ((uVar5 <= uVar1) || (*(int *)(lVar7 + uVar13 * 4 + 0x20) == 0xff)) goto LAB_04f3bbb0;
      uVar10 = unaff_w24 + 0x11;
      if (uVar10 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
          uVar13 = (ulong)uVar1;
          if ((uVar5 <= uVar1) || (*(int *)(lVar7 + uVar13 * 4 + 0x20) == 0xff)) {
            uVar12 = 1;
            goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
          }
          uVar10 = uVar10 + 1;
        } while (unaff_w21 != uVar10);
      }
    }
    lVar11 = 0;
    uVar5 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_04f3bd20:
    lVar11 = 0;
    uVar5 = 0;
  }
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = lVar11;
  return uVar5 & 1;
}


