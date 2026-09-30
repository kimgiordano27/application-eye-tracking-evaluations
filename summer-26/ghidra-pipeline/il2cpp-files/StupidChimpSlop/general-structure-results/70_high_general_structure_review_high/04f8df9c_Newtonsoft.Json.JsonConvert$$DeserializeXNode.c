/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 04f8df9c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_066571a8;
  puVar1 = PTR_DAT_066571a0;
  if ((DAT_06a4ec22 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066571a0);
    FUN_02d4dc40(PTR_DAT_066571a8);
    FUN_02d4dc40(PTR_DAT_06656240);
    DAT_06a4ec22 = 1;
  }
  plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar1,1);
  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_04f88690(lVar4,1,0x778,1,1,0x777,1,0x1f98);
  if (plVar3 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar6,0);
    }
    puVar1 = PTR_DAT_06656240;
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar4;
      thunk_FUN_02dc1ef0(plVar3 + 4,lVar4);
      **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar3;
      thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar3);
      in_stack_00000008 = 0;
      FUN_04fe1648(&stack0x00000008,0x778,1,1,0);
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = in_stack_00000008;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


