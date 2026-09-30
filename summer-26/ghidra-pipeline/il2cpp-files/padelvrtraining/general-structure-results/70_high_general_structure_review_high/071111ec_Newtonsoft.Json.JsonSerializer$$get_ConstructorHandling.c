/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ConstructorHandling
ENTRY_POINT: 071111ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_ConstructorHandling(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  
  iVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  lVar6 = *(long *)(unaff_x19 + 0x128);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = iVar2 - 1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)(lVar6 + 0x18))) {
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      return *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
  uVar3 = thunk_FUN_03d2ef40();
  uVar4 = thunk_FUN_03d1e194(PTR_DAT_0920fde8);
  uVar5 = thunk_FUN_03d1e194(PTR_DAT_0920fdf0);
  FUN_070c848c(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_03d1e194(PTR_DAT_0920fe00);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar3,uVar4);
}


