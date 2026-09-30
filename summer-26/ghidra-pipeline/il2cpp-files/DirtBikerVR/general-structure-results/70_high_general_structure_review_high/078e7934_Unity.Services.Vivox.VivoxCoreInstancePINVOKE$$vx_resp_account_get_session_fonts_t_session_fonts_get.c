/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_fonts_get
ENTRY_POINT: 078e7934
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_fonts_get
               (void)

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
  FUN_03a8a718(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
              );
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
  FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xae4) = 1;
  puVar2 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
  ;
  in_stack_00000018 = 0;
                    /* try { // try from 078e7984 to 079e7987 has its CatchHandler @ 078e7d4c */
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
                    /* try { // try from 078e7988 to 079e798f has its CatchHandler @ 078e7d48 */
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 078e7990 to 079e7993 has its CatchHandler @ 078e7d40 */
    lVar6 = *(long *)(unaff_x19 + 8);
                    /* try { // try from 078e7994 to 079e7997 has its CatchHandler @ 078e7d54 */
                    /* try { // try from 078e7998 to 079e79a7 has its CatchHandler @ 078e72b8 */
    uVar4 = System_Globalization_TaiwanCalendar__GetMonthsInYear(*(long *)(unaff_x19 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar4,uVar4);
    }
                    /* try { // try from 078e79a8 to 079e79b7 has its CatchHandler @ 078e7d1c */
    lVar6 = FUN_078e51d4(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10),
                         unaff_x19[0x12]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar5 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe1cf8(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar4 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)
                        UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  puVar3 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


