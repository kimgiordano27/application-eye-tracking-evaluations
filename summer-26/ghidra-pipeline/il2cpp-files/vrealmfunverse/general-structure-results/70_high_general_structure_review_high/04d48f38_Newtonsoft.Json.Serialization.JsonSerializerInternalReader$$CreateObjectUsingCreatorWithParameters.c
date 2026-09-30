/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 04d48f38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d49038) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int in_w8;
  long *unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c81cf == '\0') {
    FUN_02b3c81c(PTR_DAT_06312bb0);
    DAT_066c81cf = '\x01';
  }
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *unaff_x19;
  }
  plVar2 = (long *)FUN_02b3c834(lVar1);
  plVar2 = (long *)*plVar2;
  if ((plVar2 == (long *)0x0) || (*plVar2 != *(long *)PTR_DAT_06332588)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar3 = (long *)plVar2[0xb];
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  (**(code **)(*plVar3 + 0x368))
            (plVar3,plVar2[0xc],(int)plVar2[0xd],*(undefined4 *)((long)plVar2 + 0x6c),
             *(undefined8 *)(*plVar3 + 0x370));
  if ((plVar2 != (long *)0x0) &&
     ((*(char *)((long)plVar2 + 0x55) != '\0' ||
      ((plVar2[0xb] != 0 && (FUN_04d470ac(), plVar2 != (long *)0x0)))))) {
    plVar2[0xb] = 0;
    thunk_FUN_02bb0e9c(plVar2 + 0xb,0);
    plVar2[0xc] = 0;
    thunk_FUN_02bb0e9c(plVar2 + 0xc,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


