/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatHandling
ENTRY_POINT: 061df348
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__get_DateFormatHandling(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint unaff_w19;
  uint uVar8;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x5eb) = 1;
  puVar2 = PTR_DAT_07d98ab0;
  if ((int)unaff_w19 < 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar5 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07dace68);
    FUN_061a843c(uVar5,uVar6,0);
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07dace70);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar6);
  }
  uVar8 = 0;
  lVar3 = *(long *)PTR_DAT_07d98ab0;
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) break;
    if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (int)uVar8) {
      uVar8 = unaff_w19 | 1;
      if (uVar8 == 0x7fffffff) {
        return unaff_w19;
      }
      while( true ) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = FUN_061df264(uVar8);
        if (((uVar4 & 1) != 0) && (0x288df0c < uVar8 * 0x7c32b16d + 0x8511be19)) break;
        if (uVar8 == 0x7ffffffd) {
          return unaff_w19;
        }
        lVar3 = *(long *)puVar2;
        uVar8 = uVar8 + 2;
      }
      return uVar8;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *(long *)puVar2;
    }
    lVar7 = **(long **)(lVar3 + 0xb8);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar1 = *(uint *)(lVar7 + (long)(int)uVar8 * 4 + 0x20);
    uVar8 = uVar8 + 1;
    if ((int)unaff_w19 <= (int)uVar1) {
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


