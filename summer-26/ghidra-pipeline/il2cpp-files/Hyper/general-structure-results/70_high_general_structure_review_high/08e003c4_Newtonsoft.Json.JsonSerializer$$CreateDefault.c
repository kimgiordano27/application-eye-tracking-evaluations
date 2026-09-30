/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 08e003c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e0030c) */

void Newtonsoft_Json_JsonSerializer__CreateDefault(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long lVar9;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_043379c4(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar9 = *plVar5;
  in_stack_00000008 = lVar9;
  __cxa_end_catch();
  plVar5 = (long *)*in_stack_00000010;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08e002c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e002c0:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184(lVar9);
  }
  lVar9 = thunk_FUN_04983e64();
  if (lVar9 != 0) {
    if (unaff_x21 != 0) {
      FUN_06e60d80();
      if (0 < *(int *)(unaff_x21 + 0x18)) {
        FUN_08e00408();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
  uVar2 = thunk_FUN_04983f60();
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac69ff8);
  uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac6a000);
  FUN_08cbd67c(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac6a008);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2,uVar3);
}


