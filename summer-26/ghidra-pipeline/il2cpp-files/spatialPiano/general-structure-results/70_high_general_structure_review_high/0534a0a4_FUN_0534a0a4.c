/*
FUNCTION_NAME: FUN_0534a0a4
ENTRY_POINT: 0534a0a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_4
*/


undefined8 FUN_0534a0a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = TMPro_FastAction_TypeInfo;
  if ((DAT_06bbb52a & 1) == 0) {
    FUN_02f08768(System_IO_FileStream_TypeInfo);
    FUN_02f08768(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_02f08768(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    FUN_02f08768(System_IO_Enumeration_FileSystemName_TypeInfo);
    FUN_02f08768(System_Net_FileWebRequest_TypeInfo);
    FUN_02f08768(System_Net_FileWebRequestCreator_TypeInfo);
    FUN_02f08768(TMPro_FastAction_TypeInfo);
    DAT_06bbb52a = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[9];
  if (lVar6 == 0) {
                    /* try { // try from 0534a144 to 0544a14b has its CatchHandler @ 0534a394 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
                    /* try { // try from 0534a158 to 0544a1d3 has its CatchHandler @ 0534a3a0 */
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)System_IO_FileStream_TypeInfo);
    FUN_04e02cfc(lVar6,uVar7,*(undefined8 *)System_Net_FileWebRequest_TypeInfo,0);
    lVar4 = *(long *)puVar1;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x48) = lVar6;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = System_IO_Enumeration_FileSystemName_TypeInfo;
  puVar2 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar8 = puVar5[10];
  if (lVar8 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
                    /* try { // try from 0534a1d8 to 0544a24f has its CatchHandler @ 0534a3a4 */
    uVar7 = *puVar5;
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_04e08b84(lVar8,uVar7,*(undefined8 *)System_Net_FileWebRequestCreator_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = lVar8;
  }
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_03f2d85c(uVar7,7,lVar6,lVar8,*(undefined8 *)puVar2);
  return uVar7;
}


