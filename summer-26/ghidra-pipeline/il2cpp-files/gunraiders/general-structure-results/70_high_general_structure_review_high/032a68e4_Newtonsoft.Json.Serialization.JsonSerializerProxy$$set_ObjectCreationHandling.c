/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ObjectCreationHandling
ENTRY_POINT: 032a68e4
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ObjectCreationHandling(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  
  *(long *)(unaff_x19 + 0x10) = param_1;
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = (uint)uVar4;
  *(uint *)(unaff_x19 + 0x18) = uVar3 << 3;
  if ((int)uVar3 < 4) {
    uVar10 = 0;
    uVar5 = 0;
    uVar7 = uVar3;
  }
  else {
    uVar5 = (uVar3 - 4 >> 2) + 1;
    uVar8 = 0;
    uVar6 = 0;
    uVar4 = uVar4 & 0xffffffff;
    lVar1 = unaff_x20 + 0x23;
    do {
      if ((((uVar4 <= uVar8) || (uVar4 <= uVar8 + 1)) || (uVar4 <= uVar8 + 2)) ||
         (uVar4 <= uVar8 + 3)) goto LAB_032a6a80;
      if (param_1 == 0) goto LAB_032a6a84;
      if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_032a6a80;
      lVar2 = uVar8 + 4;
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0x20 + uVar8) =
           CONCAT13(*(undefined1 *)(lVar1 + uVar8),
                    CONCAT12(*(undefined1 *)(lVar1 + uVar8 + -1),*(undefined2 *)(lVar1 + uVar8 + -3)
                            ));
      uVar8 = uVar8 + 4;
    } while ((ulong)uVar5 * 4 - lVar2 != 0);
    uVar10 = (uint)lVar2;
    uVar7 = uVar3 - uVar10;
  }
  if (uVar7 == 1) {
    if (param_1 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (uVar7 == 2) {
      if (param_1 == 0) goto LAB_032a6a84;
    }
    else {
      if (uVar7 != 3) goto LAB_032a6a6c;
      if (uVar3 <= (uint)((long)(int)uVar10 | 2U)) goto LAB_032a6a80;
      if (param_1 == 0) goto LAB_032a6a84;
      if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_032a6a80;
      *(uint *)(param_1 + (ulong)uVar5 * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + ((long)(int)uVar10 | 2U) + 0x20) << 0x10;
    }
    if ((*(uint *)(param_1 + 0x18) <= uVar5) || (uVar3 <= (uint)((long)(int)uVar10 | 1U)))
    goto LAB_032a6a80;
    puVar9 = (uint *)(param_1 + (ulong)uVar5 * 4 + 0x20);
    *puVar9 = *puVar9 | (uint)*(byte *)(unaff_x20 + ((long)(int)uVar10 | 1U) + 0x20) << 8;
  }
  if ((uVar5 < *(uint *)(param_1 + 0x18)) && (uVar10 < uVar3)) {
    puVar9 = (uint *)(param_1 + (ulong)uVar5 * 4 + 0x20);
    *puVar9 = *puVar9 | (uint)*(byte *)(unaff_x20 + (int)uVar10 + 0x20);
LAB_032a6a6c:
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


