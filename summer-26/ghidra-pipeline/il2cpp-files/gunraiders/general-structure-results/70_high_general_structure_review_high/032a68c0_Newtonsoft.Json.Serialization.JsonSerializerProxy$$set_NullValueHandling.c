/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_NullValueHandling
ENTRY_POINT: 032a68c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_NullValueHandling(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int in_w9;
  uint uVar7;
  int in_w10;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  
  iVar3 = in_w9 + 2;
  if (-1 < in_w10) {
    iVar3 = in_w10;
  }
  lVar4 = FUN_01c5d2fc(*param_1,(iVar3 >> 2) + 1);
  *(long *)(unaff_x19 + 0x10) = lVar4;
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  uVar5 = (uint)uVar6;
  *(uint *)(unaff_x19 + 0x18) = uVar5 << 3;
  if ((int)uVar5 < 4) {
    uVar12 = 0;
    uVar7 = 0;
    uVar9 = uVar5;
  }
  else {
    uVar7 = (uVar5 - 4 >> 2) + 1;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = uVar6 & 0xffffffff;
    lVar1 = unaff_x20 + 0x23;
    do {
      if ((((uVar6 <= uVar10) || (uVar6 <= uVar10 + 1)) || (uVar6 <= uVar10 + 2)) ||
         (uVar6 <= uVar10 + 3)) goto LAB_032a6a80;
      if (lVar4 == 0) goto LAB_032a6a84;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_032a6a80;
      lVar2 = uVar10 + 4;
      uVar8 = uVar8 + 1;
      *(uint *)(lVar4 + 0x20 + uVar10) =
           CONCAT13(*(undefined1 *)(lVar1 + uVar10),
                    CONCAT12(*(undefined1 *)(lVar1 + uVar10 + -1),
                             *(undefined2 *)(lVar1 + uVar10 + -3)));
      uVar10 = uVar10 + 4;
    } while ((ulong)uVar7 * 4 - lVar2 != 0);
    uVar12 = (uint)lVar2;
    uVar9 = uVar5 - uVar12;
  }
  if (uVar9 == 1) {
    if (lVar4 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (uVar9 == 2) {
      if (lVar4 == 0) goto LAB_032a6a84;
    }
    else {
      if (uVar9 != 3) goto LAB_032a6a6c;
      if (uVar5 <= (uint)((long)(int)uVar12 | 2U)) goto LAB_032a6a80;
      if (lVar4 == 0) goto LAB_032a6a84;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_032a6a80;
      *(uint *)(lVar4 + (ulong)uVar7 * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + ((long)(int)uVar12 | 2U) + 0x20) << 0x10;
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar7) || (uVar5 <= (uint)((long)(int)uVar12 | 1U)))
    goto LAB_032a6a80;
    puVar11 = (uint *)(lVar4 + (ulong)uVar7 * 4 + 0x20);
    *puVar11 = *puVar11 | (uint)*(byte *)(unaff_x20 + ((long)(int)uVar12 | 1U) + 0x20) << 8;
  }
  if ((uVar7 < *(uint *)(lVar4 + 0x18)) && (uVar12 < uVar5)) {
    puVar11 = (uint *)(lVar4 + (ulong)uVar7 * 4 + 0x20);
    *puVar11 = *puVar11 | (uint)*(byte *)(unaff_x20 + (int)uVar12 + 0x20);
LAB_032a6a6c:
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


