/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 066eb250
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__SerializeInternal(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)FUN_03a8a804(*unaff_x22,2);
  lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x68),&stack0x00000008);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_066eb2f8:
    uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03afed3c(plVar1 + 4,lVar2);
    if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_03ac73c0(), lVar2 == 0)) goto LAB_066eb2f8;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = unaff_x19;
      thunk_FUN_03afed3c(plVar1 + 5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


