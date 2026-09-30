/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.TextArea$$OnTransparencyChanged
ENTRY_POINT: 01453200
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_TextArea__OnTransparencyChanged(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  undefined8 unaff_x22;
  
  if (*(long *)(unaff_x21 + 0x18) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if ((int)*(long *)(unaff_x21 + 0x18) == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    FUN_01322050();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar4 == 0) {
      plVar1 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar1 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar1 + 0x40));
      if (lVar2 == 0) {
        uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,0);
      }
      if ((int)plVar1[3] == 0) goto LAB_014532b8;
      plVar1[4] = lVar4;
    }
  }
  return plVar1;
}


