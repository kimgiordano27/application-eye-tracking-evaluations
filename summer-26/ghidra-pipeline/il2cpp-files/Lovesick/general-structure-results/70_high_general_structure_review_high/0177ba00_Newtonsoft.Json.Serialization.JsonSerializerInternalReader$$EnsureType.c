/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 0177ba00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
               (long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint in_w9;
  int in_w10;
  int iVar5;
  int *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar6;
  uint unaff_w24;
  long *unaff_x25;
  int iVar7;
  ulong unaff_x27;
  uint uVar8;
  
  if (in_w10 == 0xff) {
LAB_0177ba08:
    iVar7 = 0;
    uVar4 = 0;
  }
  else {
    if ((int)unaff_x27 == 0x30) {
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w21 <= unaff_w24) {
          iVar7 = 0;
          goto LAB_0177bbe4;
        }
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
        unaff_x27 = (ulong)uVar2;
      } while (unaff_x27 == 0x30);
      if ((uVar2 < in_w9) && (*(int *)(param_1 + unaff_x27 * 4 + 0x20) != 0xff)) goto LAB_0177ba84;
      iVar7 = 0;
      uVar4 = unaff_w24;
LAB_0177ba70:
      uVar8 = 0;
LAB_0177bb60:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) goto LAB_0177ba08;
        uVar4 = uVar4 + 1;
        if ((int)uVar4 < (int)unaff_w21) {
          puVar6 = (ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
          do {
            if (unaff_w21 <= uVar4) goto LAB_0177bc44;
            uVar2 = *puVar6;
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0177bbd0;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (unaff_w21 != uVar4);
        }
        else {
LAB_0177bbd0:
          if (uVar4 < unaff_w21) goto LAB_0177bbf4;
        }
        if (uVar8 == 0) goto LAB_0177bbe4;
      }
      else {
LAB_0177bbf4:
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_0177dfe4();
        if ((uVar4 & 1) == 0) {
          iVar7 = 0;
        }
        if ((uVar8 & uVar4) == 0) goto LAB_0177ba10;
      }
    }
    else {
LAB_0177ba84:
      if (in_w9 <= (uint)unaff_x27) {
LAB_0177bc44:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      iVar7 = *(int *)(param_1 + (unaff_x27 & 0xffffffff) * 4 + 0x20);
      uVar4 = unaff_w24 + 1;
      iVar5 = -7;
      do {
        if (unaff_w21 <= uVar4) goto LAB_0177bbe4;
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar5 + 8) * 2);
        unaff_x27 = (ulong)uVar2;
        if ((in_w9 <= uVar2) || (iVar1 = *(int *)(param_1 + unaff_x27 * 4 + 0x20), iVar1 == 0xff)) {
          uVar8 = 0;
          uVar4 = unaff_w24 + iVar5 + 8;
          goto LAB_0177bb60;
        }
        uVar4 = unaff_w24 + iVar5 + 9;
        bVar3 = iVar5 != -1;
        iVar5 = iVar5 + 1;
        iVar7 = iVar1 + iVar7 * 0x10;
      } while (bVar3);
      if (unaff_w21 <= uVar4) {
LAB_0177bbe4:
        uVar4 = 1;
        goto LAB_0177ba10;
      }
      uVar4 = unaff_w24 + 8;
      uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
      unaff_x27 = (ulong)uVar2;
      if ((in_w9 <= uVar2) || (*(int *)(param_1 + unaff_x27 * 4 + 0x20) == 0xff)) goto LAB_0177ba70;
      uVar4 = unaff_w24 + 9;
      if (uVar4 < unaff_w21) {
        do {
          uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
          unaff_x27 = (ulong)uVar2;
          if ((in_w9 <= uVar2) || (*(int *)(param_1 + unaff_x27 * 4 + 0x20) == 0xff)) {
            uVar8 = 1;
            goto LAB_0177bb60;
          }
          uVar4 = uVar4 + 1;
        } while (unaff_w21 != uVar4);
      }
    }
    iVar7 = 0;
    uVar4 = 0;
    *unaff_x20 = 1;
  }
LAB_0177ba10:
  *unaff_x19 = iVar7;
  return uVar4 & 1;
}


