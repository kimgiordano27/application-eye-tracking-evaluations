/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_account_archive_query_end
ENTRY_POINT: 078f44bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_account_archive_query_end
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_0675ff58();
  FUN_05fa0540();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_03afed3c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = FUN_078f3610();
  lVar3 = FUN_078d7afc(uVar10,uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 078f4514 to 079f4547 has its CatchHandler @ 078f4774 */
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_session_channel_invite_user
                    (*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar10 = FUN_078f03bc(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = FUN_078f03d0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),lVar3,0);
  uVar6 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_084c82e0;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_078f45f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_03ac43c4(plVar9,*(long *)
                                UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                        ,0);
LAB_078f45f0:
  lVar3 = (*(code *)*puVar5)(plVar9,uVar11,uVar2,uVar10,uVar4,uVar6,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4648(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)
                            UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
      uVar10 = FUN_0471a930(uVar2,*(undefined8 *)(unaff_x19 + 0x10),
                            *(undefined8 *)
                             System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                           );
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Tuple<int,_int,_int,_bool>_TypeInfo);
      FUN_05750c4c(uVar4,uVar2,uVar10,*(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
      puVar1 = System_Tuple<Pose,_float,_float>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


