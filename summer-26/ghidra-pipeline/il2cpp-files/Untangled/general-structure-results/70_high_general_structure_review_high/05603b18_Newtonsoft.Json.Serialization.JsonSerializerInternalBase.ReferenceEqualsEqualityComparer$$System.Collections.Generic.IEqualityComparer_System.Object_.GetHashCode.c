/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
ENTRY_POINT: 05603b18
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_GetHashCode
          (void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x23;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x23 + 0x1e0);
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c2924 == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    DAT_071c2924 = '\x01';
  }
  puVar2 = PTR_DAT_06d06338;
  lVar3 = *plVar4;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *plVar4;
  }
  cVar1 = **(char **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar2);
  }
  plVar4 = (long *)FUN_055b5920(0);
  if (plVar4 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    if (lVar3 != 0) {
      if (cVar1 == '\0') {
        FUN_055b4b4c();
      }
      else {
        FUN_055b4ac4();
      }
      return unaff_w19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


