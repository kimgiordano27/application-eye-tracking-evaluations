/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Culture
ENTRY_POINT: 061df7c0
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


void Newtonsoft_Json_JsonSerializer__get_Culture(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  
  while( true ) {
    uVar1 = (**(code **)(*param_1 + 0x138))();
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
      thunk_FUN_037aeb94((undefined8 *)(unaff_x22 + 0x18));
      return;
    }
    lVar2 = *(long *)(unaff_x22 + 0x20);
    if (lVar2 == 0) break;
    param_1 = *(long **)(lVar2 + 0x10);
    unaff_x22 = lVar2;
    if (param_1 == (long *)0x0) {
LAB_061df87c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  lVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dacea0);
  FUN_062855bc(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = unaff_x21;
    thunk_FUN_037aeb94();
    *(undefined8 *)(lVar2 + 0x18) = unaff_x20;
    thunk_FUN_037aeb94();
    if (unaff_x22 != 0) {
      unaff_x24 = (long *)(unaff_x22 + 0x20);
    }
    *unaff_x24 = lVar2;
    thunk_FUN_037aeb94(unaff_x24,lVar2);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
  goto LAB_061df87c;
}


