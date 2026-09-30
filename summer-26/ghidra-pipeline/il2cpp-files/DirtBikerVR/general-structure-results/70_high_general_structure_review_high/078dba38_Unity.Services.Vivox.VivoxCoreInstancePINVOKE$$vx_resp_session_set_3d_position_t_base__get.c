/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_set_3d_position_t_base__get
ENTRY_POINT: 078dba38
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_17;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_set_3d_position_t_base__get
               (ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(Oculus_Platform_Request<DestinationList>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
                    /* try { // try from 078dba58 to 079dba5b has its CatchHandler @ 078dbb34 */
    FUN_03a8a718(Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo);
    FUN_03a8a718(Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo);
                    /* try { // try from 078dba6c to 079dba73 has its CatchHandler @ 078dbb30 */
    FUN_03a8a718(PTR_DAT_084963c0);
    FUN_03a8a718(Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
                    /* try { // try from 078dba84 to 079dba8b has its CatchHandler @ 078dbb44 */
                    /* try { // try from 078dba8c to 079dbacf has its CatchHandler @ 078db934 */
    FUN_03a8a718(PTR_DAT_084963c8);
    FUN_03a8a718(PTR_DAT_084963d0);
    FUN_03a8a718(PTR_DAT_084963d8);
    FUN_03a8a718(Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xa83) = 1;
  }
  puVar1 = PTR_DAT_08488b88;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078d988c(lVar8);
    uVar2 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 10),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar3 = thunk_FUN_03ac74bc();
      uVar9 = thunk_FUN_03af1434(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
      uVar5 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar3,uVar9,uVar5,0);
      uVar9 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardList>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar3,uVar9);
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 10);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo);
    FUN_078dbe60(uVar3,uVar9,0);
    plVar10 = *(long **)(lVar8 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084963c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_078dbb90;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)PTR_DAT_084963c0,2);
LAB_078dbb90:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo)
        {
          lVar6 = lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138;
          goto LAB_078dbc10;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    lVar6 = FUN_03ac43c4(plVar10,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,1);
LAB_078dbc10:
    FUN_0496d698(uVar9,plVar10,*(undefined8 *)(lVar6 + 8),0);
    lVar8 = FUN_0481a9ec(lVar8,uVar9,uVar3,
                         *(undefined8 *)
                          Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_058b71ec(lVar8,*(undefined8 *)PTR_DAT_084963d8);
    uVar2 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_084963d0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3d78(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_084963c8);
  lVar8 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


