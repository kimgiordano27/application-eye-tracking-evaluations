/*
FUNCTION_NAME: FUN_07af9c84
ENTRY_POINT: 07af9c84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_7
*/


void FUN_07af9c84(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_0899237a & 1) == 0) {
    FUN_03a8a718(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_03a8a718(Unity_Services_Analytics_Internal_FileSystemCalls_TypeInfo);
    FUN_03a8a718(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    FUN_03a8a718(System_IO_Enumeration_FileSystemName_TypeInfo);
    FUN_03a8a718(System_Net_FileWebRequest_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496250);
    FUN_03a8a718(System_Net_FileWebRequestCreator_TypeInfo);
    FUN_03a8a718(System_Net_FileWebResponse_TypeInfo);
    FUN_03a8a718(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_03a8a718(System_Net_FileWebStream_TypeInfo);
    DAT_0899237a = 1;
  }
  plVar7 = (long *)(param_1 + 0x18);
  if (*plVar7 == 0) goto LAB_07af9eb4;
  if (*(int *)(*plVar7 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07af9eb4;
    FUN_07ac84f4(*(long *)(param_1 + 0x10),0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07af9eb4;
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x44);
    if (*(int *)(*(long *)Mono_Net_Security_AsyncWriteRequest_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07970bd8(uVar1,0);
    uVar3 = FUN_07aa8374(uVar3,0);
    puVar2 = System_Net_FileWebResponse_TypeInfo;
    lVar5 = *(long *)System_Net_FileWebResponse_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar8 = puVar6[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar9 = *puVar6;
      lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
      FUN_049639e4(lVar8,uVar9,*(undefined8 *)System_Net_FileWebRequestCreator_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar8;
      thunk_FUN_03afed3c(plVar4,lVar8);
    }
    uVar3 = FUN_044d3220(uVar3,lVar8,*(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo);
    uVar3 = FUN_044e130c(uVar3,*(undefined8 *)
                                Unity_Services_Analytics_Internal_FileSystemCalls_TypeInfo);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_03afed3c(plVar7,uVar3);
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496250);
      FUN_06f68700(uVar3,*(undefined8 *)System_Net_FileWebStream_TypeInfo,0);
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),param_1,uVar3,*(undefined8 *)(lVar5 + 0x28));
    }
  }
  if (*plVar7 != 0) {
    FUN_04de87dc(*plVar7,*(undefined8 *)System_IO_Enumeration_FileSystemName_TypeInfo);
    return;
  }
LAB_07af9eb4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


