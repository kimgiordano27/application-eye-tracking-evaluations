/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_account_archive_message
ENTRY_POINT: 078f4440
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_account_archive_message
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  uVar10 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675ff58(uVar10,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05fa0540();
  puVar1 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
  FUN_0675ff58(*(undefined8 *)
                Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo,0)
  ;
                    /* try { // try from 078f44a8 to 079f44d3 has its CatchHandler @ 078f4778 */
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_03afed3c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = FUN_078f3610();
  lVar2 = FUN_078d7afc(uVar9,uVar10,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar8 = *(long **)(unaff_x20 + 0x10);
  uVar10 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_session_channel_invite_user
                     (*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar2 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar9 = FUN_078f03bc(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar3 = FUN_078f03d0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),lVar2,0);
  uVar5 = 10;
  if ((*(ulong *)(lVar2 + 0x18) & 0xff) != 0) {
    uVar5 = (undefined4)(*(ulong *)(lVar2 + 0x18) >> 0x20);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar2 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_084c82e0;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_078f45f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_03ac43c4(plVar8,*(long *)
                                UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                        ,0);
LAB_078f45f0:
  lVar2 = (*(code *)*puVar4)(plVar8,uVar11,uVar10,uVar9,uVar3,uVar5,puVar4[1]);
  if (lVar2 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar2,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar6 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4648(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar10 = FUN_0587c704(&stack0x00000018,
                            *(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
      uVar9 = FUN_0471a930(uVar10,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)
                            System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                          );
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Tuple<int,_int,_int,_bool>_TypeInfo);
      FUN_05750c4c(uVar3,uVar10,uVar9,*(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
      puVar1 = System_Tuple<Pose,_float,_float>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


