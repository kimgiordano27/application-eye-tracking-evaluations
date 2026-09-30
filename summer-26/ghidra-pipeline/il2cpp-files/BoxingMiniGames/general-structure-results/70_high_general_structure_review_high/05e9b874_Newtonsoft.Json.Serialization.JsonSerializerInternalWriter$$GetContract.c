/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 05e9b874
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  long *unaff_x21;
  
  FUN_03642964(PTR_DAT_07a0bcb8);
  FUN_03642964(PTR_DAT_079f4e48);
  *(undefined1 *)(unaff_x20 + 0x1d6) = 1;
  lVar5 = *unaff_x21;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_0367ca58(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar1 = PTR_DAT_079f4e48;
  if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar2 = (**(code **)(*unaff_x19 + 0x198))();
  FUN_03642a4c(*(undefined8 *)puVar1,uVar2);
  (**(code **)(*unaff_x19 + 0x1c8))();
  plVar3 = (long *)unaff_x19[3];
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05e9b964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    return;
  }
  return;
}


