/*
FUNCTION_NAME: FUN_0356ac08
ENTRY_POINT: 0356ac08
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


void FUN_0356ac08(long param_1,undefined4 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_0412dfbb & 1) == 0) {
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo)
    ;
    FUN_01ab69ac(System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    DAT_0412dfbb = 1;
  }
  local_40 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    local_58 = CONCAT44(local_58._4_4_,param_2);
    uVar3 = FUN_0219c130(*(long *)(param_1 + 200),&local_58,*(undefined8 *)PTR_DAT_03cc4750);
    puVar1 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar2 = FUN_037775a0(param_2,0);
      if (iVar2 != 0) {
        if ((param_4 & 1) == 0) {
          return;
        }
        uVar7 = 8;
        if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
          uVar7 = 10;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_037775dc(param_2,uVar7,&local_40,0);
        uVar5 = local_40;
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(param_1 + 200);
        uVar4 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
        FUN_035680e4(uVar4,param_2,param_1,uVar5,0);
        if (lVar8 == 0) goto LAB_0356ae5c;
        local_58 = CONCAT44(local_58._4_4_,param_2);
        puVar6 = &local_58;
        goto LAB_0356ae38;
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_03776cbc(0,0,0,0,0,&local_58,0);
    if (*(int *)(*(long *)
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar9 = FUN_03776a78(0);
    uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo);
    uStack_68 = uStack_50;
    local_70 = local_58;
    local_60 = local_48;
    FUN_03776f7c(0x3f800000,uVar5,0,&local_70,auVar9._0_8_,auVar9._8_8_,0,0);
    lVar8 = *(long *)(param_1 + 200);
    local_40 = uVar5;
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_035680e4(uVar4,param_2,param_1,uVar5,0);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)&local_34;
      local_34 = param_2;
LAB_0356ae38:
      FUN_0219b9a4(lVar8,puVar6,uVar4,
                   *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo
                  );
      return;
    }
  }
LAB_0356ae5c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


