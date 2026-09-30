/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceLoopHandling
ENTRY_POINT: 032a6908
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceLoopHandling(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint in_w8;
  uint uVar4;
  ulong in_x9;
  ulong uVar5;
  ulong in_x11;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  
  uVar5 = 0;
  uVar6 = (ulong)in_w8;
  lVar1 = unaff_x20 + 0x23;
  do {
    if ((((uVar6 <= in_x11) || (uVar6 <= in_x11 + 1)) || (uVar6 <= in_x11 + 2)) ||
       (uVar6 <= in_x11 + 3)) goto LAB_032a6a80;
    if (param_1 == 0) goto LAB_032a6a84;
    if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_032a6a80;
    lVar2 = in_x11 + 4;
    uVar5 = uVar5 + 1;
    *(uint *)(param_1 + 0x20 + in_x11) =
         CONCAT13(*(undefined1 *)(lVar1 + in_x11),
                  CONCAT12(*(undefined1 *)(lVar1 + in_x11 + -1),*(undefined2 *)(lVar1 + in_x11 + -3)
                          ));
    in_x11 = in_x11 + 4;
  } while (in_x9 * 4 - lVar2 != 0);
  uVar8 = (uint)lVar2;
  iVar3 = in_w8 - uVar8;
  uVar4 = (uint)in_x9;
  if (iVar3 == 1) {
    if (param_1 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (iVar3 == 2) {
      if (param_1 == 0) goto LAB_032a6a84;
    }
    else {
      if (iVar3 != 3) goto LAB_032a6a6c;
      if (in_w8 <= (uint)((long)(int)uVar8 | 2U)) goto LAB_032a6a80;
      if (param_1 == 0) goto LAB_032a6a84;
      if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_032a6a80;
      *(uint *)(param_1 + (in_x9 & 0xffffffff) * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + ((long)(int)uVar8 | 2U) + 0x20) << 0x10;
    }
    if ((*(uint *)(param_1 + 0x18) <= uVar4) || (in_w8 <= (uint)((long)(int)uVar8 | 1U)))
    goto LAB_032a6a80;
    puVar7 = (uint *)(param_1 + (in_x9 & 0xffffffff) * 4 + 0x20);
    *puVar7 = *puVar7 | (uint)*(byte *)(unaff_x20 + ((long)(int)uVar8 | 1U) + 0x20) << 8;
  }
  if ((uVar4 < *(uint *)(param_1 + 0x18)) && (uVar8 < in_w8)) {
    puVar7 = (uint *)(param_1 + (in_x9 & 0xffffffff) * 4 + 0x20);
    *puVar7 = *puVar7 | (uint)*(byte *)(unaff_x20 + (int)uVar8 + 0x20);
LAB_032a6a6c:
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


