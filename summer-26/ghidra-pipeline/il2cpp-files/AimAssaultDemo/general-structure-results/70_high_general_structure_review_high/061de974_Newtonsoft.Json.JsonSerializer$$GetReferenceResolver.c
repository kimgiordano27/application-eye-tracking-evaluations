/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetReferenceResolver
ENTRY_POINT: 061de974
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetReferenceResolver(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_0373b518(PTR_DAT_07d882c0);
  *(undefined1 *)(unaff_x19 + 0x5e2) = 1;
  plVar1 = (long *)RootMotion_FinalIK_Finger___ctor(*unaff_x21,1);
  lVar2 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x68),&stack0x00000008);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
    uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_037aeb94(plVar1 + 4,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


