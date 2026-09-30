/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 06752a20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  int unaff_w23;
  long unaff_x24;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084883b0);
  FUN_03a8a718(PTR_DAT_084a9b08);
  FUN_03a8a718(PTR_DAT_0849f768);
  *(undefined1 *)(unaff_x24 + 0xaf9) = 1;
  if (unaff_w19 == 0) {
    FUN_065cb010(unaff_w23,0);
    return 1;
  }
  if (2 < unaff_w23) {
    if (unaff_w23 == 3) {
      if (*(int *)(*(long *)PTR_DAT_0849f710 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
LAB_06752be4:
      uVar2 = FUN_067662bc();
      return uVar2;
    }
    if (unaff_w23 == 4) {
      uVar2 = FUN_0675fa90();
      return uVar2;
    }
    if (unaff_w23 == 5) {
      uVar2 = FUN_067663dc();
      return uVar2;
    }
LAB_06752c10:
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar2 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(PTR_DAT_0849f718);
    uVar4 = thunk_FUN_03af1434(PTR_DAT_0849f720);
    FUN_066af718(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_084a9b10);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar2,uVar3);
  }
  if (unaff_w23 == 0) {
    if (*(int *)(*(long *)PTR_DAT_084883b0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar1 = (long *)FUN_066e1abc(0);
    if (plVar1 == (long *)0x0) goto LAB_06752c0c;
    (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
  }
  else {
    if (unaff_w23 == 1) {
      if (*(int *)(*(long *)PTR_DAT_084883b0 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar1 = (long *)FUN_066e1abc(0);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
        goto LAB_06752be4;
      }
LAB_06752c0c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_w23 != 2) goto LAB_06752c10;
    if (*(int *)(*(long *)PTR_DAT_0849f710 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
  }
  uVar2 = FUN_06766184();
  return uVar2;
}


