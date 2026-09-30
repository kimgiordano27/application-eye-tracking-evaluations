/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 0710ba0c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1
               (long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint in_w9;
  int iVar6;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar7;
  uint unaff_w24;
  long *unaff_x25;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  do {
    uVar9 = unaff_w24;
    unaff_w24 = uVar9 + 1;
    if (unaff_w21 <= unaff_w24) {
      lVar8 = 0;
      goto LAB_0710bc44;
    }
    uVar2 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    uVar10 = (ulong)uVar2;
  } while (uVar10 == 0x30);
  if ((uVar2 < in_w9) && (*(int *)(param_1 + uVar10 * 4 + 0x20) != 0xff)) {
    if (in_w9 <= uVar2) {
LAB_0710bca4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar8 = (long)*(int *)(param_1 + uVar10 * 4 + 0x20);
    uVar1 = uVar9 + 2;
    uVar5 = uVar9 + 0x11;
    iVar6 = -0xf;
    do {
      if (unaff_w21 <= uVar1) goto LAB_0710bc44;
      uVar2 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar6 + 0x10) * 2);
      uVar10 = (ulong)uVar2;
      if ((in_w9 <= uVar2) || (iVar3 = *(int *)(param_1 + uVar10 * 4 + 0x20), iVar3 == 0xff)) {
        uVar9 = 0;
        uVar5 = unaff_w24 + iVar6 + 0x10;
        goto LAB_0710bb94;
      }
      uVar1 = unaff_w24 + iVar6 + 0x11;
      bVar4 = iVar6 != -1;
      iVar6 = iVar6 + 1;
      lVar8 = (long)iVar3 + lVar8 * 0x10;
    } while (bVar4);
    if (unaff_w21 <= uVar1) {
LAB_0710bc44:
      uVar5 = 1;
      goto LAB_0710bbb8;
    }
    uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar5 * 2);
    uVar10 = (ulong)uVar2;
    if ((in_w9 <= uVar2) || (*(int *)(param_1 + uVar10 * 4 + 0x20) == 0xff))
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor;
    uVar5 = uVar9 + 0x12;
    if (uVar5 < unaff_w21) {
      do {
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar5 * 2);
        uVar10 = (ulong)uVar2;
        if ((in_w9 <= uVar2) || (*(int *)(param_1 + uVar10 * 4 + 0x20) == 0xff)) {
          uVar9 = 1;
          goto LAB_0710bb94;
        }
        uVar5 = uVar5 + 1;
      } while (unaff_w21 != uVar5);
    }
  }
  else {
    lVar8 = 0;
    uVar5 = unaff_w24;
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor:
    uVar9 = 0;
LAB_0710bb94:
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (((int)uVar10 - 9U < 5) || ((int)uVar10 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) {
        lVar8 = 0;
        uVar5 = 0;
        goto LAB_0710bbb8;
      }
      uVar5 = uVar5 + 1;
      if ((int)uVar5 < (int)unaff_w21) {
        puVar7 = (ushort *)(unaff_x22 + (long)(int)uVar5 * 2);
        do {
          if (unaff_w21 <= uVar5) goto LAB_0710bca4;
          uVar2 = *puVar7;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0710bc38;
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w21 != uVar5);
      }
      else {
LAB_0710bc38:
        if (uVar5 < unaff_w21) goto LAB_0710bc54;
      }
      if (uVar9 == 0) goto LAB_0710bc44;
    }
    else {
LAB_0710bc54:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0710d4b8();
      if ((uVar5 & 1) == 0) {
        lVar8 = 0;
      }
      if ((uVar9 & uVar5) == 0) goto LAB_0710bbb8;
    }
  }
  lVar8 = 0;
  uVar5 = 0;
  *unaff_x20 = 1;
LAB_0710bbb8:
  *unaff_x19 = lVar8;
  return uVar5 & 1;
}


