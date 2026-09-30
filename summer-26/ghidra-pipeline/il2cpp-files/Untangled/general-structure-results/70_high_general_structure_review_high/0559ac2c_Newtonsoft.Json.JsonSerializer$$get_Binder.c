/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 0559ac2c
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


undefined8 Newtonsoft_Json_JsonSerializer__get_Binder(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  thunk_FUN_02f12b58();
  lVar1 = **(long **)(*unaff_x20 + 0xb8);
  thunk_FUN_02eb57a8();
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_02ef1808(*unaff_x20);
    FUN_0559a534();
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x78) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined1 *)(*(long *)(lVar1 + 0x78) + 0x14) = 1;
    *(undefined1 *)(lVar1 + 0x140) = 1;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    thunk_FUN_02eb57a8();
    **(long **)(*unaff_x20 + 0xb8) = lVar1;
    thunk_FUN_02f411dc(*(undefined8 *)(*unaff_x20 + 0xb8),lVar1);
  }
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x20;
  }
  uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_02eb57a8();
  return uVar2;
}


