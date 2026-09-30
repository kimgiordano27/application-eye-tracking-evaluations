/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ActivateMenu
ENTRY_POINT: 01499548
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__ActivateMenu(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_720);
    thunk_FUN_00d48444(System_Collections_Generic_List<TimeValue>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xc62) = 1;
  }
  puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>_TypeInfo;
  if (unaff_x19 == (long *)0x0) {
LAB_01499658:
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    uVar4 = FUN_01497f18();
    if ((uVar4 & 1) != 0) {
      unaff_x21 = (long *)FUN_01773ec0();
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
      }
      uVar4 = FUN_01789ac0(unaff_x21,0,0);
      puVar3 = StringLiteral_720;
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_015f6780(*(undefined8 *)System_Collections_Generic_List<TimeValue>_TypeInfo);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        FUN_014da334(uVar5,0,0);
        goto LAB_01499658;
      }
    }
    uVar5 = *(undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01780344(uVar5,0);
    uVar4 = FUN_01789ac0(unaff_x21,uVar5,0);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x014996c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*unaff_x19 + 0x168))();
      return uVar5;
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (**(code **)(*unaff_x21 + 0x5c8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x5d0));
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_016fbc40();
    }
    else {
      uVar5 = (**(code **)(*unaff_x19 + 0x168))();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_0149991c(uVar5);
      if (*(int *)(*(long *)
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_017a54c4(unaff_x21,uVar5,1,0);
    }
  }
  return uVar5;
}


