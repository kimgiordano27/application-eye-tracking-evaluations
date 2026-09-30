/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_session_handle_set
ENTRY_POINT: 07897ef8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_session_handle_set
               (int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((DAT_0898781f & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_List<ERModularRoad>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERNode>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERBlendVecs>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<DecalCulledChunk>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491378);
    FUN_03a8a718(System_Collections_Generic_List<ERLaneConnector>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERCell>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERLaneData>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERLocalGrid>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERChildObject>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERMarker>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERMarkerExt>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERConnectionVecs>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848acd8);
    FUN_03a8a718(System_Collections_Generic_List<EROQOQOCDQCO>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ERPostInstances>_TypeInfo);
    DAT_0898781f = 1;
  }
  puVar3 = System_Collections_Generic_List<DecalCulledChunk>_TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*param_1 == 0) {
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      in_stack_00000018 = *(undefined8 *)(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_07898220;
    }
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_List<ERPostInstances>_TypeInfo);
    FUN_0679343c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0xe);
    thunk_FUN_03afed3c();
    iVar1 = param_1[0x10];
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_1 + 0x12);
    *(int *)(lVar4 + 0x30) = iVar1;
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_1 + 0x14);
    thunk_FUN_03afed3c();
    puVar2 = PTR_DAT_0848acd8;
    if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (DAT_08975f9e == '\0') {
      FUN_03a8a718(PTR_DAT_0848acd8);
      DAT_08975f9e = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_List<ERLaneConnector>_TypeInfo);
    FUN_04957830(uVar8,lVar4,*(undefined8 *)System_Collections_Generic_List<EROQOQOCDQCO>_TypeInfo,0
                );
    if (*(int *)(*(long *)PTR_DAT_08491378 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_067b2f84(0);
    if (DAT_08987871 == '\0') {
      FUN_03a8a718(System_Collections_Generic_List<CinemachineVirtualCameraBase>_TypeInfo);
      DAT_08987871 = '\x01';
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = System_Array__BinarySearch<DataBindingManager_BindingRequest>
                      (lVar5,uVar8,uVar6,0,
                       *(undefined8 *)
                        (*(long *)(*(long *)
                                    System_Collections_Generic_List<CinemachineVirtualCameraBase>_TypeInfo
                                  + 0xb8) + 8),
                       *(undefined8 *)System_Collections_Generic_List<ERMarker>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<ERMarkerExt>_TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000028,
                         *(undefined8 *)System_Collections_Generic_List<ERLocalGrid>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x16) = in_stack_00000028;
      thunk_FUN_03afed3c(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe3ce8(param_1 + 2,&stack0x00000028,param_1,
                   *(undefined8 *)System_Collections_Generic_List<ERModularRoad>_TypeInfo);
      return;
    }
  }
  lVar4 = FUN_0587c704(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<ERLaneData>_TypeInfo);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<ERConnectionVecs>_TypeInfo)
  ;
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<ERChildObject>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x18) = in_stack_00000018;
    thunk_FUN_03afed3c(param_1 + 0x18,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fe3ce8(param_1 + 2,&stack0x00000018,param_1,
                 *(undefined8 *)System_Collections_Generic_List<ERNode>_TypeInfo);
    return;
  }
LAB_07898220:
  uVar8 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<ERCell>_TypeInfo);
  puVar2 = System_Collections_Generic_List<ERBlendVecs>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar8,*(undefined8 *)puVar2);
  return;
}


