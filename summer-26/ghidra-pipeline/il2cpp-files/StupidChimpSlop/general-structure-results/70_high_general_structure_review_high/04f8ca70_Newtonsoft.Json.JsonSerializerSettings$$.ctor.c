/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 04f8ca70
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings___ctor(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  long *unaff_x20;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x1f0));
  *(undefined1 *)(unaff_x19 + 0xc12) = 1;
  lVar2 = **(long **)(*unaff_x20 + 0xb8);
  thunk_FUN_02d5bde4();
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_02d8a638(*unaff_x20);
    FUN_04f8c154(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(undefined1 *)(lVar2 + 0xd2) = 1;
    uVar1 = FUN_04f8cb04(lVar2);
    thunk_FUN_02d5bde4();
    **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
    thunk_FUN_02dc1ef0(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  }
  uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
  thunk_FUN_02d5bde4();
  return uVar1;
}


