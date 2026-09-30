/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_tts_injection_ended_t$$Dispose
ENTRY_POINT: 0792ad64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_tts_injection_ended_t__Dispose(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_0679343c(param_1,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(unaff_x19 + 8);
  thunk_FUN_03afed3c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_03afed3c();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x19 + 0xc);
  thunk_FUN_03afed3c();
  uVar1 = unaff_x19[0xe];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03afed3c();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x12);
  thunk_FUN_03afed3c();
  puVar3 = PTR_DAT_0848acd8;
  if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (DAT_08975f9e == '\0') {
    FUN_03a8a718(PTR_DAT_0848acd8);
    DAT_08975f9e = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Data_IndexField___TypeInfo);
  FUN_04957830(uVar5,param_1,*(undefined8 *)UnityEngine_InputSystem_InputDevice___TypeInfo,0);
  if (*(int *)(*(long *)PTR_DAT_08491378 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_067b2f84(0);
  if (DAT_08987d59 == '\0') {
    FUN_03a8a718(System_Net_HttpListenerContext___TypeInfo);
    DAT_08987d59 = '\x01';
  }
  if (lVar4 != 0) {
    lVar4 = System_Array__BinarySearch<DataBindingManager_BindingRequest>
                      (lVar4,uVar5,uVar6,0,
                       *(undefined8 *)
                        (*(long *)(*(long *)System_Net_HttpListenerContext___TypeInfo + 0xb8) + 8),
                       *(undefined8 *)UnityEngine_InputSystem_InputControl___TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar4,*(undefined8 *)UnityEngine_InputSystem_InputControlScheme___TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000028,
                         *(undefined8 *)UnityEngine_InputSystem_InputBinding___TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fdf3e8(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      lVar4 = FUN_0587c704(&stack0x00000028,
                           *(undefined8 *)UnityEngine_InputSystem_InputAction___TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000018 =
           FUN_058b71ec(lVar4,*(undefined8 *)UnityEngine_UIElements_IPointerOrMouseEvent___TypeInfo)
      ;
      uVar7 = FUN_0587c6c4(&stack0x00000018,
                           *(undefined8 *)RootMotion_FinalIK_IKMappingLimb___TypeInfo);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000018;
        thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fdf3e8(unaff_x19 + 2,&stack0x00000018);
      }
      else {
        uVar5 = FUN_0587c704(&stack0x00000018,
                             *(undefined8 *)RootMotion_FinalIK_IKMappingBone___TypeInfo);
        puVar3 = RootMotion_FinalIK_IKEffector___TypeInfo;
        iVar2 = *(int *)(*unaff_x23 + 0xe4);
        *unaff_x19 = 0xfffffffe;
        if (iVar2 == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


