/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_logout_t$$Finalize
ENTRY_POINT: 0793fcd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void Unity_Services_Vivox_vx_req_account_logout_t__Finalize(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718();
  FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  FUN_03a8a718(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
  FUN_03a8a718(UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xdd3) = 1;
  puVar2 = OVRPlugin_Vector3f___TypeInfo;
                    /* try { // try from 0793fd04 to 07a3fd0b has its CatchHandler @ 0793fd78 */
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
                    /* try { // try from 0793fd18 to 07a3fd37 has its CatchHandler @ 0793fd7c */
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(unaff_x19 + 8);
    uVar4 = System_Globalization_TaiwanCalendar__GetMonthsInYear(*(long *)(unaff_x19 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar4,uVar4);
    }
    lVar6 = FUN_0793d564(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10),
                         unaff_x19[0x12]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 0793fd54 to 07a3fd57 has its CatchHandler @ 0793fdd4 */
                    /* try { // try from 0793fd58 to 07a3fd5b has its CatchHandler @ 0793fdb0 */
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
                    /* try { // try from 0793fd5c to 07a3fd5f has its CatchHandler @ 0793fda4 */
    uVar5 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo
                        );
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe33c8(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar4 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  puVar3 = UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


