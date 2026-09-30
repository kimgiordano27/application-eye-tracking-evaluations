/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 0559b464
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_Context(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  
  if (param_1 != (long *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    lVar6 = *(long *)(unaff_x19 + 0x128);
    if (lVar6 != 0) {
      uVar1 = iVar2 - 1;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


