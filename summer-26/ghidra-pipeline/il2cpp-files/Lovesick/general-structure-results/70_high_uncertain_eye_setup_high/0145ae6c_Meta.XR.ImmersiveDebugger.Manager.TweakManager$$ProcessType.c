/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$ProcessType
ENTRY_POINT: 0145ae6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__ProcessType(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar2 = StringLiteral_9958;
  puVar1 = StringLiteral_3033;
  if ((DAT_03776a97 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__
                      );
    DAT_03776a97 = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,4);
  local_24[0] = *param_1;
  lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0145b008:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    local_28[0] = param_1[1];
    lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0145b008;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      local_34[0] = param_1[2];
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_0145b008;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        local_38[0] = param_1[3];
        lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0145b008;
        puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          FUN_01600be4(*(undefined8 *)puVar1,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


