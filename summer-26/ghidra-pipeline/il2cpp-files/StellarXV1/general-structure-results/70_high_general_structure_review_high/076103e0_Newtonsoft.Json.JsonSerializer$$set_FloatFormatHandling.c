/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatFormatHandling
ENTRY_POINT: 076103e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__set_FloatFormatHandling(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  uint uVar9;
  long unaff_x20;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xef8));
  *(undefined1 *)(unaff_x20 + 0xdcd) = 1;
  puVar3 = PTR_DAT_092b9ef8;
  if ((int)unaff_w19 < 0) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar6 = thunk_FUN_040b4efc();
    uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d84e8);
    FUN_075d4b88(uVar6,uVar7,0);
    uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d84f0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar6,uVar7);
  }
  uVar9 = 0;
  lVar4 = *(long *)PTR_DAT_092b9ef8;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *(long *)puVar3;
    }
    lVar8 = **(long **)(lVar4 + 0xb8);
    if (lVar8 == 0) break;
    if (*(int *)(lVar8 + 0x18) <= (int)uVar9) {
      uVar9 = unaff_w19 | 1;
      while( true ) {
        if (uVar9 == 0x7fffffff) {
          return unaff_w19;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar5 = FUN_07610318(uVar9);
        if (((uVar5 & 1) != 0) && (0x288df0c < (uVar9 - 1) * 0x7c32b16d + 0x1446f86)) break;
        uVar9 = uVar9 + 2;
      }
      return uVar9;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *(long *)puVar3;
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) break;
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar1 = (long)(int)uVar9;
    uVar9 = uVar9 + 1;
    uVar2 = *(uint *)(lVar8 + lVar1 * 4 + 0x20);
    if ((int)unaff_w19 <= (int)uVar2) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


