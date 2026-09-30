/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 0270c344
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  
  plVar2 = (long *)FUN_01ab6a94(param_1,1);
  lVar3 = thunk_FUN_01a89e68(*unaff_x19);
  FUN_02706c4c(lVar3,1,0x778,1,1,0x777,1,0x1f98);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,0);
  }
  puVar1 = PTR_DAT_03cf7a70;
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 4,lVar3);
    **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar2);
    in_stack_00000008 = 0;
    FUN_02742ba0(&stack0x00000008,0x778,1,1,0);
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = in_stack_00000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


