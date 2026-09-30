/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatString
ENTRY_POINT: 061df79c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_DateFormatString(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      lVar4 = lVar3;
      if (*(long **)(lVar4 + 0x10) == (long *)0x0) goto LAB_061df87c;
      uVar2 = (**(code **)(**(long **)(lVar4 + 0x10) + 0x138))();
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(lVar4 + 0x18) = unaff_x20;
        thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x18));
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
  }
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dacea0);
  FUN_062855bc(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = unaff_x21;
    thunk_FUN_037aeb94();
    *(undefined8 *)(lVar3 + 0x18) = unaff_x20;
    thunk_FUN_037aeb94();
    plVar1 = (long *)(unaff_x19 + 0x10);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x20);
    }
    *plVar1 = lVar3;
    thunk_FUN_037aeb94(plVar1,lVar3);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
LAB_061df87c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


