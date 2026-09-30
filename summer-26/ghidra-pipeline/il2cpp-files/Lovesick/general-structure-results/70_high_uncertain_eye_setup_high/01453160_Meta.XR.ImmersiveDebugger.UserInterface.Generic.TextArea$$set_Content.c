/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.TextArea$$set_Content
ENTRY_POINT: 01453160
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_TextArea__set_Content(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  lVar1 = thunk_FUN_00d6225c();
  if (lVar1 == 0) {
LAB_014532bc:
    uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar2,0);
  }
  if (*(uint *)(unaff_x25 + 0x18) < 5) goto LAB_014532b8;
  *(undefined8 *)(unaff_x25 + 0x40) = unaff_x24;
  uVar2 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x26);
  }
  FUN_02660dac(uVar2,0);
  if (unaff_x29 == 0) {
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(unaff_x29 + 0x18) == 0) {
    if (unaff_x21 == 0) goto LAB_014532b4;
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      return (long *)0x0;
    }
    if ((int)*(long *)(unaff_x21 + 0x18) == 0) goto LAB_014532b8;
    lVar1 = *(long *)(unaff_x21 + 0x20);
  }
  else {
    if (unaff_x21 == 0) goto LAB_014532b4;
    iVar5 = (int)*(long *)(unaff_x29 + 0x18);
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      if (iVar5 == 0) goto LAB_014532b8;
      lVar1 = *(long *)(unaff_x29 + 0x20);
    }
    else {
      if ((iVar5 == 0) || ((int)*(long *)(unaff_x21 + 0x18) == 0)) goto LAB_014532b8;
      lVar1 = FUN_014532d8(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(unaff_x21 + 0x20),
                           *(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1);
    }
  }
  FUN_01322050();
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
  if (lVar1 == 0) {
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                  ,0);
  }
  else {
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                  ,1);
    if (plVar3 == (long *)0x0) goto LAB_014532b4;
    lVar4 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar4 == 0) goto LAB_014532bc;
    if ((int)plVar3[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar3[4] = lVar1;
  }
  return plVar3;
}


