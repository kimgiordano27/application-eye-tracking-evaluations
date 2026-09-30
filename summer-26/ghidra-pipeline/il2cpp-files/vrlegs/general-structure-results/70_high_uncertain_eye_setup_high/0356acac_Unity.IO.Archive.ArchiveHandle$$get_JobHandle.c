/*
FUNCTION_NAME: Unity.IO.Archive.ArchiveHandle$$get_JobHandle
ENTRY_POINT: 0356acac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_IO_Archive_ArchiveHandle__get_JobHandle(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar7;
  ulong unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar1 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if ((unaff_x22 & 1) != 0) {
    if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar2 = FUN_037775a0(unaff_w19,0);
    if (iVar2 != 0) {
      if ((unaff_x21 & 1) == 0) {
        return;
      }
      uVar6 = 8;
      if ((*(byte *)(unaff_x20 + 0x114) & 4) != 0) {
        uVar6 = 10;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_037775dc(unaff_w19,uVar6,&stack0x00000030,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(unaff_x20 + 200);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
      FUN_035680e4(uVar4,unaff_w19);
      if (lVar7 == 0) goto LAB_0356ae5c;
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,unaff_w19);
      puVar5 = &stack0x00000018;
      goto LAB_0356ae38;
    }
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_03776cbc(0,0,0,0,0,&stack0x00000018,0);
  if (*(int *)(*(long *)
                System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03776a78(0);
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo);
  FUN_03776f7c(0x3f800000,uVar4,0);
  lVar7 = *(long *)(unaff_x20 + 200);
  in_stack_00000030 = uVar4;
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
  FUN_035680e4(uVar4,unaff_w19);
  if (lVar7 == 0) {
LAB_0356ae5c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  puVar5 = (undefined8 *)&stack0x0000003c;
LAB_0356ae38:
  FUN_0219b9a4(lVar7,puVar5,uVar4,
               *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
  return;
}


