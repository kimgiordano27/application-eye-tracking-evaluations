/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValueAsync
ENTRY_POINT: 07115268
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xbe8));
  *(undefined1 *)(unaff_x21 + 0xc25) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (DAT_09842bf7 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    DAT_09842bf7 = '\x01';
  }
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *unaff_x20;
  }
  puVar2 = PTR_StringLiteral_50312_0920ff98;
  puVar1 = PTR_DAT_091a1be8;
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    if (unaff_x19 != 0) {
      uVar4 = thunk_FUN_03d9f2a8();
      uVar5 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar1);
      }
      uVar5 = FUN_07186ef4(uVar5,0);
      FUN_07190474(uVar4,uVar5,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  thunk_FUN_03d1e194(PTR_DAT_091b1368);
  uVar4 = thunk_FUN_03d2ef40();
  FUN_07188cf0(uVar4,0);
  uVar5 = thunk_FUN_03d1e194(PTR_DAT_0920ffa0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar4,uVar5);
}


