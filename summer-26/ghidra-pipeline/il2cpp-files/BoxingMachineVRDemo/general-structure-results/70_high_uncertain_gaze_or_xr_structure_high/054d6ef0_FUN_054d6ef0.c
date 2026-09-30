/*
FUNCTION_NAME: FUN_054d6ef0
ENTRY_POINT: 054d6ef0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_054d6ef0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (((int)param_1[7] == 2) &&
     (uVar2 = (**(code **)(*param_1 + 0x428))(param_1,*(undefined8 *)(*param_1 + 0x430)),
     (uVar2 & 1) != 0)) {
    return 1;
  }
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_054d71a8(param_1,*(undefined8 *)(param_1[4] + 0x38));
  uVar5 = 1;
  uVar3 = 1;
  switch(*(undefined4 *)((long)param_1 + 0x34)) {
  case 0:
    if (*(int *)((long)param_1 + 0x3c) != 0) {
      uVar3 = thunk_FUN_02dc61f4(
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                                );
      uVar3 = FUN_054f9054(uVar3,0);
      thunk_FUN_02dc61f4(UnityEngine_Networking_UnityWebRequestAsyncOperation_var);
      uVar4 = thunk_FUN_02d9d534();
      FUN_05678430(uVar4,uVar3,0);
      goto LAB_054d7180;
    }
    *(undefined4 *)(param_1 + 7) = 0;
    puVar1 = PTR_DAT_0675e258;
    param_1[10] = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[9] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[8] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[0xb] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4(param_1 + 0xb);
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar5 = 3;
    goto switchD_054d6f64_caseD_4;
  case 1:
  case 5:
  case 6:
    FUN_054d75fc(param_1);
    FUN_054d6380(param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 7) = 0xf;
    puVar1 = PTR_DAT_0675e258;
    param_1[10] = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[9] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[8] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[0xb] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[0xc] = -0x100000000;
    FUN_054d76c0(param_1);
    break;
  case 3:
    *(undefined4 *)(param_1 + 7) = 3;
    puVar1 = PTR_DAT_0675e258;
    param_1[10] = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[9] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_1[8] = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4(param_1 + 8);
    param_1[0xc] = -0x100000000;
    break;
  case 4:
    goto switchD_054d6f64_caseD_4;
  default:
    uVar3 = thunk_FUN_02dc61f4(
                              System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                              );
    uVar3 = FUN_054f9054(uVar3,0);
    thunk_FUN_02dc61f4(PTR_DAT_067696e0);
    uVar4 = thunk_FUN_02d9d534();
    System_Int32__System_IConvertible_ToUInt32(uVar4,uVar3,0);
LAB_054d7180:
    uVar3 = FUN_054f9058(uVar4,0);
    uVar4 = thunk_FUN_02dc61f4(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,uVar4);
  }
  uVar5 = 1;
  uVar3 = 1;
switchD_054d6f64_caseD_4:
  *(undefined4 *)(param_1 + 6) = uVar5;
  return uVar3;
}


