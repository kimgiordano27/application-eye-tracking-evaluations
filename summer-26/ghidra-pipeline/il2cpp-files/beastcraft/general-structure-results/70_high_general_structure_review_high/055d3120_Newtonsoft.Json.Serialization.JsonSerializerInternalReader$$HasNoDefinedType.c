/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 055d3120
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long in_x9;
  long in_x10;
  long lStack0000000000000008;
  undefined1 *puStack0000000000000010;
  long lStack0000000000000018;
  
  if (in_x10 != in_x9) {
    puStack0000000000000010 = (undefined1 *)&stack0x00000018;
    lStack0000000000000008 = 0;
    lStack0000000000000018 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  plVar3 = *(long **)(param_1 + 0x58);
  puStack0000000000000010 = (undefined1 *)&stack0x00000018;
  lStack0000000000000008 = 0;
  lStack0000000000000018 = param_1;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar2 = (**(code **)(*plVar3 + 0x358))
                    (plVar3,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68),
                     *(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(*plVar3 + 0x360));
  if (lStack0000000000000018 != 0) {
    if (*(char *)(lStack0000000000000018 + 0x55) != '\0') {
LAB_055d3180:
      lVar1 = lStack0000000000000018;
      *(undefined8 *)(lStack0000000000000018 + 0x58) = 0;
      thunk_FUN_02ee2be8((undefined8 *)(lStack0000000000000018 + 0x58),0);
      *(undefined8 *)(lVar1 + 0x60) = 0;
      thunk_FUN_02ee2be8((undefined8 *)(lVar1 + 0x60),0);
      if (lStack0000000000000008 == 0) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc();
    }
    if (*(long *)(lStack0000000000000018 + 0x58) != 0) {
      FUN_055d0f04();
      if (lStack0000000000000018 != 0) goto LAB_055d3180;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


