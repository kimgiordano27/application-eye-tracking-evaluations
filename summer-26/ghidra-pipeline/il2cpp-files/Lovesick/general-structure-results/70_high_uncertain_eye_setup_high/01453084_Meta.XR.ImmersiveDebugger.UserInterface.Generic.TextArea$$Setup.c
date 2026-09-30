/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.TextArea$$Setup
ENTRY_POINT: 01453084
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_TextArea__Setup(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if (param_1 == 0) goto LAB_014532b4;
  in_stack_00000018 = *(undefined4 *)(param_1 + 0x14);
  lVar1 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                             ,&stack0x00000018);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x25 + 0x40)), lVar2 == 0)) {
LAB_014532bc:
    uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,0);
  }
  if ((*(uint *)(unaff_x25 + 3) < 3) || (unaff_x25[6] = lVar1, *(int *)(unaff_x21 + 0x18) == 0))
  goto LAB_014532b8;
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_014532b4;
  uStack0000000000000014 = *(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x18);
  lVar1 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                             ,(long)&stack0x00000010 + 4);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x25 + 0x40)), lVar2 == 0))
  goto LAB_014532bc;
  if ((*(uint *)(unaff_x25 + 3) < 4) || (unaff_x25[7] = lVar1, *(int *)(unaff_x21 + 0x18) == 0))
  goto LAB_014532b8;
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_014532b4;
  uStack0000000000000010 = *(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x1c);
  lVar1 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                             ,&stack0x00000010);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x25 + 0x40)), lVar2 == 0))
  goto LAB_014532bc;
  if (*(uint *)(unaff_x25 + 3) < 5) goto LAB_014532b8;
  unaff_x25[8] = lVar1;
  uVar3 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x26);
  }
  FUN_02660dac(uVar3,0);
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
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                  ,0);
  }
  else {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                  ,1);
    if (plVar4 == (long *)0x0) goto LAB_014532b4;
    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar2 == 0) goto LAB_014532bc;
    if ((int)plVar4[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar4[4] = lVar1;
  }
  return plVar4;
}


