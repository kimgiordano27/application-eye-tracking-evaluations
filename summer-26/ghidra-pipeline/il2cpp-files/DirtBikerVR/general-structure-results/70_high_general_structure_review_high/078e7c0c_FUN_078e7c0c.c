/*
FUNCTION_NAME: FUN_078e7c0c
ENTRY_POINT: 078e7c0c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_078e7c0c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_28;
  
  if ((DAT_08987ae6 & 1) == 0) {
    FUN_03a8a718(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo);
    DAT_08987ae6 = 1;
  }
  puVar2 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
  ;
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
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
    lVar6 = FUN_078e54c0(lVar6,uVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                         *(undefined8 *)(param_1 + 0x10),param_1[0x12],
                         *(undefined8 *)(param_1 + 0x14));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_28 = FUN_058b71ec(lVar6,*(undefined8 *)
                                   UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo
                           );
    uVar5 = FUN_0587c6c4(&local_28,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x16) = local_28;
      thunk_FUN_03afed3c(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe1f40(param_1 + 2,&local_28,param_1,
                   *(undefined8 *)
                    System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
      return;
    }
  }
  uVar4 = FUN_0587c704(&local_28,
                       *(undefined8 *)
                        UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  puVar3 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundRepeat,_BackgroundRepeat>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


