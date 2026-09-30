/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Context
ENTRY_POINT: 0559b458
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Context(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  
  if (param_1 == 0) {
    uVar3 = FUN_0559b2fc();
    return uVar3;
  }
  if (unaff_w20 == 0) {
    plVar2 = *(long **)(unaff_x19 + 0x78);
    if (plVar2 == (long *)0x0) goto LAB_0559b4c0;
    unaff_w20 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
  }
  lVar6 = *(long *)(unaff_x19 + 0x128);
  if (lVar6 != 0) {
    uVar1 = unaff_w20 - 1;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)(lVar6 + 0x18))) {
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        return *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar3 = thunk_FUN_02ef1808();
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4f348);
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d4f350);
    FUN_0555b650(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4f360);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,uVar4);
  }
LAB_0559b4c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


