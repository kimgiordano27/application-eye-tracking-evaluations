/*
FUNCTION_NAME: FUN_0793fc94
ENTRY_POINT: 0793fc94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_0793fc94(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_28;
  
                    /* try { // try from 0793fc9c to 07a3fcaf has its CatchHandler @ 0793fddc */
  if ((DAT_08987dd3 & 1) == 0) {
                    /* try { // try from 0793fcb0 to 07a3fd03 has its CatchHandler @ 0793f7f4 */
    FUN_03a8a718(System_TimeZoneInfo_TZifType___TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    FUN_03a8a718(OVRPlugin_Vector3f___TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
    DAT_08987dd3 = 1;
  }
  puVar2 = OVRPlugin_Vector3f___TypeInfo;
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(param_1 + 8);
    uVar4 = System_Globalization_TaiwanCalendar__GetMonthsInYear(*(long *)(param_1 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar4,uVar4);
    }
    lVar6 = FUN_0793d564(lVar6,uVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                         *(undefined8 *)(param_1 + 0x10),param_1[0x12]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_28 = FUN_058b71ec(lVar6,*(undefined8 *)
                                   UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
    uVar5 = FUN_0587c6c4(&local_28,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo
                        );
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = local_28;
      thunk_FUN_03afed3c(param_1 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe33c8(param_1 + 2,&local_28,param_1,
                   *(undefined8 *)System_TimeZoneInfo_TZifType___TypeInfo);
      return;
    }
  }
  uVar4 = FUN_0587c704(&local_28,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  puVar3 = UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


