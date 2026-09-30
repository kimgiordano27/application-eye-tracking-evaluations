/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatFormatHandling
ENTRY_POINT: 08e0a68c
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_FloatFormatHandling(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uVar7;
  
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x500)) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto LAB_08e0a6f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_08e0a6f4:
  uVar5 = (*(code *)*puVar2)();
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x40), plVar3 != (long *)0x0)) {
    uVar7 = 0;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0x3f800000;
    }
    uVar1 = uVar7;
    if ((unaff_x19 & 1) != 0) {
      uVar7 = 0x3f800000;
      uVar1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x08e0a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2a8))
              (uVar1,0x3f800000,uVar7,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


