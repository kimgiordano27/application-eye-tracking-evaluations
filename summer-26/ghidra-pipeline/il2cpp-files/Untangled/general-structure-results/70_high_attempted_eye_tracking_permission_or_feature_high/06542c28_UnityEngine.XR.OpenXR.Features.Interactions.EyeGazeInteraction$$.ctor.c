/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 06542c28
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x21;
  
  plVar5 = *(long **)(unaff_x20 + 0x990);
  if ((*(byte *)(unaff_x21 + 0x593) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01ea8);
    FUN_02f07e70(PTR_DAT_06d396e0);
    FUN_02f07e70(PTR_DAT_06d37990);
    FUN_02f07e70(PTR_DAT_06d02a58);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d045c0);
    *(undefined1 *)(unaff_x21 + 0x593) = 1;
  }
  puVar1 = PTR_DAT_06d045c0;
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar3 = FUN_0648b664(*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_06d02a58;
  puVar1 = PTR_DAT_06d01eb0;
  if (lVar3 != 0) {
    FUN_03a02c24(lVar3,param_1,*(undefined8 *)PTR_DAT_06d396e0);
    uVar6 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar5 = (long *)FUN_056109c0(uVar6,0);
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x2a0));
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar6 = *(undefined8 *)PTR_DAT_06d01ea8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar5 = (long *)FUN_056109c0(uVar6,0);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06542d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x2a0));
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


