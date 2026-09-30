/*
FUNCTION_NAME: FUN_06272768
ENTRY_POINT: 06272768
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_3;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_06272768(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_076de23b & 1) == 0) {
    thunk_FUN_032e1da0(OVRPlugin_EyeGazeState___TypeInfo);
    thunk_FUN_032e1da0(System_Func<JsonSchema,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Task>_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_ActionBar_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1920);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    DAT_076de23b = 1;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x48) == '\0') {
LAB_062728b8:
      plVar3 = *(long **)(param_2 + 0x10);
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)OVRPlugin_EyeGazeState___TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar3);
        }
      }
      FUN_06272c78(param_1,plVar3,param_3,1);
      FUN_0627347c(param_1,plVar3,param_3,1);
      if (*(char *)(param_2 + 0x48) != '\0') {
        FUN_0626ef5c(param_1,0);
        return;
      }
      return;
    }
    FUN_0626e8d4(param_1,0);
    FUN_0626fb50(param_1,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                 *(int *)(param_1 + 0x50) == 0,0);
    puVar2 = PTR_DAT_07285080;
    plVar3 = *(long **)(param_1 + 0x28);
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x318))
                        (plVar3,*(undefined8 *)PTR_DAT_07285080,*(undefined8 *)(*plVar3 + 800));
      if (lVar4 == 0) {
        FUN_0626e8ac(param_1,*(undefined8 *)PTR_DAT_072a1920,
                     *(undefined8 *)Unity_AppUI_UI_ActionBar_TypeInfo,*(undefined8 *)puVar2,
                     *(undefined8 *)puVar2,0);
      }
      puVar2 = System_Func<Task>_TypeInfo;
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x318))
                          (plVar3,*(undefined8 *)System_Func<Task>_TypeInfo,
                           *(undefined8 *)(*plVar3 + 800));
        if (lVar4 == 0) {
          FUN_0626e8ac(param_1,*(undefined8 *)PTR_DAT_072a1920,
                       *(undefined8 *)System_Func<JsonSchema,_string>_TypeInfo,*(undefined8 *)puVar2
                       ,*(undefined8 *)puVar2,0);
        }
        goto LAB_062728b8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


