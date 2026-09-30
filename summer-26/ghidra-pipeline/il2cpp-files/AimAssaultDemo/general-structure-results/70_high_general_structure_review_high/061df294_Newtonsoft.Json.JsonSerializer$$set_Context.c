/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 061df294
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__set_Context(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x20 + 0x5ea) = 1;
  if ((unaff_w19 & 1) == 0) {
    bVar4 = unaff_w19 == 2;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar1 = -0x80000000;
    if (SQRT((double)(int)unaff_w19) != INFINITY) {
      iVar1 = (int)SQRT((double)(int)unaff_w19);
    }
    if (iVar1 < 3) {
      bVar4 = true;
    }
    else {
      iVar5 = 3;
      do {
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = (int)unaff_w19 / iVar5;
        }
        uVar2 = iVar3 * iVar5;
      } while ((unaff_w19 != uVar2) && (iVar5 = iVar5 + 2, iVar5 <= iVar1));
      bVar4 = unaff_w19 != uVar2;
    }
  }
  return bVar4;
}


