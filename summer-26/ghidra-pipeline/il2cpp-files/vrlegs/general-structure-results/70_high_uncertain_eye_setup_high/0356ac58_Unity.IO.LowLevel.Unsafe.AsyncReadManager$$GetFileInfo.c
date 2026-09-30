/*
FUNCTION_NAME: Unity.IO.LowLevel.Unsafe.AsyncReadManager$$GetFileInfo
ENTRY_POINT: 0356ac58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_IO_LowLevel_Unsafe_AsyncReadManager__GetFileInfo(void)

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
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_01ab69ac(System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo);
  FUN_01ab69ac(System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo);
  FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xfbb) = 1;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x20 + 200) != 0) {
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,unaff_w19);
    uVar3 = FUN_0219c130(*(long *)(unaff_x20 + 200),&stack0x00000018,*(undefined8 *)PTR_DAT_03cc4750
                        );
    puVar1 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
    if ((uVar3 & 1) != 0) {
      return;
    }
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
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                + 0xe0) == 0) {
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
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)&stack0x0000003c;
LAB_0356ae38:
      FUN_0219b9a4(lVar7,puVar5,uVar4,
                   *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo
                  );
      return;
    }
  }
LAB_0356ae5c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


