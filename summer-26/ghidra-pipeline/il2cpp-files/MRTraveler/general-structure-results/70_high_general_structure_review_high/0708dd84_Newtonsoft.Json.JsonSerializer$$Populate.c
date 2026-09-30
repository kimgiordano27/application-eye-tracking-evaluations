/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 0708dd84
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar6;
  long *unaff_x22;
  
  do {
    uVar1 = FUN_06f6fafc();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x22);
    }
    uVar2 = FUN_0708eaa8(uVar1);
    if ((uVar2 & 1) != 0) {
      iVar5 = *(int *)(unaff_x19 + 0x10);
      break;
    }
    iVar5 = *(int *)(unaff_x19 + 0x10);
    unaff_w20 = unaff_w20 + 1;
  } while (unaff_w20 < iVar5);
  if (unaff_w20 < iVar5) {
    while (unaff_w20 = unaff_w20 + 1, unaff_w20 < iVar5) {
      uVar1 = FUN_06f6fafc();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x22);
      }
      uVar2 = FUN_0708eaa8(uVar1);
      if ((uVar2 & 1) != 0) break;
      iVar5 = *(int *)(unaff_x19 + 0x10);
    }
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *unaff_x22;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  lVar3 = FUN_06f764fc();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar4 = FUN_06f76694(lVar3,*(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 8),
                       *(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 10),0);
  FUN_06f7465c(uVar6,uVar6,uVar4,0);
  return;
}


