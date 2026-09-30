/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$get_StateChanged
ENTRY_POINT: 01452f30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__get_StateChanged(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000038;
  
  puVar2 = (undefined8 *)FUN_00d59724();
  (*(code *)*puVar2)();
  lVar3 = (**(code **)(*unaff_x26 + 0x188))();
  if (3 < in_stack_00000008._4_4_) {
    plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
    in_stack_00000038 = *(undefined4 *)(unaff_x23 + 0x18);
    lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000038);
    puVar1 = StringLiteral_302;
    if (plVar5 == (long *)0x0) goto LAB_014532b4;
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
    goto LAB_014532bc;
    if ((int)plVar5[3] == 0) goto LAB_014532b8;
    plVar5[4] = lVar6;
    if (lVar3 == 0) goto LAB_014532b4;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_014532b8;
    if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
    uStack000000000000001c = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x10);
    lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000018 + 4);
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar5 + 3) < 2) || (plVar5[5] = lVar6, *(int *)(lVar3 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x14);
    lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000018);
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar5 + 3) < 3) || (plVar5[6] = lVar6, *(int *)(lVar3 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x18);
    lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,(long)&stack0x00000010 + 4);
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
    goto LAB_014532bc;
    if ((*(uint *)(plVar5 + 3) < 4) || (plVar5[7] = lVar6, *(int *)(lVar3 + 0x18) == 0))
    goto LAB_014532b8;
    if (*(long *)(lVar3 + 0x20) == 0) goto LAB_014532b4;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x1c);
    lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000010);
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
    goto LAB_014532bc;
    if (*(uint *)(plVar5 + 3) < 5) goto LAB_014532b8;
    plVar5[8] = lVar6;
    uVar7 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_02660dac(uVar7,0);
  }
  if (in_stack_00000000 != 0) {
    if (*(long *)(in_stack_00000000 + 0x18) == 0) {
      if (lVar3 == 0) goto LAB_014532b4;
      if (*(long *)(lVar3 + 0x18) == 0) {
        return (long *)0x0;
      }
      if ((int)*(long *)(lVar3 + 0x18) == 0) goto LAB_014532b8;
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    else {
      if (lVar3 == 0) goto LAB_014532b4;
      iVar8 = (int)*(long *)(in_stack_00000000 + 0x18);
      if (*(long *)(lVar3 + 0x18) == 0) {
        if (iVar8 == 0) goto LAB_014532b8;
        lVar3 = *(long *)(in_stack_00000000 + 0x20);
      }
      else {
        if ((iVar8 == 0) || ((int)*(long *)(lVar3 + 0x18) == 0)) goto LAB_014532b8;
        lVar3 = FUN_014532d8(*(undefined8 *)(in_stack_00000000 + 0x20),*(undefined8 *)(lVar3 + 0x20)
                             ,*(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),1)
        ;
      }
    }
    FUN_01322050();
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
    if (lVar3 == 0) {
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0);
    }
    else {
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,1);
      if (plVar5 == (long *)0x0) goto LAB_014532b4;
      lVar6 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) {
LAB_014532bc:
        uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,0);
      }
      if ((int)plVar5[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar5[4] = lVar3;
    }
    return plVar5;
  }
LAB_014532b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


