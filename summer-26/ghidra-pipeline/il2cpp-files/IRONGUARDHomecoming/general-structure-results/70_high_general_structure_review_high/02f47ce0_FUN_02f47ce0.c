/*
FUNCTION_NAME: FUN_02f47ce0
ENTRY_POINT: 02f47ce0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_2
*/


void FUN_02f47ce0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = Method_System_IO_FileSystemInfo__ctor__;
  if ((DAT_04831a30 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_FileStream_get_Position__);
    thunk_FUN_01efb3a4(Method_System_Net_FileWebRequest__ctor__);
    thunk_FUN_01efb3a4(Method_System_IO_FileStream_set_Position__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystemInfo__ctor__);
    DAT_04831a30 = 1;
  }
  puVar2 = Method_System_Net_FileWebRequest__ctor__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_0360687c(0);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  thunk_FUN_01f51358();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = thunk_FUN_01f116d0(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar3 = thunk_FUN_01f116d0(uVar7,*(undefined8 *)puVar2);
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  uVar7 = thunk_FUN_01f116d0(uVar3,lVar5);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  uVar3 = thunk_FUN_01f116d0(uVar3,lVar5);
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),uVar3);
  lVar8 = *(long *)(param_1 + 0x38);
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileStream_get_Position__);
    FUN_02a7036c(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80),0);
    lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar6 + 0x78);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
      lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar5;
    lVar4 = *(long *)(lVar6 + 0x78);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    thunk_FUN_01f51358(*(long *)(lVar4 + 0xb8) + 8,lVar5);
  }
  if (lVar8 != 0) {
    uVar3 = FUN_02134528(lVar8,lVar5,*(undefined8 *)Method_System_IO_FileStream_set_Position__);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


