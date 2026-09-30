/*
FUNCTION_NAME: Unity.IO.Archive.ArchiveHandle$$ThrowIfInvalid
ENTRY_POINT: 0356acc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void Unity_IO_Archive_ArchiveHandle__ThrowIfInvalid(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar6;
  long *unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_01a58e78();
  iVar1 = FUN_037775a0(unaff_w19,0);
  if (iVar1 == 0) {
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    FUN_03776cbc(0,0,0,0,0,&stack0x00000018,0);
    if (*(int *)(*(long *)
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03776a78(0);
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo);
    FUN_03776f7c(0x3f800000,uVar3,0);
    lVar6 = *(long *)(unaff_x20 + 200);
    in_stack_00000030 = uVar3;
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_035680e4(uVar3,unaff_w19);
    if (lVar6 == 0) goto LAB_0356ae5c;
    puVar4 = (undefined8 *)&stack0x0000003c;
  }
  else {
    if ((unaff_x21 & 1) == 0) {
      return;
    }
    uVar5 = 8;
    if ((*(byte *)(unaff_x20 + 0x114) & 4) != 0) {
      uVar5 = 10;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_037775dc(unaff_w19,uVar5,&stack0x00000030,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 200);
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_035680e4(uVar3,unaff_w19);
    if (lVar6 == 0) {
LAB_0356ae5c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,unaff_w19);
    puVar4 = &stack0x00000018;
  }
  FUN_0219b9a4(lVar6,puVar4,uVar3,
               *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
  return;
}


