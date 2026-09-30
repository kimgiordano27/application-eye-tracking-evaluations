/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 076110f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  
  *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
  if (param_1 != 0) {
    lVar4 = 0;
    do {
      lVar3 = param_1;
      plVar1 = *(long **)(lVar3 + 0x10);
      if (plVar1 == (long *)0x0) {
LAB_0761118c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_3,*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar2 & 1) != 0) {
        if (lVar3 == *unaff_x20) {
          *unaff_x20 = *(long *)(lVar3 + 0x20);
        }
        else {
          if (lVar4 == 0) goto LAB_0761118c;
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        }
        thunk_FUN_040ec700();
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + -1;
        return;
      }
      param_1 = *(long *)(lVar3 + 0x20);
      lVar4 = lVar3;
    } while (*(long *)(lVar3 + 0x20) != 0);
  }
  return;
}


