/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04ab936c
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeObject<object>(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int in_w9;
  long unaff_x19;
  long lVar5;
  
  if (in_w9 == 0) {
    thunk_FUN_0408f364();
  }
  FUN_074f3c94();
  if (*(int *)(*(long *)PTR_DAT_08f8b178 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b178);
  }
  plVar1 = (long *)FUN_072abbf8();
  lVar4 = 0;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xa08))(plVar1,*(undefined8 *)(*plVar1 + 0xa10));
    lVar3 = FUN_072bb7e0(uVar2,0,0);
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0406aaec(lVar5);
    }
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_0406ddbc(lVar3,lVar5);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar3,lVar5);
      }
    }
  }
  return lVar4;
}


