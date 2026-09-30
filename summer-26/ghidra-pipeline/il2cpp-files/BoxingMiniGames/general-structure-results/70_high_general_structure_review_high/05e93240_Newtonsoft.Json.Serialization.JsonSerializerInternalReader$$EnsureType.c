/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 05e93240
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05e93318) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int unaff_w20;
  int unaff_w22;
  undefined8 in_stack_00000028;
  
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17c50);
  FUN_05e93458();
  FUN_05e934b8();
  if (unaff_w20 == -1) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar2 = FUN_05e7c7fc(lVar3,0xffffffff);
  }
  else {
    iVar1 = thunk_FUN_03676224(0);
    if ((long)(ulong)(uint)(iVar1 - unaff_w22) < (long)unaff_w20) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar2 = FUN_05e7c7fc(lVar3,unaff_w20 - (iVar1 - unaff_w22));
    }
    else {
      uVar2 = 0;
    }
  }
  uVar4 = FUN_05e8c8d0(in_stack_00000028);
  if ((uVar4 & 1) == 0) {
    FUN_05e8efb4(in_stack_00000028,lVar3);
  }
  return uVar2 & 1;
}


