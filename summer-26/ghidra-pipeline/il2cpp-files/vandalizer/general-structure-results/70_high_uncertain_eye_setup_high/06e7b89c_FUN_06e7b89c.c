/*
FUNCTION_NAME: FUN_06e7b89c
ENTRY_POINT: 06e7b89c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06e7b89c(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0759c0d8;
  if ((DAT_07a572b8 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759c0d8);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Eyes_TypeInfo);
    DAT_07a572b8 = 1;
  }
  plVar2 = (long *)FUN_031f21dc(*(undefined8 *)puVar1,4);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_0322f04c(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_06e7ba18:
    uVar5 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = param_1;
    thunk_FUN_0329bf60(plVar2 + 4,param_1);
    lVar3 = FUN_05e47b78(0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_06e7ba18;
    puVar1 = UnityEngine_XR_Eyes_TypeInfo;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_0329bf60(plVar2 + 5,lVar3);
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto LAB_06e7ba18;
        lVar3 = *(long *)puVar1;
      }
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_0329bf60();
        if ((param_2 != 0) &&
           (lVar3 = thunk_FUN_0322f04c(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_06e7ba18;
        puVar1 = UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = param_2;
          thunk_FUN_0329bf60(plVar2 + 7,param_2);
          FUN_06f08e54(*(undefined8 *)puVar1,plVar2,0);
          FUN_06e7b794();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


