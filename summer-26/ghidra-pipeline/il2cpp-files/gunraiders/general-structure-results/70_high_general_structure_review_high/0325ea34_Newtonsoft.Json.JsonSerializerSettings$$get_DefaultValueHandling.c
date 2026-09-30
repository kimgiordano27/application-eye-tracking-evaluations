/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 0325ea34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling(void)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 in_w8;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xb06) = in_w8;
  if (*(char *)((long)unaff_x19 + 0x45) == '\0') {
    (**(code **)(*unaff_x19 + 0x2d8))();
    lVar5 = unaff_x19[3];
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) && (uVar1 != 3)) {
        return (ulong)*(uint *)(lVar5 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
  else {
    plVar3 = (long *)unaff_x19[2];
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0325d978();
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_0422fce0 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0422fce0)) {
      uVar4 = FUN_032259dc(plVar3,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


