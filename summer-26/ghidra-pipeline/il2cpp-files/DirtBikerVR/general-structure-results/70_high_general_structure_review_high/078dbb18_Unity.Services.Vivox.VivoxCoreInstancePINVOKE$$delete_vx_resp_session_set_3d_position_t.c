/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_session_set_3d_position_t
ENTRY_POINT: 078dbb18
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_session_set_3d_position_t(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 078dbb18 to 079dbb1b has its CatchHandler @ 078dbb40 */
  plVar6 = *(long **)(unaff_x20 + 0x10);
                    /* try { // try from 078dbb1c to 079dbb1f has its CatchHandler @ 078dbb3c */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 078dbb20 to 079dbb23 has its CatchHandler @ 078dbb38 */
                    /* try { // try from 078dbb24 to 079dbb27 has its CatchHandler @ 078dbb48 */
  lVar3 = *plVar6;
                    /* catch() { ... } // from try @ 078dbad0 with catch @ 078dbb28
                       try { // try from 078dbb28 to 079dbb5f has its CatchHandler @ 078db934 */
                    /* catch() { ... } // from try @ 078dbae4 with catch @ 078dbb2c */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 078dba6c with catch @ 078dbb30 */
                    /* catch() { ... } // from try @ 078dba58 with catch @ 078dbb34 */
  if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 078dbb20 with catch @ 078dbb38 */
                    /* catch() { ... } // from try @ 078dbb1c with catch @ 078dbb3c */
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 078dbb18 with catch @ 078dbb40 */
                    /* catch() { ... } // from try @ 078dba84 with catch @ 078dbb44 */
                    /* catch() { ... } // from try @ 078dba04 with catch @ 078dbb48
                       catch() { ... } // from try @ 078dbb24 with catch @ 078dbb48 */
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_078dbb90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 078dbb60 to 079dbb77 has its CatchHandler @ 078dbc0c */
  puVar1 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084963c0,2);
LAB_078dbb90:
  plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo)
  ;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo) {
        lVar3 = lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138;
        goto LAB_078dbc10;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_03ac43c4(plVar6,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,1);
LAB_078dbc10:
  FUN_0496d698(uVar2,plVar6,*(undefined8 *)(lVar3 + 8),0);
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


