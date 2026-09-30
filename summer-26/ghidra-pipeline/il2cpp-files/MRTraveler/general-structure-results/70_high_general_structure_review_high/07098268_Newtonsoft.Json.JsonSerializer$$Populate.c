/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 07098268
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(undefined8 param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xde6) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e9bb60);
    FUN_03c8f898(PTR_DAT_08ea2830);
    *(undefined1 *)(unaff_x22 + 0xde6) = 1;
  }
  puVar1 = PTR_DAT_08ea2830;
  if (param_2 == (long *)0x0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar3 = thunk_FUN_03cf5234();
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e806f0);
    FUN_0705a2f8(uVar3,uVar4,0);
  }
  else {
    if (param_3 < 0x20) {
      if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (DAT_0941be42 == '\0') {
        FUN_03c8f898(PTR_DAT_08ea2830);
        DAT_0941be42 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar2 = *(long *)puVar1;
      }
      if (**(char **)(lVar2 + 0xb8) != '\0') {
        if ((param_3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0709831c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_08e9bb60 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_07097e0c(param_2);
        return;
      }
      FUN_070983f8(param_1,param_2,param_3);
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar3 = thunk_FUN_03cf5234();
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e9d680);
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e82ec0);
    FUN_0705df24(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea28e8);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,uVar4);
}


