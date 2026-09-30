/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 05a800b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__SetupReader(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06f807e0);
  FUN_02fe925c(PTR_DAT_06faa220);
  *(undefined1 *)(unaff_x23 + 0xeb9) = 1;
  puVar2 = PTR_DAT_06faa218;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05a3f420();
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *(long *)puVar2;
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_06faa220;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
      *(long **)(unaff_x19 + 0x60) = plVar4;
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) goto LAB_05a8018c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884(plVar4,lVar3);
  }
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
LAB_05a8018c:
  thunk_FUN_03048534(unaff_x19 + 0x60);
  return;
}


