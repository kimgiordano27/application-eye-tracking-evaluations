/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_set_voice_font_t_base__set
ENTRY_POINT: 078dbb94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_set_voice_font_t_base__set
               (code *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 078dbb94 to 079dbb97 has its CatchHandler @ 078dbc04 */
                    /* try { // try from 078dbb98 to 079dbbd7 has its CatchHandler @ 078dbc20 */
  plVar1 = (long *)(*param_1)();
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo)
  ;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 078dbbd8 to 079dbbef has its CatchHandler @ 078db934 */
      if (*(long *)(piVar5 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo) {
                    /* catch() { ... } // from try @ 078dbb94 with catch @ 078dbc04 */
                    /* catch() { ... } // from try @ 078dbb60 with catch @ 078dbc0c
                       catch() { ... } // from try @ 078dbbf0 with catch @ 078dbc0c */
        lVar3 = lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138;
        goto LAB_078dbc10;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 078dbbf0 to 079dbbff has its CatchHandler @ 078dbc0c */
  lVar3 = FUN_03ac43c4(plVar1,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,1);
LAB_078dbc10:
                    /* try { // try from 078dbc14 to 079dbc17 has its CatchHandler @ 078dbcdc */
  FUN_0496d698(uVar2,plVar1,*(undefined8 *)(lVar3 + 8),0);
  lVar3 = FUN_0481a9ec();
  if (lVar3 != 0) {
    in_stack_00000018 = FUN_058b71ec(lVar3,*(undefined8 *)PTR_DAT_084963d8);
    uVar4 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_084963d0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3d78(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_084963c8);
      lVar3 = *unaff_x24;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


