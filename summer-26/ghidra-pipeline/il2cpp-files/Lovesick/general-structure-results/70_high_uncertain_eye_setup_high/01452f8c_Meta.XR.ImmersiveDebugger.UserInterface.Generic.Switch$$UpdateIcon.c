/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$UpdateIcon
ENTRY_POINT: 01452f8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__UpdateIcon(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  code *in_x9;
  long unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000038;
  
  lVar2 = (*in_x9)();
  if (3 < in_stack_00000008._4_4_) {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    in_stack_00000038 = *(undefined4 *)(unaff_x23 + 0x18);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000038);
    puVar1 = StringLiteral_302;
    if (plVar4 == (long *)0x0) goto LAB_014532b4;
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((int)plVar4[3] == 0) goto LAB_014532b8;
    plVar4[4] = lVar5;
    if (lVar2 == 0) goto LAB_014532b4;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar2 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x10);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000018 + 4);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar4 + 3) < 2) || (plVar4[5] = lVar5, *(int *)(lVar2 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar2 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x14);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000018);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar4 + 3) < 3) || (plVar4[6] = lVar5, *(int *)(lVar2 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar2 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x18);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000010 + 4);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar4 + 3) < 4) || (plVar4[7] = lVar5, *(int *)(lVar2 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar2 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x1c);
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000010);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar4 + 3) < 5) goto LAB_014532b8;
    plVar4[8] = lVar5;
    uVar6 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_02660dac(uVar6,0);
  }
  if (in_stack_00000000 != 0) {
    if (*(long *)(in_stack_00000000 + 0x18) == 0) {
      if (lVar2 == 0) goto LAB_014532b4;
      if (*(long *)(lVar2 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar2 + 0x18) == 0) goto LAB_014532b8;
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    else {
      if (lVar2 == 0) goto LAB_014532b4;
      iVar7 = (int)*(long *)(in_stack_00000000 + 0x18);
      if (*(long *)(lVar2 + 0x18) == 0) {
        if (iVar7 == 0) goto LAB_014532b8;
        lVar2 = *(long *)(in_stack_00000000 + 0x20);
      }
      else {
        if ((iVar7 == 0) || ((int)*(long *)(lVar2 + 0x18) == 0)) goto LAB_014532b8;
        lVar2 = FUN_014532d8(*(undefined8 *)(in_stack_00000000 + 0x20),*(undefined8 *)(lVar2 + 0x20)
                             ,*(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1)
        ;
      }
    }
    FUN_01322050();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar2 == 0) {
      plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar4 == (long *)0x0) goto LAB_014532b4;
      lVar5 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) {
LAB_014532bc:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar4[4] = lVar2;
    }
    return plVar4;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


