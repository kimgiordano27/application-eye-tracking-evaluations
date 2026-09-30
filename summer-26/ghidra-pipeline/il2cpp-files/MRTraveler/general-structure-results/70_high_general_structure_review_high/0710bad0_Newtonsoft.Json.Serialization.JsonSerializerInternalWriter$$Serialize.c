/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 0710bad0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize
               (long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint in_w9;
  int in_w10;
  int iVar5;
  long in_x11;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar6;
  long *unaff_x25;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar7 = (long)*(int *)(in_x11 + 0x20);
  uVar8 = in_w10 + 1;
  uVar4 = in_w10 + 0x10;
  iVar5 = -0xf;
  do {
    if (unaff_w21 <= uVar8) goto LAB_0710bc44;
    uVar1 = *(ushort *)(unaff_x22 + (long)(in_w10 + iVar5 + 0x10) * 2);
    uVar9 = (ulong)uVar1;
    if ((in_w9 <= uVar1) || (iVar2 = *(int *)(param_1 + uVar9 * 4 + 0x20), iVar2 == 0xff)) {
      uVar8 = 0;
      uVar4 = in_w10 + iVar5 + 0x10;
      goto LAB_0710bb94;
    }
    uVar8 = in_w10 + iVar5 + 0x11;
    bVar3 = iVar5 != -1;
    iVar5 = iVar5 + 1;
    lVar7 = (long)iVar2 + lVar7 * 0x10;
  } while (bVar3);
  if (uVar8 < unaff_w21) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
    uVar9 = (ulong)uVar1;
    if ((uVar1 < in_w9) && (*(int *)(param_1 + uVar9 * 4 + 0x20) != 0xff)) {
      uVar4 = in_w10 + 0x11;
      if (uVar4 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
          uVar9 = (ulong)uVar1;
          if ((in_w9 <= uVar1) || (*(int *)(param_1 + uVar9 * 4 + 0x20) == 0xff)) {
            uVar8 = 1;
            goto LAB_0710bb94;
          }
          uVar4 = uVar4 + 1;
        } while (unaff_w21 != uVar4);
      }
    }
    else {
      uVar8 = 0;
LAB_0710bb94:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (((int)uVar9 - 9U < 5) || ((int)uVar9 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) {
          lVar7 = 0;
          uVar4 = 0;
          goto LAB_0710bbb8;
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar4 < (int)unaff_w21) {
          puVar6 = (ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
          do {
            if (unaff_w21 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            uVar1 = *puVar6;
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710bc38;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (unaff_w21 != uVar4);
        }
        else {
LAB_0710bc38:
          if (uVar4 < unaff_w21) goto LAB_0710bc54;
        }
        if (uVar8 == 0) goto LAB_0710bc44;
      }
      else {
LAB_0710bc54:
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar4 = FUN_0710d4b8();
        if ((uVar4 & 1) == 0) {
          lVar7 = 0;
        }
        if ((uVar8 & uVar4) == 0) goto LAB_0710bbb8;
      }
    }
    lVar7 = 0;
    uVar4 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_0710bc44:
    uVar4 = 1;
  }
LAB_0710bbb8:
  *unaff_x19 = lVar7;
  return uVar4 & 1;
}


