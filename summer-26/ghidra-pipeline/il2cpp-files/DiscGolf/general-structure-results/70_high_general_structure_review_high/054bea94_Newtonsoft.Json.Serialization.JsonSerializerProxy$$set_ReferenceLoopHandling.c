/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceLoopHandling
ENTRY_POINT: 054bea94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceLoopHandling
               (undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar2 = FUN_02d966a4(param_1,3);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 054beaa0 to 055beaaf has its CatchHandler @ 054bedf0 */
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = *(long *)(*unaff_x20 + 0xb8);
    *(undefined2 *)(lVar2 + 0x20) = *(undefined2 *)(lVar3 + 10);
    if ((uVar1 != 1) && (*(undefined2 *)(lVar2 + 0x22) = *(undefined2 *)(lVar3 + 8), 2 < uVar1)) {
      *(long *)(lVar3 + 0x20) = lVar2;
      *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(lVar3 + 0x18);
      LeanTween__value();
      lVar2 = *(long *)(*unaff_x20 + 0xb8);
      *(bool *)(lVar2 + 0x28) = *(short *)(lVar2 + 10) == *(short *)(lVar2 + 0x18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


