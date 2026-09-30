/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Binder
ENTRY_POINT: 066ebf60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Binder
               (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  if ((*(byte *)(unaff_x22 + 0x718) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a7bb8);
    *(undefined1 *)(unaff_x22 + 0x718) = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084942f0);
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084a7ba8);
    FUN_066b7574(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084a7bc0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar4);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = lVar6;
      plVar1 = *(long **)(lVar7 + 0x10);
      if (plVar1 == (long *)0x0) goto LAB_066ec06c;
      uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(lVar7 + 0x18) = param_3;
        thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x18),param_3);
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
  }
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a7bb8);
  FUN_0679343c(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_2;
    thunk_FUN_03afed3c((long *)(lVar6 + 0x10),param_2);
    *(undefined8 *)(lVar6 + 0x18) = param_3;
    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x18),param_3);
    plVar1 = (long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x20);
    }
    *plVar1 = lVar6;
    thunk_FUN_03afed3c(plVar1,lVar6);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
LAB_066ec06c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


