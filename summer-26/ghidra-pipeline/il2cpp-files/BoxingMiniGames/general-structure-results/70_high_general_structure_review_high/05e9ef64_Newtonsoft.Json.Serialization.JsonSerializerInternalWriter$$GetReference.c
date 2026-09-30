/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 05e9ef64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  int iVar1;
  undefined8 uVar2;
  void *__ptr;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uVar2 = thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_07a18090);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x22);
  }
  iVar1 = FUN_05d35708(uVar2,0);
  *(int *)((long)unaff_x19 + 0x7c) = iVar1;
  iVar1 = (int)unaff_x19[0xe] * iVar1;
  if ((*(byte *)((long)unaff_x19 + 0x1c) >> 1 & 1) != 0) {
    iVar1 = (int)unaff_x19[4] * iVar1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  __ptr = (void *)thunk_FUN_0364eb70(iVar1,0);
  unaff_x19[0x10] = (long)__ptr;
  iVar1 = FUN_05ea0b60(unaff_x19[0x11],unaff_x19 + 0xd,*(undefined4 *)((long)unaff_x19 + 0x94));
  if (iVar1 == 0) {
    (**(code **)(*unaff_x19 + 0x178))();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  free(__ptr);
  if (iVar1 == 0) {
    return;
  }
  thunk_FUN_036aa1c8(PTR_DAT_07a18070);
  uVar2 = thunk_FUN_0367fe20();
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a180a8);
  FUN_05e9ec0c(uVar2,iVar1,uVar3);
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a180b0);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar3);
}


