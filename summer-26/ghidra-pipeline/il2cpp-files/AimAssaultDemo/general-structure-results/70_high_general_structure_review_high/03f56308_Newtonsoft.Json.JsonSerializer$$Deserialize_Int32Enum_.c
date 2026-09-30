/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 03f56308
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03f563a4) */

undefined4 Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  undefined4 unaff_w21;
  
  if (param_2 != 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x03f5638c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c();
code_r0x03f5638c:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f56298;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_03f56298:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar6);
  }
  return unaff_w21;
}


